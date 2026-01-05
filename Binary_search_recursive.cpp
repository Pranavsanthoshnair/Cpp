#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int tar,int st,int end){
    if(st<=end){
        int mid = st + (end-st)/2;
        if(tar>arr[mid]){
            return binarySearch(arr,tar,mid+1,end);
        }
        else if(tar<arr[mid]){
            return binarySearch(arr,tar,st,mid-1);
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr1 = {-1,0,3,4,5,9,12};
    int tar1 = 5;
    int st = 0,end1 = arr1.size()-1;
    cout << "Index : " << binarySearch(arr1,tar1,st,end1) << endl;

    vector<int> arr2 = {-1,0,3,5,9,12};
    int tar2 = 3;
    int end2 = arr2.size()-1;
    cout<< "Index : " <<binarySearch(arr2,tar2,st,end2) << endl;
}