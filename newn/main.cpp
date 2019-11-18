#include <windows.h>
#include <GL/glut.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<GL/gl.h>
#include<math.h>
#include<iostream>
# define PI 3.14159265358979323846

using namespace std;
GLfloat position = 0.0f;
GLfloat position2 = 0.0f;
GLfloat positionz = 0.0f;
GLfloat positiony = 0.0f;
GLfloat speed = 0.1f;
GLfloat i=0.0;
void windMill()
{
    glLoadIdentity();
    glTranslatef(-0.30,0.5,0);


   // glLineWidth(6);
    glBegin(GL_TRIANGLES);
    //glColor3ub(51, 102, 153);
    glColor3ub(0,0,0);
    glVertex2d(0.0,0.04);
    glVertex2d(-0.03,-0.5);
    glVertex2d(0.03,-0.5);
    glEnd();
    //glLineWidth(1);

     glScaled(0.15,0.15,0);

    //first
    glPushMatrix();
    glRotatef(i,0,0,1);

    glBegin(GL_TRIANGLES);
    glColor3ub(1,0,0);
    glVertex2d(0.0,1.2);
    glVertex2d(-0.1,0.05);
    glVertex2d(0.1,0.05);
    glEnd();

    glPopMatrix();

    //second
    glPushMatrix();
    glRotatef(i,0,0,1);

    glBegin(GL_TRIANGLES);
    glColor3ub(0,1,0);
    glVertex2d(-1.0,-0.8);
    glVertex2d(-0.1,0);
    glVertex2d(0,-0.2);
    glEnd();

    glPopMatrix();

    //third
    glPushMatrix();
    glRotatef(i,0,0,1);

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,1);
    glVertex2d(1.0,-0.8);
    glVertex2d(0.1,0);
    glVertex2d(0,-0.2);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glRotatef(i,0,0,1);
    //circle at middle
    //glColor3ub(255, 51, 0);
    glColor3ub(180,170, 170);
	GLfloat x=0.0f; GLfloat y=-0.05f; GLfloat radius =.2f;
	int triangleAmount = 50;
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
	glPopMatrix();



    i-=0.1;
    glLoadIdentity();
}



