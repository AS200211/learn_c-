#include<iostream>
using namespace std;

int main(){
    int low,high;
    cout << "Enter the lower value: ";
    cin >> low;
    cout << "Enter the higher value: ";
    cin >> high;
    while (low<high){
        cout << low << " ";
        if (low%13==0){
            break;
        }
        
        low++;
    }
    cout << endl;
    return 0;
}