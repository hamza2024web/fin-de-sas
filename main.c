#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct dentaire {
    char nom[50];
    char prenom[50];
    char telephone[50];
    char age[50];
    int statut;
    char reference[50];
    struct date_de_reservation{
        char jour;
        char mois;
        char annee;
    };
};
void initiale_reservation(int p1[100]){
    for(int i=0;i<9;i++){
        strcpy(p1.nom,"el ourari");
        strcpy(p1.prenom,"ilyass");
        strcpy(p1.telephone,"0611223344");
        p1.age=18;
        strcpy(p1.status,"validé");
        strcpy(p1.reference,"1");
        strcpy(p1.jour,"01");
        strcpy(p1.mois,"01");
        strcpy(p1.annee,"2024");
        strcpy(p1.nom,"madada");
        strcpy(p1.prenom,"mohamad");
        strcpy(p1.telephone,"0611484515");
        p1.age=18;
        strcpy(p1.status,"validé");
        strcpy(p1.reference,"2");
        strcpy(p1.jour,"02");
        strcpy(p1.mois,"01");
        strcpy(p1.annee,"2024");
        strcpy(p1.nom,"laissi");
        strcpy(p1.prenom,"abdellah");
        strcpy(p1.telephone,"061857423344");
        p1.age=21;
        strcpy(p1.status,"validé");
        strcpy(p1.reference,"3");
        strcpy(p1.jour,"03");
        strcpy(p1.mois,"01");
        strcpy(p1.annee,"2024");
        strcpy(p1.nom,"oubab");
        strcpy(p1.prenom,"khalid");
        strcpy(p1.telephone,"06185424444");
        p1.age=18;
        strcpy(p1.status,"traite");
        strcpy(p1.reference,"4");
        strcpy(p1.jour,"04");
        strcpy(p1.mois,"01");
        strcpy(p1.annee,"2024");
        strcpy(p1.nom,"pikal");
        strcpy(p1.prenom,"arinas");
        strcpy(p1.telephone,"0611032569");
        p1.age=25;
        strcpy(p1.status,"reporté");
        strcpy(p1.reference,"5");
        strcpy(p1.jour,"05");
        strcpy(p1.mois,"01");
        strcpy(p1.annee,"2024");
        strcpy(p1.nom,"talibi");
        strcpy(p1.prenom,"aimad");
        strcpy(p1.telephone,"061155889944");
        p1.age=18;
        strcpy(p1.status,"validé");
        strcpy(p1.reference,"6");
        strcpy(p1.jour,"06");
        strcpy(p1.mois,"01");
        strcpy(p1.annee,"2024");
        strcpy(p1.nom,"alidai");
        strcpy(p1.prenom,"ali");
        strcpy(p1.telephone,"0785463219");
        p1.age=18;
        strcpy(p1.status,"validé");
        strcpy(p1.reference,"6");
        strcpy(p1.jour,"06");
        strcpy(p1.mois,"01");
        strcpy(p1.annee,"2024");
        strcpy(p1.nom,"el ourrari");
        strcpy(p1.prenom,"lina");
        strcpy(p1.telephone,"0511223344");
        p1.age=30;
        strcpy(p1.status,"validé");
        strcpy(p1.reference,"7");
        strcpy(p1.jour,"07");
        strcpy(p1.mois,"01");
        strcpy(p1.annee,"2024");
        strcpy(p1.nom,"el malki");
        strcpy(p1.prenom,"abderrahmane");
        strcpy(p1.telephone,"061122070809");
        p1.age=27;
        strcpy(p1.status,"annule");
        strcpy(p1.reference,"8");
        strcpy(p1.jour,"08");
        strcpy(p1.mois,"01");
        strcpy(p1.annee,"2024");
        strcpy(p1.nom,"el ourari");
        strcpy(p1.prenom,"khadija");
        strcpy(p1.telephone,"0611778844");
        p1.age=42;
        strcpy(p1.status,"validé");
        strcpy(p1.reference,"9");
        strcpy(p1.jour,"09");
        strcpy(p1.mois,"01");
        strcpy(p1.annee,"2024");
        strcpy(p1.nom,"ouasserkho");
        strcpy(p1.prenom,"abdelhafid");
        strcpy(p1.telephone,"05287963147");
        p1.age=19;
        strcpy(p1.status,"validé");
        strcpy(p1.reference,"10");
        strcpy(p1.jour,"10");
        strcpy(p1.mois,"01");
        strcpy(p1.annee,"2024");
    }
}
int main()
{
    struct dentaire p1[100];
    int choice1;
    int choice2;
    int numbre_reser;
    do{
        printf("\tmenu de reservation");
        printf("1/.Ajout de reservation .\n");
        printf("2/.modifier une reservation .\n");
        printf("3/.supprimer une reservation .\n");
        printf("4/.affiche les details d'une reservation .\n");
        printf("5/.Tri des reservation .\n");
        printf("6/.Recherche des reservation .\n");
        printf("7/.les statistiques .\n");
        printf("veuillez saiser ton choice .\n");
        scanf("%d",choice1);
        switch(choice){
        case 1 :
            printf("ton choice est d'ajouter une reservation .\n");
            printf("combien du reservation souhaitez-vous ajoutez ? :");
            scanf("%d",&numbre_reser);
            for(int i=9;i<numbre_reser;i++){
                printf("veuillez saiser le nom de patient :");
                gets(p1[i].nom);
                printf("veuillez saiser le prenom de patient :");
                gets(p1[i].prenom);
                printf("veuillez saiser le numero de telephone de patient :");
                gets(p1[i].telephone);
                printf("veuillez saiser l'age de patient :");
                gets(p1[i].age);
                printf("veuillez saiser le status de patient :");
                printf("\tMenu de status\n");
                printf("1/.validé .\n");
                printf("2/.reporté .\n");
                printf("3/.annulé .\n");
                printf("4/.traité .\n");
                printf("veuillez saiser ton choice .");
                scanf("%d",&p1.status[i]);

        }
    }
    }
    return 0;
}
