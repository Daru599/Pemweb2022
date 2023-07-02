<?php 

require('../koneksi.php');
session_start();
// proses mengcek data session jika belum ada di wajibkan untuk login
if( !isset($_SESSION['email']) ){
  $_SESSION['msg'] = 'Anda di wajibkan Login';
  header('Location: ../login.php');
}

// ketika button delete pada halaman produk di klik
if(isset($_POST['delete'])){
    $id = $_POST['id'];
    // query menghapus data barang berdsarkan id yang telah dipilih
    $query = "DELETE FROM `barang` 
            WHERE id = '".$id."'";

    $sql = mysqli_query($con, $query); 
    if($sql){
        echo "<script> 
                alert('Data berhasil di hapus!');
                document.location.href = '../produk.php';
            </script>
        ";
    }else{
    echo "<script> 
                alert('Gagal di hapus dalam database!');
                document.location.href = '../produk.php';
            </script>
        ";
    }
}
?>