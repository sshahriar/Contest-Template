struct SegTree  {   
    vector<ll>tree ,lazy ; 
    Multiply () {
        tree.resize(n*4+100,1) ;
        lazy.resize(n*4+100,1 ) ;
    } 
    void build (int node, int l , int r ) {
        if(l > r ) return ;
        if(l == r ) {

            tree[node] =  a[l] ;
            //dbg(tree[node], node) ;
            return ;
        }
        int left = node*2 , right = left+1 , mid = (l+r )/2    ;
        build( left , l , mid ) ;
        build( right, mid+1 , r ) ;

        tree[node] = modMul( tree[left], tree[right] ,mod   ) ;

    }   

    void update(int node, int l, int r , int s , int e,  ll  val ) {
        if(l > e || r < s ){
            return ;
        }
        if(l >= s && r <= e) {

            lazy[node] = modMul( lazy[node] ,  val, mod  )  ;
            ll tmp = modPow(val ,(ll)(r-l+1 ), mod) ;
            tree[node] = modMul( tree[node] ,  tmp, mod  )  ;
           // dbg(l, r ,val , tree[node] ,lazy[node] ) ;
            return ; 
        }
        int left = node*2 , right = left+1 , mid = (l+r)/2     ;
        update( left , l , mid ,s , e , val ) ;
        update( right, mid+1 , r, s, e ,val ) ;
        
        tree[node] = modMul( tree[left], tree[right] ,mod   ) ;

    }
    ll query (int node, int l, int r , int s , int e,    ll val ) {
        if(l > e || r < s ){
            return 1  ;
        }
        if(l >= s && r <= e) {
           // dbg(l, r ) ; 
            ll tmp = modPow(val,(ll)(r-l+1) , mod) ;
            return  modMul(tmp ,tree[node],             mod );
        }
        int left = node*2 , right = left+1 , mid = (l+r)/2     ;

        ll ans1 = query ( left , l , mid ,s , e , modMul(val ,lazy[node],  mod) ) ;
        ll ans2 = query ( right, mid+1 , r, s, e , modMul(val ,lazy[node] , mod )  ) ;
        return modMul(ans1 , ans2 ,mod ) ; 
    }

} ; 
