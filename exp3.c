#include <stdio.h>
int main() {
float a,b,c,average;


printf("Enter three numbers:");
scanf("%F%F%F",&a,&b,&c);

average = (a+b+c)/3;

printf("Average of the three numbers =%.2f\n",average);

return 0;
}
