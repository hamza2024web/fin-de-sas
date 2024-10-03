#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct date_de_reservation {
    int jour;
    int mois;
    int annee;
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
void ajouter_reservation(struct dentaire p1[], int numbre_reser){
    int jour,mois,annee;
    for (int i=10;i<numbre_reser+10;i++) {
        printf("Veuillez saisir le nom de patient : ");
        fgets(p1[i].nom, sizeof(p1[i].nom), stdin);
        strtok(p1[i].nom,"\n");
        printf("Veuillez saisir le prenom de patient : ");
        fgets(p1[i].prenom, sizeof(p1[i].prenom), stdin);
        strtok(p1[i].prenom,"\n");
        printf("Veuillez saisir le numero de telephone de patient : ");
        fgets(p1[i].telephone, sizeof(p1[i].telephone), stdin);
        strtok(p1[i].telephone,"\n");
        printf("Veuillez saisir l'age de patient : ");
        fgets(p1[i].age, sizeof(p1[i].age), stdin);
        strtok(p1[i].age,"\n");
        printf("Veuillez saisir le status de patient :\n");
        printf("1/. Valide.\n");
        printf("2/. Reporte.\n");
        printf("3/. Annule.\n");
        printf("4/. Traite.\n");
        printf("Veuillez saisir ton choix : ");
        scanf("%d", &p1[i].statut);
        getchar();
        printf("Veuillez saisir le reference de patient : ");
        fgets(p1[i].reference, sizeof(p1[i].reference), stdin);
        strtok(p1[i].reference,"\n");
        printf("Veuillez saisir la date de reservation (jour mois annee) : \n");
        printf("Jour : ");
        scanf("%d",&jour);
        printf("Mois :");
        scanf("%d",&mois);
        printf("Annee : ");
        scanf("%d",&annee);
        p1[i].date.jour=jour;
        p1[i].date.mois=mois;
        p1[i].date.annee=annee;
    }
}
void afficher_menu() {
    printf("\tMenu de reservation\n");
    printf("1/. Ajouter une reservation.\n");
    printf("2/. Modifier une reservation.\n");
    printf("3/. Supprimer une reservation.\n");
    printf("4/. Afficher les details d'une reservation.\n");
    printf("5/. Tri des reservations.\n");
    printf("6/. Recherche des reservations.\n");
    printf("7/. Les statistiques.\n");
    printf("Veuillez saisir ton choix: ");
}
void modifier_reservation(struct dentaire p1[], int numbre_reser) {
    char mod_par_refer[50];
    int jour,mois,annee;
    printf("Veuillez saisir le reference de patient : ");
    scanf("%s", mod_par_refer);
    for (int i=10;i<numbre_reser+10;i++) {
        if (strcmp(p1[i].reference, mod_par_refer) == 0) {
            printf("Le reference %s est dans la liste de reservation :\n", mod_par_refer);
            printf("\tLes parametres de modification\n");
            printf("1/. Modification de nom.\n");
            printf("2/. Modification de prenom.\n");
            printf("3/. Modification de numero de telephone.\n");
            printf("4/. Modification d'age.\n");
            printf("5/. Modification de status.\n");
            printf("6/. Modification de reference.\n");
            printf("7/. Modification de date de reservation.\n");
            printf("Veuillez saisir ton choix : ");
            int choice2;
            scanf("%d", &choice2);
            getchar();
            switch (choice2) {
                case 1:
                    printf("Veuillez saisir le nouveau nom : ");
                    fgets(p1[i].nom, sizeof(p1[i].nom), stdin);
                    strtok(p1[i].nom,"\n");
                    printf("La modification a été effectuée avec succès.\n");
                    break;

                case 2:
                    printf("Veuillez saisir le nouveau prenom : ");
                    fgets(p1[i].prenom, sizeof(p1[i].prenom), stdin);
                    strtok(p1[i].prenom,"\n");
                    printf("La modification a été effectuée avec succès.\n");
                    break;

                case 3:
                    printf("Veuillez saisir le nouveau numero de telephone : ");
                    fgets(p1[i].telephone, sizeof(p1[i].telephone), stdin);
                    strtok(p1[i].telephone,"\n");
                    printf("La modification a été effectuée avec succès.\n");
                    break;

                case 4:
                    printf("Veuillez saisir le nouveau age : ");
                    fgets(p1[i].age, sizeof(p1[i].age), stdin);
                    strtok(p1[i].age,"\n");
                    printf("La modification a été effectuée avec succès.\n");
                    break;

                case 5:
                    printf("Veuillez saisir le nouveau status : ");
                    scanf("%d", &p1[i].statut);
                    strtok(p1[i].statut,"\n");
                    printf("La modification a été effectuée avec succès.\n");
                    break;

                case 6:
                    printf("Veuillez saisir le nouveau reference : ");
                    fgets(p1[i].reference, sizeof(p1[i].reference), stdin);
                    strtok(p1[i].reference,"\n");
                    printf("La modification a été effectuée avec succès.\n");
                    break;

                case 7:
                    printf("Veuillez saisir la nouvelle date de reservation :\n");
                    printf("Jour : ");
                    scanf("%d",&jour);
                    printf("Mois :");
                    scanf("%d",&mois);
                    printf("Annee : ");
                    scanf("%d",&annee);
                    p1[i].date.jour=jour;
                    p1[i].date.mois=mois;
                    p1[i].date.annee=annee;
                    printf("La modification a été effectuée avec succès.\n");
                    break;
            }
        }
    }
}
void supprimer_reservation(struct dentaire p1[], int numbre_reser) {
    char supprimer_reser[50];
    int jour,mois,annee;
    int choice3;
    printf("Veuillez saisir le reference de patient : ");
    scanf("%s", supprimer_reser);
    for (int i=10;i<numbre_reser+10;i++) {
        if (strcmp(p1[i].reference, supprimer_reser) == 0) {
            printf("Le reference %s est dans la liste de reservation :\n", supprimer_reser);
            printf("Es-tu sûr de supprimer cette réservation ?.\n");
            printf("1/.oui .\n");
            printf("2/.non .\n");
            printf("veuillez saiser ton choice .");
            scanf("%d",&choice3);
            if (choice3 == 1) {

                for (int j = i; j < numbre_reser + 9; j++) {
                    p1[j] = p1[j + 1];
                }
                numbre_reser--;
                printf("La reservation a ete supprimée avec succes.\n");
            } else {
                printf("Suppression annulée.\n");
            }
            return;
        }
    }
    printf("Référence non trouvée .\n");
}
void reservation_initiale(struct dentaire p1[]) {
    for (int i=0;i<10;i++) {
        sprintf(p1[i].nom, "%d", i +1);
        sprintf(p1[i].prenom, "%d", i + 1);
        sprintf(p1[i].telephone, "%d", i + 1);
        sprintf(p1[i].age, "%d", 25 + i);
        p1[i].statut = (i%4)+1;
        sprintf(p1[i].reference, "%d", i+1);
        p1[i].date.jour=i+1;
        p1[i].date.mois=01;
        p1[i].date.annee=2024;
    }
    for (int i=0;i<10;i++) {
        printf("Reservation %d :\n", i + 1);
        printf("Nom : %s\n", p1[i].nom);
        printf("Prenom : %s\n", p1[i].prenom);
        printf("Numero de telephone : %s\n", p1[i].telephone);
        printf("age : %s\n", p1[i].age);
        printf("statut : %d\n",p1[i].statut);
        printf("Reference : %s\n", p1[i].reference);
        printf("Date : %d/%d/%d\n", p1[i].date.jour, p1[i].date.mois, p1[i].date.annee);
    }
}
void afficher_reservation(struct dentaire p1[],int numbre_reser){
    for (int i=10;i<numbre_reser+10;i++) {
        printf("Nom: %s",p1[i].nom);
        printf("Prenom: %s",p1[i].prenom);
        printf("Numero de telephone: %s",p1[i].telephone);
        printf("Age: %s",p1[i].age);
        printf("Statut: : %d\n",p1[i].statut);
        printf("Reference: %s",p1[i].reference);
        printf("Date : %d/%d/%d\n",p1[i].date.jour,p1[i].date.mois,p1[i].date.annee);
}
}
void recherchre_refer(struct dentaire p1[],int numbre_reser){
    char rech_refe;
    printf("veuillez saiser la reference :");
    scanf("%s",rech_refe);
    for(int i=10;i<numbre_reser+10;i++){
        if(strcmp(p1[i].reference,rech_refe)==0){
            printf("la reference %s est dans la liste de reservation .",rech_refe);
        }else{
            printf("la reference %s n'existe pas dans la liste .",rech_refe);
        }
    }
}
void recherche_nom(struct dentaire p1[],int numbre_reser){
    char rech_nom;
    printf("veuillez saiser le nom :");
    getchar();
    scanf("%s",rech_nom);
    for(int i=10;i<numbre_reser+10;i++){
        if(strcmp(p1[i].nom,rech_nom)==0){
            printf("le nom %s est dans la liste de reservation .",rech_nom);
        }else{
            printf("le nom %s n'existe pas dans la liste de reservation .",rech_nom);
        }
    }
}
void recherche_date(struct dentaire p1[],int numbre_reser){
    char rech_jour;
    char rech_mois;
    char rech_annee;
    printf("veuillez saiser la date");
    printf("jour :");
    scanf("%s",rech_jour);
    printf("mois :");
    scanf("%s",rech_mois);
    printf("annee :");
    scanf("%s",rech_annee);
    for(int i=10;i<numbre_reser+10;i++){
        if(strcmp(p1[i].date.jour,rech_jour)==0){
            if(strcmp(p1[i].date.mois,rech_mois)==0){
                if(strcmp(p1[i].date.annee,rech_annee)==0){
                    printf("la date de reference %s/%s/%s , est dans la liste de reservation .",rech_jour,rech_mois,rech_annee);
                }else{
                    printf("la date de reference %s/%s/%s , n'existe pas dans la liste de reservation .",rech_jour,rech_mois,rech_annee);
                }
            }
        }
    }
}
void bubblesort_nom(struct dentaire p1[], int numbre_reser) {
    struct dentaire tmp;
    for (int i=10;i<numbre_reser+10;i++) {
        for (int j=10;j<numbre_reser+10-i-10;j++) {
            if (strcmp(p1[j].nom, p1[j + 1].nom) > 0) {
                tmp = p1[j];
                p1[j] = p1[j + 1];
                p1[j + 1] = tmp;
            }
        }
    }
}
void bubblesort_statut(struct dentaire p1[],int numbre_reser){
    struct dentaire tmp;
    for(int i=10;i<numbre_reser+10;i++){
        for(int j=10;j<numbre_reser+10-i-10;j++){
            if(p1[j].statut>p1[j+1].statut){
                tmp=p1[j];
                p1[j]=p1[j+1];
                p1[j+1]=tmp;
            }
        }
    }
}
void bubblesort_date(struct dentaire p1[],int numbre_reser){
    struct dentaire tmp;
    for(int i=10;i<numbre_reser)
}
int main() {
    struct dentaire p1[100];
    int choice1;
    int numbre_reser;
    int num_reservations=0;
    num_reservations=10;
    do {
        afficher_menu();
        scanf("%d", &choice1);
        getchar();
        switch (choice1) {
            case 1:
                printf("Combien de reservations souhaitez-vous ajouter ? : ");
                scanf("%d", &numbre_reser);
                getchar();
                ajouter_reservation(p1, numbre_reser);
                break;
            case 2:
                modifier_reservation(p1, numbre_reser);
                break;
            case 3 :
                supprimer_reservation(p1,numbre_reser);
                break;
            case 4 :
                reservation_initiale(p1);
                afficher_reservation(p1,numbre_reser);
                break;
            case 5 :
                
        }
    } while (choice1 != 0);

    return 0;
}

