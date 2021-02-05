/**  **  
  * ** *  Author : Murat Yıldırım
  * ** */
 

#include<iostream>
#include<algorithm>

using namespace std; 			// BINARY SEARCH SOLUTION

  

                                                                 // SAMPLE INPUT: 5 7 1 3 4 12 18 
																                                // OUTPUT : Two numbers : 3 4     
void solve()                                           //  3+4=7 
    {  
             int n;

            int sum; 																																													
             cin>>n;									                     	                    // INPUT :  n is number of elements
       				cin>>sum;		                                              	// sum is target
             int a[n];
        
             for(int i=0;i<n;i++)
             {
             	cin>>a[i];
          
             }

sort(a,a+n);

int left=0;
int right=n-1;

                    while(left<right)
                          {
                                 if(a[left]+a[right]==sum)
                                 {
                                      cout<<"Two numbers : "<<a[left]<<" "<<a[right];
                                      return;

                                 }

                                 else if(a[left]+a[right]<sum)
                                 {
                                  left++;
                                 }

                                 else if(a[left]+a[right]>sum)
                                 {
                                  right--;
                                 }

                          }

   cout<<"Not found"<<endl;

    }

 
int main()
{
solve();

}      
