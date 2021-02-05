#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> graph[],int u,int v)
{
    graph[u].push_back(v);
}
void show(vector<int> graph[],int V)
{
    for(int i=0;i<V;i++)
    {
        cout<<endl<<"Adjacency list of "<<i;
        for(int j=0;j<graph[i].size();j++)
        {
            cout<<"->"<<graph[i][j];
        }
    }
}
void bfs(vector<int> graph[],int start,int V)
{
    bool visited[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    queue<int> q;
    q.push(start);
    int u=q.front();
    visited[u]=true;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int i=0;i<graph[u].size();i++)
        {
            if(visited[graph[u][i]]==false)
            {
                visited[graph[u][i]]=true;
                q.push(graph[u][i]);
            }
        }
    }
}
int main()
{
    int V=4;
    vector<int> graph[V];
    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,1,2);
    addEdge(graph,2,0);
    addEdge(graph,2,3);
    addEdge(graph,3,3);
    show(graph,V);
    cout<<endl;
    bfs(graph,2,V);
    return 0;
}
