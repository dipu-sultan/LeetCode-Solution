#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int singleNumber(vector<int>& x)
    {
        vector<int>v;
        for(int n: x)
        {
            auto it=find(v.begin(), v.end(), n);
            if(it!=v.end())
            {
                v.erase(it);
            }
            else{
                v.push_back(n);
            }
        }
        return v.front();
    }
};

/*class Solution {
public:
    int singleNumber(vector<int>&nums){

        unordered_set<int>us;
        for(int i=0; i<nums.size(); i++)
        {
            if(us.find(nums[i])==us.end())
            {
                us.insert(nums[i]);
            }
            else{
                us.erase(nums[i]);
            }
        }
        return  *us.begin();

    }
};*/

/*class Solution {
public:
    int singleNumber(vector<int>&nums){

        map<int, int>m;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }

        for(auto i=m.begin(); i!=m.end(); i++)
        {
            if(i->second==1)
            {
                
                return i->first;
            }
        }
        return 0;

    }
};*/

/*class Solution {
public:
    int singleNumber(vector<int>&nums){

        map<int, int>m;// unordered_map instead of map is faster here
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }

        for(const auto& [x, fq]: m)
        {
            if(fq==1)
            {
                
                return x;
            }
        }
        return 0;

    }
};*/

/*class Solution {
public:
    int singleNumber(vector<int>&v)
    {
        for(int x: v)
        {
            if(count(v.begin(), v.end(), x)==1)
            {
                return x;
            }

        }
        return 0;
    }
};
*/

/*class Solution {
public:
    int singleNumber(vector<int>&nums){

        map<int, int>m;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }

        for(auto& pair: m)
        {
            if(pair.second==1)
            {
                int k=pair.first;
                return k;
            }
        }
        return 0;

    }
};
*/
int main()
{
    Solution sol;
    vector<int>v = {4,1,2,1,2};
    cout << sol.singleNumber(v) << endl;

    return 0;
}