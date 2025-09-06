/*Check whether a given number is a palindrome or not. (Example: 121 is
palindrome, 123 is not.) */

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main (){

    int num;

    cout<<"enter a number to check for palindrome:";
    cin>>num;

    int original = num; // do this or else num will become zero because of the while loop
    int reversed=0;

    while(num>0){
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
        
    }
    cout<<reversed;

    if(num == reversed){
        cout<<"number is a palindrome";
    }
    else{
        cout<<"number is not a palindrome";
    }


/* 
USING A AN ARRAY comparing front and back till the middle :

use <vector> so you can find the length of the array using num.length

use a ispalindrome variable 

for(int i = 0;i<n/2;i++){
    if(num[i]!= num[n - i - 1]){
        ispalindrome=false;
        break;
    }
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    string num;
    cout << "Enter a number to check for palindrome: ";
    cin >> num;

    int n = num.length();
    bool isPalindrome = true;

 for(int i = 0;i<n/2;i++){
    if(num[i]!= num[n - i - 1]){
        ispalindrome=false;
        break;
    }
}
if(ispalindrome){
    cout<<"yes its a palindrome ";
}

else{
    cout<<"not palindrome";
}


*/

 return 0;

}


