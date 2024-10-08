#include <windows.h>
#include <GL/glut.h>

void initGL() {
	glClearColor(0.0, 0.0, 0.0, 1.0); //black
}
void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 1.0, 1.0); //white

    // Draw the post
    glBegin(GL_LINES);
        glVertex2f(-0.1, -1.0);
        glVertex2f(-0.1, 0.5);
    glEnd();

    // Draw the light
    glBegin(GL_POLYGON);
        glVertex2f(-0.2, 0.5);
        glVertex2f(0.0, 0.5);
        glVertex2f(0.0, 0.6);
        glVertex2f(-0.2, 0.6);
    glEnd();

    //Draw the radiation
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 1.0f, 0.6f); //light yellow
        glVertex2f(-0.1, 0.5);
        glVertex2f(0.0, 0.5);
        glVertex2f(1.0, -1.0);
        glVertex2f(0.1, -1.0);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Lamppost");
    glutDisplayFunc(display);
    initGL();
    glutMainLoop();
    return 0;
}
