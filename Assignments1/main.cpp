/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

 #include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

static int slices = 16;
static int stacks = 16;

/* GLUT callback Handlers */

void myDisplay(void)
{

     glClearColor(1.0,1.0,1.0,1.0);
     glClear(GL_COLOR_BUFFER_BIT);

     glBegin(GL_QUADS);
     glColor3ub(153,153,153);
     glVertex2f(.1,.1);
     glVertex2f(1,.1);
     glVertex2f(1,1);
     glVertex2f(0.1,1);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(179, 179, 179);
     glVertex2f(-.2,.15);
     glVertex2f(.1,.1);
     glVertex2f(.1,1);
     glVertex2f(-.2,1.5);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(0, 0, 102);
     glVertex2f(.1,.8);
     glVertex2f(1,.8);
     glVertex2f(1,.85);
     glVertex2f(0.1,.85);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(0, 0, 102);
     glVertex2f(.1,.6);
     glVertex2f(1,.6);
     glVertex2f(1,.65);
     glVertex2f(0.1,.65);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(0, 0, 102);
     glVertex2f(.1,.4);
     glVertex2f(1,.4);
     glVertex2f(1,.45);
     glVertex2f(0.1,.45);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(0, 0, 102);
     glVertex2f(-.2,.85);
     glVertex2f(.1,.8);
     glVertex2f(.1,.85);
     glVertex2f(-.2,.9);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(0, 0, 102);
     glVertex2f(-.2,.65);
     glVertex2f(.1,.6);
     glVertex2f(.1,.65);
     glVertex2f(-.2,.7);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(0, 0, 102);
     glVertex2f(-.2,.45);
     glVertex2f(.1,.4);
     glVertex2f(.1,.45);
     glVertex2f(-.2,.5);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(.2,.8);
     glVertex2f(.2,.85);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(.4,.8);
     glVertex2f(.4,.85);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(.6,.8);
     glVertex2f(.6,.85);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(.8,.8);
     glVertex2f(.8,.85);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(.2,.6);
     glVertex2f(.2,.65);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(.4,.6);
     glVertex2f(.4,.65);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(.6,.6);
     glVertex2f(.6,.65);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(.8,.6);
     glVertex2f(.8,.65);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(.2,.4);
     glVertex2f(.2,.45);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(.4,.4);
     glVertex2f(.4,.45);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(.6,.4);
     glVertex2f(.6,.45);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(.8,.4);
     glVertex2f(.8,.45);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0,.81);
     glVertex2f(0,.87);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-.1,.83);
     glVertex2f(-.1,.89);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0,.61);
     glVertex2f(0,.67);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-.1,.63);
     glVertex2f(-.1,.69);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(0,.41);
     glVertex2f(0,.47);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-.1,.43);
     glVertex2f(-.1,.49);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(115, 115, 115);
     glVertex2f(.2,.1);
     glVertex2f(.3,.1);
     glVertex2f(.3,.3);
     glVertex2f(0.2,.3);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(217, 217, 217);
     glVertex2f(.22,.1);
     glVertex2f(.28,.1);
     glVertex2f(.28,.28);
     glVertex2f(0.22,.28);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(115, 115, 115);
     glVertex2f(.5,.1);
     glVertex2f(.6,.1);
     glVertex2f(.6,.3);
     glVertex2f(0.5,.3);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(217, 217, 217);
     glVertex2f(.52,.1);
     glVertex2f(.58,.1);
     glVertex2f(.58,.28);
     glVertex2f(0.52,.28);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(77, 77, 77);
     glVertex2f(-.2,-.1);
     glVertex2f(1,-.1);
     glVertex2f(1,.1);
     glVertex2f(0.1,.1);
     glVertex2f(-.2,.15);
     glEnd();


     glFlush();
}
/* Program entry point */

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    //glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    //glutInitWindowPosition (100, 150);
    glutCreateWindow ("D Building");
    glutDisplayFunc(myDisplay);
    glutMainLoop();

    return EXIT_SUCCESS;
}
