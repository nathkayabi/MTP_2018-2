#include <stdio.h>

int main()
{
    int estadoi = 0, i = 0;
    char bits[256];
    printf("\nDigite o numero binario:");
    scanf("%s", bits);

                while(bits[i] != '\0')
    {
        if(bits[i] == '0')
        {
            if(estadoi == 0);
            else if(estadoi == 1) estadoi = 2;
            else if(estadoi == 2) estadoi = 1;
            i++;
        }
        else if(bits[i] == '1')
        {
            if(estadoi == 0) estadoi = 1;
            else if(estadoi == 1) estadoi = 0;
            else if(estadoi == 2);
            i++;
        }
        else
        {
            printf("\nO numero digitado nao e binario.");
            return 0;
        }
    }

    if(estadoi == 0) printf("\n%s e multiplo de 3", bits);
    else printf("\n%s nao e multiplo de 3", bits);
    return 0;
}

