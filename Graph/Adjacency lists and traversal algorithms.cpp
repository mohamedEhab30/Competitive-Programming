#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int maxSize = 100009;
vector<int> adj[maxSize];
int vis[maxSize],vid=0;

// Graph with adjacency list
void init() //graph initialization
{
    for(int i=0;i<maxSize;i++)
        adj[i].clear();
    memset(vis,0,sizeof(vis));
    ++vid;
}

void addEdge(int from,int to) //add edge in directed graph
{
    adj[from].push_back(to);
}

void addBiEdge(int u,int v)     //add edge in undirected graph
{
    addEdge(u,v);
    addEdge(v,u);
}

void nodeAdjacents(int node)  //all vertices connected with certain vertix
{
    cout<<"Node "<<node<<"connected with :";
    for(int i=0;i<adj[node].size();i++)
    {
        cout<<" "<<adj[node][i];
    }
    cout<<endl;
}

void DFS(int node) //depth first search
{
    vis[node]=vid;
    for(int i=0;i<adj[node].size();i++)
    {
        int v = adj[node][i];
        if(vis[v]!=vid)
            DFS(v);
    }
}

int connectedComponents(int n) //count number of connected components
{
    int res=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]!=vid)
        {
            DFS(i);
            res++;
        }
    }
    return res;
}

vector<int> BFS(int src) //Breadth first search and shortest path from source node to all other nodes
{
    queue<pair<int,int>>q;
    vector<int>distance(maxSize,-1);
    q.push({src,0});
    distance[src]=0;
    while(!q.empty())
    {
        pair<int,int> p = q.front();
        q.pop();
        int node=p.first,dis=p.second;
        for(int i=0;i<adj[node].size();i++)
        {
            int v=adj[node][i];
            if(distance[v]==-1)
            {
                q.push({v,dis+1});
                distance[v]=dis+1;
            }
        }
    }
    return distance;
}

int main()
{
    //Code
}
