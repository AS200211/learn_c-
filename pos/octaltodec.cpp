// Octal to decimal conversion

#include<iostream>
#include<cmath>

using namespace std;



int convertDec(long long num){
    int dec=0;
    int i=0;
    while(num!=0){
        int digit = num%10;
        dec+=digit*pow(8,i);
        i++;
        num/=10;
    }
    return dec;
}

int main(){
    
    int num;
    cout << "Enter Octal number: " ;
    cin >> num;
    
    cout << "Decimal value of " << num << " is " << convertDec(num) << endl;
    
    return 0;
}