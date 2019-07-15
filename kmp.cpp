int fail[M+2 ] ;
string s ;
void kmp() {
    fail[1]= 0 ;  // 1  based index 
    for(int i=2; i<sz(s) ;i++) {
        int curr= fail[i-1];
        while(curr>0 and s[curr+1]==s[i] ) {
            curr=fail[curr ]; 
        }
        if(s[curr+1]==s[i] )  ++curr ;
        fail[i] = curr ;

    }       
    //repi(i, sz(s)-1) cout << fail[i] << " " ; cout <<endl; 
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
