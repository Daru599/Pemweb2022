<?php

require('koneksi.php');
session_start();

if( !isset($_SESSION['email']) ){
  $_SESSION['msg'] = 'anda harus login untuk mengakses halaman ini';
  header('Location: login.php');
}

if( $_SESSION['role'] != "admin" ){
    header('Location: home.php');
}

include('template/header.php');
include('template/navbar.php');
?>
<div class="container">
    
    <h4 class="header-text text-center m-4">Data User</h4>
    <button type="button" class="btn btn-primary btn-sm mb-2" data-toggle="modal" data-target="#myModal">
        Tambah Data
    </button>
    <table class="table table-hover">
        <thead style="background-color: #7ed6df; color: white;">
            <tr>
                <th>No</th>
                <th>Nama</th>
                <th>Email</th>
                <th>No telp</th>
                <th>Role</th>
                <th class = "text-center">Status</th>
                <th class = "text-center">Action</th>
            </tr>
        </thead>
        <tbody>
            <?php
            $no = 1;
            $sql = mysqli_query($con, "SELECT * FROM user");
            while ($dt = mysqli_fetch_array($sql)) { ?>
                <tr>
                    <td><?= $no++?></td>
                    <td><?= $dt['nama']?></td>
                    <td><?= $dt['email']?></td>
                    <td><?= $dt['telp']?></td>
                    <td><?= $dt['user_role']?></td>
                    <td class="text-center">
                        <?php
                        if($dt['user_role'] == "user")
                        {
                        ?>
                        <a class='btn btn-sm btn-<?= $dt['is_aktif']?"success":"danger" ?>'><?= $dt['is_aktif']?"Aktif":"Tidak Aktif" ?></a>
                        <?php
                        }
                        ?>
                    </td>
                    <td class = "text-center">
                        <?php
                            if($dt['user_role'] == "user")
                            {
                                ?>
                                <form method="POST" action="user/verifikasi.php" class="d-inline-block">
                                    <input type="number" name="user_id" value="<?= $dt['user_id']?>" hidden="true">
                                    <button type="submit" name="verifikasi" class="btn btn-success btn-sm" <?= $dt['is_aktif'] == 1 ? "disabled" : ""; ?>>
                                Verifikasi
                            </button>
                            </form>
                                <?php
                            }
                        ?>
                        <button type="button" class="btn btn-info btn-sm" data-toggle="modal" data-target="#detail<?= $dt['user_id']?>">
                            Detail
                        </button>
                        <button type="button" class="btn btn-warning btn-sm" data-toggle="modal" data-target="#update<?= $dt['user_id']?>">
                            Update
                        </button>
                        <button type="button" class="btn btn-danger btn-sm" data-toggle="modal" data-target="#delete<?= $dt['user_id']?>">
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
        <h4 class="modal-title">Tambah User</h4>
        <button type="button" class="close" data-dismiss="modal">&times;</button>
      </div>

      <!-- Modal body -->
      <form action="user/simpan.php" method="post" enctype="multipart/form-data">
        <div class="modal-body">    
            <div class="form-group">
                <label for="">Nama </label>
                <input type="text" name="nama" class ="form-control" required>
            </div>
            <div class="form-group">
                <label for="">Email</label>
                <input type="text" name="email" class ="form-control" required>
            </div>
            <div class="form-group">
                <label for="">No Telepon</label>
                <input type="text" name="telp" class ="form-control" required>
            </div>
            <div class="form-group">
                <label for="">User Role</label>
                <input type="text" name="user_role" class ="form-control" required>
            </div>
            <div class="form-group">
                <label for="">Password</label>
                <input type="password" name="password" class ="form-control" required>
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
    $sql = mysqli_query($con, "SELECT * FROM user");
    while ($dt = mysqli_fetch_array($sql)) { ?>

    <div class="modal fade" id="update<?= $dt['user_id']?>">
        <div class="modal-dialog modal-dialog-scrollable modal-lg">
            <div class="modal-content">

            <!-- Modal Header -->
            <div class="modal-header">
                <h4 class="modal-title">Update User</h4>
                <button type="button" class="close" data-dismiss="modal">&times;</button>
            </div>

            <!-- Modal body -->
            <form action="user/update.php" method="post" enctype="multipart/form-data">
                <div class="modal-body">    
                    <div class="form-group">
                        <label for="">Nama </label>
                        <input type="hidden" name = "user_id" value = "<?= $dt['user_id']?>">
                        <input type="text" name="nama" class ="form-control" required value = "<?= $dt['nama']?>">
                    </div>
                    <div class="form-group">
                        <label for="">Email</label>
                        <input type="email" name="email" class ="form-control" required value = "<?= $dt['email']?>">
                    </div>
                    <div class="form-group">
                        <label for="">No Telp</label>
                        <input type="text" name="telp" class ="form-control" required value = "<?= $dt['telp']?>">
                    </div>
                    <div class="form-group">
                        <label for="">User Role</label>
                        <input type="text" name="user_role" class ="form-control" required value = "<?= $dt['user_role']?>">
                    </div>
                    <div class="form-group">
                        <label for="">Status Aktif (1/0)</label>
                        <input type="text" name="is_aktif" class ="form-control" required value = "<?= $dt['is_aktif']?>">
                    </div>
                    <div class="form-group">
                        <label for="">Password</label>
                        <input type="password" name="password" class ="form-control" required>
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

    <div class="modal fade" id="detail<?= $dt['user_id']?>">
        <div class="modal-dialog modal-dialog-scrollable modal-lg">
            <div class="modal-content">

            <!-- Modal Header -->
            <div class="modal-header">
                <h4 class="modal-title">Detail User</h4>
                <button type="button" class="close" data-dismiss="modal">&times;</button>
            </div>

            <!-- Modal body -->
            <form action="user/update.php" method="post" enctype="multipart/form-data">
                <div class="modal-body">    
                    <div class="form-group">
                        <label for="">Nama </label>
                        <input type="hidden" name = "user_id" value = "<?= $dt['user_id']?>">
                        <input type="text" name="nama" class ="form-control" required value = "<?= $dt['nama']?>">
                    </div>
                    <div class="form-group">
                        <label for="">Email</label>
                        <input type="email" name="email" class ="form-control" required value = "<?= $dt['email']?>">
                    </div>
                    <div class="form-group">
                        <label for="">No Telp</label>
                        <input type="text" name="telp" class ="form-control" required value = "<?= $dt['telp']?>">
                    </div>
                    <div class="form-group">
                        <label for="">User Role</label>
                        <input type="text" name="user_role" class ="form-control" required value = "<?= $dt['user_role']?>">
                    </div>
                    <div class="form-group">
                        <label for="">Status Aktif (1/0)</label>
                        <input type="text" name="is_aktif" class ="form-control" required value = "<?= $dt['is_aktif']?>">
                    </div>
                    <!-- <div class="form-group">
                        <label for="">Password</label>
                        <input type="password" name="password" class ="form-control" required>
                    </div> -->
                </div>

                <!-- Modal footer -->
                <div class="modal-footer">
                    <button type="button" class="btn btn-danger" data-dismiss="modal">Close</button>
                    <!-- <input type="submit" name = "update" class = "btn btn-primary" value = "Save"> -->
                </div>
            </form>
            </div>
        </div>
    </div>

    <div class="modal fade" id="delete<?= $dt['user_id']?>">
        <div class="modal-dialog modal-dialog-scrollable modal-sm">
            <div class="modal-content">

                <form action="user/hapus.php" method="post" enctype="multipart/form-data">
                    <div class="modal-body">    
                        <input type="hidden" name = "user_id" class = "form-control" value = "<?= $dt['user_id']?>">
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
