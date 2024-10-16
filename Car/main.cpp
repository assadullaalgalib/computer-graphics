#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
void initGL() {
	glClearColor(1.0f, 1.0f, 0.6f, 1.0); //light yellow
}
void Circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(r,g,b);
            float pi=3.1416;
            float Angle=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(Angle);
            float y = r * sin(Angle);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
    // Draw the spokes of the wheel
    for(int j = 0; j < 360; j+=45) {
        glPushMatrix();
            glRotatef(j, 0.0f, 0.0f, 1.0f);
            glBegin(GL_LINES);
                glColor3f(0.0f, 0.0f, 0.0f); // Set color to white
                glVertex2f(0.0f, 0.0f);
                glVertex2f(0.0f, 0.1f);
            glEnd();
        glPopMatrix();
    }
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


void CarBody() {
    //center body
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.0f, 0.0f); // Set color to red
        glVertex2f(-0.5f, -0.2f);
        glVertex2f(0.5f, -0.2f);
        glVertex2f(0.3f, 0.2f);
        glVertex2f(-0.3f, 0.2f);
    glEnd();
    //car hood
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.0f, 0.0f); // Set color to red
        glVertex2f(0.3f, -0.2f);
        glVertex2f(0.5f, -0.2f);
        glVertex2f(0.5f, 0.0f);
        glVertex2f(0.3f, 0.0f);
    glEnd();
    //car trunk
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.0f, 0.0f); // Set color to red
        glVertex2f(-0.5f, -0.2f);
        glVertex2f(-0.3f, -0.2f);
        glVertex2f(-0.3f, 0.0f);
        glVertex2f(-0.5f, 0.0f);
    glEnd();
    //car window
    glBegin(GL_POLYGON);
        glColor4f(0.0f, 0.3f, 0.5f, 1.0); // Set color to blue
        glVertex2f(-0.3f, 0.0f);
        glVertex2f(0.3f, 0.0f);
        glVertex2f(0.3f, 0.15f);
        glVertex2f(-0.3f, 0.15f);
    glEnd();

}
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
GLfloat i = 0.0f; // global variable for rotation angle

void display() {
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    CarBody(); // Draw the body of the car
    glLoadIdentity(); // Reset the model-view matrix

    glPushMatrix(); // Save model-view matrix setting
        glTranslatef(-0.3f, -0.2f, 0.0f); // Move the drawing of the first wheel to the left and up
        glRotatef(i, 0.0f, 0.0f, 1.0f); // Rotate by i degree in the z-axis
        Circle(0.15, 0.0, 0.0, 0.0, 0.0, 0.0); // Draw the circle
        Circle(0.075, 0.0, 0.0, 1.0, 1.0, 1.0); // Draw the inner circle
    glPopMatrix(); // Restore the model-view matrix

    glPushMatrix(); // Save model-view matrix setting
        glTranslatef(0.3f, -0.2f, 0.0f); // Move the drawing of the second wheel to the right and up
        glRotatef(i, 0.0f, 0.0f, 1.0f); // Rotate by i degree in the z-axis
        Circle(0.15, 0.0, 0.0, 0.0, 0.0, 0.0); // Draw the circle
        Circle(0.075, 0.0, 0.0, 1.0, 1.0, 1.0); // Draw the inner circle
    glPopMatrix(); // Restore the model-view matrix

    i += 0.1f; // Increment the rotation angle
    glutSwapBuffers(); // Double buffering
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("Car"); // Create a window with the given title
    glutInitWindowSize(320, 320); // Set the window's initial width & height
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    initGL();
    glutIdleFunc(Idle); // Register callback handler if no other event
    glutReshapeFunc(reshape);  // register the reshape callback function
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
