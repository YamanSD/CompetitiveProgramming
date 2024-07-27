#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define maxn 500010
vector<int>adj[maxn],ar;
bool vis[maxn];
int u,v,n,m,s,res=0;
void dfs(int cur){
    vis[cur]=true;
    for(auto i:adj[cur])
        if(!vis[i])
            dfs(i);
    ar.pb(cur);
}
int main(){
    scanf("%d%d%d",&n,&m,&s);
    for(int i=0;i<m;++i){
        scanf("%d%d",&u,&v);
        adj[u].pb(v);
    }
    dfs(s);
    for(int i=1;i<=n;++i){
        if(!vis[i])
            dfs(i);
    }
    memset(vis,false,sizeof vis);
    for(int i=n-1;i>=0;--i){
        if(!vis[ar[i]]){
            if(s!=ar[i])
                res++;
            dfs(ar[i]);
        }
    }
    printf("%d\n",res);
    return 0;
}