#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int climbStair(int n)
    {
        if(n==1) return 1;
        if(n==2) return 2;

        return climbStair(n-1)+climbStair(n-2);

    }
};

int main()
{
    Solution sol;

    int x=4;

    cout << sol.climbStair(x) << endl;
}