#include<iostream>
using namespace std;

void changeA(int &b){     // Pass by reference through alias
    b = 20;               // Here b is an alias to a
}
int main(){
    int a = 10;
    changeA(a);
    cout << a << endl;    //Output - 20
}