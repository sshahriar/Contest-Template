
int tree[maxn*4]  , lazy[maxn* 4]  ;
void push(int id ,int l  , int r )  {
    if(lazy[id]< 0 ) {
        lazy[id] =  0 ;  
        return ;

    } 
    tree[id] +=   (r-l+ 1)* lazy[id]  ; 
    if(  l!=r)  {
        lazy[id*2] +=  lazy[id]  ; 
        lazy[id*2+1 ] +=  lazy[id]  ; 


        lazy[id] =  0 ;
    }

}
void  bld(int id,int l, int r )  {
    if( l>r) return  ; 
    if(l==r )  {
        tree[id] = a[l] ; 
        return ;
    }
    int mid  = (l+r)/2  , lt=  id*2   ; 
    bld( id*2 , l , mid) ; 
    bld(id*2+1, mid+1 ,r ) ; 
    tree[id ]  =  tree[lt ]+ tree[lt+1]  ; 

}   
void upd(int id,int l, int r ,int ql ,int qr , int val   )  {
    push ( id,l,r)   ; 
    if( r<ql or r>qr ) return  ;
    if(l >=ql  and r<=q ) {
        lazy[id]  +=val   ;
        push(id, l,r )   ; 

        return ;
    }

    int mid  = (l+r)/2  , lt=  id*2   ; 
    upd( id*2 , l , mid,ql ,qr ,val) ; 
    upd( id*2+1, mid+1 ,r , ql  , qr, val   ) ; 
    tree[id ]  =  tree[lt ]+th tree[lt+1]  ; 

}   
int query(int id,int l, int r ,int ql ,int qr    )  {
    if( l>r) return   0 ; 
    if( r<ql or r>qr ) return  0  ;
    if(l >=ql  and r<=q ) {   
        return  tree[id ];
    }
    int mid  = (l+r)/2  , lt=  id*2   ; 

       
    return query( id*2 , l , mid,ql ,qr )+ 
    query( id*2+1, mid+1 ,r , ql  , qr  ) ; 
}   
void  add( int  l,int r ,int val )  {
    upd(1, 1,n ,l, r ,val ) ; 
}
int get( int  l,int r  )  {
    return query(1, 1,n ,l, r  ) ; 
} 
