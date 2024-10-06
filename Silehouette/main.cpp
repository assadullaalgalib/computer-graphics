#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <ctime>


void initGL() {
	glClearColor(0.0, 0.0, 0.3, 1.0); //white
}

void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Draw 5 buildings
    for (float b = -0.5; b < 0.5; b += 0.2) {
        // Set color to light blue for buildings
        glColor3f(0.0, 0.0, 0.0);

        // Draw building
        glBegin(GL_POLYGON);
            glVertex2f(b, -0.5);
            glVertex2f(b, 0.5);
            glVertex2f(b + 0.1, 0.5);
            glVertex2f(b + 0.1, -0.5);
        glEnd();

        // Draw windows on building
        for (float y = -0.45; y < 0.35; y += 0.1) { // Changed upper limit to skip topmost windows
            for (float x = b + 0.02; x < b + 0.08; x += 0.03) {
                // Make some windows yellow
                if ((int)(x * 100) % 2 == 0 && (int)(y * 100) % 2 == 0)
                    glColor3f(1.0, 1.0, 0.0); // Set color to yellow for some windows
                else
                    glColor3f(1.0, 1.0, 1.0); // Set color to white for other windows

                glBegin(GL_POLYGON);
                    glVertex2f(x, y);
                    glVertex2f(x, y + 0.08);
                    glVertex2f(x + 0.02, y + 0.08);
                    glVertex2f(x + 0.02, y);
                glEnd();

                glColor3f(0.0, 0.0, 0.0); // Set color back to light blue for next window or building
            }
        }
    }

    // Draw random white dots on the upper part of the screen
    glColor3f(1.0, 1.0, 1.0); // Set color to white for dots
    glPointSize(2); // Set point size to make dots visible

    srand(time(NULL)); // Seed random number generator with current time

    glBegin(GL_POINTS);
        for (int i = 0; i < 100; i++) { // Change this value to draw more or fewer dots
            float x = ((float)rand()/(float)(RAND_MAX)) * 2 - 1; // Random x coordinate between -1 and 1
            float y = ((float)rand()/(float)(RAND_MAX)) / 2 + 0.5; // Random y coordinate between 0.5 and 1

            glVertex2f(x, y);
        }
    glEnd();

    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Silehouette");
    glutDisplayFunc(renderScene);
    initGL();
    glutMainLoop();
    return 0;
}
