
int par[M+2] ,cnt[M+2 ]  ;

int get(int x ){
    if(par[x ]== x) return x;
    return par[x ] =get(par[x] ) ; 

}

void connect (int x_, int y_) {
//dbg(x_,  y_);
    int x = get(x_ ) ;
    int y = get(y_ ) ;
    if( x!= y) {
        par[x] = y;
        cnt[y] +=cnt[x] ;        

    }

}
