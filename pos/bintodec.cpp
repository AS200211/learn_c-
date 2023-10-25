// Binary to decimal conversion

#include<iostream>
#include<cmath>

using namespace std;


int convert(long long num){
    int dec=0;
    int i=0;
    while(num!=0){
        int digit = num%10;
        dec+=digit*pow(2,i);
        i++;
        num/=10;
    }
    return dec;
}

int main(){
    
    int num;
    cout << "Enter a number: " ;
    cin >> num;
    
    cout << "Decimal value of " << num << " is " << convert(num) << endl;
    
    return 0;
}