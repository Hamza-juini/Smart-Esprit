#ifndef RECLAMATION_H_INCLUDED
#define RECLAMATION_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#  include <config.h>

#include<gtk/gtk.h>
/*typedef struct
{
    int jour ;
    int mois ;
    int annee;
}date;*/

typedef struct
{
//date d;
char entrynom_reclamateur[50];
char entryprenom_reclamateur[50];
char entry1type_rec[100];
char entrytext_reclamation[100];
char entrycin_reclamateur[50] ;
char entryref_rec[50];
char entry2datenaissance[50];

}reclamation;

void add_reclamation(reclamation r);
void Delete_reclamation(reclamation r);
//void modify_reclamation(reclamation r);
void display(GtkWidget *liste);
//void service_reclamation(reclamation r);
//int research(int Ref_rec ,reclamation r);
//int searching(int referenc,reclamation r);
#endif // RECLAMATION_H_INCLUDED