void lineSlipper()
{
    glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(-1.8,-0.8);
	glVertex2f(-1.75,-1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(-1.6,-0.8);
	glVertex2f(-1.55,-1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(-1.4,-0.8);
	glVertex2f(-1.35,-1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(-1.2,-0.8);
	glVertex2f(-1.15,-1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(-1.0,-0.8);
	glVertex2f(-0.95,-1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(-0.8,-0.8);
	glVertex2f(-0.75,-1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(-0.6,-0.8);
	glVertex2f(-0.55,-1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(-0.4,-0.8);
	glVertex2f(-0.35,-1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(-0.4,-0.8);
	glVertex2f(-0.35,-1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(-0.2,-0.8);
	glVertex2f(-0.15,-1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(0.0,-0.8);
	glVertex2f(0.05,-1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(0.2,-0.8);
	glVertex2f(0.25,-1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(0.4,-0.8);
	glVertex2f(0.45,-1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(0.6,-0.8);
	glVertex2f(0.65,-1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(0.8,-0.8);
	glVertex2f(0.85,-1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(1.0,-0.8);
	glVertex2f(1.05,-1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(1.2,-0.8);
	glVertex2f(1.25,-1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(1.4,-0.8);
	glVertex2f(1.45,-1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(1.6,-0.8);
	glVertex2f(1.65,-1.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(1.8,-0.8);
	glVertex2f(1.85,-1.00);
	glEnd();


}
void TrainBody()
{

    glBegin(GL_QUADS);
	glColor3ub(20, 20, 31);
	glVertex2f(-1.1,-0.8);
	glVertex2f(-0.5,-0.8);
	glVertex2f(-0.5,-0.3);
	glVertex2f(-1.1,-0.3);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(20, 20, 31);
	glVertex2f(-1.15,-0.75);
	glVertex2f(-0.55,-0.75);
	glVertex2f(-0.55,-0.25);
	glVertex2f(-1.15,-0.25);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(20, 20, 31);
	glVertex2f(-0.55,-0.25);
	glVertex2f(-0.58,-0.3);
	glVertex2f(-0.5,-0.3);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(20, 20, 31);
	glVertex2f(-1.15,-0.75);
	glVertex2f(-1.0,-0.75);
	glVertex2f(-1.12,-0.8);
	glEnd();


    GLfloat thikness = 7.0;
    glLineWidth(thikness);
	glBegin(GL_LINES);
	glColor3ub(20, 20, 31);
	glVertex2f(-1.0,-0.1);
	glVertex2f(-1.0,-0.25);
	glEnd();
    thikness = 8.0;
    glLineWidth(thikness);

    glBegin(GL_LINES);
	glColor3ub(20, 20, 31);
	glVertex2f(-0.55,-0.7);
	glVertex2f(-0.4,-0.7);
	glEnd();

	thikness = 1.0;
    glLineWidth(thikness);


}
void TrainWheel()
{
	glColor3ub(102, 153, 153);
	GLfloat x=-1.0f; GLfloat y=-0.85f; GLfloat radius = 0.1f;
	int triangleAmount = 20;
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

    glColor3ub(102, 153, 153);
    x=-0.6f;y=-0.85f;radius = 0.1f;
    triangleAmount = 20;
    twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();


}

void Translate_building()
{
    glScalef(0.5,0.5,0);
    glTranslatef(-2.7,0,0);
    //building
	glBegin(GL_QUADS);
	glColor3ub(204, 102, 0);
	glVertex2f(0.3,0.9);
	glVertex2f(0.3,0.0);
	glVertex2f(1.2,0.0);
	glVertex2f(1.2,0.9);
	glEnd();

    //terrace
	glBegin(GL_QUADS);
	glColor3ub(204, 153, 0);
	glVertex2f(0.4,1.4);
	glVertex2f(0.2,0.9);
	glVertex2f(1.3,0.9);
	glVertex2f(1.1,1.4);
	glEnd();

	//door
	glBegin(GL_QUADS);
	glColor3ub(102, 51, 0);
	glVertex2f(0.67,0.45);
	glVertex2f(0.67,0.0);
	glVertex2f(0.87,0.0);
	glVertex2f(0.87,0.45);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(1,1,1);
	glVertex2f(0.77,0.0);
	glVertex2f(0.77,0.45);
	glEnd();

    //window left
	glBegin(GL_QUADS);
	glColor3ub(102, 51, 0);
	glVertex2f(0.4,0.8);
	glVertex2f(0.4,0.6);
	glVertex2f(0.55,0.6);
	glVertex2f(0.55,0.8);
	glEnd();

	//window right
	glBegin(GL_QUADS);
	glColor3ub(102, 51, 0);
	glVertex2f(0.95,0.8);
	glVertex2f(0.95,0.6);
	glVertex2f(1.1,0.6);
	glVertex2f(1.1,0.8);
	glEnd();
	glLoadIdentity();

}
void Translate_tree()
{
    glScalef(0.6,0.6,0);
    glTranslatef(-3.0,-0.1,0);
    glBegin(GL_QUADS);
	glColor3ub(153, 102, 0);
	glVertex2f(1.6,0.4);
	glVertex2f(1.6,0.0);
	glVertex2f(1.7,0.0);
	glVertex2f(1.7,0.4);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3b(0, 102, 0);
	glVertex2f(1.65,0.8);
	glVertex2f(1.4,0.4);
	glVertex2f(1.9,0.4);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3b(0, 102, 0);
	glVertex2f(1.65,1.1);
	glVertex2f(1.43,0.59);
	glVertex2f(1.87,0.59);
	glEnd();

	glLoadIdentity();


}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
			speed += 0.1f;
			}

			if (button == GLUT_RIGHT_BUTTON)
	{
			speed -= 0.1f;
			}




	glutPostRedisplay();
}

void update(int value) {


if(position < -1.0)
        position = 1.0f;

    position -= speed;


	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void update2(int value) {


if(position > 1.0)
        position = 1.0f;

    position += speed;


	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}
void update3(int value) {


if(positionz > 1.0)
        positionz = 1.0f;

    positionz += speed;


	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}

void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}
void SpecialInput(int key, int x, int y)
{  switch(key)
{
case GLUT_KEY_UP:

break;
case GLUT_KEY_DOWN:
break;
case GLUT_KEY_LEFT:
   glutTimerFunc(100, update, 0);
break;
case GLUT_KEY_RIGHT:
    glutTimerFunc(100, update2, 0);
break;
}
glutPostRedisplay();}



void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    gluOrtho2D(-2,2,-2,2);


    //sky
    glBegin(GL_QUADS);
	glColor3ub(110, 230, 230);
	glVertex2f(-2.0,2.0);
	glVertex2f(-2.0,0);
	glVertex2f(2.0, 0);
	glVertex2f(2.0,2.0);
	glEnd();

	// sun

	glColor3ub(240, 179, 26);
	GLfloat x=-1.7; GLfloat y=1.7f; GLfloat radius =.2f;
	int triangleAmount = 50;
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

	// field
	glBegin(GL_QUADS);
	glColor3ub(153, 204, 0);
	glVertex2f(-2.0,0.0);
	glVertex2f(-2.0,-2.0);
	glVertex2f(2.0,-2.0);
	glVertex2f(2.0,0.0);
	glEnd();

    //train line
    GLfloat thikness = 3.0;
    glLineWidth(thikness);

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(-2.0,-0.85);
	glVertex2f(2.0,-0.85);
	glEnd();

	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(-2.0,-0.95);
	glVertex2f(2.0,-0.95);
	glEnd();

	thikness = 1.5;
	glLineWidth(thikness);

    //line slipper
    lineSlipper();

    //train
    //TrainBody();
    //TrainWheel();

    //translation building
    Translate_building();
    Translate_tree();



    windMill();

     //glPushMatrix();
   // glTranslatef(position,0.47f, 0.47f);
   glLoadIdentity();
glPushMatrix();

glTranslatef(position, 0.0f,0.0f);
    TrainBody();
    TrainWheel();

    glPopMatrix();
    glLoadIdentity();


    glPushMatrix();
    glTranslatef(positiony, 0.0f,0.0f);

   glBegin(GL_QUADS);
glColor3ub(214, 122, 47);
glVertex2f(-0.5,0.2);
glVertex2f(-0.5,-0.2);
glVertex2f(-0.2,-0.2);
glVertex2f(-0.2,0.2);
glEnd();

    glPopMatrix();

    glLoadIdentity();



    glPushMatrix();
    glTranslatef(positionz, 0.0f,  0.0f);

        glTranslatef(positionz,0.0f,0.0f);
        glPushMatrix();
        glTranslatef(.6,0.8,0.0);   //translate x left and y down
        glScalef(.34,.34,0);        //increase x right, y left

        glBegin(GL_POLYGON);
        glColor3ub(255,255,255);
        glVertex2f(-0.2,0.06);
        glVertex2f(-0.1,0.1);
        glVertex2f(-0.14,0.12);
        glVertex2f(-0.18,0.16);
        glVertex2f(-0.17,0.17);
        glVertex2f(-0.168,0.2);
        glVertex2f(-0.2,0.17);
        glVertex2f(-0.21,0.23);
        glVertex2f(-0.2,0.15);
        glVertex2f(-0.26,0.16);
        glVertex2f(-0.29,0.172);
        glVertex2f(-0.31,0.18);
        glVertex2f(-0.31,0.15);
        glVertex2f(-0.30,0.149);
        glVertex2f(-0.2,0.06);
        glEnd();

        glPopMatrix();
glLoadIdentity();

	glFlush();

}
/*void idle()
{
    glutPostRedisplay();
}
*/
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(850,550);
    glutInitWindowPosition(100,100);
    glutCreateWindow("GLUT Shapes");
    glutDisplayFunc(display);

     //glutTimerFunc(100, birdd, 0);
     init();
    //glutTimerFunc(200, update, 0);
    glutSpecialFunc(SpecialInput);
    glutMouseFunc(handleMouse);
    glutTimerFunc(100, update, 0);

    //glutIdleFunc(idle);
    glutMainLoop();
    return 0;
}
