#include <iostream>
using namespace std;
#define endl "\n"

int main() {
    int number = 0;
    cin>>number; 

    string word[number]; 
    for(int i = 0; i<number; i++) {
        cin>>word[i];
    }

    for(int i = 0; i<number; i++) {    
        if (word[i].length()<=10) {    
            cout<<word[i]<<endl;
        } else {
        cout<<word[i][0]<< word[i].length() - 2 <<word[i][word[i].length()-1]<<endl; 
        }
    }
}

