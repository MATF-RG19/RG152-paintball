/*
Ime i prezime: Aleksandar Cvetkovic
Broj indeksa: 424/2019
*/
#include "global.h"

int main(int argc, char **argv){
    
    // Inicijalizuje se GLUT.
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    
    
    // Kreira se prozor.
    glutInitWindowSize(window_sizeX, window_sizeY);
    glutInitWindowPosition(window_positionX, window_positionY);
    glutCreateWindow("Paintball");
    
    // Callback funkcija
    
    callback_func();
    
    // Obavlja se OpenGL inicijalizacija.
	glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_DEPTH_TEST);
    glClearColor(0, 0.6, 1, 0.8);
    glEnable(GL_LIGHT1);
    
    // Program ulazi u glavnu petlju.
    glutMainLoop();
    
    return 0;
}
