#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date_de_reservation {
    char jour[3]; 
    char mois[3]; 
    char annee[5];
};

struct dentaire {
    char nom[50];
    char prenom[50];
    char telephone[50];
    char age[50];
    int statut;
    char reference[50];
    struct date_de_reservation date;
};
int main() {
    struct dentaire p1[100];
    int choice1;
    int choice2;
    int numbre_reser;
    char mod_par_refer[50];
    do {
        printf("\tMenu de reservation\n");
        printf("1/. Ajouter une reservation.\n");
        printf("2/. Modifier une reservation.\n");
        printf("3/. Supprimer une reservation.\n");
        printf("4/. Afficher les details d'une reservation.\n");
        printf("5/. Tri des reservations.\n");
        printf("6/. Recherche des reservations.\n");
        printf("7/. Les statistiques.\n");
        printf("Veuillez saisir ton choix: ");
        scanf("%d", &choice1);
        getchar(); 
        switch (choice1) {
            case 1:
                printf("Ton choix est d'ajouter une reservation.\n");
                printf("Combien de reservations souhaitez-vous ajouter ? : ");
                scanf("%d", &numbre_reser);
                getchar(); 
                for (int i = 0; i < numbre_reser; i++) {
                    printf("Veuillez saisir le nom de patient : ");
                    fgets(p1[i].nom, sizeof(p1[i].nom), stdin);
                    printf("Veuillez saisir le prenom de patient : ");
                    fgets(p1[i].prenom, sizeof(p1[i].prenom), stdin);
                    printf("Veuillez saisir le numero de telephone de patient : ");
                    fgets(p1[i].telephone, sizeof(p1[i].telephone), stdin);
                    printf("Veuillez saisir l'age de patient : ");
                    fgets(p1[i].age, sizeof(p1[i].age), stdin);
                    printf("Veuillez saisir le status de patient :\n");
                    printf("1/. Validé.\n");
                    printf("2/. Reporté.\n");
                    printf("3/. Annulé.\n");
                    printf("4/. Traité.\n");
                    printf("Veuillez saisir ton choix : ");
                    scanf("%d", &p1[i].statut);
                    getchar(); 
                    printf("Veuillez saisir le reference de patient :");
                    fgets(p1[i].reference, sizeof(p1[i].reference), stdin);
                    printf("Veuillez saisir la date de reservation (jour mois annee) : \n");
                    printf("Jour : ");
                    getchar();
                    fgets(p1[i].date.jour, sizeof(p1[i].date.jour), stdin);
                    printf("Mois : ");
                    getchar();
                    fgets(p1[i].date.mois, sizeof(p1[i].date.mois), stdin);
                    printf("Année : ");
                    getchar();
                    fgets(p1[i].date.annee, sizeof(p1[i].date.annee), stdin);
                }
                break;
        
            case 2 :
            printf("veuillez saiser le reference de patient :");
            scanf("%s",mod_par_refer);
                if(strcmp(p1[i].reference,mod_par_refer)==0){
                    printf("le reference %s est dans la liste de reservation :",mod_par_refer);
                    printf("\tles parametres de modification\n");
                    printf("1/.modification de nom .\n");
                    printf("2/.modification de prenom .\n");
                    printf("3/.modification de numero de telephone .\n");
                    printf("4/.modification d'age .\n");
                    printf("5/.modification de status .\n");
                    printf("6/.modification de reference .\n");
                    printf("7/.modification de date de reservation .\n");
                    printf("veuillez saiser ton choice .");
                    scanf("%d",&choice2);
                    getchar();
                    switch(choice2){
                        case 1 :
                        printf("tu es choisir modofication de nom .\n");
                        printf("veuillez saiser le nouveau nom :");
                        fgets(p1[i].nom,sizeof(p1[i].nom),stdin);
                        printf("le modification a ete avec succes .\n");
                        break;
                        case 2 :
                        printf("tu es choisir modofication de prenom .\n");
                        printf("veuillez saiser le nouveau prenom :");
                        fgets(p1[i].prenom,sizeof(p1[i].prenom),stdin);
                        printf("le modification a ete avec succes .\n");
                        break;
                        case 3 :
                        printf("tu es choisir modofication de nom .\n");
                        printf("veuillez saiser le nouveau numero de telephone :");
                        fgets(p1[i].telephone,sizeof(p1[i].telephone),stdin);
                        printf("le modification a ete avec succes .\n");
                        break;
                        case 4 :
                        printf("tu es choisir modofication de nom .\n");
                        printf("veuillez saiser le nouveau age :");
                        fgets(p1[i].age,sizeof(p1[i].age),stdin);
                        printf("le modification a ete avec succes .\n");
                        break;
                        case 5 :
                        printf("tu es choisir modofication de nom .\n");
                        printf("veuillez saiser le nouveau status :");
                        scanf("%d", &p1[i].statut);
                        printf("le modification a ete avec succes .\n");
                        break;
                        case 6 :
                        getchar();
                        printf("tu es choisir modofication de nom .\n");
                        printf("veuillez saiser le nouveau reference :");
                        fgets(p1[i].reference,sizeof(p1[i].reference),stdin);
                        printf("le modification a ete avec succes .\n");
                        break;
                        case 7 :
                        printf("tu es choisir modofication de nom .\n");
                        printf("veuillez saiser le nouveau date de reservation :");
                        printf("jour :");
                        fgets(p1[i].date.jour,sizeof(p1[i].date.jour),stdin);
                        printf("mois :");
                        fgets(p1[i].date.mois,sizeof(p1[i].date.mois),stdin);
                        printf("annee :");
                        fgets(p1[i].date.annee,sizeof(p1[i].date.annee),stdin);
                        printf("le modification a ete avec succes .\n");
                        break;
                    }
                }
            }
    } while (choice1 != 0); 
    return 0;
}

