
int a[M+2] , tree[4*M +7] , n ;
queue<int>v[M+2]; 

int  merge(int x,int y) {
    return min(x, y ); 
}
void build(int id,int l, int r) {
    if(l==r) {
       // dbg(id,l ,r, a[l] )  ; 
        tree[id ]= a[l ] ;
        return ; 
    }
    int mid = (l+r)>>1; 
    build(id*2, l , mid );
    build(id*2+1, mid+1 ,r );

    tree[id] = min(tree[id*2] , tree[id*2+1] ) ;  
}

int query(int id,int l, int r  ,int s,int e ) {
    if(r<s or l>e) return M+55; 
    if(l>=s and r<= e)  {
        return tree[id] ;
    }
    int mid = (l+r)>>1; 
    return merge( query(id*2, l , mid,s,e) , query(id*2+1, mid+1 ,r,s,e ) ); 

}

void update(int id,int l, int r  ,int s,int e,int val ) {
    if(r<s or l>e) return  ; 
    if(l>=s  and r<= e) {
        tree[id] =val ;
        return ; 
    }
    int mid = (l+r)>>1; 
    update(id*2, l , mid,s,e,val ) ;
    update(id*2+1, mid+1 ,r,s,e, val  ) ; 
    tree[id] = merge(tree[id*2] , tree[id*2+1]) ;

 }
