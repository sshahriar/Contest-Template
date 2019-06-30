int ncr[N][N] ;
void init() {
    ncr[0][0] =1 ;
    repi(i,n )
        repi (j,n ) {
            if(j==1) ncr[i][j-1]=1; 
            ncr[i][j] = add( ncr[i-1][j-1], ncr[i-1][j]) ;
        
        } 
}
