 
#include <bits/stdc++.h> 
using namespace std; 
#define ff              first
#define ss              second
#define pb(x)           push_back(x)
#define mp              make_pair
#define sz(x)           (int)x.size()
#define mem(x ,y)       memset(x , y , sizeof x )
#define all(a )         a.begin() , a.end()  
#define pii             pair<int,int >
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
ll  mod =  1e9+7, mod2 =     998244353;
int setbit(int n, int pos  ) { return n = n|(1LL<< pos) ; }
int resetbit(int n,int pos ) { return n = n & ~(1LL<<pos ); }
bool checkbit(int n,int pos) { return (bool ) (n&(1LL<<pos))  ; }
template<typename T>T add(T x, T y, T mod = mod ){ x%= mod ;  y%= mod ;   return (x+y)%mod ;  }
template<typename T>T sub(T x, T y, T mod = mod ){ return ((x-y)%mod+mod )%mod;  }
template<typename T>T mul(T x, T y, T mod = mod ){ x %= mod ; y %= mod ; return (x*y)%mod  ;  }
template<typename T> void print(const T& v) {    cout << v << ' ' ;}
template<typename T1,typename... T2> void print( const T1& first, const T2&... rest ){ print(first); print(rest...) ;}
template<typename T> void dbg_a(T a[] ,int n=10 ) {cerr << "[ "; for(int i=0;i <= n ; i++ )cerr<<a[i]<<' ' ; cerr<< " ]" <<  endl; } 
template<typename F,typename S>ostream& operator<<( ostream& os, const pair< F, S > & p ){return os << "[ " << p.first << ", " << p.second << " ]";}
template<typename T>ostream &operator<<(ostream & os, const vector< T > &v ){os << "[ "; for(int i=0; i<sz(v) ; i++ )  os << v[i] << ' ' ; return os << " ]\n" ; } 
template<typename T>ostream &operator<<(ostream & os, const map< T ,T> &Map ){os << "[ "; repit(it , Map ) os << "[" <<(*it).ff << ' ' << (*it).ss << "] "    ; return os << "]\n" ; } 
template<typename T>ostream &operator<<(ostream & os, const set< T > &Set  ){os << "[ "; repit(it , Set ) os <<  *it  << ' ' ; return os << " ]\n" ; }  
template<typename T>ostream &operator<<(ostream & os, const multiset< T > &Set) {os << "[ "; repit(it , Set )os <<  *it  << ' ' ; return os << " ]\n" ; }  
template < typename T > 
T powmod(T x,T y  ,T mod = mod ) {
    T r = 1LL;
    while(y){
        if(y&1)
            r = (r * x) % mod;
        y >>= 1;
        x = (x * x) % mod;
    }
    return r;
}
 
template < typename T > 
T  invmod( T x , T m = mod) {  
    return powmod(x,m-2 , m) ;   
}


#define  int  ll      
const int maxn  = (int)  3e5+  123;
const int inf  =  1e16; //0xc0  ;//0x3f ;    
/////////////////////////////////////////////////
  
int n , m  ,  sum ;  
int a[maxn  ] ; 
int tree[maxn*4]  , lazy[maxn* 4]  ;

void push(int id ,int l  , int r )  {
    // if(lazy[id]< 0 ) {
    //     lazy[id] =  0 ;  
    //     return ;
    // } 
    tree[id] +=   (r-l+ 1)* lazy[id]  ; 
    tree[id] =  max(0LL  ,tree[id])  ;  
    if(  l!=r)  {
        lazy[id*2] +=  lazy[id]  ; 
        lazy[id*2+1 ] +=  lazy[id]  ; 
    }
    lazy[id] =  0 ;

}
void  bld(int id,int l, int r )  {
    if( l>r) return  ; 
    if(l==r )  { 
        tree[id  ]  =  a[l ]; 
        return ;
    }
    int mid  = (l+r)/2  , lt=  id*2   ; 
    bld( id*2 , l , mid) ; 
    bld(id*2+1, mid+1 ,r ) ; 
    tree[id ]  =  tree[lt ]+ tree[lt+1]  ; 

}   
void upd(int id,int l, int r ,int ql ,int qr , int val   )  {
    // dbg( l,r)  ; 
    push ( id,l,r)   ; 
    if( r<ql or l>qr ) return  ;
    if(l >=ql  and r<=qr ) {
        
        lazy[id]  +=val   ;
        push(id, l,r )   ; 
 
        return ;
    }

    int mid  = (l+r)/2  , lt=  id*2   ; 
    upd( id*2 , l , mid,ql ,qr ,val) ; 
    upd( id*2+1, mid+1 ,r , ql  , qr, val   ) ; 
    tree[id ]  =  tree[lt ]+  tree[lt+1]  ; 

}   
int query(int id,int l, int r ,int ql ,int qr    )  {
    push( id,l,r)  ;  
    if( l>r) return   0 ; 
    if( r<ql or  l>qr ) return  0  ;
    if(l >=ql  and r<=qr ) {   
        return  tree[id ];
    }
    int mid  = (l+r)/2  , lt=  id*2   ;  
    return query( id*2 , l , mid,ql ,qr )+ 
    query( id*2+1, mid+1 ,r , ql  , qr  ) ; 
}   
void  _add( int  l,int r ,int val )  {
    dbg(  l ,r  ,val ) ;
    upd(1, 1,n ,l, r ,val ) ; 
}
int get( int  l,int r  )  {
    return query(1, 1,n ,l, r  ) ; 
}

void  solve() { 

    int  x, y , w ,  z ,q  ,  tot = 0  , ans = 0 , mx =0 , mn     ;     
    
    cin >> n ;

    dbg(n );
    bld(1,1,  n  )  ;  



    _add(1,1,1 )  ; 
    dbg( get(1, n )) ; 

    cout << endl ; 
    cout << endl ; 


    _add(3,3,1 )  ; 


    _add(1,2 , -1) ;

    dbg_a(tree )   ; 
    dbg_a(lazy )  ;

    dbg(get( 1,4))  ; 
    dbg(get( 1,1))  ; 

    dbg( get(2,2 ))  ; 
    dbg( get(3,3 ))  ; 
    dbg( get(4,4 ))  ; 












}        
 //  before submit  -> //  check case 1 
signed main() {     
         freopen("in.txt" , "r" , stdin ) ;  
    

    ios :: sync_with_stdio(false);   cin.tie(0); cout.tie(0)  ;      
    cout << fixed << setprecision( 12) ; 
    int t = 1 , cs =0   ;     
  
    cin >> t ;  
    while(t-- )   {   
        // cout <<  "Case #"<<  ++cs << ": " ; 
        solve()  ;   
    }  
    return 0 ;      
}    

  // segment 
// kmp 
// lca   
// miller rabin  
// 
