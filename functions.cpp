#include <iostream>
using namespace std;

void printHello(){
    cout << "Hello" << endl;
}

int sum(int a,int b){
    int s=a+b;
    return s;
}

int main(){
    printHello();
    cout<<sum(10,5)<<endl;
}