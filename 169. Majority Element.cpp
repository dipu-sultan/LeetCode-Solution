#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int>mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int mx=nums[0];
        for(const auto& p: mp)
        {

            if(p.second>mp[mx])
            {

                mx=p.first;
            }
           
        }
        return mx;
    }
};

int main()
{
    Solution sol;
    vector<int>v={1, 2, 2, 1, 1, 2, 2};
    cout << sol.majorityElement(v) << endl;
    return 0;
}