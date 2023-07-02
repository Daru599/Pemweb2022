<?php

require('../koneksi.php');
session_start();

// proses mengcek data session jika belum ada di wajibkan untuk login
if( !isset($_SESSION['email']) ){
  $_SESSION['msg'] = 'Anda di wajibkan Login';
  header('Location: ../login.php');
}

// kejadian ketika button simpan pada halaman produk di klik
if(isset($_POST['simpan'])){
    // mengambil data dari inputan form yang ada pada halaman
    $nama =  $_POST['nama'];
    $harga = $_POST['harga'];
    $keterangan = $_POST['keterangan'];
    $stok = $_POST['stok'];
    
    // mengambil gambar yang telah di upload
    $gambar  = $_FILES['gambar']['name'];
    $tmp = $_FILES['gambar']['tmp_name'];
    $path = "../gambar/".$gambar;

    // memasukkan gambar tersebut pada database dan path
    if(move_uploaded_file($tmp, $path)){ 
        // query insert untuk memasukan data barang yang ada
        $query = "INSERT INTO `barang` (`nama`, `hrg`, `keterangan`, `foto`, `stok`) VALUES ('".$nama."', '".$harga."', '".$keterangan."', '".$gambar."', '".$stok."');";
   
        $sql = mysqli_query($con, $query); 
        if($sql){ 
            echo "<script> 
                    alert('Data Berhasil di simpan');
                    document.location.href = '../produk.php';
                </script>
            ";
        }else{
        echo "<script> 
                    alert('Gagal disimpan');
                    document.location.href = '../produk.php';
                </script>
            ";
        }
    }else{
        echo "<script> 
                alert('Gagal di upload!');
                document.location.href = '../produk.php';
            </script>
        ";
    }
}
