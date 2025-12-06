#include<bits/stdc++.h>
using namespace std;

class Graph{
  int V;
  list<int> *l; // int *arr;
 
  public:
  Graph(int V){
    this->V = V;
    l = new list<int> [V];
    // arr = new int[V];
  }

  void addEdge(int u, int v){
    l[u].push_back(v);
    l[v].push_back(u);
  }

  bool detectCycleDFS(int u, int par, vector<bool> &vis){
    vis[u] = true;

    for(auto v : l[u]){
      if(!vis[v]){
        if(detectCycleDFS(v, u, vis)) return true;
      }else{
        if(v != par){
          return true;
        }
      }
    }

    return false;
  }

  bool detectCycle(){
    vector<bool> vis(V,false);

    for(int i = 0; i<V; i++){
      if(!vis[i]){
       return detectCycleDFS(0,-1, vis);
      }
    }
  }
 
};


int main(){

  Graph g(5);

  g.addEdge(0,1);
  g.addEdge(0,2);
  g.addEdge(0,3);
  g.addEdge(1,2);
  g.addEdge(3,4);

  cout << g.detectCycle() << endl;

  return 0;
}