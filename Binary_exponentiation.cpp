#include<iostream>
using namespace std;

// By converting n to binary, we reduce the loop runs from n times to log2(n) times


int main(){
    int n = 5;
    int x = 3;
    long bf = n;
    double ans = 1;
    while(bf>0){
        if(bf%2==1){
            ans *= x;
        }
        x*=x;
        bf /= 2;
    }
    cout << "Answer : " << ans << endl;
}