#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= i;j++){ // Space Loop
            cout << " ";
        }
        for(int k = 0;k<=n-i;k++){  // Number Loop
            cout << i;
        }
        cout << endl;
    }
}