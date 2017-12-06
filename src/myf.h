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


#include <sys/ipc.h>		//ipc 
#include <sys/shm.h>		//shared memory
#include <gtk/gtk.h>
#include <cairo.h>

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
#else			//se estiver noutro ficheiro inclui...
	extern GtkBuilder *builderG;
	extern double xoffG;
	extern double yoffG;
	extern free_form ffG;
	extern double fontSizeFactorG;
#endif


#include "prototypes.h" //sempre no fim

