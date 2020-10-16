int ncr[N][N] ;
//nCr = n-1Cr + n-1Cr-1 
void init() {
    ncr[0][0] =1 ;
    repi(i,n )
        repi (j,n ) {
            if(j==1) ncr[i][j-1]=1; 
            ncr[i][j] = add( ncr[i-1][j-1], ncr[i-1][j]) ;
        
        } 
}


//itration 

int   fact[ maxn ]  ,inv[ maxn] ;
int n , m ;
void  process() {    
    // mod = mod2; 
    fact[0]=1LL;
    forn(i, 1 ,  maxn-1 ) fact[i] = mul(fact[i-1],i) ;  
  
}
int ncr(int A,int B){
  return fact[A]*bigmod(fact[A-B]*fact[B]%mod,mod-2)%mod;
}
/////////////////////
int   fact[ maxn ]  ,inv[ maxn] ;
void  process() {    
    // mod = mod2; 
    fact[0]=1LL;
    forn(i, 1 ,  maxn-1 ) fact[i] = mul(fact[i-1], i*1LL )  ;  
    rep(i, maxn ) inv[i ] =  invmod( fact[i] ,mod); 
  
   // dbg_a(fact ) ;
}
 
int ncr (ll n ,ll r  ) {
 
    if( n-r < 0 ) return   0 ; 
    ll nr =   inv[n-r ] ; 
    n = fact[n ] ; 
    r = inv[r ] ; 
    return mul(n, mul(r,nr) )   ; 
 
}
