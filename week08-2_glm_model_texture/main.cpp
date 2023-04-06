#include <GL/glut.h>
#include "glm.h"
GLMmodel * pmodel = NULL;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    if(pmodel==NULL){
         pmodel = glmReadOBJ("Gundam.obj");
         glmUnitize(pmodel);
         glmFacetNormals(pmodel);
         glmVertexNormals(pmodel, 90);
    }
    glmDraw(pmodel, GLM_SMOOTH | GLM_MATERIAL | GLM_TEXTURE);

    glutSwapBuffers();

}

int main(int argc, char* argv[])
{

  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
  glutCreateWindow("week08");

  myTexture("Diffuse.jpg");
  glutDisplayFunc(display);
  glutMainLoop();

}
