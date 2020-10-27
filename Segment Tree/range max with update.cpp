 int  tree[maxn*4]  , lazy[maxn*4 ]  ; 
void push(int id,int l, int r ) {
    tree[id] = max( lazy[id] ,  tree[id]  ) ;
    if( l!=r) {
        lazy[id<<1] =  max(lazy[id] , lazy[id<<1] ) ;
        lazy[id<<1|1 ] =  max(lazy[id] , lazy[id<<1|1] ) ;
    }
}
void upd(int id,int l, int r , int s ,int e  , int val) {
    push(id, l,r) ; 
    if(l>e or r<s ) return ;
    if(l>=s and  r<=  e) {
        lazy[id] = val  ;
        push(id , l ,r ) ; 
        return ; 
    } 
    int mid = (l+r)/2  ; 
    upd(id<<1, l,mid , s,e , val  ); 
    upd(id<<1|1, mid+1 ,r , s, e, val ) ;  
    tree[id] = max(tree[id<<1] , tree[id<<1|1]  ) ; 

}
int query(int id ,int l, int r , int s,int e ) { 
    push(id, l,r) ; 
    if(l>e or r<s ) return  0 ;
    if(l>=s and  r<=  e) { 
        return tree[id]; 
    } 
    int mid = (l+r)/2 , x,  y ; 
    x = query(id<<1, l,mid , s,e   ); 
    y = query(id<<1|1 , mid+1 ,r , s, e  ) ;  
    return  max(x, y) ;  

}
 
void upd(int l  , int  val  ) {
    upd(1,1,n,l,l , val )  ; 
}
int getmax( int l,int r )  {
    return  query(1, 1, n, l,r )  ;  

}
