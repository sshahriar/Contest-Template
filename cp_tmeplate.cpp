#include <bits/stdc++.h>

using namespace std ;

#define M 100000
#define inf 1 << 30
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define sz(x ) x.size()
#define pii pair<int , int>
#define forn(i,a,n ) for(int  i = a ; i <= n ; i++ )
#define rep(i ,n ) for(int i = 0 ; i < n ; i++ )
#define repi(i ,n ) for(int i = 1 ; i <= n ; i++ )
#define per(i , a, n ) for(int   i = a  ; i >= n ; i-- )
#define mem(x , y ) memset(x , y , sizeof x )
#define all(a ) a.begin() , a.end()
#define lowb(x ,y) lower_bound(all(x  ) , y ) - x.begin()
#define uperb(x, y) upper_bound(all(x) ,y )-x.begin()
#define printa(x,y ) rep(i,y ) cerr << x <<' ' ;  cerr << "\n"; 

#define dbg(args...) do { print(args); } while(0); cerr<< endl;

int sett(int n, int pos  ) { return n = n|(1<< pos) ; }
int reset(int n,int pos ) {  return n =  n & ~(1<<pos ); }
bool check(int n,int pos ) { return (bool ) (n& (1<<pos))  ; }

//int dx[] = { -1 ,+1, 0 , 0 , -1 , -1  , 1 , 1 };
//int dy[] = { 0 , 0, +1, -1  , +1 , -1 , 1 , -1 };

//int dx[] = { 1 , 1, 2 , 2  , -1 , -1 , -2 , -2 };
//int dy[] = { 2 , -2, +1, -1 ,2 , -2 , 1 , -1 };

//debug  extensions
template<typename T >
void print(const T& v) {
    cerr << v << ' ' ;
}

template< typename FIRST, typename... REST >
void print( const FIRST& first, const REST&... rest ){
    print(first) ;
    print(rest...) ;
}

template<typename T>
ostream &operator<<(ostream &os, const vector<T> &v){
    rep(i ,sz(v ) ) cerr << v[i] <<' ' ;
    cerr<<endl;
}

// code starts

typedef long long ll ;

int a[M+2] ;

int main()
{
    //ios_base :: sync_with_stdio(false ) ;  cin.tie(0) ;
    //freopen("in.txt", "r",stdin );
    // freopen("out.txt", "w",stdout );

    int k, cs=0, tc,n ;
    

    return 0;

}


