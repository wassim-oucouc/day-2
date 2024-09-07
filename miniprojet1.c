#include <stdio.h>
#define MAX 100
char nom[MAX][MAX];
char numero[80];
char email[MAX][MAX];
char new_modifi_email[MAX];
char new_modifi_numero[MAX];
char enter_nom[MAX];
int count;
void ajoute()

{


int i;
i = 0;
for(i = 0 ; i < count ; i++)
{
  //printf("combien de contact  vous voulez entrer: ");
  //scanf("%d",&count);

printf("entrer le nom :");
scanf("%s",nom);
printf("entrer le numero :");
scanf("%s",numero);
printf("entrer votre email :");
scanf("%s",email);

}

}

void modifi()
{

    char enter_nom[MAX];
    printf("Quell le nom vous voulez entrer? :");
            scanf("%s",enter_nom);
            for(int i = 0 ; i < count ; i++)
           {

                 if((strcmp(nom[i],enter_nom) == 0))
        {
            printf("quel email vous voulez entrer nouveau");
            scanf("%s",new_modifi_email);
            printf("quell numero vous voulez entrer nouveau");
            scanf("%s",new_modifi_numero);
            email[i][MAX] = new_modifi_email;
            numero[i] = new_modifi_numero;
            printf("votre information est bien enregistrer!");
            return;
        }

                printf("votre information pas enregistrer merci de verifier votre nom!");
        }

            }


int main()
{

printf("combien de contact  vous voulez entrer: ");
    scanf("%d",&count);
   ajoute();
    modifi();
    return(0);
}


