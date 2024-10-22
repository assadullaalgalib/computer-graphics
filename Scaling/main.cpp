
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
/* Initialize OpenGL Graphics */
void initGL() {
   // Set "clearing" or background color
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}
/* Handler for window-repaint event. Call back when the window first appears and
   whenever the window needs to be re-painted. */
void display() {
   glClear(GL_COLOR_BUFFER_BIT);    // Clear the color buffer
   //glMatrixMode(GL_MODELVIEW);      // To operate on Model-View matrix
   glLoadIdentity();                // Reset the model-view matrix
glTranslatef(+0.0f, 0.0f, 0.0f);
   glBegin(GL_QUADS);               // Each set of 4 vertices form a quad
      glColor3f(1.0f, 0.0f, 0.0f);  // Red
      glVertex2f(-0.1f, -0.1f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f( 0.1f, -0.1f);     //  so that the normal (front-face) is facing you
      glVertex2f( 0.1f,  0.1f);
      glVertex2f(-0.1f,  0.1f);
   glEnd();

   glScalef(2,2,0); // increase x right and y
glTranslatef(+0.3f, 0.1f, 0.0f); // Translate x right and y up
   glBegin(GL_QUADS);               // Each set of 4 vertices form a quad
      glColor3f(1.0f, 1.0f, 0.0f);  // Red
      glVertex2f(-0.1f, -0.1f);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f( 0.1f, -0.1f);     //  so that the normal (front-face) is facing you
      glVertex2f( 0.1f,  0.1f);
      glVertex2f(-0.1f,  0.1f);
   glEnd();
   glFlush();   // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
   glutInit(&argc, argv);          // Initialize GLUT
   glutInitWindowSize(320, 320);   // Set the window's initial width & height - non-square
   glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
   glutCreateWindow("Model Transform");  // Create window with the given title
   glutDisplayFunc(display);       // Register callback handler for window re-paint event
   //glutReshapeFunc(reshape);       // Register callback handler for window re-size event
   initGL();                       // Our own OpenGL initialization
   glutMainLoop();                 // Enter the infinite event-processing loop
   return 0;
}
