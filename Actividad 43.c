#include <stdio.h>

int main()
{
    int dia,mes;

    printf("Dia: ");
    scanf("%d",&dia);

    printf("Mes: ");
    scanf("%d",&mes);

    if((dia>=21 && mes==3) || (dia<=20 && mes==4))
        printf("Aries");

    else if((dia>=21 && mes==4) || (dia<=20 && mes==5))
        printf("Tauro");

    else if((dia>=21 && mes==5) || (dia<=21 && mes==6))
        printf("Geminis");

    else if((dia>=22 && mes==6) || (dia<=22 && mes==7))
        printf("Cancer");

    else if((dia>=23 && mes==7) || (dia<=23 && mes==8))
        printf("Leo");

    else if((dia>=24 && mes==8) || (dia<=23 && mes==9))
        printf("Virgo");

    else if((dia>=24 && mes==9) || (dia<=23 && mes==10))
        printf("Libra");

    else if((dia>=24 && mes==10) || (dia<=22 && mes==11))
        printf("Escorpio");

    else if((dia>=23 && mes==11) || (dia<=21 && mes==12))
        printf("Sagitario");

    else if((dia>=22 && mes==12) || (dia<=20 && mes==1))
        printf("Capricornio");

    else if((dia>=21 && mes==1) || (dia<=19 && mes==2))
        printf("Acuario");

    else if((dia>=20 && mes==2) || (dia<=20 && mes==3))
        printf("Piscis");

    return 0;
}
