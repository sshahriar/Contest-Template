mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); // include this 
int main() {
    mt19937 rnd ; 
    for(int i=0 ; i<10 ; i++ ){
        int x = rnd()%n+1 ;
        cout << x << endl ;
    }
  

}
