#include "utility.h"


void draw_room(void){

	//Zemlja
    glPushMatrix();
        glColor3f(0, 0.9, 0);
        glTranslatef(10, -1, 8);
        glScalef(20, 2, 16);
        glutSolidCube(1);
    glPopMatrix();

	//Zidovi
    glBegin(GL_QUADS);
		glColor3f(0, 0.75, 0);

		glVertex3f(0, 2, 0);
		glVertex3f(0, 0, 0);
		glVertex3f(20, 0, 0);
		glVertex3f(20, 2, 0);

		glVertex3f(20, 2, 0);
		glVertex3f(20, 0, 0);
		glVertex3f(20, 0, 16);
		glVertex3f(20, 2, 16);
		
		glVertex3f(20, 2, 16);
		glVertex3f(20, 0, 16);
		glVertex3f(0, 0, 16);
		glVertex3f(0, 2, 16);
	glEnd();


	/*
	glBegin(GL_LINES);
		glColor3f(0, 0, 0);
	
		glVertex3f(4, 0.01, 0);
		glVertex3f(4, 0.01, 16);

		glVertex3f(8, 0.01, 0);
		glVertex3f(8, 0.01, 16);
	
		glVertex3f(13, 0.01, 0);
		glVertex3f(13, 0.01, 16);
	glEnd();
	*/

	//Prepreke(5)
	glPushMatrix();
        glColor3f(0.5, 0.5, 0.5);
        glTranslatef(4.25, 0.5, 4.5);
        glScalef(0.5, 1, 3);
        glutSolidCube(1);
    glPopMatrix();
	glPushMatrix();
        glColor3f(0, 0, 0);
        glTranslatef(4.25, 0.5, 4.5);
        glScalef(0.5, 1, 3);
        glutWireCube(1);
    glPopMatrix();

	glPushMatrix();
        glColor3f(0.5, 0.5, 0.5);
        glTranslatef(4.25, 0.5, 11.5);
        glScalef(0.5, 1, 3);
        glutSolidCube(1);
    glPopMatrix();
	glPushMatrix();
        glColor3f(0, 0, 0);
        glTranslatef(4.25, 0.5, 11.5);
        glScalef(0.5, 1, 3);
        glutWireCube(1);
    glPopMatrix();
	

	glPushMatrix();
        glColor3f(0.5, 0.5, 0.5);
        glTranslatef(8.25, 0.5, 8);
        glScalef(0.5, 1, 3);
        glutSolidCube(1);
    glPopMatrix();
	glPushMatrix();
        glColor3f(0, 0, 0);
        glTranslatef(8.25, 0.5, 8);
        glScalef(0.5, 1, 3);
        glutWireCube(1);
    glPopMatrix();


	glPushMatrix();
        glColor3f(0.5, 0.5, 0.5);
        glTranslatef(13.25, 0.5, 12.5);
        glScalef(0.5, 1, 3);
        glutSolidCube(1);
    glPopMatrix();
	glPushMatrix();
        glColor3f(0, 0, 0);
        glTranslatef(13.25, 0.5, 12.5);
        glScalef(0.5, 1, 3);
        glutWireCube(1);
    glPopMatrix();

	glPushMatrix();
        glColor3f(0.5, 0.5, 0.5);
        glTranslatef(13.25, 0.5, 3.5);
        glScalef(0.5, 1, 3);
        glutSolidCube(1);
    glPopMatrix();
	glPushMatrix();
        glColor3f(0, 0, 0);
        glTranslatef(13.25, 0.5, 3.5);
        glScalef(0.5, 1, 3);
        glutWireCube(1);
    glPopMatrix();
    
}

void draw_axis(void){
    
	glBegin(GL_LINES);
	glColor3f(1, 0, 0);
	glVertex3f(0, 0, 0);
	glVertex3f(1000, 0, 0);
	
	glColor3f(0, 1, 0);
	glVertex3f(0, 0, 0);
	glVertex3f(0, 1000, 0);
	
	glColor3f(0, 0, 1);
	glVertex3f(0, 0, 0);
	glVertex3f(0, 0, 1000);
	
	glEnd();
    
}

