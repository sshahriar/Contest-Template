struct CHT {
    // slope decreasing .. min  query 
    //  y = mx+b ; line eq  ...
    vector< ll >m,b  ;
    int ptr  ; 

    ll f( int ptr,ll x  ) { 

        return m[ptr]*x + b[ptr]; 
    } 

    bool bad(int l1, int l2, int l3) {
        return 1.0 * (b[l3] - b[l1]) * (m[l1] - m[l2])  <= 1.0 * (b[l2] - b[l1]) * (m[l1] - m[l3]);
    }
    
    void add(ll _m , ll _b ) {
        m.push_back(_m ) ;
        b.push_back(_b ) ;

        // checking if sz(m)-2 th can be removed

        while( sz(m)>=3 and bad( sz(m )-3,sz(m )-2,sz(m )-1  ) ) {
            m.erase( m.end() - 2  ) ; 
            b.erase( b.end() - 2  ) ; 

        } 
    }
    
    ll query ( ll   x ) {
        if(ptr>=sz(m) )  ptr = sz(m )-1   ;
        while(ptr < sz(m)-1 and f(ptr, x) > f(ptr+1,x ) ) ptr++ ;
        return f(ptr, x) ; 
    }
} ; 
