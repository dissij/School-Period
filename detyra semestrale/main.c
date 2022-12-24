#include <stdio.h>
#include <stdlib.h>

int main()
{
    int viti,muaji,dita,ora,minuta;//Deklarimi i variablave
    printf("Jepni minutat: ");//Printf na mundeson qe ta paraqesim nje tekst ne kete rast Jepni minutat
    scanf("%d", &minuta);//Scanf na mundeson qe me ja dhan vleren perdoruesi

    if(minuta > 60 || minuta < 0)//Ne kete kusht i kemi thene ne qoftese minuta eshte me e madhe se 60 ose me e vogel se 0 atehere do te plotesohet kushti
    {
        printf("Nuk egziston kjo minute \n");//dhe shfaqet mesazhi Nuk egziston kjo minute dhe perfundon
        return 0;//programi perfundon
    }

    printf("Jepni oren: ");//Paraqitet teksti "Jepni oren"
    scanf("%d", &ora);//Ja mundeson me dhane vleren perdoruesi

    if(ora > 24 || ora < 0)//Ne qoftese ora eshte me e madhe se 24 ose me e vogel se 0 atehere plotesohet kushti
    {
        printf("Nuk egziston kjo ore \n");//Paraqitet teksti "Nuk egziston kjo ore" dhe automatikisht perfundon
        return 0;//programi perfundon
    }

    printf("Tregoni diten: ");//Paraqitet teksti "Tregoni diten"
    scanf("%d", &dita);//Jipet vlera nga perdoruesi

    if (dita > 31 || dita < 0)//Ne qoftese dita eshte me madhe se 31 ose me e vogel se 0 plotesohet kushti
    {
        printf("Data e dhene eshte gabim!\n");//Shfaqet mesazhi "Data eshte dhene gabim" dhe automatikisht perfundon
        return 0;//programi perfundon
    }


    printf("Jepni muajin: ");//Shfaqet mesazhi "Jepni muajin"
    scanf("%d", &muaji);//Jipet vlera nga perdoruesi
    if(muaji > 12 || muaji < 0 )//Ne qoftese muaji eshte me i madh se 12 ose me i vogel se 0 atehere plotesohet kushti
    {
        printf("Muaji eshte dhene gabim!\n");//Shfaqet mesazhi "Muaji eshte dhene gabim" dhe automatikisht perfundon
        return 0;//programi perfundon

    }
    printf("Jepni vitin: ");//Shfaqet mesazhi "Jepni vitin"
    scanf("%d", &viti);//Jipet vlera nga perdoruesi

    if(viti > 2022 || viti < 2022 )//Ne qoftese viti eshte me i madh se 2022 ose me i vogel se 2022 atehere plotesohet kushti
    {
        printf("Nuk jemi ne kete vit");//Shfaqet mesazhi "Nuk jemi ne kete vit" dhe automatikisht perfundon
        return 0;//programi perfundon
    }




    if( muaji == 7 )//Eshte dhene kushti ne qoftese muaji jepet 7 pra muaji Korrik te plotesohet kushti
    {
        printf("Data eshte: %d / %d / %d \n", dita, muaji, viti);//Shfaqet data komplet te marrura nga variablat dita ,muaji dhe viti
        if(ora)//Ne qoftese ora eshte dhene nga perdoruesi atehere shfaqet printfi
        {
            printf("Ora eshte: %d : %d  \n", ora,minuta);//Shfaqet ora te marrura nga variablat ora dhe minuta
        }

        printf("Ne kete periudh ska mesim \n");//Shfaqet mesazhi "Ne kete periudhe ska mesim"

    }
    else if (muaji == 8)//Ne qoftese muaji jepet 8 pra muaji Gusht plotesohet kushti
    {
        printf("Data eshte: %d / %d / %d \n", dita, muaji, viti);//Shfaqet data komplet te marrura nga variablat dita ,muaji dhe viti
        if(ora)//Ne qoftese ora eshte dhene nga perdoruesi atehere shfaqet printfi
        {
            printf("Ora eshte: %d : %d  \n", ora,minuta);//Shfaqet ora te marrura nga variablat ora dhe minuta
        }
        printf("Ne kete periudh ska mesim \n");//Shfaqet mesazhi "Ne kete periudhe ska mesim"
    }
    else if (muaji == 9)//Ne qoftese muaji jepet 9 pra muaji Shtator plotesohet kushti
    {
        printf("Data eshte: %d / %d / %d \n", dita, muaji, viti);//Shfaqet data komplet te marrura nga variablat dita ,muaji dhe viti
        if(ora)//Ne qoftese ora eshte dhene nga perdoruesi atehere shfaqet printfi
        {
            printf("Ora eshte: %d : %d  \n", ora,minuta);//Shfaqet ora te marrura nga variablat ora dhe minuta
        }
        printf("Ne kete periudh ska mesim \n");//Shfaqet mesazhi "Ne kete periudhe ska mesim"
    }


    else//Ne qoftese asnjera nga kushtet qe ja dhene me larte nuk plotesohen atehere plotesohet else
    {
        printf("Data eshte: %d / %d / %d \n", dita, muaji, viti);//Shfaqet data komplet te marrura nga variablat dita ,muaji dhe viti
        if(ora)//Ne qoftese ora eshte dhene nga perdoruesi atehere shfaqet printfi
        {
            printf("Ora eshte: %d : %d  \n", ora,minuta);//Shfaqet ora te marrura nga variablat ora dhe minuta
        }
        printf("Ne kete periudhe ka mesim");//Shfaqet mesazhi "Ne kete periudhe ka mesim"
    }
}
