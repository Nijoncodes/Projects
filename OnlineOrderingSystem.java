
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.util.InputMismatchException;
import java.util.Scanner;
import java.sql.Connection;
import java.sql.SQLException;
import java.sql.ResultSet;
import java.sql.Statement;
import java.sql.*;
import java.util.logging.Logger;
import java.util.logging.SimpleFormatter;
import java.util.logging.Level;
import java.util.logging.FileHandler;
import java.util.logging.LogManager; // Log manager 







public class DevDev2 {
	
	private static Logger logger = Logger.getLogger(DevDev.class.getName()); // Logger class
	
	
	
	public static void createAccount(Scanner scanner) { // New database feature: Create an account
		
		
		String name;
		String Email;
		String Password;
		String Number;
		
		try {
		
		Connection con = null;
		
		con = (Connection)DriverManager.getConnection("jdbc:mysql://localhost:3306/Ordering", "root", "Nijonlathan12");
		
		if(con!=null) {
			
			PreparedStatement pstmt = null;
			
			
			System.out.print("Database was connected");
			
			System.out.println("Creating an account");
			
			System.out.println("Enter your name");
			
			name = scanner.next();
			
			System.out.println("Enter your email address");
			
			Email = scanner.next();
			
			System.out.println("Enter your phone number");
			
			Number = scanner.next();	
			
			System.out.println("Enter your password");
			
			Password = scanner.next();
			
			String query = "INSERT INTO Accounts(Name,Email,Number,Password)"+"VALUES(?,?,?,?)";
			
			pstmt = con.prepareStatement(query);
			
			pstmt.setString(1,name);
			pstmt.setString(2, Email);
			pstmt.setString(3, Number);
			pstmt.setString(4, Password);
			
			int status = pstmt.executeUpdate();
			
			if(status > 0) {
				System.out.println("RECORDS WERE INSERTED");
			}
			
			
			System.out.println("Information Displayed");
			System.out.println("Password " + Password);
			System.out.println("Name " + name);
			System.out.println("Email " + Email);
			System.out.println("Number " + Number);
			
			
			
		}

		
		
		}catch(Exception e) {
			
			System.out.println("Records was not connected");
			e.printStackTrace();
		}
		
		
		
		
		
	}
	

    public static void Menu(){ // Online Ordering system 

        System.out.println("Weclome to the online ordering system/n Press one for to preview our current items");
        System.out.println(": Electronics");
        System.out.println(": Skin Care");
        System.out.println("2: Search for an Item in our current cataglog");
        System.out.println("Press 3 to quit");
        System.out.println("Database Features Below");
        System.out.println("4:Insert info to database");
        System.out.println("5:Update Database info");
        System.out.println("6:Retrieve info from database");
        System.out.println("7:Check current stock");
        System.out.println("8:Create Account");
        System.out.println("9:Retrieve Recent Customer names");
        System.out.println("10:Retrieve Recent Customer Info");
       
    }
    
    
    public static void logging() { // Logging function 
    	
    	logger.info("Logger is here");
    	
    	try {
    		
    		FileHandler fh = new FileHandler("A:/JustTesting/Log.file"); // Handler // Checks to see if a file is there 
    		
    		logger.addHandler(fh);
    		SimpleFormatter formatter = new SimpleFormatter(); // Logging formatter 
    		fh.setFormatter(formatter);
    		
    		
    		logger.info("Logger intilaized");
    		
    		
    		
    	}catch(Exception e) {
    		
    		System.out.println("Dude i think something went wrong with the logger");
    	}
    	
    	
    	
    }
    
    
    public static void stock() { // Logger issues a warning if the stock is low 
    	
    int ps5stock = 1;
    
    if(ps5stock <= 2) {
    	
    	logger.warning("PS5 Stock is currently low: " + ps5stock);
    	
    	
    	
    }
    
    else {
    	logger.info("Stock is fine");
    }
    	
    	
    	
    	
    	
    	
    }

