int main(){
    
    int x,y;

    int * const ptr = &x;

    *ptr = 7;

    //ptr = &y; == ERRO

    return 0;
}