
import java.util.Random;

public class Sort{

    public static void main(String[] args) {

          int numbers[] = new int[101];   // Create an array with 100 space

          Random random = new Random();

          int x;

          System.out.println("List of Generated Numbers");

       


        for(int i =0; i < 101; i++){ // For loop to print 100 generate numbers // Prints 101 Numbers to be inside bounds of array

            x=1+random.nextInt(1000);

            System.out.print(" " + x);

            numbers[i] = x;


        } 

        System.out.println(" Numbers in Array");


        for(int k = 0; k < numbers.length; k++){

            System.out.print(" " + numbers[k]);


            
        }

        bubbleSort(numbers);

        System.out.println(" Sorted Through Bubble Sort Below:");

        for(int a = 0; a < numbers.length; a++){

            System.out.print(numbers[a] + " ");
        }


        selectionSort(numbers);

        System.out.println("Sorted Through Selection Sort Below:");

        for(int t = 0; t < numbers.length; t++){

            System.out.print(numbers[t] + " ");


        }

        // Now wee need to implement Searching Algorithms // Let's implement the Linear Search and Binary Search // finding 500 is not always true 


        System.out.println("Linear Search below");

        int index = LinearSearch(numbers,500); // Linear Search for the number 500 // If 500 is found the value will be printed 

        if(index != -1){
            System.out.println("Element Was found " + index);

        }
        else {
            System.out.println("Value not found");
            
        }

        System.out.println("Binary Search is below"); // Binary Search for the number 500 // If 500 is found the value will be printed 

        int target = 500;

        int index2 = binarySearch(numbers,target); 

        if(index2 != -1){
            System.out.println("Element Was found " + index);

        }
        else {
            System.out.println("Value not found");
            
        }





        
    }


    public static void bubbleSort(int numbers[]){

  for(int i = 0; i < numbers.length - 1; i++){

    for(int j = 0; j < numbers.length - i - 1; j++){

        if(numbers[j] > numbers[j + 1]);

        int temp = numbers[j];
        numbers[j] = numbers[j + 1]; 
        numbers[j + 1]  = temp;       

}



    }

    }

    public static void selectionSort(int numbers[]){

        for(int i = 0; i < numbers.length - 1; i++){

            int min = i;
            for(int j = i + 1; j < numbers.length; j++){

                if(numbers[min] > numbers[j]){
                    min = j;

                }
            }
            int temp = numbers[i];
            numbers[i] = numbers[min];
            numbers[min] = temp;


        }


    }


    public static int LinearSearch(int[] numbers, int value){ // Will check every element inside the array until value is found

        for(int i = 0; i < numbers.length; i++){

            if(numbers[i] == value){
                return i; 

            }
    
        }
        return -1;
  
        

    }

    public static int binarySearch(int[] numbers, int target){

        int low = 0;
        int high = numbers.length - 1;

        while(low <= high){
            int middle = low + (high - low) / 2;
            int value = numbers[middle];

            if(value < target) low = middle + 1;
            else if(value > target ) high = middle - 1;
            else return middle;
            

            
        }
        return -1; // Target not found



    }

}