#include "gestionListeCouts.h"
#include "gestionListeChainee.h"

/*------------------------------------------------------------------------------*/
/*			Tri de la liste chainée												*/
/*						Tri par insertion										*/
/* En entrée : liste , la liste chainée a trié par ordre croissant de valeur	*/
/*																				*/
/*------------------------------------------------------------------------------*/

void insertionTrierElementListeChainee(ListeChainee_t* liste,int valeur,int coordX,int coordY){
	int 			inser =0;
	ListeChainee_t *lc = liste,*prec;
	
	while(lc != NULL && inser == 0){
		if(lc->val >= valeur) {
			if(prec == NULL){
			printf("La");
				liste = ajouterEnTeteElementListeChainee(lc,valeur,coordX,coordY);

			}else {
			printf("Ici");
				prec->suiv = ajouterEnTeteElementListeChainee(lc,valeur,coordX,coordY);
			}
			inser =1;
		}else{
			prec = lc;
			lc = lc->suiv;
		}
	}
}

void insertionTrierobligatoireListeChainee(ListeChainee_t** liste,int valeur,int coordX,int coordY){
	int 			inser =0;
	ListeChainee_t *lc = *liste,*prec = *liste;
	

	while(lc != NULL && inser == 0){
if(lc->val <= valeur) {
			if(prec == lc){
				*liste = ajouterEnTeteElementListeChainee(lc,valeur,coordX,coordY);
//printf("%d \n",(*liste)->val);
			}else {
				prec->suiv = ajouterEnTeteElementListeChainee(lc,valeur,coordX,coordY);
			}
			inser =1;
		}else{
			prec = lc;
			lc = lc->suiv;
		}
	}
	if(inser == 0) {
		prec->suiv = ajouterEnTeteElementListeChainee(lc,valeur,coordX,coordY);
	}
 }

void sauvegarderListeChainee(ListeChainee_t * liste){
	ListeChainee_t  *cour = liste;
	FILE 	     	*file = fopen("sauv.txt","w+");
	
	if(file == NULL){
		printf("Erreur creation fichier");
		exit(5);
	}
	while(cour){
		fprintf(file,"%d %d %d\n",cour->val,cour->i,cour->j);
		cour = cour->suiv;
	}
	 
}
