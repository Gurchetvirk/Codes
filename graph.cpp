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
int main()
{
    int V=5;
    vector<int> graph[V];
    addEdge(graph,0,1);
    addEdge(graph,0,3);
    addEdge(graph,1,1);
    addEdge(graph,1,4);
    addEdge(graph,2,4);
    addEdge(graph,4,1);
    show(graph,V);
    return 0;
}
