
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reclamation.h"
#  include <config.h>

#include<gtk/gtk.h>
//////////////////////////////////////////////
////////////////////////////////////////////////
enum
{
ECIN,
ENOM,
EPRENOM,
ETEXT,
ETYPE,
EREF,
EDATE,
/*EJOUR,
EMOIS,
EANNEE,*/
COLUMNS,

};
void add_reclamation(reclamation r)
{

FILE*f;
//int reference;
f=fopen("reclamation.txt","a+");
//if(f!=NULL)

{
fprintf(f,"%s\t ;%s\t ;%s\t ;%s\t ;%s\t ;%s\t %s \n",r.entrycin_reclamateur,r.entrynom_reclamateur,r.entryprenom_reclamateur,r.entry1type_rec,r.entry2datenaissance,r.entryref_rec,r.entrytext_reclamation);
}

fclose(f);
}
///////////////////////////////////////////////////
///////////////////////////////////////////////////
void display(GtkWidget *liste)
{
reclamation r;


	GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter *iter;
	GtkListStore *store;
    /*int jour ;
    int mois ;
    int annee;
    date d;*/
char entrynom_reclamateur[50];
char entryprenom_reclamateur[50];
char entry1type_rec[100];
char entrytext_reclamation[100];
char entrycin_reclamateur[50] ;
char entryref_rec[50];
char entry2datenaissance[50];
   
    store=NULL;
FILE *f;
store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("entrycin_reclamateur",renderer,"text",ECIN,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("entrynom_reclamateur",renderer,"text",ENOM,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("entryprenom_reclamateur",renderer,"text",EPRENOM,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("entrytext_reclamation",renderer,"text",ETEXT,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("entryref_rec",renderer,"text",EREF,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("entry1type_rec",renderer,"text",ETYPE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("entry2datenaissance",renderer,"text",EDATE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

/*renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("mois",renderer,"text",EMOIS,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);

renderer=gtk_cell_renderer_text_new();
column=gtk_tree_view_column_new_with_attributes("annee",renderer,"text",EANNEE,NULL);
gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);*/
}
store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
f=fopen("reclamation.txt","r");
if(f!=NULL)
{
return;
}
else
{
f=fopen("reclamation.txt","a+");
while (fscanf(f,"%s\t ;%s\t ;%s\t ;%s\t ;%s\t ;%s\t %s \n",r.entrycin_reclamateur,r.entrynom_reclamateur,r.entryprenom_reclamateur,r.entry1type_rec,r.entry2datenaissance,r.entryref_rec,r.entrytext_reclamation)!=EOF)
{
gtk_list_store_append(store,&iter);
gtk_list_store_set(store,&iter,ECIN,entrycin_reclamateur,ENOM,entrynom_reclamateur,EPRENOM,entryprenom_reclamateur,ETYPE,entry1type_rec,EREF,entryref_rec,EDATE,entry2datenaissance,ETEXT,entrytext_reclamation,-1);
}
fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW (liste),GTK_TREE_MODEL (store));
g_object_unref(store);
}

}
/////////////////////////////////////
////////////////////////////////////
void Delete_reclamation(reclamation r)
{
reclamation r2; 
FILE *f,*g;
f=fopen("reclamation.txt","r");
g=fopen("reclamation2.txt","w");
if(f==NULL||g==NULL)
return ; 
else

{
while(fscanf(f,"%s\t ;%s\t ;%s\t ;%s\t ;%s\t ;%s\t %s \n",r2.entrycin_reclamateur,r2.entrynom_reclamateur,r2.entryprenom_reclamateur,r2.entry1type_rec,r2.entry2datenaissance,r2.entryref_rec,r2.entrytext_reclamation)!=EOF)
{
if(strcmp(r.entrycin_reclamateur,r2.entrycin_reclamateur)!=0||(r.entrynom_reclamateur,r2.entrynom_reclamateur)!=0||(r.entryprenom_reclamateur,r2.entryprenom_reclamateur)!=0||(r.entry1type_rec,r2.entry1type_rec)!=0||(r.entry2datenaissance,r2.entry2datenaissance)!=0||(r.entryref_rec,r2.entryref_rec)!=0||(r.entrytext_reclamation,r2.entrytext_reclamation)!=0)

fprintf(g,"%s\t ;%s\t ;%s\t ;%s\t ;%s\t ;%s\t %s \n",r2.entrycin_reclamateur,r2.entrynom_reclamateur,r2.entryprenom_reclamateur,r2.entry1type_rec,r2.entry2datenaissance,r2.entryref_rec,r2.entrytext_reclamation);

}
fclose(f);
fclose(g);


remove("reclamation.txt");
rename("reclamation2.txt","reclamation.txt");

}

}
