// returns kmp fail table for given s
vector<int> failTable(string s ) {
    int i,j;
    i = 0; 
    j = 1; 
    vector<int >v(sz(s) ) ;
    for( ; j<sz(s) ;j++ ) {
        if(s[i]==s[j] ) {
            v[j] = i+1;
            i++;  

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
// input abaab
// output 00112
