#include <stdio.h>
long factorial(int n);

int main() {
int num;
long result;

printf("Enter a number:");
scanf("%d",&num);

result=factorial(num);

printf("Factorial of %d= %ld\n",num,result);

return 0;
}

long factorial(int n) {
long fact=1;
int i;
for (i=1;i<=n;i++) {
fact=fact*i;
}

return fact;
}
