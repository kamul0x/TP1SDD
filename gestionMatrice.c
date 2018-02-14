/* Lecture de fichier d'entrée, allocation dynamique de la matrice
* et remplissage de la matrice avec les valeurs du fichier*/


#include "gestionMatrice.h"

/*--------------------------------------------------------------------------*/
/*							allouer											*/
/*  La fonction permet d'allouer dynamiquement une matrice					*/
/*																			*/
/* Entrées: Entier ligne correspondant au nombre de lignes de la matrice	*/
/*		    Entier col correspondant au nombre de colonnes de la matrice	*/
/*																			*/
/* Sortie:  Pointeur C , il pointe sur le début de la matrice créée			*/
/*--------------------------------------------------------------------------*/
int * allouer(int ligne, int col)
{
	int *C = (int*)malloc(m*n*sizeof(int));

	return C;
}

/*------------------------------------------------------------------------------------------*/
/*								lire_remplir												*/      
/*	La fonction lit le fichier d'entrée en paramètres,crée une matrice dynamiquement		*/
/*	en fonction des informations dans le fichier et remplit la matrice avec les valeurs		*/
/*	contenu dans le fichier																	*/
/*																							*/
/* Entrées: fichier Chaine de caractère correspondant au fichier à lire						*/
/*		    Entier Col correspondant au nombre de colonnes de la matrice					*/
/*			Entier ligne correspondant au nombre de lignes de la matrice					*/
/*																							*/
/* Sorties: C       Matrice remplie	à l'aide du fichier										*/
/*------------------------------------------------------------------------------------------*/

int * lire_remplir(char * fichier,int *ligne,int *col)
{
	int  i, j;
	int *C;

	FILE * file = fopen(fichier, "r");

	if (file)
	{
		fscanf(file, "%d %d", ligne, col);
		C = allouer(ligne, col);

		for (i = 0; i<ligne; i++)
		{
			for (j = 0; j<col; j++)
			{
				fscanf(file, "%d ", C[ligne*i + j]);
			}
		}
	}
	fclose(file);

	return C;
}

//-----------------------------------------------------------------------------------------------

/*--------------------------------------------------------------------------*/
/*							allouer2										*/
/*  La fonction permet d'allouer dynamiquement une matrice					*/
/*																			*/
/* Entrées: Entier ligne correspondant au nombre de lignes de la matrice	*/
/*		    Entier col correspondant au nombre de colonnes de la matrice	*/
/*																			*/
/* Sortie:  Pointeur C , il pointe sur le début de la matrice créée			*/
/*--------------------------------------------------------------------------*/
int * allouer2(int ligne, int col)
{
	int i;
	int *C = (int*)malloc(m*sizeof(int*));
	for (i = 0; i < m; i++) {
		int *ligne = (int*)malloc(n*sizeof(int));
		C[i] = ligne;
	}
	return C;
}

/*------------------------------------------------------------------------------------------*/
/*								lire_remplir2												*/
/*	La fonction lit le fichier d'entrée en paramètres,crée une matrice dynamiquement		*/
/*	en fonction des informations dans le fichier et remplit la matrice avec les valeurs		*/
/*	contenu dans le fichier																	*/
/*																							*/
/* Entrées: fichier Chaine de caractère correspondant au fichier à lire						*/
/*		    Entier Col correspondant au nombre de colonnes de la matrice					*/
/*			Entier ligne correspondant au nombre de lignes de la matrice					*/
/*																							*/
/* Sorties: C       Matrice remplie	à l'aide du fichier										*/
/*------------------------------------------------------------------------------------------*/

int * lire_remplir2(char * fichier, int *ligne, int *col)
{
	int  i, j;
	int *C;

	FILE * file = fopen(fichier, "r");

	if (file)
	{
		fscanf(file, "%d %d", ligne, col);
		C = allouer(ligne, col);

		for (i = 0; i<ligne; i++)
		{
			int *tab = C[i];
			for (j = 0; j<col; j++)
			{
				fscanf(file, "%d ", tab[j]);
			}
		}
	}
	fclose(file);

	return C;
}