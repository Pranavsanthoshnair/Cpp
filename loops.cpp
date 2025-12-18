#include <iostream>
using namespace std;

int main(){
    int n = 1;
    cout << "While Loop" << endl;
    while(n <= 5){
        cout << n << ' ';
        n++;
    }
    cout << "\nFor Loop" << endl;
    for (n = 1 ; n <= 5 ; n++){
        cout << n << ' ';
    }
    return 0;
}