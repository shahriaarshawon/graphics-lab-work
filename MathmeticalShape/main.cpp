#include <windows.h>
#include <GL/glut.h>

void display()
{
    glClearColor(1.0,1.0,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(1,0);
    glVertex2f(-1,0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(0,1);
    glVertex2f(0,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(.3,.3);
    glVertex2f(.8,.3);
    glVertex2f(.6,.8);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,0,0);
    glVertex2f(-.3,-.3);
    glVertex2f(-.8,-.3);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,0,0);
    glVertex2f(-.3,-.3);
    glVertex2f(-.5,-.8);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,0,0);
    glVertex2f(-.8,-.3);
    glVertex2f(-.5,-.8);
    glEnd();

     glBegin(GL_QUADS);
     glColor3f(1,1,0);
     glVertex2f(.3,-.4);
     glVertex2f(.6,-.4);
     glVertex2f(.6,-.8);
     glVertex2f(.3,-.8);
     glEnd();

    glBegin(GL_POLYGON);
     glColor3f(0,1,0);
     glVertex2f(-.8,.9);
     glVertex2f(-.9,.8);
     glVertex2f(-.9,.6);
     glVertex2f(-.8,0.5);
     glVertex2f(-.5,0.5);
     glVertex2f(-.4,0.6);
     glVertex2f(-.4,0.8);
     glVertex2f(-.5,.9);
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
