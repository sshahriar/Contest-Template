  
struct matrix {
    // first set the length of matrix   
    // y = ( [ matrix ]^k ) ) * [next state matrix] 
    // f[n+1] = f[n] + f[n-1] + f[n-2] ... 
    // f[ n+1 ] =      f[ n  ]
    // f[ n   ] =  M * f[n-1 ]
    // f[ n-1 ] =      f[n-2 ]
    // design M accordingly ... 
    
    int N ; 
    long long arr[7][7 ] ;
    matrix(){} ;
    matrix(int n ) { 
        N = n ; 
        repi(i , N) repi(j , N)  arr[i][j] = 0; 
    }
    // returns unit matrix  
    matrix(int n , int dummy  ) {
        N = n;
        // dbg(dummy );
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
        matrix z (N);

        repi(i, N ) repi(j, N ) repi(k , N )
            z.arr[i][j] =add(z.arr[i][j] ,mul(x.arr[i][k],y.arr[k][j])  ) ;
        return z ;
    }
    matrix expo(matrix A  ,int  n ) {
         // dbg(n ) ;
        if(n == 0 ) {
            return matrix (N,1) ;
        } 
        else if(n &1 ) { 

            // dbg(  n , "insinde " ) ;
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

void  solve() { 
 
    matrix d (2 )  ; 
    d.init()  ; 
    d   =  d.expo(d,3)  ;
    d.trace()  ; 













}    
