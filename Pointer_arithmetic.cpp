#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *p = &a;
    cout << p << endl;
    // Pointer arithmetic:
    // p++ moves the pointer to the next integer location
    // Since p is an int pointer, it increases by sizeof(int) (usually 4 bytes)
    p++;
    cout << p << endl;
    // p-- moves the pointer back to the previous integer location
    // Again, movement is by sizeof(int)
    p--;
    cout << p << endl;
    
    int *ptr;
    int *ptr1 = ptr + 2;

    cout << ptr1 - ptr << endl;   // Blocks between both pointers
    cout << (ptr<ptr1) << endl;

}