    public static void getInfo(){ // This function gets data from the database

        Connection con = null; // Connection to my database

          try{

        	  con = (Connection)DriverManager.getConnection("jdbc:mysql://localhost:3306/Ordering", "root", "Nijonlathan12");

        Statement statement = con.createStatement();

        ResultSet resultset = statement.executeQuery("select * from Items");

			if(con!=null) {
				System.out.println("Database was connected");
				System.out.println("Retrieving information from database");
				System.out.println("Info was retieved");
			
				
			}
			

			while(resultset.next()) {
				
				System.out.println(resultset.getString("Name")); // Retrieving info from collum in database 
				
				
			}
			
			
		
			
		}catch(Exception e) {
			
			System.out.println("Database Not connected");
			
			
		}


    }
    
    
  public static void GetAccount() {
	  
	  try {
	  
	  Connection con = null;
	  
	  con = (Connection)DriverManager.getConnection("jdbc:mysql://localhost:3306/Ordering", "root", "Nijonlathan12");
	  
	  Statement statement = con.createStatement();
	  
	  ResultSet resultSet = statement.executeQuery("select * from Accounts");
	  
	  if(con!=null) {
		  
		  System.out.println("Receiving values recently entered");
		  
		  
		  
	  }
	  
	  while(resultSet.next()) {
		  
		  System.out.print(resultSet.getString("Name")); // Will retrieve information that is entered in the database
		  System.out.print(resultSet.getString("Email"));
		  System.out.print(resultSet.getString("Number"));
		  System.out.println(resultSet.getString("Password"));
		  
		  
		  
	  }

	  
	  }catch(Exception e) {
		  
		  System.out.println("Database was not connected");
		  e.printStackTrace();
	  }
	  
	  
	  
  }
  
  
 public static void getNames() {
	 
	 try {
		  
		  Connection con = null;
		  
		  con = (Connection)DriverManager.getConnection("jdbc:mysql://localhost:3306/Ordering", "root", "Nijonlathan12");
		  
		  Statement statement = con.createStatement();
		  
		  ResultSet resultSet = statement.executeQuery("select * from Items");
		  
		  if(con!=null) {
			  
			  System.out.println("Receiving Customer names recently entered");
			  
			  
			  
		  }
		  
		  while(resultSet.next()) {
			  
			  System.out.println(resultSet.getString("Name"));
			  
			  
			  
		  }

		  
		  }catch(Exception e) {
			  
			  System.out.println("Names not recieved");
			  e.printStackTrace();
		  }
		  
	 
	 
	 
 }
    
    
   
   
public static void insert() { // Insert data into database 
	   
	     
	  
	        try {	
	        	
	        Connection con = null;
	   
	      
	 
	    	
	    	con = (Connection)DriverManager.getConnection("jdbc:mysql://localhost:3306/Ordering", "root", "Nijonlathan12");
	    		
	    		
	    		
	    		PreparedStatement ps = con.prepareStatement("INSERT INTO `Ordering`. `Items` (`itemscost`) VALUES (1000);");
	    		
	    		int status =  ps.executeUpdate();
	    		
	    		
	    		if(status != 0) {
		    		System.out.println("Database was connected");
	    			System.out.println("Record was inserted");
	    		}
	    		
	    
	    		
	    	
	    	
	    	
	   }catch(Exception e) {
		  
		   System.out.println("Record was not inserted");
	   }
		   
		
	   
	   
	   
	   
	   

	   
   }
   
   
   public static void update() { // Updates data in database
	   
	
	   
	   try {
		 
       Connection con = null;
       
	   
	   con = (Connection)DriverManager.getConnection("jdbc:mysql://localhost:3306/Ordering", "root", "Nijonlathan12");
	   
	 
		   System.out.println("Database was connected");
		   
		   String sql = "UPDATE Items SET name='Lathan' WHERE Name='Nijon'";
		   
		   Statement statement = con.createStatement();
		   
		   int rows = statement.executeUpdate(sql);
		   
		   if(rows > 0) {
			   System.out.println("The information has been updated");
		   }
		   
		  
	   
	   
	   } catch(Exception e) {
		   
		   System.out.println("Update was not created");
	   }
	   
	   
	   
	   
	   
	   
   }


		

	
	public static void main(String[] args) {
		
		
		
		// Declarations 

        Scanner scanner = new Scanner(System.in);
        int choice;
        int quanity;
        String search;
        boolean found = false;

        // Array of current items in the shop

        String items[] = {"PS5", "FlatscreenTV", "Cetaphil", "CerveLotion" };


       // Item costs that will be added to database eventually 
        double ps5 = 500; 
        double tv = 200;
        double cervelotion = 9.8;
        double Cetaphil = 5.5;

        boolean quit = false;
        int decesion;
        
        logging();       
    
  
       
    
        

        do{  // User can quit by pressing 4 to end the loop

             Menu(); // Menu will loop

          choice = scanner.nextInt(); // User input


        switch(choice){


            case 1: // Current items

            System.out.println("Products currently");
            System.out.println("1:Playsation 5: 500$");
            System.out.println("2:Flat screen TV: 200$");
            System.out.println("3:Skin care products");
            System.out.println("4:Cerve lotion: 9.8");
            System.out.println("5:Cetaphil: 5.5");

            decesion = scanner.nextInt();

            System.out.println("What item would you like to buy?");

            if(decesion == 1){  // Decesions to only but two items currently;

                System.out.println("You choose Playsation 5");
                System.out.println("How many would you like? ");
                quanity = scanner.nextInt();

                if(quanity > 2){
                    System.out.println("We are currently out of stock: try again later");
                    System.out.println("Pick another item");

                }else if(quanity == 2){

                    System.out.println("The price will be 1000 dollars");

                }else if(quanity == 1){
                    System.out.println("Price will be 500$");
                }

            
            }else if(decesion == 2){
                System.out.println("You choose Flat screen tv");
                System.out.println("How many would you like");
                quanity = scanner.nextInt();

                if(quanity > 3){
                    System.out.println("Currently out of stock: Try again");
                
                }else if(quanity == 3){

                    System.out.println("The price will be 600 ");
                }else if(quanity == 2){
                    System.out.println("Price will be 200");

                }else if(quanity == 1){
                    System.out.println("Price will be 200");
                }
            }
        

            


            break;

            
            case 2:
  

            System.out.println("Search for item in current shop");

            search = scanner.next();


            for(int i = 0; i < items.length; i++){ // Loop to search for items in the array

                if(items[i].equals(search)){

                    System.out.println("Item found " + search);
                    found = true;

                


                }
            }

            if(!found){
                System.out.println("Item wasn't found try again or another option please");
            }

           
            break;

            case 3:
            	
             quit = true; // Quits do while loop

            System.out.println("You have left the online shopping app");

            break;
            
            case 4:
            	
            	insert();
            	
            break;
            
            
            case 5:
            	
            	update();
            	
            	
            break;
          
            
            case 6:
            	
            	getInfo();
            	
            break;
            
            case 7:
            	
            	stock();
            	
            	
            break;
            
            case 8:
            	
            createAccount(scanner);
            	
            break;
            
            case 9:
            	
            getNames();
            
            break;
            
            case 10:
            
            GetAccount();
            	
            break;
            
            default:

          System.out.println("Not an option yet");




        }



    }while(quit != true);








    }





		
		
		
		
		
	}
	
	
