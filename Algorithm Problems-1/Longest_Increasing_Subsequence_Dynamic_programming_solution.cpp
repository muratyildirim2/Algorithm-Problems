/**  **  
  * ** *  Author : Murat Yıldırım
  * ** */
 

#include<iostream>
#include<algorithm>
#include<climits>
#include <cstring>
#include<vector>
#include<iterator>
using namespace std; 			                                 //Longest Increasing Subsequence                        
void solve()                                                          //DYNAMIC PROGRAMMING SOLUTION
{  

int n,input;
cin>>n;                                    //number of elements

vector<int> vec;

for(int i=0;i<n;i++)
{
cin>>input;                                                  
vec.push_back(input);  
}

vector <int > dp(n);
 fill(dp.begin() , dp.end() , 1);        

int max_value=1;

for(int i=1;i<n;i++)
{

     for(int j=0;j<i;j++)
     {
            if(vec[i]>vec[j] && dp[i]<dp[j]+1)
            {
              dp[i]=dp[j]+1;
            }
     }


max_value=max(max_value,dp[i]);                      


}


cout<<max_value<<endl;


}

 
int main()
{
solve();

}      
