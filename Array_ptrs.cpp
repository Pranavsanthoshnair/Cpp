#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};   // array pointer is a constant pointer it is not changeable
    cout << arr << endl;     //pointer
    cout << *arr << endl;    // arr points to first index of array
    return 0;
}