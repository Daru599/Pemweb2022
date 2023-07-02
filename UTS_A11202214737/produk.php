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
    
    <h4 class="header-text text-center m-4">Data Produk</h4>
    <button type="button" class="btn btn-primary btn-sm mb-2" data-toggle="modal" data-target="#myModal">
        Tambah Data
    </button>
    <table class="table table-hover">
        <thead style="background-color: #7ed6df; color: white;">
            <tr>
                <th>No</th>
                <th>Nama</th>
                <th>Harga</th>
                <th>Keterangan</th>
                <th>Foto</th>
                <th>Stok</th>
                <th class = "text-center">Action</th>
            </tr>
        </thead>
        <tbody>
            <?php
            $no = 1;
            // mengambil data barang yang ada pada database
            $sql = mysqli_query($con, "SELECT * FROM barang");
            while ($dt = mysqli_fetch_array($sql)) { ?>
                <tr>
                    <td><?= $no++?></td>
                    <td><?= $dt['nama']?></td>
                    <td><?= $dt['hrg']?></td>
                    <td><?= $dt['keterangan']?></td>
                    <td width = "10%"><img src="gambar/<?= $dt['foto']?>" class="card-img-top" width = "50%" alt="..." /></td>
                    <td><?= $dt['stok']?></td>
                    <td class = "text-center">
                        <button type="button" class="btn btn-info btn-sm" data-toggle="modal" data-target="#detail<?= $dt['id']?>">
                            Detail
                        </button>
                        <button type="button" class="btn btn-warning btn-sm" data-toggle="modal" data-target="#update<?= $dt['id']?>">
                            Update
                        </button>
                        <button type="button" class="btn btn-danger btn-sm" data-toggle="modal" data-target="#delete<?= $dt['id']?>">
                            Delete
                        </button>
                    </td>
                </tr>
            <?php } ?>
        </tbody>
    </table>
</div>

<div class="modal fade" id="myModal">
  <div class="modal-dialog modal-dialog-scrollable modal-lg">
    <div class="modal-content">

      <!-- Modal Header -->
      <div class="modal-header">
        <h4 class="modal-title">Tambah Produk</h4>
        <button type="button" class="close" data-dismiss="modal">&times;</button>
      </div>

      <!-- Modal body -->
      <form action="produk/simpan.php" method="post" enctype="multipart/form-data">
        <div class="modal-body">    
            <div class="form-group">
                <label for="">Nama </label>
                <input type="text" name="nama" class ="form-control" required>
            </div>
            <div class="form-group">
                <label for="">Harga</label>
                <input type="number" name="harga" class ="form-control" required>
            </div>
            <div class="form-group">
                <label for="">Keterangan</label>
                <input type="text" name="keterangan" class ="form-control" required>
            </div>
            <div class="form-group">
                <label for="">Stok</label>
                <input type="number" name="stok" class ="form-control" required>
            </div>
            <div class="form-group">
                <label for="">Gambar</label>
                <input type="file" name="gambar" class ="form-control" required>
            </div>
        </div>

        <!-- Modal footer -->
        <div class="modal-footer">
            <button type="button" class="btn btn-danger" data-dismiss="modal">Close</button>
            <input type="submit" name = "simpan" class = "btn btn-primary" value = "Save">
        </div>
      </form>
    </div>
  </div>
</div>

