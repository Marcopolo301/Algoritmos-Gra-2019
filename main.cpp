#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <SOIL/SOIL.h>
#include <math.h>


//Definimos variables
double rotate_y=-48;
double rotate_x=28;
double rotate_z=0;
GLfloat scale = 1.0f;

GLfloat X = 0.0f;
GLfloat Y = 0.0f;
GLfloat Z = 0.0f;
GLint ancho=800;
GLint alto=600;




void base(){
    //derecha
    glBegin(GL_QUADS);
    glNormal3f( 0.0f, 0.0f, 1.0f);
    glColor3f(1,0,0);
    glTexCoord2f(0,0);glVertex3f(-11,0,-9);
    glTexCoord2f(10,0);glVertex3f(-13,0,-9);
    glTexCoord2f(10,4);glVertex3f(-13,6,-9);
    glTexCoord2f(0,4);glVertex3f(-11,6,-9);

    glEnd();

    //izquierda
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glColor3f(1,0,0);
    glTexCoord2f(0, 0); glVertex3f(-11, 0, -7);
    glTexCoord2f(10, 0); glVertex3f(-13, 0, -7);
    glTexCoord2f(10, 4); glVertex3f(-13, 6, -7);
    glTexCoord2f(0, 4); glVertex3f(-11, 6, -7);

    glEnd();

    //INFERIOR
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glColor3f(1,0,0);
    glTexCoord2f(0, 0); glVertex3f(-11, 0, -7);
    glTexCoord2f(10, 0); glVertex3f(-13, 0, -7);
    glTexCoord2f(10, 4); glVertex3f(-13, 0, -9);
    glTexCoord2f(0, 4); glVertex3f(-11, 0, -9);

    glEnd();

    //superior
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glColor3f(1,0,0);
    glTexCoord2f(0, 0); glVertex3f(-11, 6, -7);
    glTexCoord2f(10, 0); glVertex3f(-13, 6, -7);
    glTexCoord2f(10, 4); glVertex3f(-13, 6, -9);
    glTexCoord2f(0, 4); glVertex3f(-11, 6, -9);

    glEnd();

    //frente
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glTexCoord2f(0,0);glVertex3f(-11,0,-7);
    glTexCoord2f(3,0);glVertex3f(-11,0,-9);
    glTexCoord2f(3,10);glVertex3f(-11,6,-9);
    glTexCoord2f(0,10);glVertex3f(-11,6,-7);

    glEnd();

    //atras

    glBegin(GL_QUADS);
    glColor3f( 1.0, 0.0, 0.0 );
    glNormal3f(0.0f, 0.0f, 1.0f);
    glTexCoord2f(0,0);glVertex3f(-11,0,-7);
    glTexCoord2f(3,0);glVertex3f(-11,0,-9);
    glTexCoord2f(3,10);glVertex3f(-11,6,-9);
    glTexCoord2f(0,10);glVertex3f(-11,6,-7);

    glEnd();

    glPushMatrix();
    glTranslated(-12,-1.5,-8);
    glColor3f(0,0,1);
    glutSolidCube(3);
    glPopMatrix();

}

void brazo(){
    //derecha
    glBegin(GL_QUADS);
    glNormal3f( 0.0f, 0.0f, 1.0f);
    glColor3f(0,215,218);
    glTexCoord2f(0,0);glVertex3f(-11,6,-9);
    glTexCoord2f(10,0);glVertex3f(-22,6,-9);
    glTexCoord2f(10,4);glVertex3f(-22,8,-9);
    glTexCoord2f(0,4);glVertex3f(-11,8,-9);

    glEnd();

    //izquierda
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glColor3f(0,215,218);
    glTexCoord2f(0, 0); glVertex3f(-11, 6, -7);
    glTexCoord2f(10, 0); glVertex3f(-22, 6, -7);
    glTexCoord2f(10, 4); glVertex3f(-22, 8, -7);
    glTexCoord2f(0, 4); glVertex3f(-11, 8, -7);

    glEnd();

    //INFERIOR
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glColor3f(0,215,218);
    glTexCoord2f(0, 0); glVertex3f(-11, 6, -7);
    glTexCoord2f(10, 0); glVertex3f(-22, 6, -7);
    glTexCoord2f(10, 4); glVertex3f(-22, 6, -9);
    glTexCoord2f(0, 4); glVertex3f(-11, 6, -9);

    glEnd();

    //superior
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glColor3f(0,215,218);
    glTexCoord2f(0, 0); glVertex3f(-11, 8, -7);
    glTexCoord2f(10, 0); glVertex3f(-22, 8, -7);
    glTexCoord2f(10, 4); glVertex3f(-22, 8, -9);
    glTexCoord2f(0, 4); glVertex3f(-11, 8, -9);

    glEnd();

    //frente
    glBegin(GL_QUADS);
    glColor3f(0,215,218);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glTexCoord2f(0,0);glVertex3f(-11,6,-7);
    glTexCoord2f(3,0);glVertex3f(-11,6,-9);
    glTexCoord2f(3,10);glVertex3f(-11,8,-9);
    glTexCoord2f(0,10);glVertex3f(-11,8,-7);

    glEnd();

    //atras

    glBegin(GL_QUADS);
    glColor3f(0,215,218);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glTexCoord2f(0,0);glVertex3f(-11,6,-7);
    glTexCoord2f(3,0);glVertex3f(-11,6,-9);
    glTexCoord2f(3,10);glVertex3f(-11,8,-9);
    glTexCoord2f(0,10);glVertex3f(-11,8,-7);
    glEnd();
}

