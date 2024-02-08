import java.util.Scanner;
import java.util.Date;
import java.sql.*;
/*
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;*/

public class employee {
    public static void main(String[] args) throws SQLException {
        String URL = "jdbc:mysql://localhost:3306/oop3?";

        Scanner in = new Scanner(System.in);
        
        try (Connection conn = DriverManager.getConnection(URL, "root", "")) {
            System.out.println("connected!");
            System.out.println(conn);

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
