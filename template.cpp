 
#include <bits/stdc++.h> 
using namespace std;
#define ff              first
#define ss              second
#define pb(x)           push_back(x)
#define mp              make_pair
#define sz(x)           (int)x.size()
#define mem(x ,y)       memset(x , y , sizeof x )
#define all(a )         a.begin() , a.end()
#define endl            "\n"  
#define forn(i,x,y )    for(int i= x; i<=y ; i++ )  
#define ford(i,x,y )    for(int i= x; i>=y ; i-- )  
#define rep(i,n )       for(int i= 0; i<n ; i++ )  
#define repi(i,n )      for(int i= 1; i<=n ; i++ )  
#define repit(i, c)     for( __typeof((c).begin()) i = (c).begin(); i != (c).end();++i )
    
#ifndef ONLINE_JUDGE           
    #define dbg(args...)    do {   cout << #args << ' ' ;  print(args); } while(0); cerr<< endl ;
#else 
    #define dbg(args...)   ; 
#endif 
 
typedef long long ll  ;
typedef unsigned long long ull  ;
 
#define  int  ll   

ll  mod =  1e9+7, mod2 =     998244353; 
int setbit(int n, int pos  ) { return n = n|(1LL<< pos) ; }
int resetbit(int n,int pos ) { return n = n & ~(1LL<<pos ); }
bool checkbit(int n,int pos) { return (bool ) (n&(1LL<<pos))  ; }
template<typename T> void print(const T& v) {    cerr << v << ' ' ;}
template<typename T>T add(T x, T y, T mod = mod ){ x%= mod ;  y%= mod ;   return (x+y)%mod ;  }
template<typename T>T sub(T x, T y, T mod = mod ){ return ((x-y)%mod+mod )%mod;  }
template<typename T>T mul(T x, T y, T mod = mod ){ x %= mod ; y %= mod ; return (x*y)%mod  ;  }
template<typename T1,typename... T2> void print( const T1& first, const T2&... rest ){ print(first); print(rest...) ;}
template<typename T> void dbg_a(T a[] ,int n=10 ) {cerr << "[ "; for(int i=0;i <= n ; i++ )cerr<<a[i]<<' ' ; cerr<< " ]" <<  endl; } 
template<typename F,typename S>ostream& operator<<( ostream& os, const pair< F, S > & p ){return os << "[ " << p.first << ", " << p.second << " ]";}
template<typename T>ostream &operator<<(ostream & os, const vector< T > &v ){os << "[ "; for(int i=0; i<sz(v) ; i++ )  os << v[i] << ' ' ; return os << " ]\n" ; } 
template<typename T>ostream &operator<<(ostream & os, const map< T ,T> &Map ){os << "[ "; repit(it , Map ) os << "[" <<(*it).ff << ' ' << (*it).ss << "] "    ; return os << "]\n" ; } 
template<typename T>ostream &operator<<(ostream & os, const set< T > &Set  ){os << "[ "; repit(it , Set ) os <<  *it  << ' ' ; return os << " ]\n" ; }  
template<typename T>ostream &operator<<(ostream & os, const multiset< T > &Set) {os << "[ "; repit(it , Set )os <<  *it  << ' ' ; return os << " ]\n" ; }  
template<class T> string to_str(T t){stringstream ss; ss<<t; return ss.str();} 
//  #include <ext/pb_ds/assoc_container.hpp> // Common file
// #include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
// using namespace __gnu_pbds;
// template<class T> using ordered_set = tree<T, null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update> ; 
// ordered_set<int>s ;
// order_of_key (k) : Number of items strictly smaller than k . 
// find_by_order(k) : K-th element in a set (counting from zero).

template < typename T > 
T powmod(T a,T b  ,T mod = mod ) {
    if( !b ) return 1;
    if( b%2 ) return powmod(a,b-1)*a%mod;
    T c =  powmod(a,b/2);
    return c*c%mod;
}
 
template < typename T > 
T  invmod( T x , T m = mod) {  
    return powmod(x,m-2 , m) ;   
}

const int maxn  = (int)1e5+123;
const ll inf  =  1e18; //0xc0  ;//0x3f ;    
////////////////////////////////////////////
  
int n ,m,sum   ;    
int a[maxn ] ; 

void  solve() {    
    int x,y,z,k,p ,q ,  tot = 0  , ans = 0 , mx = 0    ;            
    

    cin >> n ;



 
}  
signed main() {     
    #ifndef ONLINE_JUDGE           
        freopen("in.txt", "r", stdin);
    #endif 
    ios :: sync_with_stdio(false);  cin.tie(0);   cout.tie(0) ;      
    // cout << fixed << setprecision( 12) ; 
    int t = 1 , cs =0   ; 
    cin >> t ;
    while(t--)   { 
        solve()  ;   
    }  
    return 0 ;      
}       

