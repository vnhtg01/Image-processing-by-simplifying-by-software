#############################################################################
# Fichier Makefile 
# UE MAP401 - DLST - UGA - 2021/2022
#############################################################################
# utilisation des variables internes $@ $< $^ $*
# $@ : correspond au nom de la cible
# $< : correspond au nom de la premiere dependance
# $^ : correspond � toutes les d�pendances
# $* : correspond au nom du fichier sans extension 
#       (dans les regles generiques uniquement)
#############################################################################
# information sur la regle executee avec la commande @echo
# (une commande commancant par @ n'est pas affichee a l'ecran)
#############################################################################


#############################################################################
# definition des variables locales
#############################################################################

# compilateur C
CC = clang 

# chemin d'acces aux librairies (interfaces)
INCDIR = .

# chemin d'acces aux librairies (binaires)
LIBDIR = .

# options pour l'�dition des liens
LDOPTS = -L$(LIBDIR) -lm

# options pour la recherche des fichiers .o et .h
INCLUDEOPTS = -I$(INCDIR)

# options de compilation
COMPILOPTS = -g -Wall $(INCLUDEOPTS)

# liste des executables
EXECUTABLES =  tache5  tache6 bezier_2 bezier_3


#############################################################################
# definition des regles
#############################################################################

########################################################
# la r�gle par d�faut
all : $(EXECUTABLES)

########################################################
# regle generique : 
#  remplace les regles de compilation separee de la forme
#	module.o : module.c module.h
#		$(CC) -c $(COMPILOPTS) module.c
%.o : %.c %.h
	@echo ""
	@echo "---------------------------------------------"
	@echo "Compilation du module "$*
	@echo "---------------------------------------------"
	$(CC) -c $(COMPILOPTS) $<

robot.o: robot.c robot.h image.h

contour_image.o: contour_image.c contour_image.h geom2d.h

contour_avancee.o: contour_avancee.c contour_avancee.h robot.h contour_image.c

simplification.o: simplification.c simplification.h geom2d.h contour_avancee.h
########################################################
# regles explicites de compilation separee de modules
# n'ayant pas de fichier .h ET/OU dependant d'autres modules

geom2d.o : geom2d.c geom2d.h
	$(CC) -c $(COMPILOPTS) $<


tache5.o : tache5.c image.h contour_avancee.c geom2d.h
	$(CC) -c $(COMPILOPTS) $<

tache6.o : tache6.c image.h contour_avancee.c geom2d.h simplification.h
	$(CC) -c $(COMPILOPTS) $<

bezier_2.o : bezier_2.c image.h contour_avancee.c geom2d.h simplification.h
	$(CC) -c $(COMPILOPTS) $<

bezier_3.o : bezier_3.c image.h contour_avancee.c geom2d.h simplification.h
	$(CC) -c $(COMPILOPTS) $<
test.o : test.c image.h contour_avancee.c geom2d.h simplification.h
	$(CC) -c $(COMPILOPTS) $<
########################################################
# regles explicites de creation des executables


tache5 : tache5.o image.o contour_avancee.o geom2d.o robot.o contour_image.o 
	$(CC) -g $^ $(LDOPTS) -o $@

tache6 : tache6.o image.o contour_avancee.o geom2d.o robot.o contour_image.o simplification.o
	$(CC) -g $^ $(LDOPTS) -o $@

bezier_2 : bezier_2.o image.o contour_avancee.o geom2d.o robot.o contour_image.o simplification.o
	$(CC) -g $^ $(LDOPTS) -o $@
bezier_3 : bezier_3.o image.o contour_avancee.o geom2d.o robot.o contour_image.o simplification.o
	$(CC) -g $^ $(LDOPTS) -o $@
# regle pour "nettoyer" le r�pertoire
clean:
	rm -fR $(EXECUTABLES) *.o *.contours *.eps
clean_image:
	rm images/*.eps
