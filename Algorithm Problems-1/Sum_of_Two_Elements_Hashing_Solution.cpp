/**  **  
  * ** *  Author : Murat Yıldırım
  * ** */
 

#include<iostream>
#include<algorithm>
#include<climits>
#include <cstring>

using namespace std; 			//HASHING SOLUTION

  

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

bool  hashing[100000];
memset(hashing,false,sizeof(hashing));

for(int i=0;i<n;i++)
{
if(hashing[a[i]]==true)
{
  cout<<"Two Numbers : "<<sum-a[i]<<" "<<a[i]<<endl;
return; 
}
else
{
  if(sum>a[i])
  hashing[sum-a[i]]=true;

else
  hashing[a[i]-sum]=true;
}

}




   cout<<"Not found"<<endl;

    }

 
int main()
{
solve();

}      
