<?php
session_start();
 mysql_connect("localhost","root","");
 mysql_select_db("lectures_php");
 if(isset($_REQUEST['l']))
 {
     $a=$_REQUEST['em'];
     $b=$_REQUEST['ps'];
     $s="select * from reg where email_id='$a' and password='$b'";
        $s1=mysql_query($s);
        $s2=mysql_fetch_array($s1);
            
            if(mysql_num_rows($s1)>0)
            {
                
                if($_REQUEST['ch'])
                {
                    setcookie("email",$a,time()+3600);
                    setcookie("password",$b,time()+3600);
                }
                //echo "valid";
                $_SESSION['email']=$a;
                header("location:welcome.php");
            }
            else
            {
                echo "invalid";
            }
 } 
?>

<html>
    <head>
        <title>
            Login Page
        </title>
    </head>
    
    <body>
        <form method="post">
                <table align="center" border="2">
                    <tr>
                        <th>Email</th>
                        <td><input type="text" value="<?php echo $_COOKIE['email']; ?>" name="em"></td>
                    </tr>
                    <tr>
                        <th>Password</th>
                        <td><input type="password" value="<?php echo $_COOKIE['password']; ?>" name="ps"></td>
                    </tr>
                    <tr>
                        <th colspan="2"><input name="ch" type="checkbox"> Remember Me</th>
                    </tr>
                    <tr>
                        <td><input type="submit" value="Login" name="l"></td>
                    </tr>
                </table>
        </form>
    </body>
</html>
