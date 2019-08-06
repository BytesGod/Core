<?php
session_start();
 mysql_connect("localhost","root","");
 mysql_select_db("lectures_php");

   $a=$_SESSION['email'];
  
$ss="select * from reg where email_id='$a'";
    $ss1=mysql_query($ss);
$ss2=mysql_fetch_array($ss1);
    
?>
<table align="center" border="2">
    <tr>
        <th>Name:</th>
        <td><?php echo $ss2[1]; ?></td>
    </tr>
      <tr>
        <th>Lastname:</th>
        <td><?php echo $ss2[2]; ?></td>
    </tr>
      <tr>
        <th>Email:</th>
        <td><?php echo $ss2[3]; ?></td>
    </tr>
      <tr>
        <th>Password:</th>
        <td><?php echo $ss2[4]; ?></td>
    </tr>
      <tr>
        <th>Gender:</th>
        <td><?php echo $ss2[5]; ?></td>
    </tr>
      <tr>
        <th>Hobbies:</th>
        <td><?php echo $ss2[6]; ?></td>
    </tr>
      <tr>
        <th>City:</th>
        <td><?php echo $ss2[7]; ?></td>
    </tr>
      <tr>
        <th>Address:</th>
        <td><?php echo $ss2[8]; ?></td>
    </tr>
    
    <tr>
        <td><a href="login.php">Logout</a></td>
    </tr>
</table>
