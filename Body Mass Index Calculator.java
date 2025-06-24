

import java.io.FileWriter;
import java.io.Writer;
import java.util.InputMismatchException;
import java.util.Scanner;



interface Patient {  // Our interface named Patient 

    Void info();



}

public class Insurance2{

    public static void main(String[] args) throws Exception {

        Scanner Radiate = new Scanner(System.in);

        try {

            FileWriter Info = new FileWriter("Patient.txt"); // Creation of file

            String option;
            double height;
            double weight;
            String Date;
            String name;
            boolean quit = false;


            do{

                System.out.println("Type Index: Body mass Calculator");
                System.out.println("Type q: to End Program");

                option = Radiate.nextLine();

                switch(option){

                    
                    case "Index":  // Body mass index calulator

                    System.out.println("Enter your name");

                    name = Radiate.nextLine();

                    Info.write("Patient Name: " + name);

                    System.out.println("Enter your Birthdate");

                    Date = Radiate.nextLine();

                    Info.write("Patient Birthdate: " + Date);

                    System.out.println("Enter your weight in KG please");

                    weight = Radiate.nextDouble();

                    Info.write("Patient Weight: " + weight);

                    System.out.println("Enter your height in inches please");

                    height = Radiate.nextDouble();

                    Info.write("Patient Height: " + height );

                    double bmi = weight/(height * height);

                    System.out.println("Your body mass index is " + bmi);

                    Info.write("Patient Body mass: " + bmi);


                    


                    if(bmi < 18.5){


                        System.out.println("Underweight: Insurance payment low: Patient name = " + name);

                        System.out.println("Information has been added to file");

                        Info.write("Underweight: Insurance payment low:");


                        Info.close();
                    
                    }

                    
                    if(bmi > 18.5 && bmi < 24.9) {
			
                        System.out.println("Normal: Insurance payment low: Patient name = " + name);

                        System.out.println("Information has been added to file");

                        Info.write("Normal: Insurance payment low:");

                        Info.close();
                        
                        
                        
                        
                    }
                    
                    if(bmi > 25 && bmi < 29.9) {
                        
                        System.out.println("Overwight: Insurance payment high: atient name = "  + name);

                        System.out.println("Information has been added to file");

                        Info.write("Overwight: Insurance payment high");
                        
                        Info.close();
                        
                    }
                    
                    
                    if(bmi>=30) {
                        
                        System.out.println("Obese: Insurance payment Highest: Patient name = " + name);

                        System.out.println("Information has been added to file");

                        Info.write("Obese: Insurance payment Highest: Patient name");

                        Info.close();
                        
                        
                    }

                    break;


                    case "q": // Program will stop looping when user presses q 

                    System.out.println("You have ended the program");

                    quit = true;


                    break;








                }






            }while(!quit);


            }


        catch(InputMismatchException e){

            System.out.println("Wrong input you idiot!. Try again please");





        }

        finally {

            System.out.println("Thanks for using the program");


        }

    
}


}
