<?php 

require('../koneksi.php');
session_start();

// proses mengcek data session jika belum ada di wajibkan untuk login
if( !isset($_SESSION['email']) ){
  $_SESSION['msg'] = 'Anda di wajibkan Login';
  header('Location: ../login.php');
}

// ketika button update pada halaman produk di klik
if(isset($_POST['update'])){
    // mengambil data seluruh form yang telah di ubah
    $id = $_POST['id'];
    $nama =  $_POST['nama'];
    $harga = $_POST['harga'];
    $keterangan = $_POST['keterangan'];
    $stok = $_POST['stok'];
    $gambar  = $_FILES['gambar']['name'];
    $tmp = $_FILES['gambar']['tmp_name'];

    // ketika gambar ada maka masuk ke sini
    if(isset($gambar)){
        $fotobaru = date('dmYHis').$gambar;
        $path = "../gambar/".$fotobaru;

        if(move_uploaded_file($tmp, $path)){

            // mengambil gambar berdasarkan id yang telah di update
            $query1 = "SELECT * FROM barang WHERE id='".$id."'";
            $sql1 = mysqli_query($con, $query1); 
    
            // proses gambar lama di hapus dan di ubah menjadi gambar baru
            while($data1 = mysqli_fetch_array($sql1)){
                if(is_file("../gambar/".$data1['gambar'])){ 
                    unlink("../gambar/".$data1['gambar']); 
                }
            } 

            // query untuk memasukkan gambar dengan menggunakan gambar
            $query = "UPDATE `barang` SET 
                `nama`='".$nama."',
                `hrg`='".$harga."',
                `keterangan`='".$keterangan."', 
                `stok` = '".$stok."',
                `foto` = '".$fotobaru."' 
                WHERE id = '".$id."'";
            $sql = mysqli_query($con, $query); 
            if($sql){ 

            echo "<script> alert('Data berhasil Di Update!');
                    document.location.href = '../produk.php';
                </script>";
            }else{
            echo "<script> alert('Gagal update dalam database!');
                    document.location.href = '../produk.php';
                </script>";
            }
        }else{
            // proses update data tanpa gambar dengan menggunakan query
            $query = "UPDATE `barang` SET 
            `nama`='".$nama."',
            `hrg`='".$harga."',
            `keterangan`='".$keterangan."', 
            `stok` = '".$stok."' 
            WHERE id = '".$id."'";

            $sql = mysqli_query($con, $query); 
            if($sql){ 
            echo "<script> 
                    alert('Data berhasil Di Update!');
                    document.location.href = '../produk.php';
                </script>
            ";
            }else{
            echo "<script> alert('Gagal update dalam database!');
                    document.location.href = '../produk.php';
                </script> ";
            }
        }
    }else{
        // proses update data tanpa gambar dengan menggunakan query
        $query = "UPDATE `barang` SET 
        `nama`='".$nama."',
        `hrg`='".$harga."',
        `keterangan`='".$keterangan."', 
        `stok` = '".$stok."' 
        WHERE id = '".$id."'";

        $sql = mysqli_query($con, $query); 

        if($sql){ 
        echo "<script> 
                alert('Data berhasil Di Update!');
                document.location.href = '../produk.php';
            </script>
        ";
        }else{
        echo "<script> 
                alert('Gagal update dalam database!');
                document.location.href = '../produk.php';
            </script>
        ";
        }
    }
    
  
}


?>