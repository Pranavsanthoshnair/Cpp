#include <iostream>
using namespace std;

int main(){
    int nums[]={5,15,7,1,3};
    int size = 5;
    int smallest=nums[0],largest=nums[0];
    for(int i = 0;i<size;i++){
        smallest = min(nums[i],smallest);
        largest = max(nums[i],largest);
    }
    cout<<"Smallest : "<<smallest<<endl;
    cout<<"Largest : "<<largest<<endl;
}