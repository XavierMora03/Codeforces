
#include<stdio.h>
#include<math.h>

int main(){

long long int n, m,a;
scanf("%ld",&n);
scanf("%ld",&m);
scanf("%ld",&a);

n =ceil(1.0*n/a);
m = ceil(1.0*m/a);

printf("%ld",m*n);

return 0;
}

