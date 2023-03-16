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
/*class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<pair<int,int>>x;

        for(int i=0;i<(int)nums.size();i++) 
        {
            x.push_back({nums[i],i});
        }
        
        sort(x.begin(),x.end());

        vector<int>ans;
        int i=0,j=(int)nums.size()-1;

        while(i<j)
        {
            int a=x[i].first+x[j].first;
            if(a==target)
            {
                ans.push_back(x[i].second);
                ans.push_back(x[j].second);

                return ans;
            }
            if(a>target)
            {
                j--;
            }
            else i++;
        }

        return ans;
    }
};*/
int main()
{
    Solution sol;
    vector<int>v = {3,2,4};
    int target=6;
    vector<int> x= sol.twoSum(v, target);
    cout << x[0] << " " << x[1] << endl;

    return 0;
}