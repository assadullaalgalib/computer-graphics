#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>

void initGL() {
    glClearColor(1.0f, 1.0f, 0.6f, 1.0); //light yellow
}

void reshape(int width, int height) {
    // Prevent a divide by zero error when minimising the window
    if(height == 0)
        height = 1;

    float aspectRatio = (float)width / (float)height;

    // Set the viewport to cover the new window
    glViewport(0, 0, width, height);

    // Set the correct aspect ratio
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if (width >= height) {
        // aspect >= 1, we are in landscape orientation
        gluOrtho2D(-1.0 * aspectRatio, 1.0 * aspectRatio, -1.0, 1.0);
    } else {
        // aspect < 1, we are in portrait orientation
        gluOrtho2D(-1.0, 1.0, -1.0 / aspectRatio, 1.0 / aspectRatio);
    }
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}


void Idle() {
    glutPostRedisplay(); // Post a re-paint request to activate display()
}

void WindMillBlades() {
    for(int i = 0; i < 3; i++) {
        glPushMatrix();
        //glTranslatef(0.0f, 0.15f, 0.0f); // Move the rotation center to the specified point
        glRotatef(i * 120, 0.0f, 0.0f, 1.0f); // Rotate by i*120 degree in the z-axis
        glTranslatef(0.0f, -0.15f, 0.0f); // Move the rotation center back to the origin
        glBegin(GL_QUADS);
            glColor3f(0.0f, 0.0f, 0.5f); // Silver color
            glVertex2f(0.0f, -0.4f);
            glVertex2f(-0.1f, 0.0f);
            glVertex2f(0.0f, 0.1f);
            glVertex2f(0.1f, 0.0f);
        glEnd();
        glPopMatrix();
    }
    glFlush();
}


/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
GLfloat i = 0.0f; // global variable for rotation angle

void display() {
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    // Draw the post
    glBegin(GL_QUADS);
        glColor3f(0.8f, 0.8f, 0.8f); // Silver color
        glVertex2f(-0.05f, -1.0f);
        glVertex2f(0.05f, -1.0f);
        glVertex2f(0.05f, 0.01f);
        glVertex2f(-0.05f, 0.01f);
    glEnd();
    glPushMatrix();
    glRotatef(i, 0.0f, 0.0f, 1.0f); // Rotate by i degrees around the z-axis
    WindMillBlades();
    glPopMatrix();

    i+=0.2f;
    glutSwapBuffers(); // Double buffering
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("Wind Mill"); // Create a window with the given title
    glutInitWindowSize(320, 320); // Set the window's initial width & height
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    initGL();
    glutIdleFunc(Idle); // Register callback handler if no other event
    glutReshapeFunc(reshape);  // register the reshape callback function
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
