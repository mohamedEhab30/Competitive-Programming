#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int maxSize = 100009;

int vis[maxSize],head[maxSize],vid=0,edgeCount;
struct edgeData{
    int nxt,to,cost;
}edges[maxSize];

// Graph with uncommon representation
void init() //graph initialization
{
    memset(head,-1,sizeof(head));
    memset(vis,0,sizeof(vis));
    edgeCount=0;
    ++vid;
}
void addEdge(int from,int to,int cost) //add edge in directed graph
{
    edges[edgeCount].to = to;
    edges[edgeCount].cost = cost;
    edges[edgeCount].nxt=head[from];
    head[from] = edgeCount++;
}
void addBiEdge(int u,int v,int cost)     //add edge in undirected graph
{
    addEdge(u,v,cost);
    addEdge(v,u,cost);
}
void nodeAdjacents(int node)  //all vertices connected with certain vertix
{
    cout<<"Node "<<node<<"connected with :";
    for(int e=head[node];~e;e=edges[e].nxt)
    {
        cout<<edges[e].to<<" ";
    }
    cout<<endl;
}
void DFS(int node) //depth first search
{
    vis[node]=vid;
    for(int e=head[node];~e;e=edges[e].nxt)
    {
        int v = edges[e].to;
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
        for(int e=head[node];~e;e=edges[e].nxt)
        {
            int v=edges[e].to;
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
    init();
    //Code
}
