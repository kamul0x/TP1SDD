#include "gestionListeChainee.h"

/*------------------------------------------------------------------------------*/
/*			Création de la liste chainée										*/
/*																				*/
/* En entrée : valeur la valeur de l'élément dans la matrice					*/
/* 			   coordX le numéro de colummne de l'élément dans la matrice		*/
/* 			   coordY le numéro de lignes de l'élément dans la matrice			*/
/*																				*/
/* En sortie : L'élement en tête de liste chainée 								*/
/* 																				*/
/*------------------------------------------------------------------------------*/


ListeChainee_t creerListeChainee(int valeur,int coordX,int coordY){
	ListeChainee_t courante;
	courante.val = valeur;
	courante.i = coordX;
	courante.j = coordY;
	courante.suiv = NULL;
	
	return courante;
}

/*------------------------------------------------------------------------------------------*/
/*			Ajout d'un élément dans la liste chainée										*/
/*																							*/
/* En entrée : elemCourant maillon de la liste chaine au quel on doit ajouter un élément	*/
/*			   valeur la valeur de l'élément dans la matrice								*/
/* 			   coordX le numéro de colummne de l'élément dans la matrice					*/
/* 			   coordY le numéro de lignes de l'élément dans la matrice						*/
/*																							*/
/* En sortie : L'élement en tête de liste chainée 											*/
/* 																							*/
/*------------------------------------------------------------------------------------------*/

void ajouterElementListeChainee(ListeChainee_t *elemCourant,int valeur,int coordX,int coordY){
	ListeChainee_t *nouvElem = (ListeChainee_t *)malloc(sizeof(ListeChainee_t));
	nouvElem->val = valeur;
	nouvElem->i = coordX;
	nouvElem->j = coordY;
	nouvElem->suiv = elemCourant->suiv;
	
	elemCourant->suiv = nouvElem;
}

/*------------------------------------------------------------------------------------------*/
/*			Suppresion d'un élément de la liste chainée										*/
/*																							*/
/* En entrée : elemPrecedent maillon de la liste qui précède celui que l'on doit supprimer	*/ 
/*			   elemCourant maillon de la liste chaine auquel on doit ajouter un élément		*/
/* 																							*/
/*------------------------------------------------------------------------------------------*/

void supprimerElementListeChainee(ListeChainee_t *elemPrecedant,ListeChainee_t *elemCourant){
	ListeChainee_t *elemSuiv = elemCourant->suiv;
	elemPrecedant->suiv = elemSuiv;
	free(elemCourant);
}

/*------------------------------------------------------------------------------------------------------*/
/*			Permutation de deux éléments de la liste chainée											*/
/*																										*/
/* En entrée : elemPrecedent maillon de la liste qui précède l'élément courant et qui va être permuter	*/ 
/*			   elemCourant maillon courant de la liste chaine qui va être permuter						*/
/*																										*/
/*------------------------------------------------------------------------------------------------------*/

void permuterElement(ListeChainee_t *elemPrecedant,ListeChainee_t *elemCourant){
	
}

/*------------------------------------------------------------------------------*/
/*			Tri de la liste chainée												*/
/*																				*/
/* En entrée : liste , la liste chainée a trié par ordre croissant de valeur	*/
/*																				*/
/*------------------------------------------------------------------------------*/

void trierElementListeChainee(ListeChainee liste){
	ListeChainee *lc = &liste;
	while(lc != NUll){
		if(lc->val < (lc->suiv)->val) {
			permuterElement(lc,lc->suiv);
		}
	}
}
