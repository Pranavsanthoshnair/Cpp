#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3};
    vec.push_back(4);
    vec.pop_back();
    for(int i : vec){         //Enhanced for loop(for each loop) - element itself
        cout<<i<<endl;        //Normal for loop - index
    }
    cout<<"size : "<<vec.size() << endl;
    cout<<"front : "<<vec.front()<<endl;
    cout<<"back : "<<vec.back()<<endl;
    cout<<"Used at function : "<<vec.at(1)<<endl;
}