
// template for binary lifting 
// first initiate the 0th col with first parent  
// call query function for kth parent 
int Log=5 ; 
int sparse[M+2][Log +2 ] ;

// returns kth  parent for id th node 
// return -1  kth parent does not exist  
int SparseTableQuery(int id, int k) {
    int curr ,par = id ;  
    rep(i , Log+1) if(checkbit(k ,i ) )  curr= i; 
    while(1)  {
   //     dbg(curr, par)  ;
        if(par== -1)break ;
        if(checkbit( k, curr) ==0  )curr-- ;
        else {

            par =  sparse[par][curr] ; 

            curr-- ;

        }
        if( curr<0) break ; 

    }
    cout << endl; 
    return par ; 
}

void SparseTableInit() {

    for(int j=1;  j< Log; j++ ) {
        for(int i=1; i<= n ;i++) {
            if(sparse[i ][ j-1 ] !=-1) {
                sparse[i][j ]  = sparse[ sparse[i ][j -1] ][j-1]  ; 

            }

        }
    }

    // repi(i, Log -1 ) {
    //     rep(j , n) cout<< sparse[i][j] << ' ' ;
    //     cout << endl ;  

    // }
}
