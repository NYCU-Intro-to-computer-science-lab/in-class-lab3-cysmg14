// 題目 1：高塔建築師 (The Tower Architect) - 20分

#include <iostream>
using namespace std;

    long long factorial(long long n)
    {
        if (n==1)
          return 1;
        else if (n==0)
          return 1;
        else
          return factorial(n-1)*n;
        
    }

    long long sum(long long n)
    {
        if (n==1)
          return 1;
        else if (n==0)
          return 0;
        else
          return sum(n-1)+n;
        
    }
int main() {
    long long n;
    cin >> n;
    cout << factorial(n) << endl << sum(n) <<  endl;

    return 0;
}
