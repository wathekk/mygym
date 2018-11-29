#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "verification.h"


void
on_button1_clicked                     (GtkWidget       *Widget,
                                        gpointer         user_data)
{
GtkWidget *input1,*input2,*output;
GtkWidget *window1;
window1=lookup_widget(Widget,"window1");
FILE*f;
int role; 
char username[20],password[20],user[20],pass[20];
input1=lookup_widget(Widget,"entry1");
input2=lookup_widget(Widget,"entry2");
output=lookup_widget(Widget,"label4");

strcpy(username,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(password,gtk_entry_get_text(GTK_ENTRY(input2)));

if ((verifier(username,password))==-1)
{
gtk_label_set_text(GTK_LABEL(output),"   ERROR \n\n\n try again !");
gtk_entry_set_text(GTK_ENTRY(input2),"");
gtk_entry_set_text(GTK_ENTRY(input1),"");
}
else if ((verifier(username,password))==1)
{
gtk_widget_hide(window1);
GtkWidget *window2;
window2 = create_window2 ();
gtk_widget_show (window2);
}


else if ((verifier(username,password))==2)
{
gtk_widget_hide(window1);
GtkWidget *window3;
window3 = create_window3 ();
gtk_widget_show (window3);
}

else if ((verifier(username,password))==3)
{
gtk_widget_hide(window1);
GtkWidget *window4;
window4 = create_window4 ();
gtk_widget_show (window4);
}
else if ((verifier(username,password))==4)
{
gtk_widget_hide(window1);
GtkWidget *window5;
window5 = create_window5 ();
gtk_widget_show (window5);
}
else if ((verifier(username,password))==5)
{
gtk_widget_hide(window1);
GtkWidget *window6;
window6 = create_window6 ();
gtk_widget_show (window6);
}
else if ((verifier(username,password))==6)
{
gtk_widget_hide(window1);
GtkWidget *window7;
window7 = create_window7 ();
gtk_widget_show (window7);
}

}



void
on_button2_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}

