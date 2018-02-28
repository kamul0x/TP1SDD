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


ListeChainee_t* creerTeteListeChainee(int valeur,int coordX,int coordY){
	ListeChainee_t *courante = (ListeChainee_t*)malloc(sizeof(ListeChainee_t));
	if(courante == NULL){
		exit(3);	
	}
	
	courante->val = valeur;
	courante->i = coordX;
	courante->j = coordY;
	courante->suiv = NULL;
	
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

ListeChainee_t* ajouterEnTeteElementListeChainee(ListeChainee_t *elemCourant,int valeur,int coordX,int coordY){
	ListeChainee_t *nouvElem = (ListeChainee_t *)malloc(sizeof(ListeChainee_t));
	nouvElem->val = valeur;
	nouvElem->i = coordX;
	nouvElem->j = coordY;
	nouvElem->suiv = elemCourant;
	
	return nouvElem;
}

/*------------------------------------------------------------------------------------------*/
/*			Suppresion d'un élément de la liste chainée										*/
/*																							*/
/* En entrée : elemPrecedent maillon de la liste qui précède celui que l'on doit supprimer	*/ 
/*			   elemCourant maillon de la liste chaine auquel on doit ajouter un élément		*/
/* 																							*/
/*------------------------------------------------------------------------------------------*/

void supprimerDebutListeChainee(ListeChainee_t **liste)
{
	ListeChainee_t *tmp;
	tmp= *liste;
	//printf("%d %d %d",(tmp)->val,(tmp)->i,(tmp)->j);
	*liste = tmp->suiv;
	//free(tmp);
}

void afficherListeChainee(ListeChainee_t *liste)	{
	ListeChainee_t *tmp = liste;
	while(tmp){
		printf("%d %d %d \n",tmp->val,tmp->i,tmp->j);
		tmp= tmp->suiv;		
	}
}


