#include <windows.h>
#include <GL/glut.h>

void display()
{
    glClearColor(1.0,1.0,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);


     glBegin(GL_QUADS);
     glColor3ub(235, 67, 52);
     glVertex2f(-.7,.3);
     glVertex2f(.7,.3);
     glVertex2f(.7,.2);
     glVertex2f(-.7,.2);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(235, 137, 52);
     glVertex2f(-.7,.2);
     glVertex2f(.7,.2);
     glVertex2f(.7,.1);
     glVertex2f(-.7,.1);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(251, 255, 0);
     glVertex2f(-.7,.1);
     glVertex2f(.7,.1);
     glVertex2f(.7,0);
     glVertex2f(-.7,0);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(131, 184, 51);
     glVertex2f(-.7,0);
     glVertex2f(.7,0);
     glVertex2f(.7,-.1);
     glVertex2f(-.7,-.1);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(51, 104, 184);
     glVertex2f(-.7,-.1);
     glVertex2f(.7,-.1);
     glVertex2f(.7,-.2);
     glVertex2f(-.7,-.2);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(140, 51, 184);
     glVertex2f(-.7,-.2);
     glVertex2f(.7,-.2);
     glVertex2f(.7,-.3);
     glVertex2f(-.7,-.3);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(184, 51, 177);
     glVertex2f(-.7,-.3);
     glVertex2f(.7,-.3);
     glVertex2f(.7,-.4);
     glVertex2f(-.7,-.4);
     glEnd();

    glFlush();//Render now

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    //glutInitWindowPosition(10,10);
    //glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("OpenGL Setup test");
    glutDisplayFunc(display);
    glutMainLoop();

    return EXIT_SUCCESS;
}
