#include <iostream>

using namespace std;

int fib(int n){
if(n<=2)
return n;
return (fib(n-1)+fib(n-2));
}
int main()
{
   int d;
   cin>>d;
   cout<<fib(d);
     
    return 0;
}