
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
float angle =0.0f;
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1.5);


    glTranslatef(0.3,.3,0);

    glBegin(GL_QUADS);
    glColor3f(0.3f,0.3f,0.3f);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.1,-0.9);
    glVertex2f(0.1,-0.9);
    glVertex2f(0.0,0.0);
    glEnd();

	glPushMatrix();
	glRotatef(angle,0,0,1);



	glBegin(GL_TRIANGLES);
	glColor3ub(12,132,56);
	glVertex2f(0.0f, 0.0f);
    glVertex2f(0.6,0.2);
    glVertex2f(0.4,0.6);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(232,182,67);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-0.6,0.2);
    glVertex2f(-0.4,0.6);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.3f,0.3f,0.3f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.6,-0.2);
    glVertex2f(0.4,-0.6);

	glEnd();

	glPopMatrix();
	angle +=.1;
	glLoadIdentity();

	glFlush();  // Render now
}
void idle()
{
    glutPostRedisplay();
}
/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutIdleFunc(idle);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
