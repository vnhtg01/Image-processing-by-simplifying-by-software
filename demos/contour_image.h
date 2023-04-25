#ifndef _CONTOUR_IMAGE_H_
#define _CONTOUR_IMAGE_H_

#include "types_macros.h"
#include"image.h"
#include "robot.h"

/* Type bezier2 */
typedef struct Bezier2
{
	Point C0;
	Point C1;
	Point C2;
} Bezier2;

/* Type bezier3 */
typedef struct Bezier3
{
	Point C0;
	Point C1;
	Point C2;
	Point C3;	
} Bezier3;


typedef struct Cellule_Liste_Point_{
	Point data ; 
	struct Cellule_Liste_Point_ *suiv; 
} Cellule_Liste_Point;

typedef struct Cellule_Liste_Segment_{
	Segment Segment; 
	struct Cellule_Liste_Segment_ *suiv; 
} Cellule_Liste_Segment;

typedef struct Liste_Point_{
	unsigned int taille;
	Cellule_Liste_Point *first;
	Cellule_Liste_Point *last;
} Liste_Point;

typedef Liste_Point Contour;

typedef struct Liste_Segment_{
	unsigned int taille;
	Cellule_Liste_Segment *first;
	Cellule_Liste_Segment *last;
} Liste_Segment;

typedef struct Tableau_Point_{
	unsigned int taille;
	Point *tab;
} Tableau_Point;

/*cree une cellule de liste avec l element v
  renvoie le pointeur sur la cellule de liste creee
  la fonction s'arrete si la creation n a pas pu se faire*/
Cellule_Liste_Point* creer_element_liste_Point(Point v);

/* creer une liste vide */
Liste_Point creer_liste_Point_vide();

/* ajouter l element e en fin de la liste L, renvoie la liste L modifiee */
Liste_Point ajouter_element_liste_Point(Liste_Point L, Point e);

/* suppression de tous les elements de la liste, renvoie la liste L vide */
Liste_Point supprimer_liste_Point(Liste_Point L);

/* concatene L2 a la suite de L1, renvoie la liste L1 modifiee */
Liste_Point concatener_liste_Point(Liste_Point L1, Liste_Point L2);

/* creer une sequence de point sous forme d'un tableau de points à partir de la liste de points L */
Tableau_Point sequence_points_liste_vers_tableau(Liste_Point L);

/* ecrire le contour L à l'ecran */
void ecrire_contour(Liste_Point L);

/* ecrire le contour L dans un fichier */
void ecrire_contour_dans_fichier(Liste_Point L, char *fichier, int numero_contour);

#endif

