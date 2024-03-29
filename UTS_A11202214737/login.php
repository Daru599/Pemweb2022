<?php
require('koneksi.php');
session_start();
 
$error = ''; $validate = '';
if( isset($_SESSION['email']) ) header('Location: home.php');

// ketika button submit di klik
if( isset($_POST['submit']) ){
        
        $email = $_POST['email'];
        $password = $_POST['password'];
        
        if(!empty(trim($email)) && !empty(trim($password))){
 
            // mengambil data bersarkan email
            $query      = "SELECT * FROM user WHERE email = '$email'";
            $hasil     = mysqli_query($con, $query);
            // mengecek data apakah ada atau tidak
            $baris       = mysqli_num_rows($hasil);
            if ($baris != 0) {
                // jika hasil ada maka password yang telah d enkripsi di buka 
                $hash   = mysqli_fetch_assoc($hasil)['password'];
                if(password_verify($password, $hash)){
                    //cek apakah sudah verifikasi atau belum
                    $is_aktif = mysqli_fetch_assoc($hasil)['is_aktif'];

                    if(!$is_aktif){
                        $error =  'Akun belum terverfikasi !!';
                    }else{
                        // ketika password sesuai
                        // mengambil data email
                        $_SESSION['email'] = $email;
                        $_SESSION['role'] = mysqli_fetch_assoc($hasil)['user_role'];
                        echo "
                        <script> 
                            alert('Login Berhasil dilakukan!!');
                            document.location.href = 'home.php';
                            </script>
                        ";
                    }
                }
                    
            } else {
                $error =  'email dan password Salah !!';
            }
        }else {
            $error =  'Data tidak boleh kosong !!';
        }
    } 
?>

<!doctype html>
<html lang="en">

<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">

    <!-- Bootstrap CSS -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.0/dist/css/bootstrap.min.css" rel="stylesheet"
        integrity="sha384-KyZXEAg3QhqLMpG8r+8fhAXLRk2vvoC2f3B09zVXn8CA5QIVfZOJ3BCsw2P0p/We" crossorigin="anonymous">
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css">
    <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.16.0/umd/popper.min.js"></script>
    <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.min.js"></script>
    <style>
        body {
            color: #000;
            overflow-x: hidden;
            height: 100%;
            background-color: #B0BEC5;
            background-repeat: no-repeat
        }

        .card0 {
            box-shadow: 0px 4px 8px 0px #757575;
            border-radius: 0px
        }

        .card2 {
            margin: 0px 40px
        }

        .logo {
            width: 200px;
            height: 100px;
            margin-top: 20px;
            margin-left: 35px
        }

        .image {
            width: 360px;
            height: 280px
        }

        .border-line {
            border-right: 1px solid #EEEEEE
        }

        .facebook {
            background-color: #3b5998;
            color: #fff;
            font-size: 18px;
            padding-top: 5px;
            border-radius: 50%;
            width: 35px;
            height: 35px;
            cursor: pointer
        }

        .twitter {
            background-color: #1DA1F2;
            color: #fff;
            font-size: 18px;
            padding-top: 5px;
            border-radius: 50%;
            width: 35px;
            height: 35px;
            cursor: pointer
        }

        .linkedin {
            background-color: #2867B2;
            color: #fff;
            font-size: 18px;
            padding-top: 5px;
            border-radius: 50%;
            width: 35px;
            height: 35px;
            cursor: pointer
        }

        .line {
            height: 1px;
            width: 45%;
            background-color: #E0E0E0;
            margin-top: 10px
        }

        .or {
            width: 10%;
            font-weight: bold
        }

        .text-sm {
            font-size: 14px !important
        }

        ::placeholder {
            color: #BDBDBD;
            opacity: 1;
            font-weight: 300
        }

        :-ms-input-placeholder {
            color: #BDBDBD;
            font-weight: 300
        }

        ::-ms-input-placeholder {
            color: #BDBDBD;
            font-weight: 300
        }

        input,
        textarea {
            padding: 10px 12px 10px 12px;
            border: 1px solid lightgrey;
            border-radius: 2px;
            margin-bottom: 5px;
            margin-top: 2px;
            width: 100%;
            box-sizing: border-box;
            color: #2C3E50;
            font-size: 14px;
            letter-spacing: 1px
        }

        input:focus,
        textarea:focus {
            -moz-box-shadow: none !important;
            -webkit-box-shadow: none !important;
            box-shadow: none !important;
            border: 1px solid #304FFE;
            outline-width: 0
        }

        button:focus {
            -moz-box-shadow: none !important;
            -webkit-box-shadow: none !important;
            box-shadow: none !important;
            outline-width: 0
        }

        a {
            color: inherit;
            cursor: pointer
        }

        .btn-blue {
            background-color: #1A237E;
            width: 150px;
            color: #fff;
            border-radius: 2px
        }

        .btn-blue:hover {
            background-color: #000;
            cursor: pointer
        }

        .bg-blue {
            color: #fff;
            background-color: #1A237E
        }

        @media screen and (max-width: 991px) {
            .logo {
                margin-left: 0px
            }

            .image {
                width: 300px;
                height: 220px
            }

            .border-line {
                border-right: none
            }

            .card2 {
                border-top: 1px solid #EEEEEE !important;
                margin: 0px 15px
            }
        }
    </style>
    <title>Login</title>
