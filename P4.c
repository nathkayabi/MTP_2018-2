//P4.c 
//Nat�lia Regina de Oliveira Kayabi
//Matr�cula: 11711EBI033

#include <stdio.h>

int ackermann (int , int);
int main(){
   int m, n;
   scanf("%d%d", &m, &n);
   printf("\"%d\" + \"%d\" resulta em \"%d\"\n", m, n, ackermann(m,n));
   return 0;
}

int ackermann(int m, int n){
   if(m==0) return n+1;
   else if(m>0 && n==0) ackermann(m-1,1);
   else if(m>0 && n>0) ackermann(m-1, ackermann(m, n-1));
}
