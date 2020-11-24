 int  tree[maxn*4]  ; 

void bld(int id,int l, int r) {
    // push(id, l,r) ;  
    if( l>r ) return  ; 
    if(l==r )  {
        tree[id]  = a[l]  ; 
        return ; 
    } 
    int mid = (l+r)/2  ; 
    bld(id<<1, l,mid     ); 
    bld(id<<1|1, mid+1 ,r  ) ;  
    tree[id] = min(tree[id<<1] , tree[id<<1|1]  ) ; 
 
}
int query(int id ,int l, int r , int s,int e ) { 
    // push(id, l,r) ; 
    if(l>e or r<s ) return  inf   ;
    if(l>=s and  r<=  e) { 
        return tree[id]; 
    } 
    int mid = (l+r)/2 , x,  y ; 
    x = query(id<<1, l,mid , s,e   ); 
    y = query(id<<1|1 , mid+1 ,r , s, e  ) ;  
    return  min (x, y) ;  

}
 
int getmin( int l,int r )  {
    return  query(1, 1, n, l,r )  ;  

}
