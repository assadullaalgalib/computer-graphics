#include <windows.h>
#include <GL/glut.h>
#include <math.h>
/* Initialize OpenGL Graphics */
/*void initGL() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}
void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0, 0.5, 0.0); // dark green

    float positions[3][2] = {{0.35, 0.0}, {0.4, 0.0}, {0.45, 0.0}}; // Positions of the circles

    for(int j = 0; j < 3; j++) {
        glBegin(GL_POLYGON);
        for(int i = 0; i < 360; i++) {
            float theta = (i * 3.14159) / 180;
            glVertex2f(positions[j][0] + 0.4 * cos(theta), positions[j][1] + 0.4 * sin(theta));
        }
        glEnd();
    }

    glColor3f(0.6, 0.3, 0.0); //dark brown
    glBegin(GL_POLYGON);
    glVertex2f(-1.0, -1.0);
    glVertex2f(1.0, -1.0);
    glVertex2f(1.0, -0.4);
    glVertex2f(-1.0, -0.4);
    glEnd();

    glColor4f(0.2f, 0.2f, 0.2f, 1.0f); // dark gray
    for(int j = 0; j < 3; j++) {
        glBegin(GL_POLYGON);
        glVertex2f(positions[j][0] - 0.05, -0.4);
        glVertex2f(positions[j][0] + 0.05, -0.4);
        glVertex2f(positions[j][0] + 0.05, positions[j][1]-0.3);
        glVertex2f(positions[j][0] - 0.05, positions[j][1]-0.3);
        glEnd();
    }

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Tree");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    initGL();
    glutMainLoop();
    return 0;
}*/
/*#include <GL/glut.h>
#include <math.h>*/

void drawCircle(float x, float y, float radius) {
    glBegin(GL_TRIANGLE_FAN);
    for(int i = 0; i <= 300; i++) {
        double angle = 2 * M_PI * i / 300;
        double dx = radius * cos(angle);
        double dy = radius * sin(angle);
        glVertex2f(x + dx, y + dy);
    }
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);

    float positions[3][2] = {{0.35, 0.0}, {0.4, 0.0}, {0.45, 0.0}};
    float radius = 0.1;

    for(int i = 0; i < 3; i++) {
        drawCircle(positions[i][0], positions[i][1], radius);
    }

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Setup Test");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
/*#include <GL/glut.h>
#include <math.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0); // Set the color to white

    float positions[3][2] = {{0.35, 0.0}, {0.4, 0.0}, {0.45, 0.0}};

    for(int j = 0; j < 3; j++) {
        glBegin(GL_POLYGON);
        for(int i = 0; i < 360; i++) {
            float theta = (i * 3.14159) / 180;
            glVertex2f(positions[j][0] + 0.4 * cos(theta), positions[j][1] + 0.4 * sin(theta));
        }
        glEnd();
    }

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Setup Test");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}*/
