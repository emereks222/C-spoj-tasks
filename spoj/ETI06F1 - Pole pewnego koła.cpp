#include <iostream>
#include <iomanip> //setprecision
using namespace std;
int main() {
    double r,d,x;
    while(cin>>r>>d)
    {
        x = (r*r - (d/4)*d)*3.141592654;
        cout<<fixed<<setprecision(2)<<x;
        
        cout<<endl;
    }
    

    return 0;
}
