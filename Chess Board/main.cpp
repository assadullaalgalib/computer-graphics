#include <windows.h>
#include <GL/glut.h>

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.4f, 0.4f);
	glVertex2f(0.0f, 0.4f);

	glVertex2f(0.0f, 0.4f);
	glVertex2f(0.0f, 0.0f);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(-0.4f, 0.0f);

	glVertex2f(-0.4f, 0.0f);
	glVertex2f(-0.4f, 0.4f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.4f, 0.4f);
	glVertex2f(-0.3f, 0.4f);
	glVertex2f(-0.3f, 0.3f);
	glVertex2f(-0.4f, 0.3f);

	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.2f, 0.4f);
	glVertex2f(-0.1f, 0.4f);
	glVertex2f(-0.1f, 0.3f);
	glVertex2f(-0.2f, 0.3f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.3f, 0.3f);
	glVertex2f(-0.2f, 0.3f);
	glVertex2f(-0.2f, 0.2f);
	glVertex2f(-0.3f, 0.2f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.1f, 0.3f);
	glVertex2f(0.0f, 0.3f);
	glVertex2f(0.0f, 0.2f);
	glVertex2f(-0.1f, 0.2f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.4f, 0.2f);
	glVertex2f(-0.3f, 0.2f);
	glVertex2f(-0.3f, 0.1f);
	glVertex2f(-0.4f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.2f, 0.2f);
	glVertex2f(-0.1f, 0.2f);
	glVertex2f(-0.1f, 0.1f);
	glVertex2f(-0.2f, 0.1f);

	glEnd();

glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.3f, 0.1f);
	glVertex2f(-0.2f, 0.1f);
	glVertex2f(-0.2f, 0.0f);
	glVertex2f(-0.3f, 0.0f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.1f, 0.1f);
	glVertex2f(0.0f, 0.1f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-0.1f, 0.0f);

	glEnd();

	glFlush();  // Render now
}/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
