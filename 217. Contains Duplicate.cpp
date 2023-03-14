#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        int k = nums.size();
        std::set<int> s;
        for (int i : nums) {
            s.insert(i);
        }
        int x = s.size();
        if (x != k) {
            return true;
        } else {
            return false;
        }
    }
};

/*class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        vector<int>v;
        v=nums;
        sort(v.begin(), v.end());
        bool f=false;
        for(int i=0; i<v.size()-1; i++)
        {
            if(v[i]==v[i+1]) f=true;
        }
        if(f==true) 
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};*/

/*class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        vector<int>v;
        v=nums;
        sort(v.begin(), v.end());
        bool f=false;
        for(int i=0; i<v.size()-1; i++)
        {
            if(v[i]==v[i+1]) f=true;
        }
        if(f==true) 
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};*/
int main() {
    Solution solution;
    std::vector<int> nums = {1,1,1,3,3,4,3,2,4,2};
    if (solution.containsDuplicate(nums)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    return 0;
}
