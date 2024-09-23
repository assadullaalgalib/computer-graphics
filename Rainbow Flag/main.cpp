#include <Windows.h>
#include <GL/glut.h>

void display()
{

    glClearColor (1.0f, 1.0f, 1.0f, 1.0f);
    glClear (GL_COLOR_BUFFER_BIT);
    glLineWidth (50);

    glBegin (GL_POLYGON);
    glColor4f(0.50196078431372549019607843137255f, 0.3921568627450980392156862745098f, 0.65882352941176470588235294117647f, 0.0f);//indigo


    glVertex2f(-0.5f, 0.4f);
    glVertex2f(.5f, 0.4f);
    glVertex2f(0.5f, 0.3f);
    glVertex2f(-0.5f, 0.3f);


    glEnd();

    glBegin (GL_POLYGON);
    glColor4f(0.30980392156862745098039215686275f, 0.50588235294117647058823529411765f, 0.74117647058823529411764705882353f, 0.0f);//Blue

    glVertex2f(0.5f, 0.3f);
    glVertex2f(-0.5f, 0.3f);
    glVertex2f(-0.5f, 0.2f);
    glVertex2f(0.5f, 0.2f);

    glEnd();

    glBegin (GL_POLYGON);
    glColor4f(0.29411764705882352941176470588235f, 0.67450980392156862745098039215686f, 0.77647058823529411764705882352941f, 0.0f);// Violet

    glVertex2f(-0.5f, 0.2f);
    glVertex2f(0.5f, 0.2f);
    glVertex2f(0.5f, 0.1f);
    glVertex2f(-0.5f, 0.1f);

    glEnd();

    glBegin (GL_POLYGON);
    glColor4f(0.0f, 0.69019607843137254901960784313725f, 0.31372549019607843137254901960784f, 0.0f);// Green

    glVertex2f(0.5f, 0.1f);
    glVertex2f(-0.5f, 0.1f);
    glVertex2f(-0.5f, 0.0f);
    glVertex2f(0.5f, 0.0f);

    glEnd();

    glBegin (GL_POLYGON);
    glColor4f(0.96862745098039215686274509803922f, 0.58823529411764705882352941176471f, 0.27450980392156862745098039215686f, 0.0f);// Orange

    glVertex2f(-0.5f, 0.0f);
    glVertex2f(0.5f, 0.0f);
    glVertex2f(0.5f, -0.1f);
    glVertex2f(-0.5f, -0.1f);

    glEnd();

    glBegin (GL_POLYGON);
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);// Yellow

    glVertex2f(0.5f, -0.1f);
    glVertex2f(-0.5f, -0.1f);
    glVertex2f(-0.5f, -0.2f);
    glVertex2f(0.5f, -0.2f);

    glEnd();

    glBegin (GL_POLYGON);
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);// Red

    glVertex2f(-0.5f, -0.2f);
    glVertex2f(0.5f, -0.2f);
    glVertex2f(0.5f, -0.3f);
    glVertex2f(-0.5f, -0.3f);

    glEnd();

	glFlush();

}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(600, 100);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
