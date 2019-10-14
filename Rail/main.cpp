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
#include<math.h>
# define PI           3.14159265358979323846

static int slices = 16;
static int stacks = 16;

/* GLUT callback Handlers */

static void resize(int width, int height)
{
    const float ar = (float) width / (float) height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;
}



static void key(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 27 :
        case 'q':
            exit(0);
            break;

        case '+':
            slices++;
            stacks++;
            break;

        case '-':
            if (slices>3 && stacks>3)
            {
                slices--;
                stacks--;
            }
            break;
    }

    glutPostRedisplay();
}

static void idle(void)
{
    glutPostRedisplay();
}

void myDisplay(void)
{

     glClearColor(1.0,1.0,1.0,1.0);
     glClear(GL_COLOR_BUFFER_BIT);

     glBegin(GL_QUADS);
     glColor3ub(36, 25, 6);
     glVertex2f(8.8,10);
     glVertex2f(8.8,9);
     glVertex2f(13.2,9);
     glVertex2f(13.2,10);
     glEnd();



     glBegin(GL_POLYGON);
     glColor3ub(59, 42, 12);
     glVertex2i(9,9);
     glVertex2i(9,5);
     glVertex2i(12,5);
     glVertex2i(12,-1);
     glVertex2i(13,-1);
     glVertex2i(13,9);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(255,255,255);
     glVertex2f(11,8);
     glVertex2f(11,7);
     glVertex2f(12,7);
     glVertex2f(12,8);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(36, 25, 6);
     glVertex2f(1.7,6);
     glVertex2f(1.7,5);
     glVertex2f(9,5);
     glVertex2f(9,6);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(59, 42, 12);
     glVertex2f(2,5);
     glVertex2f(2,.8);
     glVertex2f(12,-.8);
     glVertex2f(12,5);
     glEnd();



     glBegin(GL_POLYGON);
     glColor3ub(38, 45, 69);
     glVertex2i(-4,2);
     glVertex2i(-8,-2);
     glVertex2i(-4,-5);
     glVertex2i(13,-3);
     glVertex2i(13,-1);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(43, 52, 79);
     glVertex2f(-1,0);
     glVertex2f(-2,-3);
     glVertex2f(13,-3);
     glVertex2f(13,-1);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1,-0);
     glVertex2f(-2,-3);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-2,-3);
     glVertex2f(13,-3);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-1,0);
     glVertex2f(13,-1);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(43, 52, 79);
     glVertex2f(-7,-1);
     glVertex2f(-4,-2);
     glVertex2f(-3,0);
     glVertex2f(-5,1);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(38, 45, 69);
     glVertex2f(-6.8,-.8);
     glVertex2f(-3.8,-1.3);
     glVertex2f(-3.2,0);
     glVertex2f(-4.8,.8);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-7,-1);
     glVertex2f(-4,-2);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-4,-2);
     glVertex2f(-3,0);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(255,255,255);
     glVertex2f(-3,0);
     glVertex2f(-5,1);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(-4,-5);
     glVertex2f(-13,-6);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(-6,-3.2);
     glVertex2f(-14,-4);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(-6,0);
     glVertex2f(-14,-1);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(-10,-9);
     glVertex2f(13,-6);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(-9.5,-10);
     glVertex2f(13,-6.5);
     glEnd();


     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(-11,-5.7);
     glVertex2f(-9,-8.8);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(-9,-5.4);
     glVertex2f(-6.8,-8.7);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(-6,-5.1);
     glVertex2f(-3.8,-8.1);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(-3,-4.9);
     glVertex2f(-1,-7.9);
     glEnd();

     //
     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(0,-4.5);
     glVertex2f(2,-7.4);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(3,-4.1);
     glVertex2f(5.1,-7.1);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(6,-3.9);
     glVertex2f(8,-6.8);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(8,-3.6);
     glVertex2f(10,-6.3);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(10,-3.2);
     glVertex2f(12,-6.1);
     glEnd();//

     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(11,-3.1);
     glVertex2f(13,-6);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(12,-3.08);
     glVertex2f(13,-4.2);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(-9,-8.8);
     glVertex2f(-8.8,-9.9);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(-6.8,-8.7);
     glVertex2f(-6.5,-9.7);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(-3.8,-8.1);
     glVertex2f(-3.4,-9.1);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(-1,-7.9);
     glVertex2f(-.7,-8.7);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(2,-7.4);
     glVertex2f(2.2,-8.2);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(5.1,-7.1);
     glVertex2f(5.3,-7.8);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(8,-6.8);
     glVertex2f(8.2,-7.2);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(10,-6.3);
     glVertex2f(10.2,-6.9);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(12,-6.1);
     glVertex2f(12.2,-6.6);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(13,-6);
     glVertex2f(13,-6.5);
     glEnd();

     GLfloat x=-10.0f; GLfloat y=8.0f; GLfloat radius =1.5f;
	int triangleAmount = 200; //# of triangles used to draw circle

    glColor3ub(227, 145, 5);
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

     glTranslatef(5,3,0);
     glScalef(1,1,0);
     glBegin(GL_QUADS);
     glColor3ub(255,255,255);
     glVertex2f(0,0);
     glVertex2f(0,-2.8);
     glVertex2f(2,-3);
     glVertex2f(2,0);
     glEnd();



     glFlush();
}
/* Program entry point */
void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    //glClearColor3f(0,100,0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-20.0, 20.0, -20.0, 20.0);
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("Hello");
glutDisplayFunc(myDisplay);
 myInit ();
glutMainLoop();

    return EXIT_SUCCESS;
}
