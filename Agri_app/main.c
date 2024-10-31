#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int s1,s,pos,choix,i,n;
    float moyenne,moyenne1,h,h1,max,min,aj,hum[15],temp[15];
    do {
        printf("Donnez la taille de 2 tableaux max 15 :\n");
        scanf ("%d", &n);}
        while (n > 15 );
    for (i = 0 ; i < n ; i++)
        {
    printf("Donnez la temp %d :\n", i + 1);
    scanf("%f", &temp[i]);}

    for (i = 0 ; i < n ; i++){
    printf("Donnez la hum %d :\n", i + 1);
    scanf("%f", &hum[i]);}

    do {
    do {
    printf("\nMenu :\n");
    printf("1. Afficher les mesures de température\n");
    printf("2. Afficher les mesures de l’humidité\n");
    printf("3. Modifier la valeur d’une prise donnée par son numéro\n");
    printf("4. Calculer et afficher l’humidité maximale et minimale et leurs numéros de priseassociée.\n");
    printf("5. Calculer et afficher la moyenne humidité et température\n");
    printf("6. Calculer l’écart type de l’humidité pour détecter les pannes du systèmed’irrigation.\n");
    printf("7. Quitter\n");

    printf("Votre choix : ");
    scanf("%d", &choix);
    } while (choix < 1 || choix >7);


    switch(choix){
    case 1 :
          for (i = 0;i<n;i++)
{

        printf("| %.2f |",temp[i]);

}
    printf("\n");
    break;
    case 2:
          for (i = 0;i<n;i++)
{

        printf("| %.2f |",hum[i]);

}
    printf("\n");
    break;
    case 3 :
        do {
    printf("\nMenu :\n");
    printf("1. Tableau les mesures de température\n");
    printf("2. Tableau les mesures de l’humidité\n");
    printf("0.Menu principale\n");

    printf("Votre choix : ");
    scanf("%d", &choix);
    }
    while (choix < 0 || choix >2);
     switch (choix)
    {
    case 1:
     do {
    printf("Position:\n");
    scanf("%d", &pos);}
     while (pos < 1 || pos > n);

    printf("Valeur à ajouter:\n");
    scanf("%f", &aj);

       temp[pos-1]=aj;

        break;
    case 2:
        do {
    printf("Position:\n");
    scanf("%d", &pos);}
     while (pos < 1 || pos > n);

    printf("Valeur à ajouter:\n");
    scanf("%f", &aj);

    hum[pos-1]=aj;
     break;

    }
    case 4 :

    max=hum[0];
    min=hum[0];
                for (i = 0; i < n; i++) {
                    if(max<hum[i]){
                        max=hum[i];
                          printf("le valeur max du tableaux humide est %.2f et son indice T[%d]  \n",max,i);

                    }
                    }

                for (i = 0; i < n; i++) {
                    if(min>hum[i]){
                        min=hum[i];
                          printf("le valeur max du tableaux humide est %.2f et son indice T[%d]  \n",min,i);


                    }
                    }
break;

    case 5 :
                s=0;
                s1=0;
                for(i=0;i<n;i++){
                    s=s+temp[i];
                }
                moyenne=s/n;
                printf("la moyenne de la temperature est %f",moyenne);
                for(i=0;i<n;i++){
                    s1=s1+hum[i];
                }
                moyenne1=s1/n;
                printf("la moyenne de la humidité  est %f",moyenne1);
                break;
    case 6 :
        h=0;
        s1=0;
        for(i=0;i<n;i++){
                    s1=s1+hum[i];
                }
                moyenne1=s1/n;
        for(i=0;i<n;i++){
        h=((hum[i]-moyenne1)*(hum[i]-moyenne1)+h);
        }
        h1=sqrt(h/n);
        printf("l’écart type de l’humidité pour détecter les pannes du systèmed’irrigation  est %.2f",h1);
                break;


    default: printf("Inconnu\n");break;
    }
    }
     while (choix != 7 );

    return 0;
}
