#include <iostream>

using namespace std;

 long fac(long x)
{
    if(x>1 && x<=10)               //factorial function
      return x*fac(x-1);
      else if (x>10)               //optimization of memory usage (every x!, x>10, ends with 00)
      return 0;
    else 
      return 1;
}

int main()
{
    
    int n;             // n - number of cases 1<=n<=30   
    long num;            // num - numbers to input n<=0<=1000000000
    cin>>n;
for( int i=1; i<=n; i++ )
{
    int units,tens;
    long fac_num;

cin>>num;

fac_num = fac(num);

units = fac_num%10;
tens = fac_num/10%10;

cout<<tens<<" "<<units<<endl;
}
    return 0;
}
