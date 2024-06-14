#include <stdio.h>
int main(){
int age[] = {148,342,53,543,6654,776,845,923,821,76};
int *P;
P = age;
printf("---------------------------------------\n");
printf("le contenu du pointeur age est: %d\n",*P);
printf("l'adresse du pointeur age est: %p\n",P);
P++;
printf("le contenu du pointeur age est: %d\n",*P);
printf("l'adresse du pointeur age est: %p\n",P);
P++;
printf("le contenu du pointeur age est: %d\n",*P);
printf("l'adresse du pointeur age est: %p\n",P);
P++;
printf("le contenu du pointeur age est: %d\n",*P);
printf("l'adresse du pointeur age est: %p\n",P);
P++;
printf("le contenu du pointeur age est: %d\n",*P);
printf("l'adresse du pointeur age est: %p\n",P);
P++;
printf("le contenu du pointeur age est: %d\n",*P);
printf("l'adresse du pointeur age est: %p\n",P);
P++;
printf("le contenu du pointeur age est: %d\n",*P);
printf("l'adresse du pointeur age est: %p\n",P);
P -= 2;
printf("le contenu du pointeur age est: %d\n",*P);
printf("l'adresse du pointeur age est: %p\n",P);
int val = 2121;
printf("%d\n",val);
char val2;
printf("%ld Octets\n",sizeof(val2));
float val3;
printf("%ld Octets\n",sizeof(val3));
long double val4;
printf("%ld Octets\n",sizeof(val4));
double val5;
printf("%ld Octets\n",sizeof(val5));

return 0;
}
