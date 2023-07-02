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

// ketika button verifikasi di klik pada halaman user
if(isset($_POST['verifikasi'])){
    // mengambil seluruh form inputan pada halaman user
    $user_id =  $_POST['user_id'];

    // query untuk melakukan proses insert data user
    $query = "UPDATE `user` set `is_aktif` = 1 WHERE `user_id` = $user_id";

    // proses insert 
    $sql = mysqli_query($con, $query); 
    if($sql){ 
        echo "<script> 
                alert('Data Berhasil diverifikasi');
                document.location.href = '../user.php';
            </script>
        ";
    }else{
    echo "<script> 
                alert('Gagal diverifikasi');
                document.location.href = '../user.php';
            </script>
        ";
    }
   
}
