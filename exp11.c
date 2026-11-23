
#include <stdio.h>

int main() {
int intArr[5];
float floatArr[5];
char charArr[5];
int i;

printf("Enter 5 integer elements:");
for(i=0;i<5;i++) {
scanf("%d",&intArr[i]);
}

printf("Enter 5 float elements:");
for(i=0;i<5;i++) {
scanf("%f",&floatArr[i]);
}

printf("Enter 5 characters:");
for(i=0;i<5;i++) {
scanf("%c",&charArr[i]);
}

printf("\nInteger Array:\n");
for(i=0;i<5;i++) {
printf("Value = %d\tAdress = %p\n",intArr[i],(void*)&intArr[i]);
}

printf("\nFloat Array:\n");
for(i=0;i<5;i++) {
printf("Value = %.2f\tAdress = %p\n",floatArr[i],(void*)&floatArr[i]);
}

printf("\nCharacter Array:\n");
for(i=0;i<5;i++) {
printf("Value = %c\tAdress = %p\n",charArr[i],(void*)&charArr[i]);
}

return 0;
}
