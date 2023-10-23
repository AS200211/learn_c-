// Reverse a number

#include<iostream>
using namespace std;



int main(){
    
    int num,n=0;
    cout << "Enter a number: " ;
    cin >> num;
    
    while (num>0){
        n = n * 10 + num%10;
        num /= 10;
    }
    cout << n << endl;
    return 0;
}
