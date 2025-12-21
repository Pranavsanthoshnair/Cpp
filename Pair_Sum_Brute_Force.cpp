#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,7,11,15};
    int n = 4;
    int target;
    cout<<"Enter Target : ";
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"i:"<<i<<" "<<"element 1: "<<arr[i]<<endl;
                cout<<"j:"<<j<<" "<<"element 2: "<<arr[j]<<endl;
            }
        }
    }
}