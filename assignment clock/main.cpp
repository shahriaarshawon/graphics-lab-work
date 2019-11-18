#include <windows.h>
#include <GL/glut.h>
#include<sys/time.h>
#include<time.h>
#include<iostream>
using namespace std;

GLfloat i = 0.0f;
GLfloat j = 0.0f;
GLfloat k = 0.0f;
GLfloat position = 0.0f;
GLfloat speed = 0.1f;

void update(int value) {

   if(position < -1.0)
        position = 1.0f;

    position -= speed;

	glutPostRedisplay();



	glutTimerFunc(1000, update, 0);
}



void Idle()
{
    glutPostRedisplay();
}
void display()
{
    glClearColor(1.0f, 1.0f, 1.f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.7f);
    glVertex2f(0.0f, 0.6f);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.38f, 0.7f);
    glVertex2f(0.34f, 0.6f);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.38f, 0.7f);
    glVertex2f(-0.34f, 0.6f);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.38f, -0.7f);
    glVertex2f(-0.34f, -0.6f);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.7f, 0.35f);
    glVertex2f(0.6f, 0.32f);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.7f, -0.35f);
    glVertex2f(0.6f, -0.32f);

     glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, -0.35f);
    glVertex2f(-0.6f, -0.32f);

     glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.6f, 0.32f);

     glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.6f, 0.32f);


    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.7f, 0.0f);
    glVertex2f(0.6f, 0.0f);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, -0.7f);
    glVertex2f(0.0f, -0.6f);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.38f, -0.7f);
    glVertex2f(0.34f, -0.6f);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 0.0f);
    glVertex2f(-0.6f, 0.0f);

    glEnd();

    glLoadIdentity();
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.7f, 0.7f);
    glVertex2f( -0.7f, 0.7f);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 0.7f);
    glVertex2f(-0.7f, -0.7f );

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, -0.7f);
    glVertex2f(0.7f, -0.7f );

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.7f, 0.7f );

    glEnd();

   glLoadIdentity();



glPushMatrix();
glTranslatef(0.0f,0.0f, position);
//glTranslatef(0.0f,position, 0.0f);
    glRotatef(i,0.0,0.0,0.1);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f); // second
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.7f);

    glEnd();
    glPopMatrix();

   glLoadIdentity();



glPushMatrix();
glTranslatef(0.0f,0.0f, position);
//glTranslatef(0.0f,position, 0.0f);
    glRotatef(j,0.0,0.0,0.1);
    glLineWidth(3.5);
    glBegin(GL_LINES);
    glColor3f(0.0f, 1.0f, 0.0f);  //minute
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.6f);

    glEnd();
    glPopMatrix();

    glPopMatrix();

   glLoadIdentity();



glPushMatrix();
glTranslatef(0.0f,0.0f, position);
//glTranslatef(0.0f,position, 0.0f);
    glRotatef(k,0.0,0.0,0.1);
    glLineWidth(5.5);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);  // Hour
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.4f);

    glEnd();
    glPopMatrix();



    i-=6.0f;
    if(i<=-360)
        {
            if(j<=-360)
            {
                k-=30.0f;     //check if the minutes dials complete 360 rotation
                i=0.0f;
                j=0.0f;
            }
            else
            {
                j-=6.0f;
                i=0.0f;
            }

         }
   cout << i << endl;
   cout << j << endl;
   cout << k << endl;
    glFlush();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
   //init();
   glutTimerFunc(100, update, 0);

   glutMainLoop();
   return 0;
}
