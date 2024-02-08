import java.io.*;

import java.io.InputStream;
import java.io.OutputStream;

import java.io.FileInputStream;
import java.io.FileOutputStream;

import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;

import java.io.DataInputStream;
import java.io.DataOutputStream;

import java.io.Console;

//scanner class
import java.util.Scanner;

public class InputOutput {
	public static void main(String[] args) throws IOException {
		//basic input
		int i = System.in.read(); //returns ASCII code of first character
		System.out.println((char)i);

		//basic output
		System.out.println("output message");

		System.err.println("error message");

		//file input
		try{
        	FileInputStream fin = new FileInputStream("D:\\Programming\\Java\\ATextFile.txt");

			int j = fin.read();
        	System.out.print((char)j);

			while(j != -1){
	            System.out.print((char)j);
				j = fin.read();
			}
            fin.close();
        }catch(Exception e) {System.out.println(e);}

		//file output
		try{
			//int o = 56;
			//char o = 'p';

			FileOutputStream fout = new FileOutputStream("D:\\Programming\\Java\\ATextFile.txt");
			fout.write(65);
			fout.close();
		}catch(Exception e) {System.out.println(e);}

		//buffered input
		try{
			FileInputStream fin = new FileInputStream("D:\\Programming\\Java\\ATextFile.txt");
			BufferedInputStream bin = new BufferedInputStream(fin);

			int k;
			while((k = bin.read()) != -1){
				System.out.print((char)k);
			}
			bin.close();
			fin.close();
		}catch(Exception e) {System.out.println(e);}

		//buffered output
		FileOutputStream fout = new FileOutputStream("D:\\Programming\\Java\\ATextFile.txt");
		BufferedOutputStream bout = new BufferedOutputStream(fout);

		String s = "Welcome to javaTpoint.";
    	byte b[] = s.getBytes();
    	bout.write(b);
    	
		bout.flush();
     	bout.close();
    	fout.close();

		//data input
		InputStream input = new FileInputStream("D:\\Programming\\Java\\ATextFile.txt");
		DataInputStream din = new DataInputStream(input);
		
		int count = input.available();
		byte[] arr = new byte[count];
		din.read(arr);
		
		for (byte bt : arr) {
			char k = (char) bt;
			System.out.print(k + "-");
		}
		input.close();

		//data output
		FileOutputStream fout2 = new FileOutputStream("D:\\Programming\\Java\\ATextFile.txt");
        DataOutputStream dout = new DataOutputStream(fout2);
        dout.writeInt(65);
        dout.flush();
        dout.close();
		fout.close();

		//console
		Console c = System.console();
		System.out.println("Enter your name: ");
		String n = c.readLine();
		System.out.println("Welcome " + n);
	}
}
