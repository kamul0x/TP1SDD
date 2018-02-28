#ifndef structliste
#define structliste
#include <stdio.h>
#include <stdlib.h>



typedef struct ListeChainee{
	int				 	 		 val,i,j;
	struct ListeChainee			*suiv;
}ListeChainee_t;

#endif

ListeChainee_t* creerTeteListeChainee(int valeur,int coordX,int coordY);

ListeChainee_t* ajouterEnTeteElementListeChainee(ListeChainee_t *elemCourant,int valeur,int coordX,int coordY);

void  supprimerDebutListeChainee(ListeChainee_t **liste);

void afficherListeChainee(ListeChainee_t *liste);