</head>
<body>
<div class="container-fluid px-1 px-md-5 px-lg-1 px-xl-5 py-5 mx-auto">
    <div class="card card0 border-0">
        <div class="row d-flex">
            <div class="col-lg-6">
                <!-- <div class="card1 pb-5 mt-5 pt-5">
                    <div class="row px-3 justify-content-center mt-4 mb-5 border-line"> <img src="https://i.imgur.com/uNGdWHi.png" class="image"> </div>
                </div> -->
            </div>
            <div class="col-lg-6">
                <center><h2 class = "mt-4">Login</h2></center>
                <?php if(isset($_SESSION['msg'])){ ?>
                    <div class="alert alert-danger alert-dismissible" role="alert" id="liveAlert">
                        Anda Belumm Login !!!
                        <button type="button" class="btn-close" data-bs-dismiss="alert" aria-label="Close"></button>
                    </div>
                <?php } ?>
                <?php if($error != ''){ ?>
                    <div class="alert alert-danger alert-dismissible" role="alert" id="liveAlert">
                        <?= $error; ?>
                        <button type="button" class="btn-close" data-bs-dismiss="alert" aria-label="Close"></button>
                    </div>
                <?php } ?>
                <div class="card2 card border-0 px-4 py-5">
                <form action="login.php" method="post">
                        <div class="row px-3"> <label class="mb-1">
                            <h6 class="mb-0 text-sm">email</h6>
                            </label> <input class="mb-4" type="text" name="email" placeholder="email"> </div>
                        <div class="row px-3"> <label class="mb-1">
                            <h6 class="mb-0 text-sm">Password</h6>
                        </label> <input type="password" name="password" placeholder="Enter password"> </div>
                  
                    <div class="row mb-3 px-3 mt-5"> 
                        <input type="submit" name = "submit" class = "btn btn-blue text-center" value = "Log In"></input>
                    </div>
                    <!-- <div class="row mb-4 px-3"> 
                        <small class="font-weight-bold">Don't have an account? <a href = "register.php" class="text-danger ">Register</a></small> </div>
                </div> -->
                </form>
                <a class="text-right" href="register.php">Register disini</a>
            </div>
        </div>
        <div class="bg-blue py-4">
            <div class="row px-3"> <small class="ml-4 ml-sm-5 mb-2"></small>
                <div class="social-contact ml-4 ml-sm-auto"> <span class="fa fa-facebook mr-4 text-sm"></span> <span class="fa fa-google-plus mr-4 text-sm"></span> <span class="fa fa-linkedin mr-4 text-sm"></span> <span class="fa fa-twitter mr-4 mr-sm-5 text-sm"></span> </div>
            </div>
        </div>
    </div>
</div>
</body>

</html>