struct  union_find {
    int   par[ maxn  ] ;
    union_find( ) {  }  ;  
    void init(int  n  ) {
        rep(i ,n+5 ) par[i ]  = i ; 
    }   

    int find(int x) {
        if(par[x] == x ) return x ; 
        return  par[x] =  find(par[x]   ) ;  
    }
    void add( int x ,int  y )  {
        x = find(x)   , y = find(y )  ; 
        if(x!=  y  ) par[x ]  =  y  ;  

    }   

} ; 
