// template for binary lifting 
// first initiate the 0th col with first parent  
// call query function for kth parent 
const int Log=20 ; 
int sparse[M+2][Log+2] ;

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
    //cout << endl; 
    return par ; 
}

void SparseTableInit(int N ) {
    int n=N ; 
    for(int j=1;  j< Log; j++ ) {
        for(int i=0; i< N ;i++) {
            if(sparse[i ][ j-1 ] !=-1) {
                sparse[i][j ]  = sparse[ sparse[i ][j -1] ][j-1]  ; 

            }

        }
    }

    // rep(i, n ) {
    //     cout << i << "-> " ;
    //     rep(j , Log) cout<< sparse[i][j] << ' ' ;
    //     cout << endl ;  

    // }
}
