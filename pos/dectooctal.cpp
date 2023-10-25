//  decimal to Octal conversion

#include<iostream>
#include<cmath>

using namespace std;


int convertOctal(int num){
    int bin=0;
    int i=1;
    while(num!=0){
        int digit = num%8;
        bin+=digit*i;
        i*=10;
        num/=8;
    }
    return bin;
}

int main(){
    
    int num;
    cout << "Enter a number: " ;
    cin >> num;
    
    cout << "Binary value of " << num << " is " << convertOctal(num) << endl;
    
    return 0;
}