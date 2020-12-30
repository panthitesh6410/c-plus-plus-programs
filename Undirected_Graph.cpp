#include<vector>
#include<iostream>
using namespace std;

class UndirectedGraph 
{
    // for adj. list representation -
    vector<vector<int>> adjList;
    int numberOfNodes;

    public:
        UndirectedGraph(int nodes)  // initialize graph with nodes of number given
        {
            numberOfNodes = nodes;
            adjList = vector<vector<int>>(nodes+1);      // here +1 for 1-based indexing 
        }
        void addEdge(int u, int v)      // add an edge between u and v
        {
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        int getNodes()      // display no. of nodes in graph
        {
            return numberOfNodes;
        }
        vector<int> getNodesAdjToNode(int x)    // display all adj nodes for a node
        {
            return adjList[x];
        }
};

int main()
{
    UndirectedGraph mygraph(6);

    mygraph.addEdge(1, 2);
    mygraph.addEdge(1, 5);
    mygraph.addEdge(2, 3);
    mygraph.addEdge(5, 4);
    mygraph.addEdge(3, 4);
    mygraph.addEdge(4, 6);

    cout<<mygraph.getNodes()<<endl;

    // getting nodes adj to node 4 -
    vector<int> adj = mygraph.getNodesAdjToNode(4);
    for(int i=0;i<adj.size();i++)
        cout<<adj[i]<<" ";

    return 0;
}