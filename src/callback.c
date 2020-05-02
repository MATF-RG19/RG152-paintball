#include "callback.h"

void callback_func(void){
    
    glutDisplayFunc(on_display);
    glutReshapeFunc(on_reshape);
    glutKeyboardFunc(on_keyboard);

}


void on_display(void)
{
    // Brise se prethodni sadrzaj prozora. 
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Podesava se viewport.
    glViewport(0, 0, window_width, window_height);

    // Podesava se projekcija.
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(
            60,
            window_width/(float)window_height,
            1, 100);

    // Podesava se tacka pogleda.
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    
    gluLookAt(-6, 4, 8,
              4, 2, 8,         //safe
              0, 1, 0);
    
    
    draw_axis();
    draw_room();
    

    /* Nova slika se salje na ekran. */
    glutSwapBuffers();
}

void on_keyboard(unsigned char key, int x, int y)
{
    switch (key) {
    case 27:
        // Zavrsava se program.
        exit(0);
        break;
    }
}

void on_reshape(int width, int height)
{
	// Pamte se sirina i visina prozora.
	window_width = width;
	window_height = height;
	
	// Podesava se viewport.
	glViewport(0, 0, window_width, window_height);
}
