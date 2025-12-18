#include <iostream>
using namespace std;

int main(){
    int age = 19;
    char grade = 'S';
    float CGPA = 9.50;
    bool isSingle = true;
    double currentTime = 7.34;
    int ascii_grade = grade; //implicit conversion
    int random = int(CGPA); // explicit conversion

    cout << "Name : "<< "Pranav S Nair"<< endl;
    cout << "Age : "<< age << endl;
    cout << "Grade : "<<grade << endl;
    cout << "CGPA : "<< CGPA << endl;
    cout << "Status : "<< isSingle << "\t(1 - Single, 0 - Not Single)" << endl;
    cout << "Time : " << currentTime << endl;
    cout << "Ascii of Grade : "<< ascii_grade << endl;
    cout << "Rounded GPA : "<< random << endl;

    return 0;
}