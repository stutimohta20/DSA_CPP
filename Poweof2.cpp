//Power of 2 leetcode problem
//Brute Force Approach

#include <bits/stdc++.h>
using namespace std;
bool powerOfTwo(int n)
{
    while(n % 2 == 0)
        n /= 2;
    return (n == 1);
}
int main()
{
    int n = 16;
    if(powerOfTwo(n))
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
    return 0;
