#include <iostream>
using namespace std;

int main() {
    int t, xa,ya,xb,yb,xc,yc; 
    cin>>t;
    for (int i=1; i<=t; i++){
       
        cin>>xa>>ya>>xb>>yb>>xc>>yc;
       
        if((xb - xa) * (yc - ya)  == (xc - xa) * (yb - ya))
           {
           cout<<"TAK"<<endl;
           }
           else
           {
            cout<<"NIE"<<endl; 
           }
    }
    return 0;
}
