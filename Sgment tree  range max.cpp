pair<int, int>  tree[maxn  ]     ; 

void build( int id ,int l, int r ) {
    if(l>r) return  ; 
    if(l == r) {
        tree[id ]  = mp(a[l  ] ,  l ) ; 
        return ; 
    } 
    int mid = (l+r)/2 ; 
    build(id*2 ,l, mid)  ;  build(id*2+1 , mid+1 ,r)  ; 
    tree[id ]  = max(tree[id*2] ,tree[id*2+1 ] ) ; 
}
pair<int,int> query(int id , int l, int r, int s , int e ) {
  
    if(  l>e or r <s  ) return  mp(-inf, -1) ; 
    if(l>=s  and r <= e ) return tree[id ]  ; 
    int mid  = (l+r)/2  ; 

    return  max( query(id*2 , l , mid , s,e) ,  query(id*2+1  , mid+1,r ,s, e  )  ) ; 

}
int get(int id )  { 
    pair<int,int > x =   query(1,1,n , id+1, a[id]  ) ; 
    return x.ss ; 
}
