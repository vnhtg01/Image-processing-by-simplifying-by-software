# TRAITEMENT D'IMAGE PAR LOGICIEL

#	Manuel utilisateur 

- La commande “make” pour compiler chaque TACHE.
- Les programmes executables : tache5_2, tache6_2, bezier_2, bezier_3

- L’execution pour tache5_2 :
     <nom_du_programme> <image>

     + Exemple :
	     ./tache5 animaux.pbm
	     
 	![image](https://user-images.githubusercontent.com/78409997/233903656-a44189e3-0552-44bc-a50f-4218e1b82d23.png)	     

- L’execution pour tache6_2, bezier_2, bezier_3:
     <nom_du_programme> <image> <distance_seuil>


     + Exemple :
	     ./tache6 test.pbm 1

	![image](https://user-images.githubusercontent.com/78409997/233904235-53f693d8-56b2-4645-a16c-bb627fa69235.png)
	
	et le fichier test.pbm est 
	
	
	
	
	
	
	![image](https://user-images.githubusercontent.com/78409997/233904345-db6cb519-aa81-4c1f-b081-ea299a77f4e1.png)
     
     Donc, le fichier au resultat qui nomme "test.segment(d=1).eps" est
	![image](https://user-images.githubusercontent.com/78409997/233904592-6ee9a223-389c-488b-954e-8186301a7bc6.png)

 

- Exemple du résultat des exemples :
     + cheval.contours.eps
     + cheval.segment(d=1).eps
     + cheval.bezier2(d=1).eps
     + cheval.bezier3(d=1).eps
       


