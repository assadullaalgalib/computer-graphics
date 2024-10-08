#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glut.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor4f(0.2f, 0.2f, 0.2f, 1.0f); // Dark gray
	glVertex2f(0.25f, 0.1f);
	glVertex2f(0.3f, 0.1f);
	glVertex2f(0.3f, 0.3f);
	glVertex2f(0.25f, 0.3f);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor4f(0.2f, 0.2f, 0.2f, 1.0f); // Dark gray
	glVertex2f(0.8f, 0.1f);
	glVertex2f(0.85f, 0.1f);
	glVertex2f(0.85f, 0.3f);
	glVertex2f(0.8f, 0.3f);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor4f(0.2f, 0.2f, 0.2f, 1.0f); // Dark gray
	glVertex2f(0.35f, 0.1f);
	glVertex2f(0.4f, 0.1f);
	glVertex2f(0.4f, 0.8f);
	glVertex2f(0.35f, 0.8f);
	glEnd();


	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor4f(0.2f, 0.2f, 0.2f, 1.0f); // Dark gray
	glVertex2f(0.7f, 0.1f);
	glVertex2f(0.75f, 0.1f);
	glVertex2f(0.75f, 0.8f);
	glVertex2f(0.7f, 0.8f);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor4f(1.0f, 0.5f, 0.0f, 1.0f); //Orange
	glVertex2f(0.2f, 0.3f);
	glVertex2f(0.9f, 0.3f);
	glVertex2f(0.9f, 0.4f);
	glVertex2f(0.2f, 0.4f);
	glEnd();

	glBegin(GL_QUADS);            // These vertices form a closed polygon
	glColor4f(1.0f, 0.5f, 0.0f, 1.0f); //Orange
	glVertex2f(0.25f, 0.6f);
	glVertex2f(0.85f, 0.6f);
	glVertex2f(0.85f, 0.7f);
	glVertex2f(0.25f, 0.7f);
	glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("BENCH");  // Create window with the given title
	glutInitWindowSize(500, 500);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
