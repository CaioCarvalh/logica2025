#include <studio.h>

int main() {
   int T,N,i;
   unsigned long long fib[61];
   
   fib[0] = 0;
   fib[1] = 1;
   for(i = 2;i <= 61;i++)
   {
       fib[i] = fib[i - 1] + fib[i - 2];
   }
   
   scanf("%d", &T);
   while(T--)
   {
       scanf("%d", &N);
       printf("Fib(%d) = %lld\n", N, fib[N]);
   }
   return 0;
}
