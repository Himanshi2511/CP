#include <iostream>

using namespace std;

int fib(int n){
if(n<=1)
return n;
return (fib(n-1)+fib(n-2));


}
int main()
{
   int d;
   cin>>d;
   cout<<fib(d+1);
     
    return 0;
}