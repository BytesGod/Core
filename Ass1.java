
package ass1;

import java.io.IOException;
import java.util.*;
import java.sql.*;

class Database
{
    Connection con = null;
    public static int port;
    public static String database;
    public static boolean IsChecked = false;
    public static boolean IsLogin = false;
    
    public void CreateDatabase() throws IOException
    {
        try
        {
            Scanner take = new Scanner(System.in);
            
            System.out.println("Please enter port number : ");
            port = take.nextInt();
            
            System.out.println("Please enter database name : ");
            database = take.next();
            
            String DbUrl = "jdbc:mysql://localhost:" + port;
            String DbUrl2 = "jdbc:mysql://localhost:" + port + "/" + database;
            String Username = "root";
            String Password = "";
            
            String query = "create database if not exists " + database;
            
            con = DriverManager.getConnection(DbUrl,Username,Password);
            
            try(PreparedStatement st = con.prepareStatement(query);)
            {
            
                st.executeUpdate(); 
            
                st.close();
                
                System.out.println("Database created.");
                System.out.println("Creating table now.");
                
                String query2 = "create table if not exists `student` (`ID` int(3) not null,`Name` varchar(50) not null)";
                String query3 = "create table if not exists `login` (`ID` int(3) not null,`Username` varchar(50) not null, `Password` varchar(50) not null)";
                
                con = DriverManager.getConnection(DbUrl2,Username,Password);
                
                try(PreparedStatement st2 = con.prepareStatement(query2);
                        PreparedStatement st3 = con.prepareStatement(query3);)
                {
                    st2.executeUpdate();
                    st3.executeUpdate();
                    
                    st2.close();
                    st3.close();
                    
                    String query4 = "insert into login values(?,?,?)";
        
                    int id;
                    String username;
                    String password;
                    Scanner take2 = new Scanner(System.in);
                    Scanner take3 = new Scanner(System.in);
                    Scanner take4 = new Scanner(System.in);
        
                    System.out.println("Please enter the ID : ");
                    id = take4.nextInt();
                    System.out.println("Plase enter Username : ");
                    username = take2.nextLine();
                    System.out.println("Plase enter Password : ");
                    password = take3.nextLine();
        
                    try(PreparedStatement st4 = con.prepareStatement(query4);)
                    {
                        st4.setInt(1,id);
                        st4.setString(2, username);
                        st4.setString(3, password);
                        int count = st4.executeUpdate();
            
                        if(count > 0)
                        {
                            System.out.println(count + " row/s affected Inserted Successfully.");
                            IsLogin = true;
                        }   
                        st4.close();
                        con.close();
                        System.in.read();
                    }
                    catch(Exception ex)
                    {
                        System.out.println("Error In Insert login: " + ex);
                        System.in.read();
                }
                    
                    System.out.println("Table created.");
                    IsChecked = true;
                    System.in.read();
                }
            }
            catch(Exception ex)
            {
                System.out.println("Error In Create Database and Table : " + ex);
                IsChecked = false;
                System.in.read();
            }
        }
        catch(IOException | SQLException ex)
        {
            System.out.println("Error In Create Database and Table : " + ex);
            IsChecked = false;
            System.in.read();
        }
    }
    
    public void ConnectToDatabase() throws IOException
    {
        try
        {
            Scanner take = new Scanner(System.in);
            Scanner take2 = new Scanner(System.in);
            Scanner take3 = new Scanner(System.in);
            
            System.out.println("Please enter port number : ");
            port = take.nextInt();
            
            System.out.println("Please enter database name : ");
            database = take.next();
            
            String DbUrl = "jdbc:mysql://localhost:" + port + "/" + database;
            String Username = "root";
            String Password = "";
            String user,pass,u=null,p=null;
            System.out.println("Please enter Username : ");
            user = take.next();
            System.out.println("Please enter Password : ");
            pass = take.next();
            
            con = DriverManager.getConnection(DbUrl,Username,Password);
            
            String query = "select Username,Password from login";
        
            try (Statement st = con.createStatement()) 
            {
                ResultSet rs = st.executeQuery(query);
                while(rs.next())
                {
                     u = rs.getString("Username");
                     p = rs.getString("Password");
                }
                
                if(user.equals(u) && pass.equals(p))
                {
                    IsLogin = true;
                    IsChecked = true;
                }
                else
                {
                    System.out.println("Invalid Username or password.");
                    System.in.read();
                    IsChecked = false;
                }
                st.close();
                con.close();
                System.in.read();
            }
            catch(Exception ex)
            {
                
                System.out.println("Error In Login : " + ex);
                System.in.read();
            }
            
            if(IsChecked == true)
            {
                System.out.println("Connected to Database.");
                System.in.read();
            }
        }
        catch(SQLException ex)
        {
            System.out.println("Error In Connect to Database : " + ex);
            //IsChecked = false;
            System.in.read();
        }
    }
}

class Crud
{
    Connection con = null;
    Database Database = new Database();
    
