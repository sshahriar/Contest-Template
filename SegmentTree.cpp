// range add min query 
// 1 based indexing
int tree[maxn*4+5] ,  lazy[maxn*4 +5];  
int get(int id , int l,int r ){
    r = min(m ,r)  ; 
    return  pre[id][r]-pre[id][l-1] ; 
}
void push(int id ,int l, int r ){
    tree[id] += lazy[id ] ; 
    if( l!=r) {
        int lc =id*2 ;
        lazy[lc ] += lazy[id]  ; 
        lazy[lc+1 ] += lazy[id] ;
    }
    lazy[id ]=  0 ;  

}
void upd(int id ,int l, int r , int s ,int e ,int val ) {
    push(id,l,r) ;
    // dbg(l,r,s, e) ;
    if( r<s or l > e) return  ; 
    if(l>=s and r<= e) {
        lazy[id] += val ; 
        push(id , l ,r )  ; 
        return  ;
    }
    int lc = id*2 , mid = (l+r)/2 ;
    upd( lc, l, mid , s,e , val ) ; 
    upd(lc+1 , mid+1,r , s, e ,val ) ; 
    tree[id ] = max(tree[lc ]  ,tree[lc+1] ) ; 
}
