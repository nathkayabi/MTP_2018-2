//P3.c
//Nome: Nat�lia Regina de Oliveira Kayabi
//Matr�cula: 11711EBI033

#include <stdio.h>

long long int eleva(int base, int expo)
{
  int result=1;
  for(;expo>0;expo--)
  {
    result*=base;
  }
  return result;
}

int main()
{
  int i,j=0,k;
  unsigned long long int num=0;
  char str[256];
  printf("Digite a string a ser transformada:\n");
  scanf("%s",str);
  for(k=0;str[k]!='\0';k++);
  for(;k>=0;k--)
  {
    if(str[k]>=48 && str[k]<=57)
	{
      num+=(str[k]-48)*(eleva(10,j));
      j++;
    }
  }
  printf("\nO resultado e: %lld",num);
}
