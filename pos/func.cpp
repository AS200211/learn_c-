#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // String concatination - "strcat"
    char st1[40] = "PrepInsta ";
    const char *st2 = "Hello";
    strcat(st1, st2);
    cout << st1 << endl;


    // String Length - "strlen"
    int a = strlen(st1);
    cout << "Length of the st1 after concatination is: " << a << endl;

    // String Copy - "strcpy"
    char st3[40];
    strcpy(st3,st2);
    cout << st3 << endl;

    // Reverse the string - "strrev"
    char st4[20];
    cout << "Enter string: ";
    cin.getline(st4, 20);
    cout << "String is: " << st4 << endl;
    char temp;
    int length = strlen(st4);
    for (int i=0,j=length-1;i<j;i++,j--){
        temp = st4[i];
        st4[i] = st4[j];
        st4[j] = temp;
    }
    cout << st4 << endl;


    return 0;
}