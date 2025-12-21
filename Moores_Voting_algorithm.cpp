#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> vec = {2,2,1,1,1};
    int n = vec.size();
    
    sort(vec.begin(), vec.end());

    int freq = 0;
    int ans = 0;

    for(int i = 0; i < n; i++){
        if(freq==0){
            ans = vec[i];
        } if (ans==vec[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout << "Majority Element : " << ans << endl;
}
