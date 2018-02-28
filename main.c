#include "gestionListeChainee.h"
#include "gestionListeCouts.h"
#include "gestionMatrice.h"


int main(int args, char * argv[]){
	
	int			ligne, col,i = 0,j = 0,num = 0,k;
	int		      **matrice;
	ListeChainee_t	       *listecourante,*copie,*prec; 
	

	//Création de la matrice
	if (argv[1] == NULL) {
		printf(" Pas de nom de fichier entré");
		exit(1);
	}
	else if(argv[2] == NULL){
		printf(" Pas de k entré");
		exit(2);		
	}
	else {
		k = atoi(argv[2]);
		matrice = lire_remplir2(argv[1], &ligne, &col);
	}
	//afficherMatrice(matrice,ligne,col);
	
	
	while(num != k){
		
		if(num == 0){					 						  listecourante=creerTeteListeChainee(matrice[i][j],i,j);			
		}else{
		//printf("%d %d %d     \n",i,j,matrice[i][j]);
	insertionTrierobligatoireListeChainee(&listecourante,matrice[i][j],i,j);
		}

		num+=1;
		j+=1;
		if(j>= col){
			i+=1;
			j=0;
			if(i>= ligne){
				num = k;			
			}		
		}	
	}

	afficherListeChainee(listecourante);	
	
	//supprimerDebutListeChainee(&listecourante);
	//afficherListeChainee(listecourante);
	/*---------------------------*/
	copie = listecourante;
	while(copie){
		if(copie->i ==2){
			prec = copie;
			copie=copie->suiv;
			supprimerDebutListeChainee(&prec);	
		}else{
			copie=copie->suiv;
		}
	
	} 
	
	/*---------------------------------*/

	afficherListeChainee(listecourante);	

	sauvegarderListeChainee(listecourante);

	desallouerMatrice(matrice,ligne);

	return 0;
}


//Code d'erreur 

//1
//Pas de nom fichier entré lors du lancement du programme
//2
//Pas de nombre k entre
