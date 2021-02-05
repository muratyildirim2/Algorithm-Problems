/**  **  
  * ** *  Author : Murat Yıldırım
  * ** */
 

#include<iostream>
#include<algorithm>
#include<climits>
#include <cstring>
#include<vector>
#include<iterator>

using namespace std; 			//HASHING (STD::FIND) SOLUTION

  

                                                                 // SAMPLE INPUT: 5 7 1 3 4 12 18 
																                                // OUTPUT : Two numbers : 3 4     
void solve()                                           //  3+4=7 
    {  
             int n;

            int sum; 																																													
             cin>>n;									                     	                    // INPUT :  n is number of elements
       				cin>>sum;		                                              	// sum is target
          vector<int>vec;
                vector<int>hash;
        int input;
        fill(hash.begin(), hash.end(),0);
             for(int i=0;i<n;i++)
             {
             	cin>>input;
              vec.push_back(input);
          
             }

                        for(int i=0;i<n;i++)
                        {
                          int x=sum-vec[i];
                           bool exist = std::find(std::begin(vec), std::end(vec), x) != std::end(vec);

                          if(exist)
                          {
                            cout<<"Two numbers : "<<vec[i]<<" "<<x<<endl;
                            return;
                          }
                          else
                          {
                            hash.push_back(vec[i]);
                          }
                        }
 


   cout<<"Not found"<<endl;

    
}

 
int main()
{
solve();

}      
