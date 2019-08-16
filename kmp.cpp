
int kmp[M+2 ] ;
string text ; 
void generatefail(string s ) {
    rep(i , sz(s) )  kmp[i]= 0; 
    forn(i,2, sz(s ) -1) {
        int curr = kmp[i-1] ; 
        while(curr >0 and s[i]!= s[curr+1 ]) {
            curr = kmp[curr ] ;  
        }
        if(s[i] == s[curr+1] )  ++curr ;
        kmp[i] = curr ;

    }
}

int  match( string s ) {
    int curr= 0 ,cnt = 0 , k =  sz(text )-min(sz(text)  , sz(s)  ) ;
    s = "0"+ s;  
    genfail(s) ; 
    forn(i , k , sz(text) -1  ) {
        while(curr>0 and s[curr+1 ]!= text[i] ) 
            curr = kmp [curr ] ;    
        if(s[curr+1 ] == text[i] ) curr++ ; 

   
    }
    return curr  ;
}


    
    
///// another implementation 
https://codeforces.com/blog/entry/66943 problem d  
void init(char s[], int n, int kmp[], int nxt[][26])
{
    kmp[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        int cur = kmp[i - 1];
        while (cur > 0 && s[cur + 1] != s[i])
            cur = kmp[cur];
        if (s[cur + 1] == s[i])
            ++cur;
        kmp[i] = cur;
    }

    for (int i = 0; i <= n; i++)
        for (char c = 'a'; c <= 'z'; c++)
        {
            int cur = i;
            while (cur > 0 && s[cur + 1] != c)
                cur = kmp[cur];
            if (s[cur + 1] == c)
                ++cur;
            nxt[i][c - 'a'] = cur;
        }
}
