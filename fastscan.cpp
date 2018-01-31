
int fsc(){
int ret, num = 0 , negetive = -1    ;
char ch ;
    //getchar();
    while(ch = getchar()){
     // pf("here");
    if(ch != ' ') break ;

    }
    if(ch == '-' ) negetive = 1 ;
    else    num = 10* num + ch -'0';
    if(ch ==  'x') {
    getchar();
    return -1 ;

    }
    while(1){
        ch =  getchar();
        if(ch ==  '\n' || ch == ' ' ) break ;
        num = 10* num + ch -'0';

    }
    if(negetive ==  1) {num *= -1 ;
   // pf("negetive %d\n",num );
    }
    return num  ;
}
