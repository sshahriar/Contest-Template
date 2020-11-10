//   upto 3e8 works fine ...
bitset< maxn  >isPrime  ; 

int cs = 0;
void  seive(  )  {
    for(int i=3 ;i*i < maxn ;i+=2)  if(!isPrime[i])  {
        for(int j=i*i;j<maxn ; j+= (i<<1) ) 
            isPrime[j] = 1 ; 
    }   
    isPrime[1] =isPrime[0] =  1 ;  
} 
