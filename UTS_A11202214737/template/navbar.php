<nav class="navbar navbar-expand-lg navbar-default bg-default">
 <a class="navbar-brand" href="#">Toko Sembako Makmur Sejahtera</a>

 <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
   <span class="navbar-toggler-icon"></span>
 </button>

 <div class="collapse navbar-collapse" id="navbarSupportedContent">

   <ul class="navbar-nav ml-auto">
     <li class="nav-item">
       <a class="nav-link" href="home.php">Home <span class="sr-only"></span></a>
     </li>
     <li class="nav-item">
       <a class="nav-link" href="produk.php">Managemen Produk</a>
     </li>
     <?php
        if($_SESSION['role'] == "admin")
        {
      ?>
     <li class="nav-item">
       <a class="nav-link" href="user.php">Managemen User</a>
     </li>
     <?php
        }
        ?>
     <li class="nav-item dropdown">
       <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
          <?= $_SESSION['email']?>
       </a>
       <div class="dropdown-menu" aria-labelledby="navbarDropdown">
         <a class="dropdown-item" href="logout.php">Logout</a>
     </li>
    </ul>
  
 </div>

</nav>