void soporte_cable(){
    //derecha
    glBegin(GL_QUADS);
    glNormal3f( 0.0f, 0.0f, 1.0f);
    glColor3f(218,136,0);
    glTexCoord2f(0,0);glVertex3f(-22,4,-9);
    glTexCoord2f(10,0);glVertex3f(-23,4,-9);
    glTexCoord2f(10,4);glVertex3f(-23,9,-9);
    glTexCoord2f(0,4);glVertex3f(-22,9,-9);

    glEnd();

    //izquierda
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glColor3f(218,136,0);
    glTexCoord2f(0, 0); glVertex3f(-22, 4, -7);
    glTexCoord2f(10, 0); glVertex3f(-23, 4, -7);
    glTexCoord2f(10, 4); glVertex3f(-23, 9, -7);
    glTexCoord2f(0, 4); glVertex3f(-22, 9, -7);

    glEnd();

    //INFERIOR
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glColor3f(218,136,0);
    glTexCoord2f(0, 0); glVertex3f(-22, 4, -7);
    glTexCoord2f(10, 0); glVertex3f(-23, 4, -7);
    glTexCoord2f(10, 4); glVertex3f(-23, 4, -9);
    glTexCoord2f(0, 4); glVertex3f(-22, 4, -9);

    glEnd();

    //superior
    glBegin(GL_QUADS);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glColor3f(218,136,0);
    glTexCoord2f(0, 0); glVertex3f(-22, 9, -7);
    glTexCoord2f(10, 0); glVertex3f(-23, 9, -7);
    glTexCoord2f(10, 4); glVertex3f(-23, 9, -9);
    glTexCoord2f(0, 4); glVertex3f(-22, 9, -9);

    glEnd();

    //frente
    glBegin(GL_QUADS);
    glColor3f(218,136,0);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glTexCoord2f(0,0);glVertex3f(-22,4,-7);
    glTexCoord2f(3,0);glVertex3f(-22,4,-9);
    glTexCoord2f(3,10);glVertex3f(-22,9,-9);
    glTexCoord2f(0,10);glVertex3f(-22,9,-7);

    glEnd();

    //atras

    glBegin(GL_QUADS);
    glColor3f(218,136,0);
    glNormal3f(0.0f, 0.0f, 1.0f);
    glTexCoord2f(0,0);glVertex3f(-22,4,-7);
    glTexCoord2f(3,0);glVertex3f(-22,4,-9);
    glTexCoord2f(3,10);glVertex3f(-22,9,-9);
    glTexCoord2f(0,10);glVertex3f(-22,9,-7);

    glEnd();
}

void reshape(int w, int h){
    glViewport(0, 0, (GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // glFrustum (-1.0, 1.0, -1.0, 1.0, 0.5, 100.0);
    glMatrixMode(GL_MODELVIEW);


}



void display()
{

    //  Borrar pantalla y Z-buffer
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    // Resetear transformaciones
    glLoadIdentity();
    // gluLookAt(0.0, 0.0, 5.0, //eye (x,y,z)
    //  0.0, 0.0, 0.0,           //at(x,y,z)
    //  0.0, 1.0, 0.0);          //up (x,y,z)

    //glTranslatef(0.0f, 0.0f, -0.2f);
    glTranslatef(X, Y, Z); 	// Transladar en los 3 ejes

    glOrtho(-30,30,-30, 30, -30, 30);

    glRotatef( rotate_x, 1.0, 0.0, 0.0 );
    glRotatef( rotate_y, 0.0, 1.0, 0.0 );
    glRotatef( rotate_z, 0.0, 0.0, 1.0 );
    glScalef(1.0, 2.0, 1.0);


    //BASE
    base();
    brazo();
    soporte_cable();

    glFlush();


    glutSwapBuffers();

}

void init()
{

    // Habilitar la prueba de profundidad de Z-buffer
    glEnable(GL_DEPTH_TEST);

}

// Función para controlar teclas especiales
void specialKeys( int key, int x, int y )
{

    //  Flecha derecha: aumentar rotación 7 grados
    if (key == GLUT_KEY_RIGHT)
        rotate_y += 3;

        //  Flecha izquierda: rotación en eje Y negativo 7 grados
    else if (key == GLUT_KEY_LEFT)
        rotate_y -= 3;
        //  Flecha arriba: rotación en eje X positivo 7 grados
    else if (key == GLUT_KEY_UP)
        rotate_x += 3;
        //  Flecha abajo: rotación en eje X negativo 7 grados
    else if (key == GLUT_KEY_DOWN)
        rotate_x -= 3;
        //  Tecla especial F2 : rotación en eje Z positivo 7 grados
    else if (key == GLUT_KEY_F2)
        rotate_z += 3;
        //  Tecla especial F2 : rotación en eje Z negativo 7 grados
    else if (key == GLUT_KEY_F2)
        rotate_z -= 7;

    //  Solicitar actualización de visualización
    glutPostRedisplay();

}

//~ // Función para controlar teclas normales del teclado.
void keyboard(unsigned char key, int x, int y)
{
    //control de teclas que hacen referencia a Escalar y transladar el cubo en los ejes X,Y,Z.
    switch (key)
    {

        case 27:
            exit(0);			// exit
    }
    glutPostRedisplay();
}



int main(int argc, char* argv[])
{

    //  Inicializar los parámetros GLUT y de usuario proceso
    glutInit(&argc,argv);

    // Solicitar ventana con color real y doble buffer con Z-buffer
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (800, 600);

    // Crear ventana
    glutCreateWindow("cancha");
    init();

    // Funciones de retrollamada
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(specialKeys);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity( );
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glShadeModel(GL_SMOOTH);
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);


    // Pasar el control de eventos a GLUT
    glutMainLoop();

    // Regresar al sistema operativo
    return 0;

}
