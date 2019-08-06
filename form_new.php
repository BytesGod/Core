<?php
ob_start();
mysql_connect("localhost","root","");
mysql_select_db("mydb_php1");  
//$a=$_GET['n'];
  // $a=$_POST['n'];
  // $a= $_REQUEST['n'];
     
   
   if(isset($_REQUEST['in']))
   {
       $a=$_REQUEST['n'];
       $b=$_REQUEST['em'];
       $c=$_REQUEST['ps'];
       $d=$_REQUEST['g'];
       $e=$_REQUEST['h'];
       $f=$_REQUEST['ct'];
       $g=$_REQUEST['ad'];
       $in="insert into reg values('','$a','$b','$c','$d','$e','$f','$g')";
           mysql_query($in);
       
   }
   $s="select * from reg";
      $s1=mysql_query($s);
      if(isset($_REQUEST['d']))
      {
          $a=$_REQUEST['d'];
             echo $a;
             $d="delete from reg where id='$a'";
                mysql_query($d);
                header("location:form_new.php");
      }      
      
?>

<html>
    <head>
        <title>
                Reg Page
        </title>
    </head>
    
    <body>
         <form method="post">
                <table border="2" align="center">
                        <tr>
                            <td>Name:</td>
                            <td><input type="text" name="n"></td>
                        </tr>
                        
                        <tr>
                            <td>Email:</td>
                            <td><input type="text" name="em"></td>
                        </tr>
                        
                        <tr>
                            <td>Password:</td>
                            <td><input type="password" name="ps"></td>
                        </tr>
                        
                        
                        <tr>
                            <td>Gender:</td>
                            <td><input type="radio" name="g" value="male">Male <input type="radio" name="g" value="female">Female</td>
                        </tr>
                        
                        <tr>
                            <td>Hobbies:</td>
                            <td><input type="checkbox" name="h" value="cricket">Cricket<input type="checkbox" name="h" value="coding">Coding </td>
                        </tr>
                        
                        
                        <tr>
                            <td>City:</td>
                            <td><select name="ct">
                                <option value="">Select City</option>
                                <option value="surat">Surat</option>
                                <option value="navsari">Navsari</option> 
                            </select></td>
                        </tr>
                        
                        
                        <tr>
                            <td>Address:</td>
                            <td><textarea name="ad"></textarea></td>
                        </tr>
                        
                        <tr>
                            <td><input type="submit" name="in" value="Insert"></td>
                        </tr>
                </table>
                
                <br>
                <table align="center" border="1">
                        <tr>
                            <th>Action</th>
                            <th>Id</th>
                            <th>Name</th>
                            <th>Email</th>
                            <th>Password</th>
                            <th>Gender</th>
                            <th>Hobbies</th>
                            <th>City</th>
                            <th>Address</th>
                        </tr>
                        <?php 
                          while($s2=mysql_fetch_array($s1))
                          {
                              ?>
                              <tr>    <td><a href="form_new.php?d=<?php echo $s2['id']; ?>"> Delete </a></td>
                                    <td><?php echo $s2['id']; ?></td>
                                    <td><?php echo $s2[1]; ?></td>
                                    <td><?php echo $s2[2]; ?></td>
                                    <td><?php echo $s2[3]; ?></td>
                                    <td><?php echo $s2['gender']; ?></td>
                                    <td><?php echo $s2[5]; ?></td>
                                    <td><?php echo $s2[6]; ?></td>
                                    <td><?php echo $s2[7]; ?></td>
                                    
                              </tr>
                              <?php
                          }
                        ?>
                        
                        
                </table>
         </form>
    </body>
    
    
</html>
