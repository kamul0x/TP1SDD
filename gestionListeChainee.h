#include <stdio.h>
#include <stdlib.h>


typedef struct ListeChainee{
	int				 	 		 val,i,j;
	struct ListeChainee			*suiv;
}ListeChainee_t;



ListeChainee_t creerListeChainee(int valeur,int coordX,int coordY);

void ajouterElementListeChainee(ListeChainee_t *elemCourant,int valeur,int coordX,int coordY);

void supprimerElementListeChainee(ListeChainee_t *elemPrecedant,ListeChainee_t *elemCourant);
