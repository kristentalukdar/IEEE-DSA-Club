import java.util.Arrays;
import java.util.Scanner;

public class ShuffleArray {

    public static void main(String[] args) {
        int[] ans= shuffle();
        System.out.println(Arrays.toString(ans));
    }

    public static int[] shuffle(){
        Scanner scanner=new Scanner(System.in);

        System.out.println("Please enter the value for n");
        int n= scanner.nextInt();
        int size=2*n;
        int[] nums= new int[size];
        System.out.println("Please enter the elements for the array:");
        for(int i=0; i<size; i++){
            int val= scanner.nextInt();
            nums[i]=val;
        }

        int[] ans= new int[size];
        for(int i=0; i<n; i++){
            ans[i]=nums[i];
            ans[i+1]=nums[i+n];
        }

        return ans;
    }
}
