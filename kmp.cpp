// returns kmp fail table for given s
// works for string vector

vector<int> failTable(vector<int> s ) {
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

bool match(vector<int>v  ,vector<int> s , vector<int>  p  ) {
    int f= 0 , curr= 0 , len= sz(v) ;

    // dbg(s, p) ;

    rep(i , sz(p  ) ) {
        if(i==0) continue; 
        if(p[i] == s[curr ]) { 
            curr++ ; 
            if(curr==len) return 1 ; 
        
        } else{
            //dbg("not matjc")  ;
            while(curr>0) {

                curr = v[curr-1]  ;
                if(p[i] == s[curr] ) {
                    curr++ ; 
                    break ; 

                } else {

                }   

            }
 
        }

       // dbg(i, curr );
    }

    return 0 ; 
}

// input abaab
// output 00112
