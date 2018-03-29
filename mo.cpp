
//dont let your dreams be dreams
#include <bits/stdc++.h>

using namespace std ;

#define	M  100002
#define inf  1 << 30
#define mp make_pair
#define pb push_back
#define pii pair<int , int>
#define rep(i , n) for(int  i = 0 ; (i) < n ; i++ )
#define repi(i , n ) for(int   i = 1  ; i <= n ; i++ )
#define mem(x , y ) memset(x , y , sizeof x )
#define ff first
#define ss second
#define sf1(x)  scanf("%d", &x ) ;
#define sf2(x, y  ) scanf("%d%d",  &x, &y) ;
#define all(a ) a.begin() , a.end()
#define _lb(x ,y ) lower_bound(all(x  ) , y ) - x.begin
#define fast ios_base :: sync_with_stdio(false ) ;
#define dbg(x )  cout << #x << " : " << x << endl ;

int _set(int n , int pos  ) { return n = n|(1<< pos) ; }
int reset(int n ,int pos ) { return n =  n & ~(1<<pos ); }
bool check(int n ,int pos ) { return (bool ) (n& (1<<pos))  ; }
/*


int prr[M+5 ] , phi[M+5];
vector<int > pv ;
dd
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
#define cst	clock_t s =  clock() ;
#define cnd	cout << (double) (clock() - s )/CLOCKS_PER_SEC  << endl ;

//int dx[] = { -1 ,+1, 0 , 0 , -1 , -1  , 1 , 1 };
//int dy[] = { 0 , 0, +1, -1  , +1 , -1 , 1 , -1 };

//int dx[] = { 1 , 1, 2 , 2  , -1 , -1 , -2 , -2 };
//int dy[] = { 2 , -2, +1, -1 ,2 , -2 , 1 , -1 };

*/

typedef long long ll ;

int arr[M+2] , cnt[M+2] , ans[M+2];
int block ,curr , st,  en  ;

struct ival {
	int l , r , idx ;
	ival() { } ;
	ival(int a, int b , int c ) {
		l = a ;
		r = b;
		idx = c ;

	}

} ;


vector<ival > v;

bool cmp( ival x , ival  y ) {
  //  cout<< "her\n" ;

	if(x.l/block  != y.l/block  )	return x.l/block < y.l/block  ;
    return x.r < y.r ;

}

void func(int left , int right ) {
	while(st < left) {
		cnt[arr[st] ]-- ;
		if(cnt[arr[st] ]== 0 ) curr--;

		++st ;
	}

	while(st > left) {
		--st ;
		cnt[arr[st] ]++ ;
		if(cnt[arr[st] ] == 1 ) curr++ ;
	}

	while(en < right ){
		en++ ;
		cnt[arr[en] ]++ ;
		if(cnt[arr[en] ] == 1  ) curr++ ;

	}

	while(en > right ){
		cnt[arr[en] ]--;
		if(cnt[arr[en  ] ] == 0)  curr-- ;
		en--;


	}


}



int main()
{
 //   fast

 freopen("in.txt", "r",stdin );
    // freopen("out.txt", "w",stdout );

    int k, cs = 0, tc, n, m ;
    scanf("%d",&tc) ;

    while(tc-- )
    {
        printf("Case %d:\n" , ++cs) ;
       // cout << "Case " << ++cs << ":\n" ;
        v.clear() ;

     //   cin >> n >> m ;
        scanf("%d%d",&n,&m) ;
        rep( i,n )  cin >> arr[i] ;

        block =  sqrt(n ) ;
        // cin>> tc ;

        rep(i, m  )
        {
            int l, r  ;
           // cin >> l >>  r;
            scanf("%d%d",&l , &r );
            v.pb(ival( l-1, r-1, i ) ) ;
        }


        st =  0 ;
        en = 0  ;
        curr = 1  ;

        mem(cnt,  0 ) ;
        cnt[arr[0] ]++ ;

        sort(all(v), cmp) ;
        //  cout << "sorted" << endl ;

        rep( i, v.size() )
        {
            //func(v[i].l  , v[i].r  )  ;


            ans[ v[i].idx ] = curr ;



        }
        rep(i, m ) printf("%d\n" , ans[i] )   ;

    }


    return 0;
}





