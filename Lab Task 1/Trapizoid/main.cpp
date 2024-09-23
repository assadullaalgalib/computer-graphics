#include <windows.h>
#include <GL/glut.h>

/* Initialize OpenGL Graphics */
void initGL() {

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f); // Red

	glVertex2f(0.1f, 0.1f);
	glVertex2f(0.5f, 0.1f);

	glVertex2f(0.5f, 0.1f);
	glVertex2f(0.4f, 0.4f);

	glVertex2f(0.4f, 0.4f);
	glVertex2f(0.2f, 0.4f);

	glVertex2f(0.2f, 0.4f);
	glVertex2f(0.1f, 0.1f);
	glEnd();

	glFlush();  // Render now
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("TRAPIZOID");
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(50, 50);
	glutDisplayFunc(display);
	initGL();
	glutMainLoop();
	return 0;
}
