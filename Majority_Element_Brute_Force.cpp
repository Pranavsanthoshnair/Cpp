#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {2,2,1,1,1};
    int n = vec.size();

    for(int val : vec){
        int freq = 0;
        for(int el : vec){
            if(val == el){
                freq++;
            }
        }
        if(freq > n/2){
            cout<<"Majority Element : "<<val<<endl;
            break;
        }
    }
}
