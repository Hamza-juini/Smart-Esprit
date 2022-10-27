#include <gtk/gtk.h>
#  include <config.h>


/*void
on_service_plus_rec_clicked            (GtkButton       *button,
                                        gpointer         user_data); 
*/
void
on_afficher_rec_clicked                (GtkWidget       *button,
                                        gpointer         user_data);
/*
void
on_ajouter_rec_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_supprimer_rec_clicked               (GtkButton       *button,
                                        gpointer         user_data);
*/
void
on_retour_service_rec_clicked          (GtkButton       *button,
/*                                        gpointer         user_data);
void
on_annuler_ajoute_clicked              (GtkButton       *button,
                                        gpointer         user_data);
*/
void
on_add_reclamation_clicked             (GtkWidget       *button,
                                        gpointer         user_data);
/*
void
on_type1_toggled                       (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_type2_toggled                       (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_annuler_ajouter_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_modify_reclamation_clicked          (GtkButton       *button,
                                        gpointer         user_data);

void
on_type_2_toggled                      (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_type_1_toggled                      (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_annuler_supprimer_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_supprimer_reclamation_clicked       (GtkButton       *button,
                                        gpointer         user_data);
*/
void
on_tab_affich_row_activated            (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);
/*
void
on_annuler_recla_clicked               (GtkButton       *button,
                                        gpointer         user_data);
*/
void
on_retour_recla_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_annuler_ser_recl_clicked            (GtkButton       *button,
                                        gpointer         user_data);
