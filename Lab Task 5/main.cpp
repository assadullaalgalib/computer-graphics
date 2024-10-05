#include <GL/glut.h>
#include <windows.h>
#include <stdio.h>
#include<math.h>

void drawCircle(float x, float y, float radius){
    int i;
    int triangleAmount = 20; //# of triangles used to draw circle

    GLfloat twicePi = 2.0f * 3.1416;

    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
}

void drawTrafficLight(float x, float y){
    glColor3f(1.0, 1.0, 1.0);

    // Draw light box
    glBegin(GL_QUADS);
        glVertex2f(x-0.05f, y+0.2f);
        glVertex2f(x+0.05f, y+0.2f);
        glVertex2f(x+0.05f, y-0.1f);
        glVertex2f(x-0.05f, y-0.1f);
    glEnd();

    // Draw post
    glBegin(GL_QUADS);
        glVertex2f(x-0.02f, y-0.1f);
        glVertex2f(x+0.02f, y-0.1f);
        glVertex2f(x+0.02f, y-0.4f);
        glVertex2f(x-0.02f, y-0.4f);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    drawCircle(x, y+0.15, 0.02); // Red light
    glColor3f(1.0, 1.0, 0.0);
    drawCircle(x, y+0.05, 0.02); // Yellow light
    glColor3f(0.0, 1.0, 0.0);
    drawCircle(x, y-0.05, 0.02); // Green light
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
void display(){
glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
glClear(GL_COLOR_BUFFER_BIT);


glLineWidth(5);

//Tree
glBegin(GL_QUADS);

glColor3f(0.0f, 0.5f, 0.5f);
glVertex2f(-0.51f, 0.00f);
glVertex2f(-0.51f, 0.09f);
glVertex2f(-0.54f, 0.09f);
glVertex2f(-0.54f, 0.00f);

glColor3f(0.0f, 1.0f, 0.0f);//Green
glVertex2f(-0.60f,0.09);
glVertex2f(-0.45f, 0.09f);
glVertex2f(-0.51f, 0.14f);
glVertex2f(-0.54f, 0.14f);


glVertex2f(-0.60f, 0.14f);
glVertex2f(-0.45f, 0.14f);
glVertex2f(-0.51f, 0.19f);
glVertex2f(-0.54f, 0.19f);

//2nd Treee

glColor3f(0.0f, 0.5f, 0.5f);
glVertex2f(0.51f, 0.00f);
glVertex2f(0.51f, 0.09f);
glVertex2f(0.54f, 0.09f);
glVertex2f(0.54f, 0.00f);


glColor3f(0.0f, 1.0f, 0.0f);//Green
glVertex2f(0.60f,0.09);
glVertex2f(0.45f, 0.09f);
glVertex2f(0.51f, 0.14f);
glVertex2f(0.54f, 0.14f);


glVertex2f(0.60f, 0.14f);
glVertex2f(0.45f, 0.14f);
glVertex2f(0.51f, 0.19f);
glVertex2f(0.54f, 0.19f);

glEnd();


 //house
glBegin(GL_QUADS);

glColor3f(0.5f, 0.5f, 0.0f);
glVertex2f(-0.30f, 0.05f);
glVertex2f(-0.15f, 0.05f);
glVertex2f(-0.15f, 0.20f);
glVertex2f(-0.30f, 0.20f);
glEnd();

glBegin(GL_TRIANGLES);

glColor3f(0.5f, 0.0f, 0.0f);
glVertex2f(-0.30f, 0.20f);
glVertex2f(-0.15f, 0.20f);
glVertex2f(-0.25f, 0.25f);

glEnd();

glBegin(GL_QUADS);

glColor3f(0.0f, 0.5f, 0.5f);
glVertex2f(-0.15f, 0.05f);
glVertex2f(-0.10f, 0.05f);
glVertex2f(-0.10f, 0.20f);
glVertex2f(-0.15f, 0.20f);

glEnd();


glBegin(GL_QUADS);

glColor3f(0.5f, 0.5f, 0.5f);
glVertex2f(-0.15f, 0.20f);
glVertex2f(-0.10f, 0.20f);
glVertex2f(-0.15f, 0.25f);
glVertex2f(-0.25f, 0.25f);

glEnd();


//door
glBegin(GL_QUADS);

glColor3f(0.1f, 0.1f, 0.1f);
glVertex2f(-0.25f, 0.05f);
glVertex2f(-0.20f, 0.05f);
glVertex2f(-0.20f, 0.10f);
glVertex2f(-0.25f, 0.10f);

glEnd();

glBegin(GL_QUADS);

//window
glColor3f(0.1f, 0.1f, 0.1f);
glVertex2f(-0.14f, 0.12f);
glVertex2f(-0.12f, 0.12f);
glVertex2f(-0.12f, 0.14f);
glVertex2f(-0.14f, 0.14f);

glEnd();

glBegin(GL_QUADS);

glColor3f(1.0f, 1.1f, 1.1f);
glVertex2f(-0.35f, 0.00f);
glVertex2f(-0.05f, 0.00f);
glVertex2f(-0.05f, 0.05f);
glVertex2f(-0.35f, 0.05f);

glEnd();


glBegin(GL_QUADS);

glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(-0.10f, 0.05f);
glVertex2f(-0.05f, 0.05f);
glVertex2f(-0.05f, 0.12f);
glVertex2f(-0.10f, 0.12f);

glVertex2f(-0.35f, 0.05f);
glVertex2f(-0.30f, 0.05f);
glVertex2f(-0.30f, 0.12f);
glVertex2f(-0.35f, 0.10f);

glEnd();

glBegin(GL_LINES);

glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-0.25f, 0.00f);
glVertex2f(-0.25f, 0.05f);

glVertex2f(-0.20f, 0.00f);
glVertex2f(-0.20f, 0.05f);

glVertex2f(-0.25f, 0.05f);
glVertex2f(-0.20f, 0.00f);

glVertex2f(-0.25f, 0.00f);
glVertex2f(-0.20f, 0.05f);

glEnd();

//Building

//1st floor
glBegin(GL_QUADS);
glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
glVertex2f(0.00f, 0.00f);
glVertex2f(0.35f, 0.00f);
glVertex2f(0.35f, 0.05f);
glVertex2f(0.00f, 0.05f);

//Door
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.10f, 0.00f);
glVertex2f(0.25f, 0.00f);
glVertex2f(0.25f, 0.05f);
glVertex2f(0.10f, 0.05f);


