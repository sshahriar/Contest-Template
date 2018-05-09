#include <bits/stdc++.h>

using namespace std ;

#define     M           100000
#define     inf         1<<30
#define     mp          make_pair
#define     pb          push_back
#define     ff          first
#define     ss          second
#define     sz(x )      x.size()
#define     pii         pair<int , int>
#define     vi          vector<int>
#define     mem(x ,y)   memset(x , y , sizeof x )
#define     all(a )     a.begin() , a.end()

#define     forn(i,a,n )    for(int  i = a ; i <= n ; i++ )
#define     rep(i ,n )      for(int i = 0 ; i < n ; i++ )
#define     repi(i ,n )     for(int i = 1 ; i <= n ; i++ )
#define     per(i , a, n )  for(int   i = a  ; i >= n ; i--)

#define     lowb(x ,y)      lower_bound(all(x  ) , y ) - x.begin()
#define     uperb(x, y)     upper_bound(all(x) ,y )-x.begin()
#define     dbgarr(x,y )    rep(i,y ) cerr << x[i] <<' ' ;  cerr << "\n";
#define     dbg(args...)    do {   print(args); } while(0); cerr<< endl;

typedef long long ll ;
typedef unsigned long long ull ;

int sett(int n, int pos  ) { return n = n|(1<< pos) ; }
int reset(int n,int pos ) {  return n =  n & ~(1<<pos ); }
bool check(int n,int pos ) { return (bool ) (n& (1<<pos))  ; }

//int dx[] = { -1 ,+1, 0 , 0 , -1 , -1  , 1 , 1 };
//int dy[] = { 0 , 0, +1, -1  , +1 , -1 , 1 , -1 };

//int dx[] = { 1 , 1, 2 , 2  , -1 , -1 , -2 , -2 };
//int dy[] = { 2 , -2, +1, -1 ,2 , -2 , 1 , -1 };

//debug  extensions
template< typename T >
void print(const T& v) {
    cerr << v << ' ' ;
}

template< typename FIRST, typename... REST >
void print( const FIRST& first, const REST&... rest ){
    print(first) ;
    print(rest...) ;
}

template< typename T >
ostream &operator<<(ostream &os, const vector<T> &v){
    rep(i ,sz(v ) ) cerr << v[i] <<' ' ;
    cerr<<endl;
}

template< typename T >
ostream &operator<<(ostream &os, const pair<T,T> &v){
    cerr<< v.ff << ' ' << v.ss << endl ;
}

//  code from here  

int a[M+2]  ;

struct _edge{
    int node , w , id ; 
    _edge() {} ;
    _edge(int a, int b ,int c) { node = a ;  w= b ; id  = c  ;} ;

    bool operator<(_edge x ) {
        return w <= x.w  ; 
    }

}

vector<_edge > ed , final ;
vector< _edge > graph[M+2] ;
ll dist[M+2] , vis[M+2]  ; 

void dijkastra(int u ) {

    mem(dist  , (1LL<<62 ) ) ;

    dist[u] = 0 ;
    priority_queue< _edge > pq ; 
    pq.push( _edge( u ,  0, 0  ) ) ;

    while(pq.empty() ) {
        _edge  fir  = pq.top() ;   final.pb(fir) ; 
        pq.pop()  ;
        int u = fir.node  ; 

        dbg("visit : " , u  ) ;  

        rep(i , sz(graph[ u ] )   ) {
            int v =  graph[ u ][i].node   ;
            if( dist[u] + graph[ u ][i].w < dist[v] ) {
                dist[v ] =  graph[ u ][i].w + dist[u] ;
                pq.push() ;


            }




        }



    }









}

