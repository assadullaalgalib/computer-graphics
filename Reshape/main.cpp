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

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Setup Test");
    glutInitWindowSize(320, 320);
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);  // register the reshape callback function
    glutMainLoop();
    return 0;
}
