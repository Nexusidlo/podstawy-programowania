#include <stdio.h>
struct planeta {
int no;
char name[50];
float R;
};
struct planeta retPlan (struct planeta planety[], int size){
int indeks;
float V, Vmax=0;
for (int i = 0; i < size; i++){
    V = 4/3 * 3.14 * pow(planety[i].R,3);
     if ( planety[i].no%2 == 1)
        V=V*0.9;
     if (V > Vmax) {
        Vmax = V;
        indeks = i;
} }
return planety[indeks];
};

int main(){

return 0;}
