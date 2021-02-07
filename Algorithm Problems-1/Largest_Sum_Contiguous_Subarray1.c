#include<stdio.h>
#include<limits.h> 


int maxSubArraySum(int a[], int size) 
{ 
    int max_so_far = INT_MIN, current = 0; 
    int counter=0;
    for (int i = 0; i < size; i++) 
    {    
        current = current + a[i];                                        
          counter++;
        if (max_so_far < current && counter!=1)                                          
            max_so_far = current;                                                        
                                                                                         
        if (current < 0){                                                                 
            current = 0;                                                                  
            counter=0;                                                                   
                                                                                         //Time Complexity : O(n)
            }
    } 
    return max_so_far; 
} 

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    int ans=maxSubArraySum(ar,n);
    printf("%d",ans);

}