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

// ketika button delete pada halaman produk di klik
if(isset($_POST['delete'])){
    // mengambil data id yang di pilih
    $user_id = $_POST['user_id'];

    // query untuk mengahapus data user berdasarkan id yang dipilih
    $query = "DELETE FROM `user` 
            WHERE user_id = '".$user_id."'";

    $sql = mysqli_query($con, $query); 
    if($sql){
        echo "<script> 
                alert('Data berhasil di hapus!');
                document.location.href = '../user.php';
            </script>
        ";
    }else{
    echo "<script> 
                alert('Gagal di hapus dalam database!');
                document.location.href = '../user.php';
            </script>
        ";
    }
}
?>