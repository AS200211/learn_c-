#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter the value of First number: " ;
    cin >> a;
    cout << "Enter the value of second number: " ;
    cin >> b;
    if (a==b){
        cout << "Both are equal" << endl;
    }
    else if (a>b){
        cout << "A is greater" << endl;
    }
    else{
        cout << "B is greater" << endl;
    }
}