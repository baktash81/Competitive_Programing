#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 2e5 + 10;

vector<vector<pair<int,int>>> graph(N);

int cost[N];

int min_result = N-1;





int32_t main(){

    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        graph[a].push_back({b,1});
        graph[b].push_back({a,0});
    }
    stack <int> stack1;
    stack <int> stack2;
    vector<bool> visited (n+5,false);
    stack1.push(1);
    while(!stack1.empty()){
        int s = stack1.top();
        stack1.pop();
        if(!visited[s]){
            visited[s] = true;
        }
        for(int i=0;i<graph[s].size();i++){
            if(!visited[graph[s][i].first]){
                if(graph[s][i].second==0){
                    cost[1]++;
                }
                stack1.push(graph[s][i].first);
            }
        }
    }
    
    
    vector<bool> visited2 (n+5,false);
    stack2.push(1);
    while(!stack2.empty()){
        int s = stack2.top();
        stack2.pop();
        if(!visited2[s]){
            visited2[s] = true;
        }
        for(int i=0;i<graph[s].size();i++){
            if(!visited2[graph[s][i].first]){
                if(graph[s][i].second==1){
                    cost[graph[s][i].first] = cost[s]+1;
                }
                else
                    cost[graph[s][i].first] = cost[s]-1;

                stack2.push(graph[s][i].first);
            }
        }
    }

    for(int i=1;i<=n;i++){
        min_result = min(min_result,cost[i]);
    }

    cout<<min_result<<endl;
    for(int i=1;i<=n;i++){
        if(cost[i]==min_result){
            cout<<i<<" ";
        }
    }

}