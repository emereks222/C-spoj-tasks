#include <iostream>
using namespace std;
int main() {
    int t,v1,v2,avg;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>v1>>v2;
        avg = (2*v1)*v2 / (v1 + v2);
        cout<<avg<<endl;
    }
    

    return 0;
}
