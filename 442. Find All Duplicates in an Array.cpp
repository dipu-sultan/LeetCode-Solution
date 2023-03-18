#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int>mp;
        vector<int>v;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        for(auto x: mp)
        {
            if(x.second==2)
            {
                v.push_back(x.first);
            }
        }
        return v;
    }
};

int main()
{
    Solution sol;

    vector<int>v={4,3,2,7,8,2,3,1};
    sol.findDuplicates(v);
}