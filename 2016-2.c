//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//void print (int **tab, int n, int m){
//for (int i = 0; i < n; i++){
//    for (int j = 0; j < m; j++){
//        tab[i][j] = rand() % 10;
//        printf("%d ", tab[i][j]);
//    } printf("\n");
//}
//}
//
//int check (int **tab, int n, int m, int x){
//
//for (int i = 0; i < m; i++){
//    if (tab[0][i] == x)
//        return 0;
//    if (tab[n-1][i] == x)
//        return 0;
//}
//for (int i = 0; i < n; i++){
//    if (tab[i][0] == x)
//        return 0;
//    if (tab[i][m-1] == x)
//        return 0;
//}
//return 1;
//}
//
//int main(){
//    srand(time(NULL));
//    int n = 5, m =5, x = 8; ///////////////// n, m - wymiary tablicy, x - szukana wartosc na krancach
//int **tab = malloc(sizeof(int*)*n);
//for (int i = 0; i < n; i++){
//    tab[i] = malloc (sizeof(int)*m);
//}
//print(tab, n, m);
//check(tab, n, m, x) ? printf("BRAK %d",x) : printf("WYSTEPUJA %d",x);
//
//for (int i = 0; i < n; i++)
//    free(tab[i]);
//free(tab);
//return 0;
//}
