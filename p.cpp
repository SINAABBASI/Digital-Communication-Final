#include <bits/stdc++.h>
#define MAX 1000111
#define inf 1000000000
using namespace std;

vector<pair<int,int> > g[MAX];
int par[MAX],n,m;



void showPath(int i){
    if(i == 0){
        cout<<0<<" ";
        return;
    }
    showPath(par[i]);
    cout<<i<<" ";
    return;
}


/////////////************dikstra with priority_queue with display path runnig time = O(E *log(v) )****************////////////////////


void dijkstra(){
    ///priority_queue is data structure based on heap
    ///first num is weigthe and second number is node name 
    priority_queue<pair<int,int > ,vector<pair<int,int > > ,greater<pair<int,int > > >pq;
    
    ///save dist from start node (0)
    vector< int > dist(MAX,inf);
    
    for(int i = 0; i < MAX ; i++)par[i] = i;
    
    pq.push({0,0});
    dist[0] = 0;

    while(pq.size()){
        int u = pq.top().second;
        pq.pop();
        for(auto x : g[u]){
            int v = x.first;
            int w = x.second;
            if(dist[v] >  dist[u] + w){
                dist[v] =  dist[u] + w;
                pq.push({dist[v],v});
                par[v] = u;
            }
        }
    }
    if(dist[n] == inf){
        cout<<"No any path!";
    }
    else{
        cout<<dist[n]<<endl;
        showPath(n);
    }
}



int main(){
    ios::sync_with_stdio(0);cin.tie();cout.tie(0); 
    
    //// n is number of node and m is number of edge
    //// please define start node is '0' and destination node is 'n'
    cout<<"insert number of node and number of edges :\n(note :start node is '0' and destination node is 'n') \n";
    cin>>n>>m;
    int a,b,w;
    for(int i =0 ; i < m ;i++){
        ///scan edges 'a' --> 'b' with weigth as 'w';
        cin>>a>>b>>w;
        if(a == b)continue;
        g[a].push_back({b,w});
    }
    dijkstra();

    return 0;
}