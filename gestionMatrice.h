/* Définition des prototypes de la Q1*/

#include <stdio.h>
#include <stdlib.h>

/*int * allouer(int ligne, int col);

int * lire_remplir(char * fichier, int *ligne, int *col);*/

int ** allouer2(int ligne, int col);

int ** lire_remplir2(char * fichier, int *ligne, int *col);
void  afficherMatrice(int **matrice, int ligne, int col);
void desallouerMatrice(int **matrice,int ligne);
