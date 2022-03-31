#include <iostream>
using namespace std;
 
long long gcd(long long a, long long b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
  
// Driver program to test above function
int main()
{
    int a = 10, b = 15;
    cout << "LCM(" << a << ", " << b << ") = " << lcm(a, b) << endl;
    return 0;
}