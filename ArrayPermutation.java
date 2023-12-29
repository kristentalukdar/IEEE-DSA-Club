import java.util.Arrays;
import java.util.Scanner;

public class ArrayPermutation {

    public static void main(String[] args) {
        buildArray();
    }

    public static void buildArray(){
        Scanner scanner= new Scanner(System.in);

        System.out.println("Please enter the size of the array:");
        int size= scanner.nextInt();

        int[] arr= new  int[size];
        int range=size-1;
        System.out.println("Enter the elements of the array ranging from 0 to "+ range + ":");
        int counter=0;
        while (counter<size){
            System.out.print("Enter element at index " + counter + ": ");
            int input = scanner.nextInt();
            if ((input>=0) && (input<size)) {
                arr[counter] = input;
                counter++;
            }
            else{
                System.out.println("Invalid enter, Please enter values ranging from 0 to "+ range );
            }
        }

        int[] ans= new int[size];

        for(int i=0; i<size; i++){
            ans[i]=arr[arr[i]];
        }

        for(int i=0; i<size; i++){
            System.out.print(ans[i] + " ");
        }
    }

}
