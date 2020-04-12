int  tree[maxn*4]  , lazy[maxn*4 ]  ; 
void push(int id,int l, int r ) {
    tree[id] = max( lazy[id] ,  tree[id]  ) ;
    if( l!=r) {
        lazy[id*2] =  max(lazy[id] , lazy[id*2] ) ;
        lazy[id*2+1 ] =  max(lazy[id] , lazy[id*2+1] ) ;
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
    upd(id*2, l,mid , s,e , val  ); 
    upd(id*2+1 , mid+1 ,r , s, e, val ) ;  
    tree[id] = max(tree[id*2] , tree[id*2+1  ]  ) ; 

}
int query(int id ,int l, int r , int s,int e ) {
    push(id, l,r) ; 
    if(l>e or r<s ) return  0 ;
    if(l>=s and  r<=  e) {
        return tree[id]; 
    } 
    int mid = (l+r)/2 , x,  y ; 
   
    x =  query(id*2, l,mid , s,e   ); 
    y = query(id*2+1 , mid+1 ,r , s, e  ) ;  
    return  max(x, y) ;  

}
