<?php

require('../koneksi.php');
session_start();
// proses mengcek data session jika belum ada di wajibkan untuk login
if( !isset($_SESSION['email']) ){
  $_SESSION['msg'] = 'Anda di wajibkan Login';
  header('Location: ../login.php');
}

if( $_SESSION['role'] != "admin" ){
    header('Location: home.php');
}

// ketika button simpan di klik pada halaman user
if(isset($_POST['simpan'])){
    // mengambil seluruh form inputan pada halaman user
    $nama =  $_POST['nama'];
    $email = $_POST['email'];
    $telp = $_POST['telp'];
    $user_role = $_POST['user_role'];
    $password = $_POST['password'];
    // melakukan enkripsi passsword biar password tidak bisa di baca di dataabase
    $pass  = password_hash($password, PASSWORD_DEFAULT);

    // query untuk melakukan proses insert data user
    $query = "INSERT INTO `user` (`nama`, `email`, `telp`, `password`, `user_role`, `is_aktif`) VALUES ('".$nama."', '".$email."', '".$telp."', '".$pass."', '".$user_role."', 0);";

    // proses insert 
    $sql = mysqli_query($con, $query); 
    if($sql){ 
        echo "<script> 
                alert('Data Berhasil di simpan');
                document.location.href = '../user.php';
            </script>
        ";
    }else{
    echo "<script> 
                alert('Gagal disimpan');
                document.location.href = '../user.php';
            </script>
        ";
    }
   
}
