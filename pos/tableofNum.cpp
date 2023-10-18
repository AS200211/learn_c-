#include<iostream>
using namespace std;

void multiple(int a){
    for (int i=1;i<=10;i++){
        cout << a << "*" << i << "=" << a*i << endl;
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    multiple(n);

    return 0;
}