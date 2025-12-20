#include <iostream>
using namespace std;

int binaryToDec(int bin){
    int ans = 0,pow = 1;
    while(bin>0){
        int rem = bin % 10;
        ans += rem * pow;
        bin /= 10;
        pow *= 2;
    }
    return ans;
}

int main(){
    cout << binaryToDec(101) << endl;
}