//2nd floor
glBegin(GL_QUADS);
glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
glVertex2f(0.00f, 0.05f);
glVertex2f(0.35f, 0.05f);
glVertex2f(0.35f, 0.10f);
glVertex2f(0.00f, 0.10f);

//WINDOW 1,2
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.05f, 0.05f);
glVertex2f(0.10f, 0.05f);
glVertex2f(0.10f, 0.08f);
glVertex2f(0.05f, 0.08f);

glVertex2f(0.25f, 0.05f);
glVertex2f(0.30f, 0.05f);
glVertex2f(0.30f, 0.08f);
glVertex2f(0.25f, 0.08f);
glEnd();


//3rd floor
glBegin(GL_QUADS);
glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
glVertex2f(0.00f, 0.10f);
glVertex2f(0.35f, 0.10f);
glVertex2f(0.35f, 0.15f);
glVertex2f(0.00f, 0.15f);


//WINDOW 1,2
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.05f, 0.10f);
glVertex2f(0.10f, 0.10f);
glVertex2f(0.10f, 0.13f);
glVertex2f(0.05f, 0.13f);

glVertex2f(0.25f, 0.10f);
glVertex2f(0.30f, 0.10f);
glVertex2f(0.30f, 0.13f);
glVertex2f(0.25f, 0.13f);




//4th floor
glBegin(GL_QUADS);
glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
glVertex2f(0.00f, 0.15f);
glVertex2f(0.35f, 0.15f);
glVertex2f(0.35f, 0.20f);
glVertex2f(0.00f, 0.20f);




//WINDOW 1,2
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.30f, 0.15f);
glVertex2f(0.30f, 0.18f);
glVertex2f(0.25f, 0.18f);
glVertex2f(0.25f, 0.15f);

glVertex2f(0.10f, 0.15f);
glVertex2f(0.10f, 0.18f);
glVertex2f(0.05f, 0.18f);
glVertex2f(0.05f, 0.15f);

//5th floor
glBegin(GL_QUADS);
glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
glVertex2f(0.00f, 0.20f);
glVertex2f(0.35f, 0.20f);
glVertex2f(0.35f, 0.25f);
glVertex2f(0.00f, 0.25f);


//WINDOW 1,2
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.05f, 0.20f);
glVertex2f(0.10f, 0.20f);
glVertex2f(0.10f, 0.23f);
glVertex2f(0.05f, 0.23f);

glVertex2f(0.30f, 0.20f);
glVertex2f(0.30f, 0.23f);
glVertex2f(0.25f, 0.23f);
glVertex2f(0.25f, 0.20f);
glEnd();

//Road
glBegin(GL_LINES);
glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
glVertex2f(-0.60f, -0.35f);
glVertex2f(0.60f, -0.35f);

glVertex2f(-0.60f, -0.50f);
glVertex2f(0.60f, -0.50f);

glVertex2f(0.60f, -0.15f);
glVertex2f(-0.60f, -0.15f);

glVertex2f(-0.05f, -0.16f);
glVertex2f(0.05f, -0.16f);

glVertex2f(-0.05f, -0.21f);
glVertex2f(0.05f, -0.21f);

glVertex2f(-0.05f, -0.26f);
glVertex2f(0.05f, -0.26f);

glVertex2f(-0.05f, -0.31f);
glVertex2f(0.05f, -0.31f);

glVertex2f(-0.05f, -0.36f);
glVertex2f(0.05f, -0.36f);

glVertex2f(-0.05f, -0.41f);
glVertex2f(0.05f, -0.41f);

    glVertex2f(-0.05f, -0.46f);
    glVertex2f(0.05f, -0.46f);
    glEnd();

    // Traffic lights
    drawTrafficLight(-0.60f, -0.15f);
    drawTrafficLight(0.60f, -0.15f);


    glBegin(GL_QUADS);
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
    glVertex2f(0.60f, -0.35f);
    glVertex2f(-0.60f, -0.35f);
    glVertex2f(-0.60f, -0.30f);
    glVertex2f(0.60f, -0.30f);
    glEnd();

    glFlush();

}


int main(int argc, char** argv){
glutInit(&argc, argv);
glutInitWindowSize(1020,1020);
glutCreateWindow(" CG Lab 5");
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutMainLoop();

glPushMatrix();
glPopMatrix();
return 0;
}
