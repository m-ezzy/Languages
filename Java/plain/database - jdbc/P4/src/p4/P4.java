/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package p4;
/**
 *
 * @author SYBCA27
 */
import java.util.*;
import java.util.Scanner;
import java.util.Date;
import java.util.Properties;
import java.io.*;
import java.io.FileReader;
import java.sql.*;
/*import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;*/

public class P4 {
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws IOException, FileNotFoundException, SQLException {
        // TODO code application logic here
        FileInputStream fis = new FileInputStream("conn.properties");
        Properties p = new Properties();
        p.load(fis);
        
        String databaseName = (String)p.get("databaseName");
        System.out.println(databaseName);
        
        String URL = "jdbc:mysql://localhost/" + databaseName;
        
        Scanner in = new Scanner(System.in);
        
        Class.forName(databaseName);
        
        try (Connection conn = DriverManager.getConnection(URL, "root", "")) {
            System.out.println("connected!");
            System.out.println(conn);
            
            String[] arr = new String[20];
            
            //arr[0] = in.nextLine();
            arr[1] = "1";
            arr[2] = "2";
            arr[3] = "3";
            arr[4] = "4";
            //Object obj = new Object();
            //obj.date = new Date();
            
            System.out.println("enter emp id : ");
            int emp_id = in.nextInt();
            
            System.out.println("enter emp name : ");
            String emp_name = in.next();
            
            System.out.println("enter designation : ");
            String designation = in.next();
            
            System.out.println("enter join date : ");
            String join_date_s = in.next();
            Date join_date = new Date();
            
            System.out.println("enter salary : ");
            int salary = in.nextInt();

            PreparedStatement ps = conn.prepareStatement("insert into employee(emp_id,emp_name,designation,join_date,salary) values(?,?,?,?,?)");
            ps.setInt(1, emp_id);
            ps.setString(2, emp_name);
            ps.setString(3, designation);
            ps.setString(4, join_date_s);
            ps.setInt(5, salary);
            
            int status = ps.executeUpdate();
            if(status > 0) {
                System.out.println("Record entered successfully !");
            }
            
            Statement s = conn.createStatement();
            ResultSet rs = s.executeQuery("select * from employee");
            
            while (rs.next()) {
                System.out.println(rs.getInt("emp_id"));
                System.out.println(rs.getString("emp_name"));
                System.out.println(rs.getString("designation"));
                System.out.println(rs.getString("join_date"));
                System.out.println(rs.getString("salary"));
            }
        } catch (SQLException e) {
            System.out.println("error!");
        }
    }
}
