#include<bits/stdc++.h>
using namespace std;


#define sz(x ) x.size()
#define mem(x ,y) memset(x , y , sizeof x )
#define all(a ) a.begin() , a.end()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int , int >
#define dbg(args...) do {   cerr << #args << ' ' ;  print(args); } while(0); cerr<< endl;

// loop
#define forn(i,a,n ) for(int  i = a ; i <= n ; i++ )
#define rep(i ,n ) for(int i = 0 ; i < n ; i++ )
#define repi(i ,n ) for(int i = 1 ; i <= n ; i++ )

#define si(a) scanf("%d",&a )
#define sl(a) scanf("%I64d",&a )
#define sd(a) scanf("%lf",&a )
#define sii(a , b) scanf("%d %d",&a , &b )
#define sdd(a , b) scanf("%lf %lf",&a , &b )
#define sll(a , b) scanf("%I64d %I64d",&a , &b )

template< typename T >
void print(const T& v) {
    cerr << v << ' ' ;
}

template< typename T1, typename... T2 >
void print( const T1& first, const T2&... rest ){
    print(first);
    print(rest...) ;
}

//code from here
typedef long long ll ;

#define M 500123

struct range {
	int l , r , id;
	range () { } ;
	range(int a, int b , int c ) {
		l = a ;
		r = b;
		id = c ;

	}

} ;

range query[M+2] ;
int block ; 

bool cmp( range x ,range  y ) {

	if(x.l/block  != y.l/block  )	return x.l/block <= y.l/block  ;
    	return x.r <= y.r ;

}

void func(int left , int right ) {
	while(st < left ) {


	}

	while(st > left ) {

	}

	while(en < right ){
	
	}

	while(en > right) {



	}

}




int main() {




	return 0  ;
}
