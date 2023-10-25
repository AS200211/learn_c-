//  decimal to Binary conversion

#include<iostream>
#include<cmath>

using namespace std;


int convertBin(int num){
    int bin=0;
    int i=1;
    while(num!=0){
        int digit = num%2;
        bin+=digit*i;
        i*=10;
        num/=2;
    }
    return bin;
}

int main(){
    
    int num;
    cout << "Enter a number: " ;
    cin >> num;
    
    cout << "Binary value of " << num << " is " << convertBin(num) << endl;
    
    return 0;
}