const int LIM =18;
vector<int> adj[ maxn + 5];
int depth[maxn + 5]   ;
int par[maxn + 5][LIM+5 ];
// 1 based indexing 
void build(int cur, int p)
{
    int i;
    depth[cur] = depth[p] + 1;
    par[cur][0] = p;
    for (i = 1; i <= LIM; i++)
        par[cur][i] = par[par[cur][i - 1]][i - 1];

    for(int i=0 ;i< adj[cur  ].size() ;i++  )  {
        int x = adj[cur][i] ; 
        if (x != p)
            build(x, cur);
    }
}
// return parent or distance  
int lca(int a, int b){
    int i, len = 0;

    if (depth[a] > depth[b])
        swap(a, b);
    for (i = LIM; i >= 0; i--) {
        if (depth[par[b][i]] >= depth[a]) {
            b = par[b][i];
            len += (1 << i);
        }
    }
    
    if (a == b) return len;
    for (i = LIM; i >= 0; i--) {
        if (par[a][i] != par[b][i]) {
            a = par[a][i];
            b = par[b][i];
            len += (1 << (i + 1));
        }
    }
    return len + 2;
}
