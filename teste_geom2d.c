#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "geom2d.h"


int main ()
{
	
	Point A, B, C, D;
	Vecteur U, V, W, X;
	
	A = set_point(1.0, -3.0);
	B = set_point(4.0, 1.0);
	
	C = add_point(A, B);
	D = produit_scalaire_point(B, 7);
	
	U = vect_bipoint(A, B);
	V = vect_bipoint(C, D);
	
	W = add_vecteur(U, V);
	//X = produit_scalaire_point(A, 7);
	
	
	printf("A: %f %f\nB: %f %f\nC: %f %f\n", A.x, A.y, B.x, B.y, C.x, C.y);
	printf("D: %f %f\n", D.x, D.y); 			// Multiplier un point par un chiffre
	printf("U: %f %f\n", U.x, U.y); 			// Creer un vecteur en base de deux points
	printf("V: %f %f\n", V.x, V.y); 			// Pareil comme U
	printf("W: %f %f\n", V.x, V.y); 			// Somme de deux vecteurs
	printf("X: %f %f\n", X.x, X.y); 			// Multiplier un vecteur par un chiffre
	printf("U*V: %f\n", prod_scalaire(U, V)); 		// Produit scalaire de deux vecteurs
	printf("Distance A et B: %f\n", distance(A, B));	// distance entre les deux points
	printf("Norme: %f\n", norme(V));			// norme
	
	
	return 0;

}
	
	
	
	
	
	

