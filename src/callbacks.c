#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "reclamation.h"


void
on_service_plus_rec_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_afficher_rec_clicked                (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *afficher_recl;
GtkWidget *ajouter_recl;
GtkWidget *tab_affich;

ajouter_recl=lookup_widget(objet,"ajouter_recl");
gtk_widget_destroy(ajouter_recl);
afficher_recl=lookup_widget(objet,"afficher_recl");
afficher_recl=create_afficher_recl  ();
gtk_widget_show(afficher_recl);
tab_affich=lookup_widget(afficher_recl,"tab_affich");
display(tab_affich);

}


/*void
on_ajouter_rec_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_supprimer_rec_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}
*/

void
on_retour_service_rec_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{    

}

/*
void
on_annuler_ajoute_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}
*/

void
on_add_reclamation_clicked             (GtkWidget       *objet,
                                        gpointer         user_data)
{
reclamation r;
GtkWidget *input1,*input2,*input3,*input4,*input5,*input6,*input7;
GtkWidget *ajouter_recl;
ajouter_recl=lookup_widget(objet,"ajouter_recl");
input1=lookup_widget(objet,"entrycin_reclamateur");
input2=lookup_widget(objet,"entrynom_reclamateur");
input3=lookup_widget(objet,"entryprenom_reclamateur");
input4=lookup_widget(objet,"entry1type_rec");
input5=lookup_widget(objet,"entryref_rec");
input6=lookup_widget(objet,"entrytext_reclamation");
input7=lookup_widget(objet,"entry2datenaissance");

strcpy(r.entrycin_reclamateur,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(r.entrynom_reclamateur,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(r.entryprenom_reclamateur,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(r.entry1type_rec,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(r.entryref_rec,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(r.entrytext_reclamation,gtk_entry_get_text(GTK_ENTRY(input6)));
strcpy(r.entry2datenaissance,gtk_entry_get_text(GTK_ENTRY(input7)));

add_reclamation(r);
}
/*

void
on_type1_toggled                       (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_type2_toggled                       (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_annuler_ajouter_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_modify_reclamation_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_type_2_toggled                      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_type_1_toggled                      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_annuler_supprimer_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_supprimer_reclamation_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{

}
*/

void
on_tab_affich_row_activated            (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

GtkTreeIter iter;
gchar* entrynom_reclamateur;
gchar* entryprenom_reclamateur;
gchar* entry1type_rec;
gchar* entrytext_reclamation;
gchar* entry2datenaissance;
gchar* entrycin_reclamateur;
gchar* entryref_rec;
reclamation r;
GtkTreeModel *model =gtk_tree_view_get_model(treeview);
if(gtk_tree_model_get_iter(model,&iter,path))
{
gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0,&entrycin_reclamateur,1,&entrynom_reclamateur,2,&entryprenom_reclamateur,3,&entryref_rec,4,&entry1type_rec,5,&entrytext_reclamation,6,&entry2datenaissance,-1);
strcpy(r.entrynom_reclamateur,entrynom_reclamateur);
strcpy(r.entry1type_rec,entry1type_rec);
strcpy(r.entryprenom_reclamateur,entryprenom_reclamateur);
strcpy(r.entrytext_reclamation,entrytext_reclamation);
strcpy(r.entry2datenaissance,entry2datenaissance);
strcpy(r.entrycin_reclamateur,entrycin_reclamateur);
strcpy(r.entryref_rec,entryref_rec);
Delete_reclamation(r);
display(treeview);
}

}

/*
void 
on_annuler_recla_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_retour_recla_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_annuler_ser_recl_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}
*/
