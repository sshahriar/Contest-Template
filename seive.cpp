int prime[M+5 ] , phi[M+5];
//vector<int > pv ;

void seive() {
	int i , j , k ;
  rep(i ,M) prr[i] = 1;
  prime[0] = 0 ;	prime[1] = 0 ;
	
  rep(i  ,M ) phi[i] = i ;
	
  for( i = 2 ; i < M ;i++ ) if(prime[i] ){  
      phi[i] = i- 1;
			for(j  = i+i; j < M ; j += i) {
				prime[j] = 0 ;
        phi[j] /= i ;
        phi[j] *= i-1 ;
      }
	}

//	rep( i,  M  ) if(prime[i] ) pv.pb(i) ;

}
