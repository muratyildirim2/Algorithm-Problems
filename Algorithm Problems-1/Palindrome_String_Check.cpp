/**  **  
  * ** *  Author : Murat Yıldırım
  * ** */
 
#include <iostream>
#include<string.h>

using namespace std;


 
void solve()
{
 char string1[50];                   //max length of string = 50
    int i, length;
    int flag = 0;
    
    cout << "Enter a string: "; cin >> string1;
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){        // For example XYZYX first compare is index 0 and index 4 after that index 1 and index 3.And 3th compare is index 2 and index 2.
            flag = 1;
            break;
   }
}
    
    if (flag) {
        cout << string1 << " is not a palindrome" << endl; 
    }    
    else {
        cout << string1 << " is a palindrome" << endl; 
    }
    }


 
int main()
{
solve();

}      
