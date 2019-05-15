#define N 3
struct matrix {
    // first set the length of matrix   
    // y = ( [ matrix ]^k ) ) * [next state matrix] 
    
    long long arr[N+2][N +2 ] ;
    
    matrix() { 
        repi(i , N) repi(j , N)  arr[i][j] = 0; 
    }
    // returns unit matrix  
    matrix(int dummy  ) {
        
        repi(i,N ) repi(j, N ) 
            if(i==j)arr[i][i] =1; 
            else arr[i][j] = 0; 
        return ;
    }
    void operator=(matrix x) {
        repi(i,N ) repi(j  , N)
            arr[i][j] = x.arr[i][j] ;
    }

    matrix multiply(matrix x, matrix y ) {
        matrix z ;

        repi(i, N ) repi(j, N ) repi(k , N )
            z.arr[i][j] =add(z.arr[i][j] ,mul(x.arr[i][k],y.arr[k][j])  ) ;
        return z ;
    }
    matrix expo(matrix A  ,int  n ) {
        //  dbg(n ) ;
        if(n == 0 ) {
            return matrix (1) ;
        } 
        else if(n &1 ) { 
            return multiply(A , expo( A ,n-1 ) ) ; 

        } else { 
            matrix B =  expo(A , n/2) ;
            return multiply(B ,B) ;  
        }
   
    }

    void trace() {
        repi(i , N ) {
            repi (j,N) {
                cout << arr[i][j] << " " ;

            }
            cout<< endl;
        }
        cout << endl; 
    }
    //initiate base state 
    void init( ) {
        arr[1][1] = 1; arr[1][2] = 1;
        arr[2][1] = 1; arr[2][2] = 0;

    }
    
} ;
