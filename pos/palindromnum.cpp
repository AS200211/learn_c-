// Check if a number is Palindrom or not

#include <iostream>
using namespace std;



int main(){
    
    int num,n=0;
    cout << "Enter a number: " ;
    cin >> num;
    int b = num;
    
    while (num>0){
        n = n * 10 + num%10;
        num /= 10;
    }
    if (b==n){
        cout << "Palindrom number" << endl;
    }
    else{
        cout << "NOt a Palindrome number" << endl;
    }
    return 0;
}
