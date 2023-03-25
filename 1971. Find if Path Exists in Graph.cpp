//1: Breadth First Search (BFS)
#include<bits/stdc++.h>
using namespace std;
#define D(x)            cerr << __LINE__ << ": " #x " = " << (x) << '\n'
#define DD(x, y)        cerr << __LINE__ << ": " #x " = " << (x) << ", " #y " = " << (y) << '\n'
#define DDD(x, y, z)    cerr << __LINE__ << ": " #x " = " << (x) << ", " #y " = " << (y) << ",  " #z " = " << (z) << '\n'
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        unordered_map<int, vector<int>>g;
        for(auto& x: edges)
        {
            int u=x[0], v=x[1];
            DD(u,v);
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector<bool>track(n);
        track[source]=true;
        queue<int>bfsq;
        bfsq.push(source);

        while (!bfsq.empty())
        {
            int cur=bfsq.front();
            bfsq.pop();

            if(cur==destination)
            {
                return true;
            }

            for(auto& x: g[cur])
            {
                if(track[x]==false)
                {
                    track[x]=true;
                    bfsq.push(x);
                }
            }
        }
        return false;     
        
    }
};

int main()
{
    Solution sol;

    vector<vector<int>>edges={{0,1},{0,2},{3,5},{5,4},{4,3}};
    int n=6, source=0, destination=5;
    cout << sol.validPath(n, edges, source, destination) << endl;
}