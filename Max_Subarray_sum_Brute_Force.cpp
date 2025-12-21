#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int size = 7;
    int maxSum = INT_MIN;
    int arr[7] = {3,-4,5,4,-1,7,-8};

    for(int st=0;st<size;st++){
        int currSum=0;
        for(int end=st;end<size;end++){
            currSum += arr[end];
            maxSum = max(currSum,maxSum);
        }
    }
    cout<<"Max Subarray Sum = " << maxSum << endl;
}