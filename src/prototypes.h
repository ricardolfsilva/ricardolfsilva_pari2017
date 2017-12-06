/*File generated automatically in ricardo-SATELLITE-L50-A-1CU by ricardo on Qua Dez  6 11:57:47 WET 2017*/
#ifdef __cplusplus
extern "C" {
#endif
/* callbacks.c */
gboolean on_drawingarea1_expose_event (GtkWidget * widget, GdkEvent * event, gpointer user_data);
gboolean p_ForceRefreshDA (gpointer user_data);
gboolean pari_UpdateImageAreas (gpointer data);
/* myf.c */
void InterceptCTRL_C (int a);
void ReverseString (char *str);
void on_button1_clicked (GtkWidget * widget, gpointer user_data);
GdkPixbuf *pari_ConvertOpenCv2Gtk (IplImage * image, int dst_w, int dst_h);
void pari_PerformImageAcquisition (CvCapture * capt);
void pari_ProcessUserOperations (IplImage * src, IplImage * dst);
void pari_RefreshDrawingArea (char *widgetName, IplImage * img);
CvCapture *pari_StartImageAcquisition ();
gboolean pari_delete_event (GtkWidget * window, GdkEvent * event, gpointer data);
void pari_destroy (GtkWidget * window, gpointer data);
/* main.c */
int main (int argc, char *argv[]);
#ifdef __cplusplus
}
#endif
