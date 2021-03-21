#include<bits/stdc++.h>

using namespace std;



void printRepeating(int arr[], int size)
{
    int i, j;
    int hash[size];

    memset(hash,0,sizeof(hash));

    printf(" \n********** REPEATING ELEMENTS ********** \n");
    
     for(int i=0;i<size;i++)
     {
         if(hash[arr[i]]==1)
         {
             cout<<arr[i]<<" ";
         }
         else
         {
             hash[arr[i]]++;
         }
     }



} 
 


int main() {

int a[]={1,2,3,4,5,6,7,8,2,4};

printRepeating(a,10);


   return 0;
}