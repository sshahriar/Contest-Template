const ll N = 1e7+5 ;
//const int N =10;
 
bitset<N>prime  ;
vector<ll >v ;  // vector of prime
int cs = 0;
void  seive( )  {
 
    //for(ll j = 4;j <  N ; j+=2  ) prime[j]=1 ;
 
    for(ll i = 3; i< N ; i+=2) {
        if(i>=N ) break ;
        if(prime[i]== 0 )
            for( ll j = i*i ; j <  N ; j+= (i<<1) ) {
                if(j>=N ) break;
                prime[j] = 1;
 
            }
 
    }
 
    v.pb( 2 );
    for(ll i=3 ;i < N  ;i+=2 ) {
        if(i >= N ) break;
        if(prime[i]  == 0)
            v.pb(i ) ;
    }
} 
