/**
 *       @file  myf.h
 *      @brief  Breve Descrição
 *
 * Descrição mais detalhada do ficheiro que até poderiam incluir links para imagens etc.
 *
 *     @author  Ricardo Silva, 71749, ricardolfsilva@ua.pt
 *
 *   @internal
 *     Created  27-Set-2017
 *     Company  University of Aveiro
 *   Copyright  Copyright (c) 2017, Ricardo Silva
 *
 * =====================================================================================
 */


#ifndef _MYF_H
#define _MYF_H

#include <sys/ipc.h>		//ipc 
#include <sys/shm.h>		//shared memory
#include <gtk/gtk.h>
#include <cairo.h>
#include <cv.h>
#include <highgui.h>

#define MAXFFBUFFER 1000
typedef struct {
  int count;
  double x[MAXFFBUFFER];
  double y[MAXFFBUFFER];
} free_form;

#ifdef _MAIN_C_		//se estiver dentro do main inclui...
        GtkBuilder *builderG;	
        double xoffG=100;
	double yoffG=150;
	free_form ffG={0};   //init count to zero. Do not affect x and y.
	double fontSizeFactorG=20.0;
	IplImage *dst_imageG , *src_imageG;
        CvCapture *captureG;
#else			//se estiver noutro ficheiro inclui...
	extern GtkBuilder *builderG;
	extern double xoffG;
	extern double yoffG;
	extern free_form ffG;
	extern double fontSizeFactorG;
	extern IplImage *dst_imageG , *src_imageG;
        extern CvCapture *captureG;
#endif


#include "prototypes.h" //sempre no fim

#endif /* _MYF_H */


