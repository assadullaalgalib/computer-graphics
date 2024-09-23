#include <windows.h>
#include <GL/glut.h>

/* Initialize OpenGL Graphics */
void initGL() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f); // Red
    //Coordinates of Rectangle
	glVertex2f(-0.1f, 0.1f);
	glVertex2f(-0.7f, 0.1f);
	glVertex2f(-0.7f, 0.5f);
	glVertex2f(-0.1f, 0.5f);
	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 1.0f); //Purple
    //Coordinates of Triangle
    glVertex2f(-0.3f, -0.2f);
    glVertex2f(-0.3f, -0.6f);
    glVertex2f(-0.6f, -0.4f);
    glEnd();

	glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 0.0f); //Yellow
    //Coordinates of Triangle
    glVertex2f(0.3f, -0.2f);
    glVertex2f(0.3f, -0.6f);
    glVertex2f(0.6f, -0.4f);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 0.0f); // Green
    //Coordinates of Rectangle
	glVertex2f(0.2f, 0.2f);
	glVertex2f(0.6f, 0.2f);
	glVertex2f(0.6f, 0.4f);
	glVertex2f(0.2f, 0.4f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);
	//Coordinates of triangle
	glVertex2f(0.6f, 0.0f);
	glVertex2f(0.6f, 0.6f);
	glVertex2f(0.8f, 0.3f);
	glEnd();

	glFlush();  // Render now
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("RECTANGLE, ARROW, TRIANGLE");
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(50, 50);
	glutDisplayFunc(display);
	initGL();
	glutMainLoop();
	return 0;
}
