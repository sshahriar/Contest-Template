
    while(hi-lo>20  )  {
        int mid1,  mid2 ; 
        
        mid1 =   lo +(hi - lo )/3  ; 
        mid2 =   hi- (hi-lo)/3  ;  

        if(func(mid1)< func( mid2) )  hi =  mid2 ;
        else  lo = mid1 ; 





    }
