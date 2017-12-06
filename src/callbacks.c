/**
 *       @file  callbacks.c
 *      @brief  Breve Descrição
 *
 * Funções necessárias à interface gráfica.
 *
 *     @author  Ricardo Silva, 71749, ricardolfsilva@ua.pt
 *
 *   @internal
 *     Created  29-Nov-2017
 *     Company  University of Aveiro
 *   Copyright  Copyright (c) 2017, Ricardo Silva
 *
 * =====================================================================================
 */
 
#include "myf.h"
 

/*-------------------------------------------------------------------*/
/**
 * @brief  Breve descrição
 * @param  Parametros
 * @return Retorno da função
 */
gboolean p_ForceRefreshDA(gpointer user_data)
{
        GtkWidget *da;
        if( ! user_data)
           da = GTK_WIDGET(gtk_builder_get_object (builderG, "drawingarea1"));
        else
           da=GTK_WIDGET(user_data);

        //gdk_window_invalidate_rect (gtk_widget_get_window(da), NULL, FALSE); //would make draw parent window
        gtk_widget_queue_draw(da);  //make draw the widget

        return TRUE;  //continue running
}

/*-------------------------------------------------------------------*/
/**
 * @brief  Breve descrição
 * @param  Parametros
 * @return Retorno da função
 */
gboolean pari_UpdateImageAreas(gpointer data)
{
        //generate an expose event (draw event) on drawingarea1
        GtkWidget *da1 = GTK_WIDGET(gtk_builder_get_object(builderG, "drawingarea1"));
        gtk_widget_queue_draw(da1);
        return TRUE;
}

