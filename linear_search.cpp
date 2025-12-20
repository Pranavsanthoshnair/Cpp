#include <iostream>
using namespace std;

int main(){
    int arr[] = {10,6,2,4,9};
    int size=5;
    int target;
    int i;
    cout<<"Enter Target : ";
    cin>>target;
    for(i=0;i<size;i++){
        if(arr[i]==target){
            cout<<"Index : "<<i<<endl;
            return 0;
        }
    }
    return -1;
}