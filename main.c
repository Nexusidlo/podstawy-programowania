#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    { printf("///////////////////////   1\n");
 int tab1[] = {1,1,5,4,8,1,2,15,1,8};
 int tab2[] = {10,4,5,1,8,7,7,8,1,45};
fun1(tab1, tab2, 10);

}

{ printf("\n\n/////////////////////   2\n");
    srand(time(NULL));
char* napisy[3];
napisy[0] = "zamien";
napisy[1] = NULL;
napisy[2] = "naGwiazdkiRazRaz";
fun2(napisy, 3);
}


return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 ///////      1111111

    void fun1(int T1[], int T2[], int size){
sort(T1, size);
sort (T2, size);
int Ex1, Ex2, wspolnych=0;
int sprawdzana;

for ( int i = 0; i < size; i=i+Ex1){
    sprawdzana = T1[i];
    Ex1=0, Ex2=0;
        for (int j = 0; j < size; j++){
            if (T1[j] == sprawdzana)
                Ex1++; }
        for (int j = 0; j < size; j++){
            if (T2[j] == sprawdzana)
                Ex2++; }
      printf("%d - %d  %d \n", sprawdzana, Ex1, Ex2);
    if (Ex1<Ex2) {
        wspolnych+=Ex1;}
    else {
    wspolnych+=Ex2; }
    }
printf("Wspolnych: %d\n",wspolnych);
}

 void sort(int table[], int size) {
    int i, j, temp;
	for (i = 0; i<size-1; i++)
        {
		for (j=0; j<size-1-i; j++)
		{
			if (table[j] > table[j+1])
			{
				temp = table[j+1];
				table[j+1] = table[j];
				table[j] = temp;
			}
		}
        }
 }


////////     222222222
void fun2(char* str[], int size){
print(str, size);
for (int i=0; i<size; i++){
    if (str[i] == NULL) {
        // printf("zmieniam %d wyraz bo to null\n", i);
        generate(strlen(str[i-1]), strlen(str[i+1]), str[i]); }
}
print(str, size);
}

void generate(int A, int B, char* strin) {
int min = B, max = A;
if (A < B){
    min = A;
    max =B;
}
int length = (rand() % ( max - min )) + min;
strin = (char*)malloc(length * sizeof(char));
// printf("strin length: %d\n",length);

 for (int i=0; i< length; i++)
    strin[i] = '*';
 }

void print(char* str[], int size) {
for( int i = 0; i < size; i++)
    printf("%s ",str[i]);
    printf("\n");
}
///////     44444444
char* fun4(char* napis, const char template[]) {

}

