
#include<bits/stdc++.h>
using namespace std;
#define D(x)            cerr << __LINE__ << ": " #x " = " << (x) << '\n'
#define DD(x, y)        cerr << __LINE__ << ": " #x " = " << (x) << ", " #y " = " << (y) << '\n'
#define DDD(x, y, z)    cerr << __LINE__ << ": " #x " = " << (x) << ", " #y " = " << (y) << ",  " #z " = " << (z) << '\n'
//Breadth First Search (BFS)
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        unordered_map<int, vector<int>>g;
        for(auto& x: edges)
        {
            int u=x[0], v=x[1];
    
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


// Depth First Search (DFS): Iterative
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        unordered_map<int, vector<int>>g;
        for(auto& x: edges)
        {
            int u=x[0], v=x[1];
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector<bool>track(n);
        track[source]=true;
        stack<int>stq;
        stq.push(source);

        while (!stq.empty())
        {
            int curN=stq.top();
            stq.pop();

            if(curN==destination)
            {
                return true;
            }
            // Add all unvisited neighbors of the current node to 'stq' 
            // and mark them as visited.
            for(auto& NxN: g[curN])
            {
                if(track[NxN]==false)
                {
                    track[NxN]=true;
                    stq.push(NxN);
                }
            }
        }
        return false;     
        
    }
};



/*
//Depth First Search (DFS): Recursive
class Solution {
public:


    bool DFS(unordered_map<int, vector<int>>& g, vector<bool>& track, int cur,int des)
    {
        if(cur==des)
        {
            return true;
        }

        if(track[cur]==false)
        {
            track[cur]=true;


            for(auto& x: g[cur])
            {
                if(DFS(g, track, x, des))
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        unordered_map<int, vector<int>>g;
        for(auto& x: edges)
        {
            int u=x[0], v=x[1];
           // DD(u,v);
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector<bool>track(n);

        return DFS(g, track, source, destination);
    }
};
*/
int main()
{
    Solution sol;

    vector<vector<int>>edges={{0,1},{0,2},{3,5},{5,4},{4,3}};
    int n=6, source=0, destination=5;
    cout << sol.validPath(n, edges, source, destination) << endl;
}