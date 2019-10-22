#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
	glColor3ub(1,1,1);
	glVertex2f(-0.95,0.5);
	glVertex2f(-0.95,0.1);
	glVertex2f(0.95,0.1);
	glVertex2f(0.95,0.5) ;
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(207, 39, 21);
	glVertex2f(-0.95,0.1);
	glVertex2f(-0.95,-0.3);
	glVertex2f(0.95,-0.3);
	glVertex2f(0.95,0.1) ;
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(240, 176, 14);
	glVertex2f(-0.95,-0.3);
	glVertex2f(-0.95,-0.7);
	glVertex2f(0.95,-0.7);
	glVertex2f(0.95,-0.3) ;
	glEnd();





	glFlush();  // Render now
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Open Gl set up");
    glutInitWindowSize(640,480);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;

}


