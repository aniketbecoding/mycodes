#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void create(vector<int> graph[],int u,int v){
    graph[u].push_back(v);
    graph[v].push_back(u);
}
void bfs(vector<int> graph[],int start){
    vector<bool> visited(graph->size(),false);
    queue<int> q;
    q.push(start);
    visited[start]=true;
    while(!q.empty()){
        int f=q.front();
        cout<<f<<" ";
        q.pop();
        vector<int>:: iterator i;
        for( i=graph[f].begin();i!=graph[f].end();i++){
            if(!visited[*i]){
          q.push(*i);
            visited[*i]=true;
        
            }
        }
    }
}
int main(){
    int v=7;
    vector<int> graph[v];
    create(graph,0,1);
    create(graph,0,3);
    create(graph,1,2);
    create(graph,2,3);
    create(graph,2,6);
    create(graph,3,4);
    create(graph,4,5);
    create(graph,5,6);
    cout<<"bfs for the given graph is: ";
    bfs(graph,0);
    cout<<endl;
    return 0;

}
