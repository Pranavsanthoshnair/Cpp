#include <iostream>
using namespace std;

int main(){
    int marks[5] = {95,99,86,100,93};
    //int price[] = {95,99,86,100,93}; // without size initialization
    for(int i = 0;i<5;i++){
        cout<<i<<":"<<marks[i]<<endl;
    }
}