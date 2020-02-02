#include <stdio.h>
#include <string.h>

//il me manque juste  le choix permettant de créer un item dans la boutique

 //_______________________________________________________________________________________________________
//structure de base pour les items

    struct Objet{
       char nomObjet[100]; 
       int prix;
    };

 //_______________________________________________________________________________________________________
//atribution des valeurs a la structure
    typedef struct Objet objet;

        objet epee = {"Epée", 100};
        objet bouclier = {"Bouclier",130};
        objet potion = {"Potion de soins",200};
        objet ceptre = {"ceptre de mage",140};
        objet armure = {"Armure de paladin",200};
        objet peluche = {"une fourchette",50};


int main(){
    
 //_______________________________________________________________________________________________________
//déclaration des variable

    char prenom[100];
//-----------------------
    int choix ;
    int itemachat ;
    int argentJoueur = 500;
//-----------------------   
    int epee1 = 0;
    int bouclier1 = 0;
    int potion1 = 0;
    int ceptre1 = 0;
    int armure1 = 0;
//-----------------------

//_______________________________________________________________________________________________________
//création personnage

    printf("entre ton prénom :  ");
    scanf("%s", prenom);
    printf("Bonjour %s, Bienvenue a l'auberge !!", prenom);
    printf("\n");

    
   while (argentJoueur > 0){
//_______________________________________________________________________________________________________
//choix de départ
        printf("\n");
        printf("tu veut quelque chose ? \n");
        printf("(tu as %d pieces d'or)", argentJoueur );
        printf("\n");
        printf("\n");
        printf("[1] ACHETER\n");
        printf("[2] VENDRE\n");
        printf("[3] INVENTAIRE\n");
        
    scanf("%d", &choix);
//_______________________________________________________________________________________________________
//les objets du magasin

    if (choix == 1){
        
        
printf("_____________________________________________________________");
printf("\n");
printf("\n");        
        
        printf("Qu'est-ce qui te ferais plaisir, dis moi %s ?\n", prenom);
        printf("(tu as %d pieces d'or)", argentJoueur );
        printf("\n");
        printf("\n");
        
            printf(" [1] %s : %d \n", epee.nomObjet, epee.prix);
            printf(" [2] %s : %d \n", bouclier.nomObjet, bouclier.prix);
            printf(" [3] %s : %d \n", potion.nomObjet, potion.prix);
            printf(" [4] %s : %d \n", ceptre.nomObjet, ceptre.prix);
            printf(" [5] %s : %d \n", armure.nomObjet, armure.prix);

printf("_____________________________________________________________");
printf("\n");
            scanf("%d", &itemachat);
            
        //---------------------------------------------------------------------------------------
            if (itemachat == 1){
                printf("très bien, l'épée vient d'etre ajouter a ton inventaire \n");
                argentJoueur = argentJoueur - epee.prix;
                epee1 = epee1 + 1;
                printf("Il te reste %d pieces d'or \n", argentJoueur);
            }
            
        //---------------------------------------------------------------------------------------
            if (itemachat == 2){
                printf("très bien, le bouclier vient d'etre ajouter a ton inventaire \n");
                argentJoueur = argentJoueur - bouclier.prix;
                bouclier1 = bouclier1 + 1;
                printf("Il te reste %d pieces d'or \n", argentJoueur );
            }
            
        //---------------------------------------------------------------------------------------
            if (itemachat == 3){
                printf("très bien, la potion de soins vient d'etre ajouter a ton inventaire \n");
                argentJoueur = argentJoueur - potion.prix;
                potion1 = potion1 + 1;
                printf("Il te reste %d pieces d'or \n", argentJoueur );
            }
            
        //---------------------------------------------------------------------------------------
            if (itemachat == 4){
                printf("très bien, le ceptre magique vient d'etre ajouter a ton inventaire \n");
                argentJoueur = argentJoueur - ceptre.prix;
                ceptre1 = ceptre1 + 1;
                printf("Il te reste %d pieces d'or \n", argentJoueur );
            }
            
        //---------------------------------------------------------------------------------------
            if (itemachat == 5){
                printf("'très bien, l'armure de Paladin vient d'etre ajouter a ton inventaire \n");
                argentJoueur = argentJoueur - armure.prix;
                armure1 = armure1 + 1;
                printf("Il te reste %d pieces d'or \n", argentJoueur );
            }
            
        //---------------------------------------------------------------------------------------
    }


//_______________________________________________________________________________________________________
//objet de l'inventaire pour vendre
    if (choix == 2){
        
printf("_____________________________________________________________");
printf("\n");
printf("\n");
        
//___________________________________________________________
//affichage 
    
    //-----------------------       
        printf("[1]");
        printf(" armure de paladin : %d", armure1 );
        printf("\n");
        
    //-----------------------   
        printf("[2]");
        printf(" bouclier : %d", bouclier1 );
        printf("\n");
        
    //-----------------------   
        printf("[3]");  
        printf(" ceptre magique : %d", ceptre1 );
        printf("\n");
        
    //-----------------------    
        printf("[4]");
        printf(" épées : %d", epee1 );
        printf("\n");
        
    //-----------------------   
        printf("[5]");
        printf(" potion de soins : %d", potion1 );
        printf("\n");


//___________________________________________________________
//lecture
        int choixVente = 0;
        printf("que veut tu me vendre ?");
        printf("(tu as %d pieces d'or)", argentJoueur );
        printf("\n");
        
printf("_____________________________________________________________");
printf("\n");

        scanf("%d", &choixVente);
        
//___________________________________________________________
//if 

    //---------------------------------------------------------------           
        if (choixVente == 1){
            
            printf("\n");
            printf("\n");
            armure1 = armure1 - 1;
            argentJoueur = argentJoueur + armure.prix - 50;
            printf("tu as maintenant %d pieces d'or", argentJoueur );
        }
        
    //---------------------------------------------------------------           
        if (choixVente == 2){
            
            printf("\n");
            printf("\n");
            bouclier1 = bouclier1 - 1;
            argentJoueur = argentJoueur + bouclier.prix - 50;
            printf("tu as maintenant %d pieces d'or", argentJoueur );
        }       
    
    //---------------------------------------------------------------   
        if (choixVente == 3){
            
            printf("\n");
            printf("\n");
            ceptre1 = ceptre1 - 1;
            argentJoueur = argentJoueur + ceptre.prix - 50;
            printf("tu as maintenant %d pieces d'or", argentJoueur );
        }       
    
    //---------------------------------------------------------------   
        if (choixVente == 4){
            
            printf("\n");
            printf("\n");
            epee1 = epee1 - 1;
            argentJoueur = argentJoueur + epee.prix - 50;
            printf("tu as maintenant %d pieces d'or", argentJoueur );
        }
    
    //---------------------------------------------------------------   
        if (choixVente == 5){
            
            printf("\n");
            printf("\n");
            potion1 = potion1 - 1;
            argentJoueur = argentJoueur + potion.prix - 50;
            printf("tu as maintenant %d pieces d'or", argentJoueur );
        }   
        
    }

//_______________________________________________________________________________________________________
//voir l'inventaire
    
        if (choix == 3){
            
            
printf("_____________________________________________________________");
printf("\n");
printf("\n");


    //-----------------------       
        printf(" armure de paladin : %d", armure1 );
        printf("\n");
        
    //-----------------------   
        printf(" bouclier : %d", bouclier1 );
        printf("\n");
        
    //-----------------------   
        printf(" ceptre magique : %d", ceptre1 );
        printf("\n");
        
    //-----------------------    
        printf(" épées : %d", epee1 );
        printf("\n");
        
    //-----------------------   
        printf(" potion de soins : %d", potion1 );
        printf("\n");
        
printf("_____________________________________________________________");
printf("\n");

        }
    }
//_______________________________________________________________________________________________________
//fin du code quand t'as plus d'argent
    
        if (argentJoueur <= 0){
            printf("Désoler l'ami, mais je crois que t'as bourse est vide \n");
        }
        
    return 0;
}