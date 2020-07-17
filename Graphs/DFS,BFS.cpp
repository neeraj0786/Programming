#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    list<int> *adj;
    public:
    Graph(int V);
    void DFSUTIL(int V,vector<bool> &unvisited);
    void BFS(int s);
    void addEdge(int v,int u);
    void DFS(int V);
};

Graph :: Graph(int V)
{
    this->V=V;
    adj= new list<int>[V];
}
void Graph::DFS(int V)
{
    vector<bool> unvisited(V,false);
    DFSUTIL(V,unvisited);
}
void Graph ::DFSUTIL(int v,vector<bool> &unvisited)
{
    unvisited[v]=true;
    cout<<v<<"  ->>";
    list<int> :: iterator it;
    for (it =adj[v].begin();it!=adj[v].end();it++)
        if(!unvisited[*it]) DFSUTIL(*it,unvisited);
}
void  Graph ::addEdge(int v,int u)
{
    adj[v].push_back(u);
}
void Graph::BFS(int s)
{
    list<int> queue;
    vector<bool> unvisited(V,false);
    queue.push_back(s);
    unvisited[s]=true;
    list<int> ::iterator it;
    while (!queue.empty())
    {
        int root =queue.front();
        cout<<root<<" ->>";
        queue.pop_front();
        for(it=adj[root].begin();it!=adj[root].end();it++) 
        if(!unvisited[(*it)]) unvisited[*it]=true,queue.push_back(*it);
    }
}
int main()
{
    // Create a graph given in the above diagram 
    Graph g(4); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
  
    cout << "\nFollowing is Breadth First Traversal ";
    g.BFS(2); 
    cout << "\nFollowing is Depth First Traversal ";
    g.DFS(2);
}
