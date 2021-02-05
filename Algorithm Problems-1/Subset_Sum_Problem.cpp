/**  **  
  * ** *  Author : Murat Yıldırım
  * ** */
 

#include<iostream>

using namespace std; 			// SUBSET SUM PROBLEM DYNAMIC PROGRAMMING SOLUTION

  

                                                                 // SAMPLE INPUT: 5 7 1 2 4 12 18 
																// OUTPUT : YES     
void solve()                                           //  1+2+4=7 
    {  
             int n;

            int sum; 																																													
             cin>>n;										// INPUT :  n is number of elements
            cin>>sum;								// sum is target
             int a[n];
        
             for(int i=0;i<n;i++)
             {
             	cin>>a[i];
          
             }

      		bool subsetsum[n+1][sum+1];
        for (int i = 0; i <= n; i++)
        subsetsum[i][0] = true;
 

        for (int i = 1; i <= sum; i++)
        subsetsum[0][i] = false;
         

            for(int i=1;i<=n;i++)
            {
                               for(int j=1;j<=sum;j++)
                               {
                                             if(j<a[i-1]) 
                                             {
                                             	subsetsum[i][j]=subsetsum[i-1][j];
                                             }

                                        if(j>=a[i-1])
                                             {
                                             	subsetsum[i][j]=subsetsum[i-1][j] || subsetsum[i-1][j-a[i-1]];
                                             }


                               }



            }

  if(subsetsum[n][sum]==true)
  {
  	cout<<"YES"<<endl;
  }

  else
  	cout<<"NO"<<endl;



    }

 
int main()
{
solve();

}      
