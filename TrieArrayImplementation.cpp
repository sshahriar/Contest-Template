
int cnt = 1 ; 
struct trie {       // root is always node one
    int link[30 ] , freq ;
    bool flag ;
    trie() {flag  = 0 ; freq = 0 ; mem(link, 0 ) ; }
} ;
trie a[M+2] ;
string s ; 

void insert (int node,  int i ,int  j ,int t ) {
    if( i > j ) return; 

    if(a[node].link[s[i]-'a' ]  == 0 ) {
        ++cnt;
        a[node].link[s[i]-'a' ] = cnt; 
        node = cnt;    
        a[node].freq = (isgood[s[i]-'a' ]==0?1:0  ) ;
        ans++ ; 
        func(node ,i+1  ,j ,t) ; 


    } else {
        node = a[node].link[s[i]-'a' ] ; 
        t+= a[node].freq ; 
        insert(node ,i+1 ,j , t ) ;
    }
}
