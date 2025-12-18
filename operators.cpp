#include<iostream>
using namespace std;

int main(){
    int a = 5, b = 2;
    int sum = a+b;
    int diff = a-b;
    int product = a*b;
    int quotient = a/float(b);
    int modulo = a%b;

    cout << "Sum : "<< sum << endl;
    cout << "Difference : "<< diff << endl;
    cout << "Product : "<< product << endl;
    cout << "Quotient : "<< quotient << endl;
    cout << "Modulo : "<< modulo << endl;
    cout << (a>b) << endl;
    cout << ((3>1) || (5<3)) << endl;

    return 0;
}