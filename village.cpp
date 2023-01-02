#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#define PI 3.1416

GLint i, j, k;
GLfloat sun_spin = 0, sun_x = 0, sun_y = 0;
GLfloat ax = 0, bx = 0, cx = 0, dx = 0;

GLfloat spin = 0.0;


void init(void)
{
    glClearColor(.135, .206, .250, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 1000.0, 0.0, 500.0);
}

void circle(GLdouble rad)
{
    GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for (i = 0; i <= 50; i++, theta += delTheta)
        {
            glVertex2f(rad * cos(theta), rad * sin(theta));
        }
    }
    glEnd();
}


/// *** Sun_Model **///
void Sun_Model() {
    glPushMatrix();
    glTranslatef(500, 0, 0);
    circle(30);
    glPopMatrix();

}
void Moving_Sun_Model() {
    glPushMatrix();
    glRotatef(-sun_spin, 0, 0, -.009);
    Sun_Model();
    glPopMatrix();


}

void cloud_model_one() {

    glColor3f(1.25, 0.924, 0.930);

    ///Top_Left

    glPushMatrix();
    glTranslatef(320, 210, 0);
    circle(15);
    glPopMatrix();

    ///Top

    glPushMatrix();
    glTranslatef(340, 225, 0);
    circle(16);
    glPopMatrix();

    ///Right

    glPushMatrix();
    glTranslatef(360, 210, 0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(340, 200, 0);
    circle(15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(360, 230, 0);
    circle(10);
    glPopMatrix();
    glEnd();



}


void cloud_model_Two() {
    glColor3f(1.25, 0.924, 0.930);

    ///Left_Part
    glPushMatrix();
    glTranslatef(305, 205, 0);
    circle(10);
    glPopMatrix();

    ///Top

    glPushMatrix();
    glTranslatef(320, 210, 0);
    circle(15);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(334, 207, 0);
    circle(13);
    glPopMatrix();

    ///Bottom_Part
    glPushMatrix();
    glTranslatef(320, 207, 0);
    circle(15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(340, 215, 0);
    circle(13);
    glPopMatrix();
    glEnd();



}


void cloud_model_Three() {

    glColor3f(0.52, 0.52, 0.42);

    ///Top_Left

    glPushMatrix();
    glTranslatef(250, 315, 0);
    circle(15);
    glPopMatrix();
    glEnd();

    ///Top

    glPushMatrix();
    glTranslatef(270, 330, 0);
    circle(15);
    glPopMatrix();
    glEnd();

    ///Right

    glPushMatrix();
    glTranslatef(290, 330, 0);
    circle(12);
    glPopMatrix();
    glEnd();

    glPushMatrix();
    glTranslatef(300, 315, 0);
    circle(15);
    glPopMatrix();
    glEnd();


    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2i(250, 300);
    glVertex2i(300, 300);
    glVertex2i(300, 320);
    glVertex2i(250, 320);
    glPopMatrix();
    glEnd();









}

void ballon_1() {

    glColor3f(1.0, 0.45, 0.69);

    glPushMatrix();
    glTranslatef(450, 370, 0);
    circle(50);
    glPopMatrix();
    glEnd();

    glColor3f(0.9, 0.98, 0.5);
    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2i(440, 300);
    glVertex2i(460, 300);
    glVertex2i(480, 330);
    glVertex2i(420, 330);
    glPopMatrix();
    glEnd();

    glColor3f(0.9, 0.5, 0.2);
    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2i(440, 270);
    glVertex2i(450, 270);
    glVertex2i(450, 300);
    glVertex2i(440, 300);
    glPopMatrix();
    glEnd();

    glColor3f(0.9, 0.7, 0.2);
    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2i(450, 270);
    glVertex2i(460, 270);
    glVertex2i(460, 300);
    glVertex2i(450, 300);
    glPopMatrix();
    glEnd();

    //argentina Flag//



    glColor3f(0.5, 0.0, 0.2);
    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2i(440, 420);
    glVertex2i(445, 420);
    glVertex2i(445, 440);
    glVertex2i(440, 440);
    glPopMatrix();

    glEnd();

    glColor3f(1, 1, 1);
    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2i(440, 450);
    glVertex2i(480, 450);
    glVertex2i(480, 460);
    glVertex2i(440, 460);
    glPopMatrix();
    glEnd();

    glColor3f(0.52, 0.80, 0.92);
    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2i(440, 440);
    glVertex2i(480, 440);
    glVertex2i(480, 450);
    glVertex2i(440, 450);
    glPopMatrix();
    glEnd();





}

void ballon_2() {

    glColor3f(1.0, 0.025, 0.05);

    glPushMatrix();
    glTranslatef(450, 370, 0);
    circle(50);
    glPopMatrix();
    glEnd();

    glColor3f(0.9, 0.98, 0.5);
    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2i(440, 300);
    glVertex2i(460, 300);
    glVertex2i(480, 330);
    glVertex2i(420, 330);
    glPopMatrix();
    glEnd();

    glColor3f(0.9, 0.5, 0.2);
    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2i(440, 270);
    glVertex2i(450, 270);
    glVertex2i(450, 300);
    glVertex2i(440, 300);
    glPopMatrix();
    glEnd();

    glColor3f(0.9, 0.7, 0.2);
    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2i(450, 270);
    glVertex2i(460, 270);
    glVertex2i(460, 300);
    glVertex2i(450, 300);
    glPopMatrix();
    glEnd();

    glColor3f(0.5, 0.0, 0.2);
    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2i(440, 420);
    glVertex2i(445, 420);
    glVertex2i(445, 440);
    glVertex2i(440, 440);
    glPopMatrix();

    glEnd();

    glColor3f(0.0, 0.58, 0);
    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2i(440, 440);
    glVertex2i(480, 440);
    glVertex2i(480, 460);
    glVertex2i(440, 460);
    glPopMatrix();
    glEnd();

    glColor3f(0.0, 0.05, 0.8);
    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2i(460, 440);
    glVertex2i(470, 450);
    glVertex2i(460, 460);
    glVertex2i(450, 450);
    glPopMatrix();
    glEnd();


    glColor3f(1, 1, 0.07);
    glPushMatrix();
    glTranslatef(460, 450, 0);
    circle(5);
    glPopMatrix();
    glEnd();







}


//Road-1//

void road_1() {

    glColor3f(0.26, 0.9, 0.04);
    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2i(0, 0);
    glVertex2i(1000, 0);
    glVertex2i(1000, 50);
    glVertex2i(0, 50);
    glPopMatrix();


    glColor3f(0.6, 1.0, 0.0);
    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2i(0, 50);
    glVertex2i(1000, 50);
    glVertex2i(1000, 80);
    glVertex2i(0, 80);


    glPopMatrix();
    glEnd();




}

//House-Model1//


void house_1() {

    glColor3f(0.91, 0.78, 0.61);
    glBegin(GL_POLYGON);
    glVertex2i(200, 150);
    glVertex2i(220, 150);
    glVertex2i(250, 180);
    glVertex2i(250, 200);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(250, 180);
    glVertex2i(280, 150);
    glVertex2i(300, 150);
    glVertex2i(250, 200);

    glColor3f(0.9, 0.30, 0.7);
    glBegin(GL_QUADS);
    glVertex2i(210, 150);
    glVertex2i(220, 80);
    glVertex2i(280, 80);
    glVertex2i(290, 150);
    glEnd();

    glColor3f(0.9, 0.30, 0.7);
    glBegin(GL_TRIANGLES);
    glVertex2i(220, 150);
    glVertex2i(280, 150);
    glVertex2i(250, 180);
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex2i(235, 80);
    glVertex2i(265, 80);
    glVertex2i(265, 130);
    glVertex2i(235, 130);
    glEnd();

    glColor3f(0.91, 0.78, 0.61);
    glBegin(GL_QUADS);
    glVertex2i(240, 80);
    glVertex2i(260, 80);
    glVertex2i(260, 125);
    glVertex2i(240, 125);
    glEnd();

    glColor3f(1, 1, 1);
    glPushMatrix();
    glTranslatef(250, 150, 0);
    circle(10);
    glPopMatrix();
    glEnd();

    glColor3f(0.91, 0.78, 0.61);
    glPushMatrix();
    glTranslatef(250, 150, 0);
    circle(8);
    glPopMatrix();

    glEnd();













}
//house-model-1//
void house_2() {

    glColor3f(0.9, 0.3, 0.2);
    glBegin(GL_QUADS);
    glVertex2i(450, 160);
    glVertex2i(560, 160);
    glVertex2i(550, 190);
    glVertex2i(460, 190);
    glEnd();

    glColor3f(0.9, 0.7, 0.8);
    glBegin(GL_QUADS);
    glVertex2i(510, 190);
    glVertex2i(540, 190);
    glVertex2i(540, 210);
    glVertex2i(510, 210);
    glEnd();

    glColor3f(0.9, 0.9, 0.1);
    glBegin(GL_QUADS);
    glVertex2i(500, 210);
    glVertex2i(550, 210);
    glVertex2i(550, 215);
    glVertex2i(500, 215);
    glEnd();

    glColor3f(0.5, 0.9, 0.1);
    glBegin(GL_QUADS);
    glVertex2i(470, 100);
    glVertex2i(540, 100);
    glVertex2i(550, 160);
    glVertex2i(460, 160);
    glEnd();




    //window//

    glColor3f(0.64, 0.84, 0.9);
    glBegin(GL_QUADS);
    glVertex2i(470, 120);
    glVertex2i(500, 120);
    glVertex2i(500, 140);
    glVertex2i(470, 140);
    glEnd();

    //door//

    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex2i(510, 100);
    glVertex2i(530, 100);
    glVertex2i(530, 140);
    glVertex2i(510, 140);
    glEnd();

    glColor3f(0.67, 0.84, 0.9);
    glBegin(GL_QUADS);
    glVertex2i(512, 100);
    glVertex2i(528, 100);
    glVertex2i(528, 138);
    glVertex2i(512, 138);
    glEnd();

    glColor3f(0.2, 0.3, 1);
    glPushMatrix();
    glTranslatef(525, 120, 0);
    circle(2);
    glPopMatrix();
    glEnd();

    glColor3f(0.5, 0.2, 0);
    glBegin(GL_QUADS);
    glVertex2i(470, 80);
    glVertex2i(540, 80);
    glVertex2i(540, 100);
    glVertex2i(470, 100);
    glEnd();

    //stair//

    glColor3f(0.7, 0.4, 0.99);
    glBegin(GL_QUADS);
    glVertex2i(505, 100);
    glVertex2i(535, 100);
    glVertex2i(535, 90);
    glVertex2i(505, 90);
    glEnd();

    glColor3f(0.7, 0.4, 0.99);
    glBegin(GL_QUADS);
    glVertex2i(500, 90);
    glVertex2i(540, 90);
    glVertex2i(540, 80);
    glVertex2i(500, 80);

    glEnd();

}

void tree_1() {

    glColor3f(0.0, 0.78, 0.13);
    glPushMatrix();
    glTranslatef(605, 140, 0);
    circle(30);
    glPopMatrix();
    glEnd();

    glColor3f(0.0, 0.38, 0.13);
    glPushMatrix();
    glTranslatef(615, 140, 0);
    circle(40);
    glPopMatrix();
    glEnd();

    glColor3f(0.0, 0.45, 0.13);
    glPushMatrix();
    glTranslatef(600, 165, 0);
    circle(30);
    glPopMatrix();
    glEnd();

    glColor3f(0.0, 0.78, 0.13);
    glPushMatrix();
    glTranslatef(620, 142, 0);
    circle(37);
    glPopMatrix();
    glEnd();


    glColor3f(0.5, 0.2, 0.2);
    glBegin(GL_QUADS);
    glVertex2i(600, 80);
    glVertex2i(610, 80);
    glVertex2i(607, 130);
    glVertex2i(604, 130);
    glEnd();

    glColor3f(0.5, 0.2, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(607, 110);
    glVertex2i(615, 140);
    glVertex2i(604, 115);
    glEnd();

    glColor3f(0.5, 0.2, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(601, 100);
    glVertex2i(603, 100);
    glVertex2i(590, 120);
    glEnd();










}

void tree_2() {

    glColor3f(0.35, .65, 0.02);
    glPushMatrix();
    glTranslatef(150, 210, 0);
    circle(25);
    glPopMatrix();
    glEnd();

    glColor3f(0.35, .65, 0.02);
    glPushMatrix();
    glTranslatef(150, 180, 0);
    circle(35);
    glPopMatrix();
    glEnd();

    glColor3f(0.35, .65, 0.02);
    glPushMatrix();
    glTranslatef(150, 155, 0);
    circle(42);
    glPopMatrix();
    glEnd();

    glColor3f(0.5, 0.2, 0.2);
    glBegin(GL_QUADS);
    glVertex2i(150, 80);
    glVertex2i(160, 80);
    glVertex2i(157, 140);
    glVertex2i(154, 140);
    glEnd();

    glColor3f(0.5, 0.2, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(157, 110);
    glVertex2i(154, 110);
    glVertex2i(165, 140);
    glEnd();





}

void tree_3() {

    glColor3f(0.2, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(690, 200);
    glVertex2i(750, 200);
    glVertex2i(720, 250);
    glEnd();

    glColor3f(0.2, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(670, 170);
    glVertex2i(770, 170);
    glVertex2i(720, 220);
    glEnd();

    glColor3f(0.2, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(660, 135);
    glVertex2i(780, 135);
    glVertex2i(720, 200);
    glEnd();

    glColor3f(0.5, 0.2, 0.2);
    glBegin(GL_QUADS);
    glVertex2i(720, 80);
    glVertex2i(730, 80);
    glVertex2i(727, 150);
    glVertex2i(724, 150);
    glEnd();

    glColor3f(0.5, 0.2, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(727, 110);
    glVertex2i(724, 110);
    glVertex2i(735, 140);
    glEnd();
}

void hill_big() {

    ///Hill
    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.41, 0.36);
    glVertex2i(60, 80);
    glVertex2i(200, 300);
    glVertex2i(340, 80);

    glEnd();

    ///Hill_Snow
    glBegin(GL_POLYGON);
    glColor3f(1.25, 0.924, 0.930);

    glVertex2i(170, 250);
    glVertex2i(200, 230);
    glVertex2i(220, 230);
    glVertex2i(230, 250);
    glVertex2i(200, 300);





    glEnd();

}

void hill_small() {
    ///Hill_Small
    glBegin(GL_POLYGON);
    glColor3f(0.11, 0.23, 0.36);
    glVertex2i(350, 80);
    glVertex2i(450, 80);
    glVertex2i(400, 160);

    glEnd();

    ///Hill_Small_Snow
    glBegin(GL_TRIANGLES);
    glColor3f(1.25, 0.924, 0.930);
    glVertex2i(375, 120);
    glVertex2i(425, 120);
    glVertex2i(400, 160);




    glEnd();
}











//object//
void Sun() {
    glColor3f(0.91, 0.78, 0.61);
    glPushMatrix();
    Moving_Sun_Model();
    glPopMatrix();
}



///*** Cloud_One_Model_One ***///
void cloud_one() {
    glPushMatrix();
    glTranslatef(cx, -40, 0);
    cloud_model_one();
    glPopMatrix();

}

///*** Cloud_Two_Model_one ***///

void cloud_two() {
    glPushMatrix();
    glTranslatef(bx + 100, 150, 0);
    cloud_model_one();
    glPopMatrix();

}

///*** Cloud_Three_Model_Two ***///

void cloud_three() {
    glPushMatrix();
    glTranslatef(ax - 80, 80, 0);
    cloud_model_Two();
    glPopMatrix();


}







void house() {

    glPushMatrix();
    glTranslatef(600, 0, 0);
    house_1();
    glPopMatrix();
}

void tree() {

    glPushMatrix();
    glTranslatef(180, 0, 0);
    tree_3();
    glPopMatrix();
}
void ballon() {
    glPushMatrix();
    glTranslatef(ax - 20, 0, 0);
    ballon_1();
    glPopMatrix();

}

void ballon2() {
    glPushMatrix();
    glTranslatef(bx + 100, 20, 0);
    ballon_2();
    glPopMatrix();

}







void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 1.0);
    Sun();


    cloud_two();

    cloud_one();
    cloud_three();
    cloud_model_Three();

















    road_1();

    hill_big();
    hill_small();
    tree();
    house();





    house_1();

    house_2();


    tree_1();

    tree_2();


    tree_3();

    ballon2();

    ballon();














    glFlush();
}

void sun_move() {

    sun_spin = sun_spin + 0.025;

}
void move_right() {

    sun_move();

    spin = spin + .5;
    ax = ax + .05;
    bx = bx + .08;
    cx = cx + .10;
    dx = dx + .15;

    if (cx > 1000) {
        cx = -300;
    }
    if (bx > 1000) {
        bx = -400;

    }
    if (cx > 1000) {
        cx = -400;

    }
    if (dx > 1000) {
        dx = -500;

    }


    glutPostRedisplay();
}
void mouse(int key, int state, int x, int y) {
    switch (key)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(move_right);
        }
        break;
    case GLUT_MIDDLE_BUTTON:
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(NULL);
        }
        break;
    default:
        break;
    }
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50, 50);
    glutInitWindowSize(1900, 1900);
    glutCreateWindow("Village Scenary");
    init();
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();
}