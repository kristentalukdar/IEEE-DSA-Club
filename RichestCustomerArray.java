import java.util.Scanner;

public class RichestCustomerArray {

    public static void main(String[] args) {
        maximumWealth();
    }

    public static int maximumWealth(){
        Scanner scanner= new Scanner(System.in);

        System.out.println("Please enter the no. of customers of array:");
        int custCount= scanner.nextInt();
        System.out.println("Please enter the no of bank accounts for each customer:");
        int accCount= scanner.nextInt();

        int[][] arr= new int[custCount][accCount];
        System.out.println("Please enter the values");
        for(int i=0; i<custCount; i++){
            for(int j=0; j<accCount; j++) {
                System.out.println("Enter the amount that Customer "+ (i+1) + " has in bank "+ (j+1) );
                int amt = scanner.nextInt();
                arr[i][j]=amt;
            }
        }

        int max=0;
        int sum=0;
        int maxCustIndex=-1;
        for(int i=0; i<custCount; i++){
            sum=0;
            for(int j=0; j<accCount; j++) {
                sum+=arr[i][j];
            }
            if(sum>max){
                max=sum;
                maxCustIndex=i;
            }
        }
        System.out.println("The maximum wealth contained is: "+ max+ " by customer "+ (maxCustIndex+1));
        return max;
    }
}
