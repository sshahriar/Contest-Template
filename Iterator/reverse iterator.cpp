int a[maxn ] , ans   ;
vector<int >g[maxn] ; 
void solve()  {     
    int x , y ,tot=0 ,sum = 0 , t =0   , k   ,n ,q ;
    cin >>  n ;
    map<int,int >ma;  
    forn(i,1,n ) {
        cin >> a[i] ;
        ma[a[i]]++  ; 
    } 
    rep(i,n-1)  {
        cin >> x >> y ;
        g[x].pb(y) ; 
        g[y].pb(x) ;
    }
  
    int  res =  inf ; 

    forn(i,1,n ) {
        ans = -inf;  
        
        ma[a[i] ]-- ; if(ma[a[i] ] == 0 ) ma.erase(a[i] )  ; 
      
        ans = max(ans,a[i ] ) ;  
        rep(j,sz(g[i] )  ) {
            int v = g[i][j] ;
            ans = max(ans, a[v]+ 1) ; 
            ma[a[v] ]-- ;
            if( ma[a[v] ]==0) ma.erase(a[v] ) ; 
        }

        if(sz(ma)   ) {
        
            ans =  max(ans , ma.rbegin() ->ff+2)  ;
        } 

        ma[a[i] ]++ ;
        rep(j,sz(g[i] )  ) {
            int v = g[i][j] ;
            ma[a[v] ]++ ;
        }
        res = min( ans,res) ; 
    }


    cout << res << endl; 


}              
