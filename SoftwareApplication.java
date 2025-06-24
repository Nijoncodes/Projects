
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.util.Scanner;
import java.util.Collections;
import java.util.Vector;
public class SoftwareApplication{


    	public static void main(String[] args) {

            // Declare our variables 
    
            Scanner scanner = new Scanner(System.in);
            // Structure from collection framework I will be using is a Vector
            Vector<String> cars = new Vector(); 

           
            String features;
            String cartitle;
            String ratinginfo;
            String model;
            String input;
            int delete;
        

            do{

            System.out.println("Enter Con to Continue || Enter Sort to organize car info || Press q to end program"); // Switch case to enter car information 
            input = scanner.next();

            switch(input){

                case "Con":

                try{

                System.err.println("Enter Car Model, Car Title, Car Features, Rating Information, Features");
                model = scanner.next();
                cartitle = scanner.next();
                ratinginfo = scanner.next();
                features = scanner.next();

                // Display Info added to file 

               System.out.print(" Model: " + model + " || ");
               System.out.print(" Car Title: " + cartitle + " || ");
               System.out.print(" Rating Info: " + ratinginfo + " || ");
               System.out.print(" Features: " + features);

               
                // Add information to Vector // We will also be sorting this vector as well
                System.out.println(" || Car Information has been added to file");

                cars.add(model);
                cars.add(cartitle);
                cars.add(ratinginfo);
                cars.add(features);           


             BufferedWriter writer = new BufferedWriter(new FileWriter("Carinfo2.txt"));

             writer.write("Displaying Car Information: || ");

             for(String car : cars){ // Display Vector info inside file 
                writer.write(" || " + car);
             }
             Collections.sort(cars); // Adding Sorted information to file 
             writer.write(" || Sorted Information: ");
             for(int i = 0; i < cars.size(); i++){
                writer.write(cars.get(i) + " || ");
             }
             writer.close();
             do{
             System.out.println("Would you like to delete file? || Press one to delete || Press two to continue"); // User will have an option to delete the file
             File file = new File("Carinfo2.txt");
             delete = scanner.nextInt();
             if(delete != 1 || delete !=2 ){ 
                if(delete == 1){
                    if(file.delete()){
                        System.out.println("File was sucessfully deleted");
                    }
                }else if(delete == 2){
                    System.err.println("Thank you, have a good day");
                }else if(delete != 1 && delete != 2){
                    System.err.println("Wrong Input");
                }

             }

            }while(delete != 1 && delete != 2); // In case input is incorrect 

            }catch(IOException e){

                System.out.println(" There has been a File Error");

            }
                break;

                case "Sort":

                try{
                
                System.out.print(" Vector Before sorting: || "); // Vector will be sorted here 
                for(int i = 0; i < cars.size(); i++){
                    System.out.print(cars.get(i) + " || ");
                }
                Collections.sort(cars); // This will sort the vector 
                System.err.print(" Vector after sorting || ");
                for(int i = 0; i < cars.size(); i++){
                    System.out.print(cars.get(i) + " || ");

                }
                
            } catch (Exception e) {
                System.out.println("File was not found");
            }
                break;

                case "q":

                System.out.println("Program has ended");

                break;

                default:
                System.out.println("Expect Nothing Less");
 
            }

               if (!input.equalsIgnoreCase("q")) {
                System.out.println(" || You entered: " + input);
            }

        }while (!input.equalsIgnoreCase("q")); // Program will end when user presses q 
        
}

}

