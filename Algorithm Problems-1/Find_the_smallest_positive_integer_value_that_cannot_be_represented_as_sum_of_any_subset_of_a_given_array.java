import java.util.Scanner;

class Find_the_smallest_positive_integer_value_that_cannot_be_repanswerented_as_sum_of_any_subset_of_a_given_array  
{ 

   public static int findSmallest(int arr[], int n)  
    { 
        int answer = 1;                                                //smallest posive number = 1
        for (int i = 0; i < n && arr[i] <= answer; i++) 
            answer = answer + arr[i];                                        
  
        return answer; 
    } 
  

    public static void main(String[] args)  
    { 
        Scanner sc = new Scanner(System.in);

        int n;
        n=sc.nextInt();                          //number of the elements.

        int [] array1=new int[n];
  
        for (int i=0;i<n;i++)
        {

                  array1[i]=sc.nextInt();             // take input from user(elements of array)
        }

     int answer=findSmallest(array1, n);
     System.out.println(answer);

    } 
} 