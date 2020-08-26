struct Node {
    int cnt ; 
    Node* nxt[2]  ;
    Node() {    cnt = 0; rep(i,2)  nxt[i] = NULL ;  }
} ;
int len = 35; 
struct Trie {
    Node *head , *curr , *dummy   ;
    Trie() {
        head = curr  = new Node() ;
    }    
    void insert(int id ,int x , Node* curr   ) {
        curr->cnt++ ; 
        if(id<0) return  ;

        if(checkbit(x,id) ) {
            if(curr->nxt[1]==NULL) curr->nxt[1] = new Node() ; 
            insert(id-1, x, curr->nxt[1] )  ; 
        } else {
            if(curr->nxt[0]==NULL) curr->nxt[0] = new Node() ; 
            insert(id-1, x, curr->nxt[0] )  ; 
       

        }
    }
    void  insert(int  x ) {
        curr = head  ;  
        insert(len , x , curr)  ; 
    }
    int func(int  id  , int  x   , Node  *curr){
        if( curr==0   ) return 0 ; 
        curr->cnt-- ;
        if(id<0) return  0  ;   
        int  bit  =  checkbit(x, id)  ;  
        if( ( curr->nxt[0]!=0 and  curr->nxt[1] != 0) and 
                (curr->nxt[0]->cnt > 0 and  curr->nxt[1]->cnt>0)  )  {

            if( bit==0 ) {
                return   func(id-1 ,x  , curr->nxt[0] )  ; 
            } else {
                return   func(id-1 ,x  , curr->nxt[1] )  ; 
            }
            
        }else if(curr->nxt[0]!=0 and curr->nxt[0]->cnt>0) {
            if(bit )  return func(id-1 ,x, curr->nxt[0 ] ) +  (1LL<<id );
            else  return func(id-1 ,x, curr->nxt[0 ] ) ;
        

        } else if(curr->nxt[1]!=0 and curr->nxt[1]->cnt>0) {
         
            if(bit )  return func(id-1 ,x, curr->nxt[1 ] )   ;
            else  return func(id-1 ,x, curr->nxt[1 ] )+ (1LL<<id ) ;
        }

 

 
    }
    int func1( int x )  {
        curr =  head ; 
        return  func( len  ,x ,curr )   ;

    }  
 
    bool search(int x  ){
        curr = head; 
        
        string s="" ; 
        for(int i=30;i>=0; i--) {
            s += ((int )checkbit(x,i) +'0') ;
        }
        rep(i,sz(s) ) {
            int tmp = s[i]-'0' ;
            if( curr->nxt[tmp] == NULL) 
                return 0;
            //dbg(curr->cnt , tmp)  ;
            curr = curr->nxt[tmp] ;
        
        }

        return (curr->cnt > 0 ) ;
    }

} ; 


