#include<iostream>
using namespace std;

int main(){

    int op;
    cout << "You have four option choose any of them."<< endl;
    cout << "1" << endl;
    cout << "2" << endl;
    cout << "3" << endl;
    cout << "4" << endl;
    cin >> op;
    switch (op)
    {
    case 1:
        cout << "option 1 selected." << endl;
        break;
    case 2:
        cout << "option 2 selected." << endl;
        break;
    case 3:
        cout << "option 3 selected." << endl;
        break;
    case 4:
        cout << "option 4 selected." << endl;
        break;
    
    default:
        cout << "Invaild input!" << endl;
        break;
    }
    return 0;
}