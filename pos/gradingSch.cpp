#include<iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks<0 || marks>100){
        cout << "Invaild marks"<<endl;
    }
    else if (marks<50){
        cout << "Fail" << endl;
    }
    else if (marks>=50 && marks<60){
        cout << "D" << endl;
    }
    else if (marks>=60 && marks<70){
        cout << "C" << endl;
    }
    else if (marks>=70 && marks<80){
        cout << "B" << endl;
    }
    else if (marks>=80 && marks<90){
        cout << "A" << endl;
    }

    else{
        cout << "A+" << endl;
    }
    return 0;
}