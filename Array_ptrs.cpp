#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};   // array pointer is a constant pointer it is not changeable
    cout << arr << endl;     //pointer
    cout << *arr << endl;    // arr points to first index of array
    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;
    cout << *(arr+3) << endl;
    cout << *(arr+4) << endl;
    return 0;
}