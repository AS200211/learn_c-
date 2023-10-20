#include<iostream>
using namespace std;

int main(){

    int m,n,i,j;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    int arr[m][n];
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }

    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}