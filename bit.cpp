int  tree[ maxn  ];
  
void Add(int id ,int val) {
    for(;id<=n+n+5 ;id += id&-id) tree[id] += val ;  
}
int get(int id   ) {
    int ret= 0  ; 
    for(  ;  id >0; id-= id&-id)ret += tree[id] ; 
    return ret ;  
}
int query(int l,int r) { 
    return get(r)-get(l-1) ;
}
