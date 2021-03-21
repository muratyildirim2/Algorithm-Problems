#include<bits/stdc++.h>

using namespace std;

void solution1(int a[],int n)
{

int total=((n+2)*(n+1))/2;
int sum_of_elements=0;

for(int i=0;i<n;i++)
sum_of_elements+=a[i];

cout<<"Solution 1 : Missing number is : "<<total-sum_of_elements<<endl;


    
}

void solution2(int a[],int n)
{

    int total=((n+2)*(n+1))/2;
int sum_of_elements=0;

for(int i=0;i<n;i++){

total-=a[i];

}

cout<<"Solution 2 : Missing number is : "<<total<<endl;
    
}

void solution3(int a[],int n)
{
     int x1 = a[0];
 

    int x2 = 1;
 
    for (int i = 1; i < n; i++)
        x1 = x1 ^ a[i];
 
    for (int i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;

        int answer=x1^x2;

        cout<<"Solution 3 : Missing number is : "<<answer<<endl;
    
}


int main() {

int a[]= {1,2,3,4,5,6,7,9,10,11,12,13};   // Time COmplexity is O(n) for all solutions.

solution1(a,12);
solution2(a,12);
solution3(a,12);

   return 0;
}