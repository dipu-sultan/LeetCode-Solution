#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.length()!=t.length())
       {
            return false;
       }

       vector<int>fq(26, 0);
       for(int i=0; i<s.length(); i++)
       {
            char x=s[i];
            char k=t[i];
            fq[x-'a']++;
            fq[k-'a']--;
       }

       for(int x: fq)
       {
            if(x!=0)
            {
                return false;
            }
       }
       return true;
    }
};
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char, int>mp;
        if(s.length()!=t.length())
        {
            return false;
        }
        for(int i=0; i<s.length(); i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(auto p: mp)
        {
            if(p.second!=0) return false;
        }
        return true;
    }
};

/*class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char, int>mp1;
       unordered_map<char, int>mp2;

        for(auto x: s)
        {
            mp1[x]++;
        }
        for(auto x: t)
        {
            mp2[x]++;
        }

        return mp1==mp2;
    }
};
*/

/*
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s==t) return true;
        else return false;

    }
};
*/

int main()
{
    Solution sol;
    string s = "anagram", t = "nagaram";
    if(sol.isAnagram(s,t)==1) cout << "true" << endl;
    else cout << "false" << endl;


}