/* Lecture de fichier d'entr�e, allocation dynamique de la matrice
* et remplissage de la matrice avec les valeurs du fichier*/


#include "gestionMatrice.h"

/*--------------------------------------------------------------------------*/
/*							allouer											*/
/*  La fonction permet d'allouer dynamiquement une matrice					*/
/*																			*/
/* Entr�es: Entier ligne correspondant au nombre de lignes de la matrice	*/
/*		    Entier col correspondant au nombre de colonnes de la matrice	*/
/*																			*/
/* Sortie:  Pointeur C , il pointe sur le d�but de la matrice cr��e			*/
/*--------------------------------------------------------------------------*/
/*
int * allouer(int ligne, int col)
{
	int *C = (int*)malloc(ligne*col*sizeof(int));

	return C;
}
*/
/*------------------------------------------------------------------------------------------*/
/*								lire_remplir												*/      
/*	La fonction lit le fichier d'entr�e en param�tres,cr�e une matrice dynamiquement		*/
/*	en fonction des informations dans le fichier et remplit la matrice avec les valeurs		*/
/*	contenu dans le fichier																	*/
/*																							*/
/* Entr�es: fichier Chaine de caract�re correspondant au fichier � lire						*/
/*		    Entier Col correspondant au nombre de colonnes de la matrice					*/
/*			Entier ligne correspondant au nombre de lignes de la matrice					*/
/*																							*/
/* Sorties: C       Matrice remplie	� l'aide du fichier										*/
/*------------------------------------------------------------------------------------------*/
/*
int * lire_remplir(char * fichier,int *ligne,int *col)
{
	int  i, j;
	int **C;

	FILE * file = fopen(fichier, "r");

	if (file)
	{
		fscanf(file, "%d %d", ligne, col);
		C = allouer(*ligne, *col);

		for (i = 0; i<ligne; i++)
		{
			for (j = 0; j<col; j++)
			{
				//fscanf(file, "%d ", C[ligne*i + j]);
			}
		}
	}
	fclose(file);

	return C;
}*/

//-----------------------------------------------------------------------------------------------

/*--------------------------------------------------------------------------*/
/*							allouer2										*/
/*  La fonction permet d'allouer dynamiquement une matrice					*/
/*																			*/
/* Entr�es: Entier ligne correspondant au nombre de lignes de la matrice	*/
/*		    Entier col correspondant au nombre de colonnes de la matrice	*/
/*																			*/
/* Sortie:  Pointeur C , il pointe sur le d�but de la matrice cr��e			*/
/*--------------------------------------------------------------------------*/
int ** allouer2(int ligne, int col)
{
	int i;
	int **C = (int**)malloc(ligne*sizeof(int*));
	for (i = 0; i < ligne; i++) {
		C[i] = (int*)malloc(col*sizeof(int));
		
	}
	return C;
}

/*------------------------------------------------------------------------------------------*/
/*								lire_remplir2												*/
/*	La fonction lit le fichier d'entr�e en param�tres,cr�e une matrice dynamiquement		*/
/*	en fonction des informations dans le fichier et remplit la matrice avec les valeurs		*/
/*	contenu dans le fichier																	*/
/*																							*/
/* Entr�es: fichier Chaine de caract�re correspondant au fichier � lire						*/
/*		    Entier Col correspondant au nombre de colonnes de la matrice					*/
/*			Entier ligne correspondant au nombre de lignes de la matrice					*/
/*																							*/
/* Sorties: C       Matrice remplie	� l'aide du fichier										*/
/*------------------------------------------------------------------------------------------*/

int ** lire_remplir2(char * fichier, int *ligne, int *col)
{
	int  i, j;
	int **C;

	FILE * file = fopen(fichier, "r");

	if (file)
	{
		fscanf(file, "%d %d", ligne, col);
		C = allouer2(*ligne, *col);
		
		for (i = 0; i<*ligne; i++)
		{
			int *tab = C[i];
			for (j = 0; j<*col; j++)
			{
				fscanf(file, "%d ", &tab[j]);
			}
			
		}
	}
	fclose(file);

	return C;
}

void afficherMatrice(int **matrice, int ligne, int col){
	int i, j;
	
	for (i = 0; i<ligne; i++)
	{
		int *tab = matrice[i];
		for (j = 0; j<col; j++)
		{
			printf("%d ", tab[j]);
		}
		printf("\n");
	}
}

void desallouerMatrice(int **matrice,int ligne){
	int i;
	for (i = 0; i < ligne; i++) {
		free(matrice[i]);
		
	}
	free(matrice);

}
