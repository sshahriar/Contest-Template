//
#include<bits/stdc++.h>

using namespace std;

#define M 1005
#define mx 1 << 30
#define mp make_pair
#define pb push_back
#define pii pair<int , int>
#define rep(i , n) for(i = 0 ; i< n ;i++ )
#define repi(i , n ) for(i =1  ; i<= n ; i++ )
#define mem(x , y ) memset(x , y , sizeof x )
#define ff first
#define ss second
#define sf1(x)  scanf("%d", &x ) ;
#define sf2(x, y  ) scanf("%d%d",  &x, &y) ;
#define all(a ) a.begin() , a.end()

typedef long long ll ;

//int dx[] = { -1 ,+1, 0 , 0 , -1 , -1  , 1 , 1 };
//int dy[] = { 0 , 0, +1, -1  , +1 , -1 , 1 , -1 };

//in t dx[] = { 1 , 1, 2 , 2  , -1 , -1 , -2 , -2 };
//int dy[] = { 2 , -2, +1, -1 ,2 , -2 , 1 , -1 };

vector<int > g[M+5] , cost[M+5];
int _pow[M+ 5][M+5]  ,dis[M+5 ][M+5 ] ,  par[M+ 5] ,lvl[M+5]  ;
bool vis[M+5] ;
/// dfs / init / query  

void dfs(int u ) {
    int i ;
	  vis[u] = true ;
	  rep(i , g[u].size() ) {
		int v = g[u][i] ;
		
          if(vis[v ] ==  false ) {
          // printf("visiting %d\n" , v);
			  par[v ] = u ;
			  lvl[v] = lvl[u]+1 ;
			  dfs(v ) ;
		}
	}
}


int lca_init( int n ) {
  	int i ,j  ;
	mem( _pow, -1 );

  	rep(i  ,n ) _pow[i][0] =  par[i] ;

	for( j = 1 ; (1 << j ) < n ; j++)
		    for(i = 0  ; i < n  ; i++ ){
   	    		if(_pow[i][j-1 ] != -1 )
		    		_pow[i][j] = _pow[ _pow[i][j-1 ] ][j-1 ] ;
		}
}

int lca_query(int N, int p, int q) {
    int j  , k ;

    if( lvl[q] > lvl[p] ) swap(p, q)  ;
    
    for( j = 0 ;  (1<< j ) < N  ; j++ ) ;

     int lim =  lvl[q] ;
     int val  = --j ;

     printf("max val of j %d %d\n" , j  ,lim ) ;
  	  for( ; (1<<j ) >= 0 ; j--)
  	      if( lvl[_pow[p][j] ] >= lim  ){
	  	  p =  _pow[p][j] ;
  	  }
    
     if(p == q ) return p ; 
 
     for( j = val ; j >= 0 ; j--)
         if(_pow[p][j] != -1 && _pow[p][j] != _pow[q][j] ){
    	     p = _pow[p][j] ;
    		 q = _pow[q][j] ;
     }
return par[p] ;
}

int kth_par(int n , int p , int k ) {		// returns k th parent of a node
	int i , j ;
	for(j = 0 ; (1 << j ) <  n ; j++ ) ;
     
	int var  = lvl[p] - k  ;
	for( ; j>= 0  ; j--) if(_pow[p][j] !=  -1 && lvl[ _pow[p][j] ] >= var  ) {
		p  = _pow[p][j] ;
	}

	return p ;

}
/*
void solve(){
	  int i , j  , k  , n  ;
	  cin >> n >> k ;
  	while(k--) {
	    	cin >> i >>  j ;
	    	g[i].pb(j) ;
	    	g[j].pb(i) ;
  	}

      mem(par,  -1) ;
      mem(vis ,  0 ) ;
    	lvl[0] = 0 ;
   
      dfs(0 ) ;
	    lca_init(n ) ;

      cout << "all done \n" ;
      for(i =  0; ( i ) < n ; i++ ){
            printf("%d ->" , i );
	      	for(j = 0  ; (1<< j)  < n ; j++)
	        		printf("%5d " , _pow[i][j]);
		    	printf("\n");
      }
 
    printf("\nlca : ") ;
    cout << lca_query(n ,2, 4 ) << endl  ;
}
*/
int main() {

		freopen("in.txt", "r",stdin );
	//	ios_base :: sync_with_stdio(false ) ; cin.tie(NULL ) ;

	int i , j , k , n , cs= 0 , tc ;
	solve()  ;
  
	return 0;
}




