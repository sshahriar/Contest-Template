bitset< maxn > prime  ; 
vector< int > v_primes ;  
void  seive(  )  {
    forn(i,2, maxn-1) if( !prime[i]){ 
        for(int j=i*i  ; j<maxn  ;j+=i ) {
            prime[ j  ]  = 1 ;
        }  
    }
    forn(i,2, maxn-1)if(!prime[i]) v_primes.pb(i)  ;  

    

} 
