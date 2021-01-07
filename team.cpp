#include <iostream>
#define endl "\n"
using namespace std;

int main() {
    int n;
    cin>>n;

    int p[n], v[n], t[n];
    int sum; 

    for(int i = 0; i<n; i++) {
        cin>>p[i]>>v[i]>>t[i];
        
    }

    for(int i = 0; i<n; i++) {
        if(p[i]+v[i]+t[i]>=2) {
            sum++;
        }
    }
    cout<<sum; 

}