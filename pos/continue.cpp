#include<iostream>
using namespace std;

int main(){
    int low,high;
    cout << "Enter the lower value: ";
    cin >> low;
    cout << "Enter the higher value: ";
    cin >> high;
    while (low<high){
        
        if (low%5==0){
            low++;
            continue;;
        }
        cout << low << " ";
        low++;
    }
    cout << endl;
    return 0;
}