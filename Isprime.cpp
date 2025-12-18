#include <iostream>
using namespace std;

int main(){
    int num;
    int prime;
    cout << "Enter Number :";
    cin >> num;
    for(int i=2;i<num;i++){
        if ( num % i == 0){
            prime = 0;
            break;
        }
        else{
            prime = 1;
            break;
        }
    }
    if (prime == 1){
        cout << "Prime" << endl;
    }
    else if(prime == 0){
        cout << "Not Prime" << endl;
    }
    return 0;

}