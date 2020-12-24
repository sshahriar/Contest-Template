vector< pair<int,int > >  facts ; 
void getfactors(int x) {
    facts.clear()  ; 
    for(int  i=2 ;i*i <=x ; i ++ ) {
        if(x%i==0 )  {
            int cn =  0  ;  
            while(x%i == 0 ) x/=  i , cn++  ;

            facts.pb(  mp(i ,cn))  ; 

        }
    }
    if(x>1 )  facts.pb( mp(x, 1LL  ))  ; 
}
