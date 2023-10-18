#include<iostream>
using namespace std;

int add(int x,int y){
    return x+y;
}


int sub(int x,int y){
    return x-y;
}


int mul(int x,int y){
    return x*y;
}


int divi(int x,int y){
    return x/y;
}

int main(){
    int a,b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Addition of a and b is: " <<add(a,b) << endl;
    cout << "Substraction of a and b is: " <<sub(a,b)<< endl;
    cout << "Multiplication of a and b is: " <<mul(a,b)<< endl;
    cout << "Divide of a and b is: " << divi(a,b)<<  endl;
    return 0;
}
