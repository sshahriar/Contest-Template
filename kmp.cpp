// returns kmp fail table for given s
// works for string vector

// returns failtable for given string or vector
// input abaab
// output 00112
// change vector to string for string matching 
vector<int> failTable(vector<int> s ) { 
    int i,j; i = 0; j = 1; 
    vector<int >v(sz(s) ) ;
    for( ; j<sz(s) ;j++ ) {
        if(s[i]==s[j] ) {
            v[j] = i+1;  i++;  
        }  else {
            i = v[j-1] ;
            while (1) {
                if(i==0 ) {
                    if(s[i]!=s[j] ) v[j] = 0 , i=0; 
                    else v[j] = i+1, i++; 
                    break ;  
                } else {    
                    if(s[i]==s[j] ) {
                        v[j] =i+1 ; i++; 
                        break; 
                    }
                    i = v[i-1] ;               

                }
            }
        }
    }
    return v ; 
}   

// here s = actual string
// and p =  pattern to be matched 
 //change last two to string for str match
bool match(vector<int>v  ,vector<int> s , vector<int>  p  ) {
    int f= 0 , curr= 0 , len= sz(v) ;
    rep(i , sz(p  ) ) {
        if(i==0) continue; 
        if(p[i] == s[curr ]) { 
            curr++ ; 
            if(curr==len) return 1 ; 
        } else{
            while(curr>0) {
                curr = v[curr-1]  ;
                if(p[i] == s[curr] ) {
                    curr++ ; 
                    break ; 
                } else {
                }   
            }
        }
    return 0 ; 
} 
