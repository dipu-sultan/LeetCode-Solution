#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<pair<int, int>>mp;
        unordered_map<int, int>m;
        vector<int>v;
        for(int x: nums)
        {
            m[x]++;
        }

        for(auto i=m.begin(); i!=m.end(); i++)
        {
            if(i->second==2)
            {
                mp.push_back({i->first, i->second});
            }
        }
        sort(mp.begin(), mp.end());

        for(int i=0; i<mp.size(); i++)
        {
            v.push_back(mp[i].first);
        }

        return v;

    }    
};

/*
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int>mp;
        priority_queue<int>pq, v;
      
        for(auto x: nums)
        {
            pq.push(x);
        }
        int fe=pq.top();
        pq.pop()
        while(!pq)
        {
            int se=pq.top();
            if(fe==se)
            {
                v.push(se);
                pq.pop()
            }
            else
            {
                fi=se;
                pq.pop();
            }
        }
        return v;
    }
};

*/

/*
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

*/
int main()
{
    Solution sol;

    vector<int>x,v={4,3,2,7,8,2,3,1};
    x=sol.findDuplicates(v);
    for(int i=0; i<x.size(); i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}