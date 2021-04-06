int t[maxn*4 ]  , lazy[maxn*4]  , cost[maxn*2  ] ; 
void push( int id  ,int l ,int r  ) {
    t[id ]+= lazy[id ] ; 
    if(l!=r)  {
        lazy[id*2] += lazy[id] ; 
        lazy[id*2+1 ] += lazy[id] ; 

    } 
    lazy[id] =  0; 
}   
void build(int id ,int l,int r) {
    if( l>r) return ; 
    if( l ==r ) {
        t[id]  = cost[l ] ; 
        return ;  
    }
    int mid=  (l+r)/2 ;
    build(id*2  ,  l,  mid ) ; 
    build(id*2+1  ,  mid+1  , r ) ; 
    t[id ] = max(t[id*2 ], t[id*2+1])  ;
} 
void upd(int id , int l,int r  , int s, int e , int val  ) {
    push(id  , l ,r   )  ;  
    if( l>e or r<s ) return ; 
    if( l>= s and r<=e  ) {
        lazy[id  ] += val ;
        push(id , l ,r ) ;    
        return  ;
    }
    int mid=  (l+r)/2 ;
    upd(id*2  ,  l,  mid ,s, e, val ) ; 
    upd(id*2+1  ,  mid+1, r  ,s, e, val ) ; 

    t[id ] = max(t[id*2 ], t[id*2+1])  ;

}
