# Traitement-d-image-en-simplifiant-par-logiciel
#       Generalement
Dans ce projet, j'ai écrit un programme qui utilise le langage de programmation C pour effectuer un traitement d'image simple sur un ensemble d'images d'entrée. 
Mon programme comprend les fonctions principales suivantes :

- Charger l'image : charge l'image d'entrée à partir d'un fichier spécifié.

- Conversion en niveaux de gris : convertissez une image couleur en image en niveaux de gris.

- Inverser les couleurs : Inverse les couleurs de l'image.

- Redimensionner : modifier la taille de l'image.

- Rotation : Faites pivoter l'image selon un certain angle.

- Flou : flouter une image en utilisant un certain nombre de méthodes différentes.

- Seuil : Seuil l'image pour générer une image binaire.

En outre,
- J'ai utilisé des bibliothèques de programmation prenant en charge le traitement d'images pour exécuter ces fonctions. 
- J'ai également fourni des exemples de fichiers image et de la documentation pour aider les utilisateurs à utiliser mon programme. 

En un mot, mon projet fournit une approche simple du traitement d'image dans le langage de programmation C.

#	Commandes de tester

- Pour tous compiler le programme : make

- Pour retourner au programme avant de compiler : make clean

#	Manuel utilisateur 


- L’execution pour écrire un fichier contours d'une image (tache5) : 
     + ./tache5 <nom_fichier_pbm>
     
- L’execution avec des courbes de bézier 1 (tache6) :
     + ./tache6 <nom_fichier_pbm> <distance_seuil>
	     
- L’execution avec des courbes de bézier 2 :
	+ ./bezier_2 <image> <distance_seuil>
	
- L’execution avec des courbes de bézier 3 :
	+ ./bezier_3 <image> <distance_seuil>
	
- L’execution pour tester toutes les fonctions geom2d sur 4 points :
	+ ./test_geom2d <x,y A> <x,y B> <x,y C> <x,y D>


- Fichiers resultat examples :
 	+ (grâce à tache5)	 Asterix3.contours.eps 			
 	+ (grâce à bézier 1)	 Asterix3.segment(d =1).eps	
 	+ (grâce à bézier 2)	 Asterix3.bezier2(d =1).eps	
 	+ (grâce à bézier 3)	 Asterix3.bezier3(d =1).eps	

