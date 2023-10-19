#include<iostream>
using namespace std;

int main(){

    int n,i;
    cout << "Enter the number of element in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the element of the array." << endl;
    for (i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "Element of the array: ";
    for (i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}