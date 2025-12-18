#include <iostream>
using namespace std;

int main(){
    cout << "Hello World";
    cout << "Hello World" << endl; // for next line
    cout << "Hello World\n";  // \n is faster
    return 0;
}


// Or ( without using namespace )

/*
#include <iostream>

int main(){
    std::cout << "Hello World";
    return 0;
}
*/