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
ll  fact[M+ 2]  ,inv[M+2 ] ;
void  func() {    
    fact[0]=1;
    repi(i, M) fact[i] = mul(fact[i-1], i*1LL )  ;  
    rep(i,M) inv[i ] =  modInv( fact[i] ,mod); 
  
   // dbg_a(fact ) ;
}
 
ll ncr (ll n ,ll r  ) {
    ll nr = inv[n-r ] ; 
    n = fact[n ] ; 
    r = inv[r ] ;

    //dbg(n,r ,nr )    ;
 //   dbg(xy, t ,mx,my ) ; 
    return mul(n, mul(r,nr) )   ; 

}
