<?php

require('koneksi.php');
session_start();

if( !isset($_SESSION['email']) ){
  $_SESSION['msg'] = 'anda harus login untuk mengakses halaman ini';
  header('Location: login.php');
}

include('template/header.php');
include('template/navbar.php');
?>
<div class="container">
    <h4 class="header-text text-center m-4">Selamat Datang di aplikasi toko sembako sejahtera</h4>
    <div class="row">
        <div class="col-md-6">
            <a href="produk.php">
            <div class="card text-white bg-primary mb-3" >
                <div class="card-body">
                    <h5 class="card-title">Managemen Produk</h5>
                    <p class="card-text">Berisi tentang data management produk</p>
                </div>
            </div>
            </a>
        </div>
        <?php
        if($_SESSION['role'] == "admin")
        {
        ?>
        <div class="col-md-6">
            <a href="user.php">
                <div class="card text-white bg-warning mb-3" >
                    <div class="card-body">
                        <h5 class="card-title">Management User</h5>
                        <p class="card-text">Berisi Tentang Data Management User.</p>
                    </div>
                </div>
            </a>
        </div>
        <?php
        }
        ?>
    </div>
</div>

<?php include('template/footer.php')?>
