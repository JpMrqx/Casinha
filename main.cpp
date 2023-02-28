#include <GL\glut.h>
void casa(){

glBegin(GL_QUADS); //* entrada
glColor3f(0.6, 0.6, 0.6);
glVertex2f(2, 0);
glVertex2f(6, 0);
glVertex2f(6, 4);
glVertex2f(2, 4);

glColor3f(0.0, 0.8, 0.0); //* parede
glVertex2f(6, 0);
glVertex2f(6, 4);
glVertex2f(11,4);
glVertex2f(11,0);

glColor3f(0.3,0.3,0.3); //* porta
glVertex2f(3,0);
glVertex2f(3,3);
glVertex2f(5,3);
glVertex2f(5,0);

glColor3f(1.0, 0.0, 0.0); //* telhado
glVertex2f(6,4);
glVertex2f(11,4);
glVertex2f(10,7);
glVertex2f(4,7);

glColor3f(0.0, 0.0, 0.5); //* janela
glVertex2f(7,1);
glVertex2f(10,1);
glVertex2f(10,3);
glVertex2f(7,3);

glEnd();

glBegin(GL_TRIANGLES); //* telhado
glColor3f(0.0, 0.0, 1.0);
glVertex2f(2, 4);
glVertex2f(4,7);
glVertex2f(6, 4);
glEnd();



}


void redesenha(){
glClearColor(1.0, 1.0, 1.0, 0.0);
glClear(GL_COLOR_BUFFER_BIT );

casa();

glFlush();
}
int main(int argc, char **argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
glutInitWindowSize(400, 400);
glutInitWindowPosition(0, 0);
glutCreateWindow("Casinha");
gluOrtho2D(0,12,0,12);
glutDisplayFunc(redesenha);
glutMainLoop();

return(0);
}


