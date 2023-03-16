#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int n) {
        int ans=0, x=n;

        while(x!=0)
        {

            if(ans > INT_MAX/10 || ans<INT_MIN/10)
            {
                return 0;
            }
            int cut=x%10;
            x/=10;
            ans=ans*10+cut;
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    int x=120;

    cout<< sol.reverse(x) << endl;
}