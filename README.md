# TRAITEMENT D'IMAGE EN SIMPLIFIANT LOGICIELS
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

