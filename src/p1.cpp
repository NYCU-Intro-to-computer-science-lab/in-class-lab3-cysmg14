// 題目 1：高塔建築師 (The Tower Architect) - 20分

#include <iostream>
using namespace std;

int main() {
    long long n;
    long long factorial(int n);
    {
        if (n==1)
          return 1;
        else
          return factorial(n-1)*n;
        
    }

    long long sum(int n);
    {
        if (n==1)
          return 1;
        else
          return sum(n-1)+n;
        
    }

    cin >> n;
    cout << factorial(n) << endl << sum(n) <<  endl;

    return 0;
}
