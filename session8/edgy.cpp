#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 1e9 + 7;

int pow(int n,int k ){
    int ans = 1;
    for(int i=0;i<k;i++){
        ans *= n;
        ans = ans%N;
    }
    return ans;
}



int32_t main(){

    int v,k;
    cin>>v>>k;
    vector<int> graph[v];
    for(int i=0;i<v-1;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(c==0){
            graph[a-1].push_back(b-1);
            graph[b-1].push_back(a-1);
        }
    }
    int index=0;
    vector<int> parts;
    vector<bool> visited(v, false);
    stack<int> stack;
    for(int i=0;i<v;i++){
        if(!visited[i]){
            index=0;
            stack.push(i);
            while (!stack.empty())
                {
                    int s = stack.top();
                    stack.pop();
            
                    if (!visited[s])
                    {
                        index++;
                        visited[s] = true;
                    }
                    for (auto i = graph[s].begin(); i != graph[s].end(); ++i)
                        if (!visited[*i]){
                            stack.push(*i);
                        }
            }
            parts.push_back(index);
        }
    }
    int all = pow(v,k);
    for(int i=0;i<parts.size();i++){
        all = ((all - pow(parts[i],k) + N)%N);
    }
    cout<<all;
}