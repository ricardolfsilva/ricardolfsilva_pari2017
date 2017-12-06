/**
 *       @file  main.c
 *      @brief  Programa principal
 *
 * Descrição mais detalhada do ficheiro que até poderiam incluir links para imagens etc.
 *
 *     @author  Ricardo Silva, ricardolfsilva@ua.pt
 *
 *   @internal
 *     Created  20-Set-2017
 *     Company  University of Aveiro
 *   Copyright  Copyright (c) 2017, Ricardo Silva
 *
 * =====================================================================================
 */

#define _MAIN_C_


#include "myf.h"



int
main (int argc, char *argv[])
{

//Ex1
#if 1

        gtk_init(&argc, &argv);	//construir a interface gráfica

        /* load the interface after a configuration file*/
        builderG = gtk_builder_new();	//builderG e carregamento da interface
        gtk_builder_add_from_file(builderG, "mydr2.glade", NULL);

        /* connect the signals in the interface */
        gtk_builder_connect_signals(builderG, NULL);	//adicionar os sinais, eventos do rato ou teclado

//////////opcional, depende do exercicio

        /* get main window Widget ID and connect special signals */
        GtkWidget *t = GTK_WIDGET(gtk_builder_get_object(builderG, "window1"));	//GTK_WIDGET é um cast forçado do object para widget
        if(t)
        {
                g_signal_connect(G_OBJECT(t), "delete_event", G_CALLBACK(pari_destroy), NULL);
        }

        // use signal to catch SIGINT  (CTRL-C) - optional
        signal(SIGINT, InterceptCTRL_C);

//////////até aqui!

	g_timeout_add(30, (GSourceFunc) pari_UpdateImageAreas, (gpointer) NULL);
        captureG=pari_StartImageAcquisition();

        /* start the event loop */
        gtk_main();

	cvReleaseCapture(&captureG);             //Release capture device.
        cvReleaseImage(&dst_imageG);             //Release image (free pointer when no longer used)
        cvReleaseImage(&src_imageG);             //Release image (free pointer when no longer used).

        return 0;
#endif

}

