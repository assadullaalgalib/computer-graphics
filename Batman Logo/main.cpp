#include <Windows.h>
#include <GL/glut.h>

void display()
{
    glClearColor (1.0f, 1.0f, 1.0f, 1.0f);
    glClear (GL_COLOR_BUFFER_BIT);
    glLineWidth (10);

    glBegin (GL_POLYGON);
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow

    glVertex2f(-0.75f, -0.150f);
    glVertex2f(-0.75f, 0.150f);
    glVertex2f(-0.680f, 0.260f);
    glVertex2f(-0.440f, 0.260f);
    glVertex2f(-0.440f, 0.260f);
    glVertex2f(-0.370f, 0.150f);
    glVertex2f(-0.370f, -0.150f);
    glVertex2f(-0.440f, -0.260f);
    glVertex2f(-0.680f, -0.260f);

    glEnd();

    glBegin (GL_LINES);
    glColor3f (0.0f, 0.0f, 0.0f);

    glVertex2f(-0.7f, 0.1f);
    glVertex2f(-0.7f, -0.1f);

    glVertex2f(-0.690f, 0.120f);
    glVertex2f(-0.690f, -0.120f);

    glVertex2f(-0.680f, 0.140f);
    glVertex2f(-0.680f, -0.120f);

    glVertex2f(-0.670f, 0.140f);
    glVertex2f(-0.670f, -0.140f);

    glVertex2f(-0.660f, 0.160f);
    glVertex2f(-0.660f, -0.160f);

    glVertex2f(-0.650f, 0.180f);
    glVertex2f(-0.650f, -0.180f);
    glVertex2f(-0.640f, 0.180f);
    glVertex2f(-0.640f, -0.180f);

    glVertex2f(-0.630f, 0.180f);
    glVertex2f(-0.630f, -0.210f);

    glVertex2f(-0.630f, 0.175f);
    glVertex2f(-0.610f, 0.175f);

    glVertex2f(-0.620f, 0.070f);
    glVertex2f(-0.620f, -0.170f);

    glVertex2f(-0.610f, 0.060f);
    glVertex2f(-0.610f, -0.150f);

    glVertex2f(-0.600f, 0.060f);
    glVertex2f(-0.600f, -0.130f);

    glVertex2f(-0.590f, 0.070f);
    glVertex2f(-0.590f, -0.110f);

    glVertex2f(-0.580f, 0.210f);
    glVertex2f(-0.580f, -0.130f);

    glVertex2f(-0.570f, 0.180f);
    glVertex2f(-0.570f, -0.180f);

    glVertex2f(-0.560f, 0.180f);
    glVertex2f(-0.560f, -0.210f);

    glVertex2f(-0.550f, 0.180f);
    glVertex2f(-0.550f, -0.180f);

    glVertex2f(-0.540f, 0.210f);
    glVertex2f(-0.540f, -0.130f);

    glVertex2f(-0.530f, 0.070f);
    glVertex2f(-0.530f, -0.110f);

    glVertex2f(-0.520f, 0.060f);
    glVertex2f(-0.520f, -0.130f);

    glVertex2f(-0.510f, 0.060f);
    glVertex2f(-0.510f, -0.150f);

    glVertex2f(-0.500f, 0.070f);
    glVertex2f(-0.500f, -0.170f);

    glVertex2f(-0.490f, 0.175f);
    glVertex2f(-0.510f, 0.175f);

    glVertex2f(-0.490f, 0.180f);
    glVertex2f(-0.490f, -0.210f);

    glVertex2f(-0.480f, 0.180f);
    glVertex2f(-0.480f, -0.180f);
    glVertex2f(-0.470f, 0.180f);
    glVertex2f(-0.470f, -0.180f);

    glVertex2f(-0.460f, 0.160f);
    glVertex2f(-0.460f, -0.160f);

    glVertex2f(-0.450f, 0.140f);
    glVertex2f(-0.450f, -0.140f);

    glVertex2f(-0.440f, 0.140f);
    glVertex2f(-0.440f, -0.120f);

    glVertex2f(-0.430f, 0.120f);
    glVertex2f(-0.430f, -0.120f);

    glVertex2f(-0.420f, 0.1f);
    glVertex2f(-0.420f, -0.1f);

    glEnd();

    glBegin (GL_LINES);
    glColor3f (0.0f, 0.0f, 0.0f);

    glVertex2f(-0.75f, -0.150f);
    glVertex2f(-0.75f, 0.150f);

    glVertex2f(-0.75f, 0.150f);
    glVertex2f(-0.680f, 0.260f);

    glVertex2f(-0.680f, 0.260f);
    glVertex2f(-0.440f, 0.260f);

    glVertex2f(-0.440f, 0.260f);
    glVertex2f(-0.370f, 0.150f);

    glVertex2f(-0.370f, 0.150f);
    glVertex2f(-0.370f, -0.150f);

    glVertex2f(-0.370f, -0.150f);
    glVertex2f(-0.440f, -0.260f);

    glVertex2f(-0.440f, -0.260f);
    glVertex2f(-0.680f, -0.260f);

    glVertex2f(-0.680f, -0.260f);
    glVertex2f(-0.75f, -0.150f);

    glEnd();
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}


