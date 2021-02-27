/**  **  
  * ** *  Author : Murat Yıldırım
  * ** */
 
#include <iostream>
#include<string>

using namespace std;


 
int solve()
{
                                                            
string X,Y;

cin>>X>>Y;                                        //Longest Common Subsequence Dynamic Programming Solution

    int m = X.length(), n = Y.length();           // Length of Strings
 

    int dp[m + 1][n + 1];
 

    for (int i = 0; i <= m; i++) {
        dp[i][0] = 0;
    }
 
    for (int j = 0; j <= n; j++) {
        dp[0][j] = 0;
    }
 

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
  
            if (X[i - 1] == Y[j - 1]) {                     // if the current character of `X` and `Y` matches
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
         
            else  {                   // otherwise, if the current character of `X` and `Y` don't match
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
 

    return dp[m][n];
    }


 
int main()
{
int answer;
    answer=solve();

cout<<answer<<endl;

}      
