#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x=nums.size();
        for(int i=0; i<x; i++)
        {
            for(int j=i+1; j<x; j++)
            {
                if(target==nums[i]+nums[j])
                return {i,j}; 
            }
        }

        return {};
    }
};

int main()
{
    Solution sol;
    vector<int>v = {3,2,4};
    int target=6;
    vector<int> x= sol.twoSum(v, target);
    cout << x[0] << " " << x[1] << endl;

    return 0;
}