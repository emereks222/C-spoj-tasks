#include <iostream>
using namespace std;

int main() {
   int t,n,nums,x=0;
  cin>>t; //number of tests
  for(int i=1; i<=t; i++){
   cin>>n; // how many numbers to add
     x= 0;
       for(int i=1;i<=n; i++)
       {
          cin>>nums; // input numbers
          x += nums;
       }
        cout<<x;
  }
    return 0;
}
