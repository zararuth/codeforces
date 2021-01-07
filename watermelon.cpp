#include <iostream>
#define c cout<<
using namespace std;

int main() {
    int weight = 0;
    cin>>weight; 

    if(weight == 2) {
        c"NO"<<endl;
    } else if(weight % 2 == 0) {
        c"YES"<<endl;
    }  else {
        c"NO"<<endl;
    }
}