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

// ketika button update pada halaman produk di klik
if(isset($_POST['update'])){
    // mengambil data dari form yang ada pada halaman update
    $user_id = $_POST['user_id'];
    $nama =  $_POST['nama'];
    $email = $_POST['email'];
    $telp = $_POST['telp'];
    $user_role = $_POST['user_role'];
    $password = $_POST['password'];
    $is_aktif = $_POST['is_aktif'];
    // proses enkripsi password yang telah di masukkan
    $pass  = password_hash($password, PASSWORD_DEFAULT);

    // query untuk melakukan update seusi
    $query = "UPDATE `user` SET 
    `nama`='".$nama."',
    `email`='".$email."',
    `telp`='".$telp."', 
    `password`='".$pass."', 
    `user_role` = '".$user_role."',
    `is_aktif` = '".$is_aktif."'
    WHERE user_id = '".$user_id."'";

    $sql = mysqli_query($con, $query); 


    if($sql){ 
    echo "<script> 
            alert('Data berhasil Di Update!');
            document.location.href = '../user.php';
        </script>
    ";
    }else{
    echo "<script> 
            alert('Gagal update dalam database!');
            document.location.href = '../user.php';
        </script>
    ";
    }
  
}


?>