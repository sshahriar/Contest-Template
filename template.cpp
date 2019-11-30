#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
#define ff              first
#define ss              second
#define pb(x)           push_back(x)
#define mp              make_pair
#define sz(x)           x.size()
#define mem(x ,y)       memset(x , y , sizeof x )
#define all(a )         a.begin() , a.end()
#define endl            "\n"
#define pii             pair<int,int> 
#define clr(x)          x.clear()
#define forn(i ,x,n )   for(int i = x ; i <= n ; i++ )
#define ford(i ,x,n )   for(int i = x ; i >= n ; i-- )
#define rep(i ,n )      for(int i=0; i<n ; i++ )
#define repit(i, c)     for( __typeof((c).begin()) i = (c).begin(); i != (c).end();++i )
#define dbg(args...)    do {   cerr << #args << ' ' ;  print(args); } while(0); cerr<< endl ;
typedef long long ll  ;
typedef unsigned long long  ull ;
int setbit(int n, int pos  ) { return n = n|(1<< pos) ; }
int resetbit(int n,int pos ) {  return n =  n & ~(1<<pos ); }
bool checkbit(int  n,int pos ) { return (bool ) (n&(1<<pos))  ; }
template < typename T > T mul(T x, T y , T mod = 1e9+7 ) { x %= mod ; y %= mod ; return (x*y)%mod  ;  }
template < typename T > T add (T x, T y , T mod = 1e9+7 ) { x %= mod ; y %= mod ; return (x+y)%mod ;  }
template < typename T > T sub(T x, T y , T mod = 1e9+7 ) { x %= mod ; y %= mod ; return ((x-y)%mod+mod )%mod;  }
template < typename T > T ext_gcd(T num1 , T num2, T &X , T &Y ) { T r2,r1, q2, q1 , x2, x1, y2 ,y1 , x,  y, r   ; x2 = 1; y2 = 0;  x1 = 0; y1 = 1; for( r2 =num1 ,r1 = num2 ;r1 != 0 ; y2 = y1, y1 = y,x2 = x1 ,x1 = x ,r2 = r1, r1 = r) {q1 = r2/r1; x = x2 - q1*x1; y = y2 - q1*y1; r = r2%r1 ; } X = x2 ; Y = y2 ; return r2 ;  }
template < typename T > void print(const T& v) {    cerr << v << ' ' ;}
template < typename T1, typename... T2 > void print( const T1& first, const T2&... rest ){ print(first); print(rest...) ;}
template<class T> string to_str(T t){stringstream ss; ss<<t; return ss.str();} 
template < typename T > 
T modPow(T x, T k ,T mod = 1e9+7) {
    if(k == 0 ) return (T)1; 
    if(k&1  ) { 
        return ( (x%mod)*modPow(x,k-1, mod )%mod )%mod ; 
    } else { 
        T ret = modPow(x,k/2  , mod ) ; 
        ret %= mod ;             
        return (ret*ret )%mod; 
    } 
 
}
template < typename T > 
T  modInv( T x , T m) {  
    return modPow(x,m-2 , m) ;   
    // long long ret, t ;// 
    // ext_gcd( x, m ,ret ,t  ) ;
    // ret %= m ; if(ret<0) ret += m  ; 
    // return ret;
} 
// typedef tree< pair< int , int > ,     // change type 
//               null_type, 
//               pair< int , int > ,  // change tyhpe 
//               rb_tree_tag,
//               tree_order_statistics_node_update> o_set;
// oreder_of_key(k )
// debuging ...
template<typename T > 
void dbg_a(T a[] ,int n=10 ) {
    cerr << "[ "; 
        for(int i=0;i < n ; i++ )
            cerr<<a[i]<<' ' ; 
                cerr<< " ]" <<  endl; 
} 
template < typename F,  typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
    return os << "[ " << p.first << ", " << p.second << " ]";
}
template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
    os << "[ "; 
        for(int i=0; i<sz(v) ; i++ )  
            os << v[i] << ' ' ; 
                return os << " ]\n" ; 
} 
template < typename T >
ostream &operator << ( ostream & os, const map< T ,T> &Map  ) {
    os << "[ "; 
        repit(it , Map )    
            os << "[" <<(*it).ff << ' ' << (*it).ss << "] "    ; 
                return os << "]\n" ; 
} 
template < typename T >
ostream &operator << ( ostream & os, const set< T > &Set  ) {
    os << "[ "; 
        repit(it , Set )   
            os <<  *it  << ' ' ; 
                return os << " ]\n" ; 
} 
// int dx[] = {0 , 0 ,+1, -1 } ;
// int dy[] = {-1, +1,0 , 0 };
// int dx[10 ] =  {-2,-2, 2, 2  ,+ 1, -1  , +1, -1 }  ;
// int dy[10 ] =  {+1,-1, 1, -1 , +2,+2 , -2,-2  }  ;
// #define  int ll 
const int maxn  = (int )1e6+123  ;
const int  inf  =  1e9+ 123 ;
const ll mod  = (ll )1e9+ 7LL; 
///////////////////////////////////////////////////////////////
void solve() {
}
signed main() {
    #ifndef ONLINE_JUDGE
       freopen("in.txt", "r", stdin);
      //    freopen("out.txt", "w", stdout);
    #endif 
    ios :: sync_with_stdio(false);  cin.tie(0);  
    cout.tie(0) ;
    int  c =0 ,t  = 1  ;       
    // cin >> t ; 
    while(t--) { 
        solve()  ;
    }  
    return 0 ;
 }   
  












