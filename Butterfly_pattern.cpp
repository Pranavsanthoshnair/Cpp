#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number : ";
    cin >> n;

    for(int i = 1; i <= n; i++) {  // Top
        for(int j = 1; j <= i; j++) // l
            cout << "*";
        for(int j = 1; j <= 2*(n-i); j++) // m
            cout << " ";
        for(int j = 1; j <= i; j++) // r
            cout << "*";
        cout << endl;
    }

    for(int i = n; i >= 1; i--) {  // Bottom
        for(int j = 1; j <= i; j++) // l
            cout << "*";
        for(int j = 1; j <= 2*(n-i); j++) // m
            cout << " ";
        for(int j = 1; j <= i; j++) // r
            cout << "*";
        cout << endl;
    }

    return 0;
}