<?php
    $no = 1;
    $sql = mysqli_query($con, "SELECT * FROM barang");
    while ($dt = mysqli_fetch_array($sql)) { ?>

<!-- mengambil data berdasarkan id yang dipilih -->
    <div class="modal fade" id="update<?= $dt['id']?>">
        <div class="modal-dialog modal-dialog-scrollable modal-lg">
            <div class="modal-content">

            <!-- Modal Header -->
            <div class="modal-header">
                <h4 class="modal-title">Update Produk</h4>
                <button type="button" class="close" data-dismiss="modal">&times;</button>
            </div>

            <!-- Modal body -->
            <form action="produk/update.php" method="post" enctype="multipart/form-data">
                <div class="modal-body">    
                    <div class="form-group">
                        <label for="">Nama </label>
                        <input type="hidden" name = "id" value = "<?= $dt['id']?>">
                        <input type="text" name="nama" class ="form-control" required value = "<?= $dt['nama']?>">
                    </div>
                    <div class="form-group">
                        <label for="">Harga</label>
                        <input type="number" name="harga" class ="form-control" required value = "<?= $dt['hrg']?>">
                    </div>
                    <div class="form-group">
                        <label for="">Keterangan</label>
                        <input type="text" name="keterangan" class ="form-control" required value = "<?= $dt['keterangan']?>">
                    </div>
                    <div class="form-group">
                        <label for="">Stok</label>
                        <input type="number" name="stok" class ="form-control" required value = "<?= $dt['stok']?>">
                    </div>
                    <div class="form-group">
                        <label for="">Gambar</label>
                        <input type="file" name="gambar" class ="form-control">
                    </div>
                </div>

                <!-- Modal footer -->
                <div class="modal-footer">
                    <button type="button" class="btn btn-danger" data-dismiss="modal">Close</button>
                    <input type="submit" name = "update" class = "btn btn-primary" value = "Save">
                </div>
            </form>
            </div>
        </div>
    </div>

    <div class="modal fade" id="detail<?= $dt['id']?>">
        <div class="modal-dialog modal-dialog-scrollable modal-lg">
            <div class="modal-content">

            <!-- Modal Header -->
            <div class="modal-header">
                <h4 class="modal-title">Detail Produk</h4>
                <button type="button" class="close" data-dismiss="modal">&times;</button>
            </div>

            <!-- Modal body -->
            <form action="produk/update.php" method="post" enctype="multipart/form-data">
                <div class="modal-body">    
                    <div class="form-group">
                        <label for="">Nama </label>
                        <input type="hidden" name = "id" value = "<?= $dt['id']?>">
                        <input type="text" name="nama" class ="form-control" required value = "<?= $dt['nama']?>">
                    </div>
                    <div class="form-group">
                        <label for="">Harga</label>
                        <input type="number" name="harga" class ="form-control" required value = "<?= $dt['hrg']?>">
                    </div>
                    <div class="form-group">
                        <label for="">Keterangan</label>
                        <input type="text" name="keterangan" class ="form-control" required value = "<?= $dt['keterangan']?>">
                    </div>
                    <div class="form-group">
                        <label for="">Stok</label>
                        <input type="number" name="stok" class ="form-control" required value = "<?= $dt['stok']?>">
                    </div>
                    <div class="form-group">
                        <label for="">Gambar</label><br>
                        <img src="gambar/<?= $dt['foto']?>" class="card-img-top" style = "width :50%" alt="..." />
                    </div>
                </div>

                <!-- Modal footer -->
                <div class="modal-footer">
                    <button type="button" class="btn btn-danger" data-dismiss="modal">Close</button>
                   
                </div>
            </form>
            </div>
        </div>
    </div>

    <div class="modal fade" id="delete<?= $dt['id']?>">
        <div class="modal-dialog modal-dialog-scrollable modal-sm">
            <div class="modal-content">

                <form action="produk/hapus.php" method="post" enctype="multipart/form-data">
                    <div class="modal-body">    
                        <input type="hidden" name = "id" class = "form-control" value = "<?= $dt['id']?>">
                        <h5>hapus data ?</h5>
                    </div>

                    <div class="modal-footer">
                        <button type="button" class="btn btn-danger" data-dismiss="modal">Close</button>
                        <input type="submit" name = "delete" class = "btn btn-primary" value = "Hapus">
                    </div>
                </form>
            </div>
        </div>
    </div>
    <?php } ?>
<?php include('template/footer.php')?>
