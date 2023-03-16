#include<bits/stdc++.h>

using namespace std;
/*
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       
       int x=nums.size();
       int L=1, R=x-1, M=0;
       int cnt=0;
       while(L<R)
       {
            M=L+(R-L)/2;

            cnt=0;
            for(int i=0; i<x; i++)
            {
                if(nums[i]<=M) 
                {
                    cnt++;
                }
            }
            if(cnt>M)
            {
                R=M;
            }
            else
            {
                L=M+1;
            }

       }
       return L;
       
    }
};

*/
/*
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       
       int x=nums.front();
       int i=0;
       while(nums[i]!=-1)
       {
         x=nums[i];
         nums[i]=-1;
         i=x;
       }
       return x;
    }
};
*/


/*
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int>mp;
        int x=nums.size();
        for(auto i: nums)
        {

            mp[i]++;
            if(mp[i]>1)
            {
                return i;
            }
           

        }

        return 0;
    }
};
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int>mp;
        int x=nums.size();
        for(auto i: nums)
        {
           
            mp[i]++;
        }
        for(auto p: mp)
        {
            if(p.second>=2)
            {
                return p.first;
            }
        }

        return 0;
    }
};

/*
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, bool>mp;
        int x=nums.size();
        for(auto i: nums)
        {
            if(mp[i]==true)
            {
                return i;
            }
            else
            {
                mp[i]=true;
            }

        }

        return 0;
    }
};
*/

/*
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        bool f=false;
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]==nums[i-1])
            {
                return nums[i];
            }
        }
        return 0;
    }
};
*/

int main()
{
    Solution sol;

    vector<int>v={2,1,3,4,2};//3,1,3,4,2
    cout<<sol.findDuplicate(v) << endl;
}