    public void Connect()
    {
        if(Database.IsChecked)
        {
            try
            {
                String DbUrl = "jdbc:mysql://localhost:" + Database.port + "/" + Database.database;
                String Username = "root";
                String Password = "";
                con = DriverManager.getConnection(DbUrl,Username,Password);
            }
            catch(SQLException ex)
            {
                System.out.println("Error In Connect : " + ex);
            }
        }
        else
        {
            System.out.println("Please create database and table or connect to database.");
        }
    }
    
    public void select() throws IOException
    {
        if(Database.IsChecked)
        {
            this.Connect();
            String query = "select * from student";
        
            try (Statement st = con.createStatement()) 
            {
                ResultSet rs = st.executeQuery(query);
                System.out.println("ID" + " " + "Name");
                while(rs.next())
                {
                    int id = rs.getInt("ID");
                    String name = rs.getString("Name");
                
                    System.out.println(id + " " + name);
                }
                st.close();
                con.close();
                System.in.read();
            }
            catch(Exception ex)
            {
                System.out.println("Error In Select : " + ex);
                System.in.read();
            }
        }
        else
        {
            System.out.println("Please connect to database");
            System.in.read();
        }
    }
    
    public void Insert() throws IOException
    {
        if(Database.IsChecked)
        {
            this.Connect();
            String query = "insert into student values(?,?)";
        
            int id;
            String name;
        
            Scanner take = new Scanner(System.in);
            Scanner take2 = new Scanner(System.in);
        
            System.out.println("Please enter the ID : ");
            id = take.nextInt();
            System.out.println("Plase enter name : ");
            name = take2.nextLine();
        
            try(PreparedStatement st = con.prepareStatement(query);)
            {
                st.setInt(1,id);
                st.setString(2, name);
                int count = st.executeUpdate();
            
                if(count > 0)
                {
                    System.out.println(count + " row/s affected Inserted Successfully.");
                }   
                st.close();
                con.close();
                System.in.read();
            }
            catch(Exception ex)
            {
                System.out.println("Error In Insert : " + ex);
                System.in.read();
            }
        }
        else
        {
            System.out.println("Please Connect to Database.");
            System.in.read();
        }
    }
    
    public void Update() throws IOException
    {
        if(Database.IsChecked)
        {
            this.Connect();
            String query = "update student set Name = ? where ID = ?";
        
            int id;
            String name;
        
            Scanner take = new Scanner(System.in);
            Scanner take2 = new Scanner(System.in);
        
            System.out.println("Please enter the ID : ");
            id = take.nextInt();
            System.out.println("Plase enter name : ");
            name = take2.nextLine();
        
            try(PreparedStatement st = con.prepareStatement(query);)
            {
                st.setInt(2,id);
                st.setString(1, name);
                int count = st.executeUpdate();
            
                if(count > 0)
                {
                    System.out.println(count + " row/s affected Updated Successfully.");
                }   
                st.close();
                con.close();
                System.in.read();
            }
            catch(Exception ex)
            {
                System.out.println("Error In Update : " + ex);
                System.in.read();
            }
        }
        else
        {
            System.out.println("Please Connect to Database.");
            System.in.read();
        }
    }
    
    public void Delete() throws IOException
    {
        if(Database.IsChecked)
        {
            this.Connect();
            String query = "delete from student where ID = ?";
        
            int id;
        
            Scanner take = new Scanner(System.in);
        
            System.out.println("Please enter the ID : ");
            id = take.nextInt();
        
            try(PreparedStatement st = con.prepareStatement(query);)
            {
                st.setInt(1,id);
                int count = st.executeUpdate();
            
                if(count > 0)
                {
                    System.out.println(count + " row/s affected Deleted Successfully.");
                }   
                st.close();
                con.close();
                System.in.read();
            }
            catch(Exception ex)
            {
                System.out.println("Error In Delete : " + ex);
                System.in.read();
            }
        }
        else
        {
            System.out.println("Please Connect to Database.");
            System.in.read();
        }
    }
}


public class Ass1 {
    public static void main(String[] args) throws IOException {
        
        Database Database = new Database();
        Crud Crud = new Crud();
        
        while(true)
        {
            System.out.println("***** MENU *****");
            System.out.println("1. Create Database and Table");
            System.out.println("2. Connect to Database");
            System.out.println("3. Insert Data");
            System.out.println("4. Update Data");
            System.out.println("5. Delete Data");
            System.out.println("6. Show Data");
            System.out.println("0. Exit");
        
            Scanner take = new Scanner(System.in);
            int choice = take.nextInt();
            
            switch(choice)
            {
                case 1 :
                    Database.CreateDatabase();
                    break;
                
                case 2 :
                    Database.ConnectToDatabase();
                    break;
                
                case 3 :
                    Crud.Insert();
                    break;
                
                case 4 :
                    Crud.Update();
                    break;
             
                case 5 :
                    Crud.Delete();
                    break;
                    
                case 6 :
                    Crud.select();
                    break;
                
                case 0 :
                    System.exit(0);
                    break;
                
                default :
                    System.out.println("Invalid Choice.");
                    System.in.read();
                    break;
            }
        }
    }
    
}
