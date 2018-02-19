#include<bits/stdc++.h>

using namespace std;

#define	M 40005
#define inf  1 << 30
#define mp make_pair
#define pb push_back
#define pii pair<int , int>
#define vi vector<int >
#define mii map<int , int >
#define rep(i , n) for(int  i = 0 ; (i) < n ; i++ )
#define repi(i , n ) for(int   i = 1  ; i <= n ; i++ )
#define mem(x , y ) memset(x , y , sizeof x )
#define ff first
#define ss second
#define sf1(x)  scanf("%d", &x ) ;
#define sf2(x, y  ) scanf("%d%d",  &x, &y) ;
#define all(a ) a.begin() , a.end()
#define fast ios_base :: sync_with_stdio(false ) ; cin.tie(NULL ) ;

/*
int prr[M+5 ] , phi[M+5];
vector<int > pv ;
void seive() {
	int i , j , k ;
    rep(i ,M) prr[i] = 1;
    prr[0] = 0 ;	prr[1] = 0 ;
	rep(i  ,M ) phi[i] = i ;
	for( i = 2 ; i < M ;i++ ) if(prr[i] ){  phi[i] = i- 1;
			for(j  = i+i; j < M ; j += i) {
				prr[j] = 0 ;   phi[j]/= i ; phi[j] *= i-1 ;
            }
	}
//	rep( i,  M  ) if(prr[i] ) pv.pb(i) ;
}
*/


#define cst	clock_t s =  clock() ;
#define cnd	cout << (double) (clock() - s )/CLOCKS_PER_SEC  << endl ;


typedef long long ll ;

//int dx[] = { -1 ,+1, 0 , 0 , -1 , -1  , 1 , 1 };
//int dy[] = { 0 , 0, +1, -1  , +1 , -1 , 1 , -1 };

//int dx[] = { 1 , 1, 2 , 2  , -1 , -1 , -2 , -2 };
//int dy[] = { 2 , -2, +1, -1 ,2 , -2 , 1 , -1 };
vector< int >g[M+5 ] , stk  ;
bool vis[M+5]  , flag = 0 ;
int in[M +5] ,out[M+5 ] ;

map<string , int  >m ;

void clr() {
	rep(i , M ) g[i].clear() ;
	mem(vis , 0 ) ; mem(in , 0 ) ; mem(out , 0 );
	stk.clear();
	m.clear();
}

void f(int u){
	vis[u] = 1   ;

	rep(i , g[u].size() ){
		int  v = g[u][i] ;
		if(vis[v] == false ){
			f(v);

		}

	}
	stk.pb(u ) ;
}

int f2(int u ) {
	int  mark = 0 ;
	for(int i = stk.size()-1 ; i >= 0 ;i--) {
		u =  stk[i] ;
		if( in[u] != 0 ) {mark = 1 ; break ; }
		rep(j , g[u].size() ) {
			int v = g[u][j] ;
			out[u]-- ;
			in[v]--;

		}

	}
	return mark ;
	//if(mark  ) cout << "no\n";
	//else cout << "yes" ;
}


int main() {

   // freopen("in.txt", "r",stdin );
   // freopen("out.txt", "w",stdout );

	int k , cs = 0 , tc ;

	cin >> tc ;
	while(tc--){
		clr() ;
		int cnt = 0 ;
		cin >> k ;  getchar() ;
		while(k--){
		  string s1,s2 ;
			int u, v ;

			cin >> s1 >> s2 ;
			//cout << "input taken : "<< s1 << " " << s2 << endl ;
			if(m.find(s1) == m.end()  ) m[s1] = ++cnt;
			if(m.find(s2) == m.end() ) m[s2] = ++cnt ;

			u = m[s1] ; v = m[s2] ;

			g[u].pb(v) ;
			out[u]++ ;
			in[v]++;


		}
        repi(i, cnt ) if(vis[i] == 0 ) f( i ) ;         
	  
		k = f2(1);

        if(k ) printf("Case %d: No\n" , ++cs);
        else printf("Case %d: Yes\n" , ++cs) ;

	}


	return 0;
}




