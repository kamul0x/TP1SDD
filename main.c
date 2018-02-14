#include "gestionListeChainee.h"
#include "gestionMatrice.h"


int main(int args, char * argv[]){
	
	int			ligne, col,i,j;
	int		   *matrice;

	//Création de la matrice
	if (argv[1] == NULL) {
		printf(" Pas de nom de fichier entré");
		exit(1);
	}
	else {
		matrice = lire_remplir(argv[1], &ligne, &col);
	}
	
	/*for (i = 0; i<ligne; i++)
	{
		for (j = 0; j<col; j++)
		{
			printf("%d ", C[ligne*i + j]);
		}
		printf("\n");
	}*/
	

	//Test liste chainee
	
	/*
	ListeChainee_t lc = creerListeChainee(0,0,0);
	
	printf("%d %d %d",lc.val,lc.i,lc.j);
	
	ajouterElementListeChainee(&lc,1,1,1);
	printf("%d %d %d",(lc.suiv)->val,(lc.suiv)->i,(lc.suiv)->j);
	*/
}


//Code d'erreur 

//1
//Pas de nom fichier entré lors du lancement du programme