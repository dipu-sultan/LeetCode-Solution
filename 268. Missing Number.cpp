#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
      set<int>s;
      for(int x: nums) {
        s.insert(x);
      }
      for(int i=0; i<=nums.size(); i++)
      {
        if(s.find(i)==s.end())
        {
            return i;
        }
      }
      return 0;

      
      
    }

};
/*
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
      map<int, int>m;

      for(int i=0; i<nums.size();i++)
      {
         m[nums[i]]++;
      }

      for(int i=0; i<=nums.size();i++)
      {
        if(m.count(i)==0)
        {
            return i;
        }
      }

      return 0;
      
    }
    
};
*/



/*
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        std::vector<int>v, p;
        int x=nums.size();
        int res=x;
        for(int i=0; i<x; i++)
        {
            res^=nums[i];
            res^=i;
        }
      return res;
    }


    
};*/
/*class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        std::vector<int>v, p;

        int x=nums.size();
        sort(nums.begin(), nums.end());
        if(nums[x-1]!=x) return x;
        else if(nums[0]!=0) return 0;
        
        for(int i=1; i<x; i++)
        {
            int k=nums[i-1]+1;
            if(nums[i]!=k) return k;
        }

      
      
    }


    
};

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        std::vector<int>v, p;
        sort(nums.begin(), nums.end());
        int x=nums.size();
       // int mxn=*max_element(nums.begin(), nums.end());
        int a=x*(x+1)/2;
        int b=accumulate(nums.begin(), nums.end(), 0);
        return a-b;

      
    }


    
};
*/
int main()
{
    Solution solution;
    vector<int>nums = {0,1};
    cout << solution.missingNumber(nums);
}