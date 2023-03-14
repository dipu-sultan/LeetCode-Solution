#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       int n=nums.size();
       vector<int>v;
       unordered_map<int, bool>mp;
       for(int x: nums)
       {
            mp[x]=true;
       }
       for(int i=1; i<=n; i++)
       {
            if(mp.find(i)==mp.end())
            {
                v.push_back(i);
            }
       }
       
        return v;

    }
};

/*class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int>s(nums.begin(), nums.end());
        int n=nums.size();
        vector<int>vv;
        map<int,int>mp;
       

        for(int i=1; i<=n; i++)
        {
            if(s.count(i)==0)
            {
                vv.push_back(i);
            }
        }
        return vv;

    }
};
*/
/*class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>vv;
        map<int,int>mp;
       for (int i=0; i<n; i++)
       {
        mp[nums[i]]++;
       }

        for(int i=1; i<=n; i++)
        {
            if(mp.count(i)==0)
            {
                vv.push_back(i);
            }
        }
        return vv;

    }
};
*/
int main()
{
    Solution solution;
    vector<int>nums = {4,3,2,7,8,2,3,1};
    vector<int>mn=solution.findDisappearedNumbers(nums);

    for(int x: mn)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}