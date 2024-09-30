
#include <windows.h>
#include <GL/glut.h>

GLfloat i = 0.0f;

void initGL()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();//Reset the current matrix

    ///glTranslatef(0.4,0.4,0);
    glPushMatrix(); //glPushMatrix copies the tp matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
        glRotatef(i,0.0,1.0,0.0);//i=how many degree you want to rotate around an axis
        //glLineWidth(3.0);
        // glTranslatef(0.f,0.0f,0.f);
        glBegin(GL_LINES);
        glColor3f(1.0f, 0.0f, 0.0f);

        glVertex2f(0.0f, 0.0f);
        glVertex2f( 0.6f, 0.0f);

        glVertex2f(0.0f, 0.0f);
        glVertex2f( 0.0f, 0.6f);

        glVertex2f(0.0f, 0.0f);
        glVertex2f( -0.6f, 0.0f);

        //glVertex2f(.5f, .3f);
        //glVertex2f(.7f, 0.3f);

        glEnd();
    glPopMatrix();
    i+=0.02f;
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);//
    initGL();
    glutIdleFunc(Idle);/*glutIdleFunc sets the global idle callback to be func
                        so a GLUT program can perform background processing tasks or continuous animation
                        when window system events are not being received.*/
    glutMainLoop();
    return 0;
}
