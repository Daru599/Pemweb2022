<?php
   $nim = $_POST['nim'];
   $nama = $_POST['nama'];
   $tgllahir = $_POST['tgllahir'];
   $prodi = $_POST['prodi'];
?>  

<!DOCTYPE html>
<html lang="en">

<head>
    <title>Minggu 4</title>
</head>

<body class="container">
    <h2>Element Form - HTML</h2>

    <form name="fmhs" method="POST" action="proses.php">
        <table class="table-container" border =5>

        <tr>
                <td>NIM :</td>
                <td>:</td>
                <td> <?php echo $nim;?></td>
                </tr>
            <tr>
                <td>Nama :</td>
                <td>:</td>
                <td><?php echo $nama;?> </td>
            </tr>
            <tr>
                <td>Tgl lahir :</td>
                <td>:</td>
                   <td><?php echo $ttl;?> 
                </td>
            </tr>
            <tr>
                <td>Program studi :</td>
                <td>:</td>
                <td><?php echo $prodi;?>  </td>
            </tr>
            <tr>
                <tr>
                <td> Bidang minat :</td>
                <td>:</td>
                <td><?php if (isset($_POST['minatstudi1'])){
                echo $_POST['minatstudi1']."<br/>";}
                if (isset($_POST['minatstudi2'])){
                    echo $_POST['minatstudi2']. "<br/>";}
                    if (isset($_POST['minatstudi3'])){
                        echo $_POST['minatstudi3']. "<br/>";}
                        ?>  
            </td>
            </tr>

            
               
        </table>




    </form>
</body>

</html>