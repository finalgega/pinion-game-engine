//
//  main.cpp
//  Pinion Studios Game Engine
//
//  Created by Aaron Goy on 12/3/13.
//  Copyright (c) 2013 Aaron Goy. All rights reserved.
//  Copyright 2011 PinionStudios/AaronGoy Productions. All rights reserved.
//  This module forms the core of the engine and will be used to interact
//  at a low-level environment to work with the cpu and hand in hand with
//  the various portions of the engine (rendering,audio,io,physics,etc)

#include <iostream>
#include "common.h"
#include "AI/Static.h"
#include "Loaders\ModelOBJ.h"
#include "Maths/PSMathCore.h"
#ifdef __MACOSX__
#include <CoreAudio/CoreAudio.h>
#include "ModelOBJ.h"
#endif

using namespace std;
/***************************************************************************
 * Program code
 ***************************************************************************/

ModelOBJ obj;
float o_rotation;
glutWindow win;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt( 0,1,4, 0,0,0, 0,1,0);
	glPushMatrix();
    cout << " GL Rotation is : " << o_rotation << endl;
    glRotatef(o_rotation,0,1,0);
//    glRotatef(o_rotation,0,1,0);
//    glRotatef(o_rotation, 0, 0, 1);
//    o_rotation++;
    obj.draw();
	glPopMatrix();
	glutSwapBuffers();
}

void updateUI(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt( 0,1,4, 0,0,0, 0,1,0);
	glPushMatrix();
    cout << " GL Rotation is : " << o_rotation << endl;
    glRotatef(angle,x,y,z);
    //    glRotatef(o_rotation, 0, 0, 1);
    //    o_rotation++;
    obj.draw();
	glPopMatrix();
	glutSwapBuffers();
}



void initialize ()
{
    glMatrixMode(GL_PROJECTION);
	glViewport(0, 0, win.width, win.height);
	GLfloat aspect = (GLfloat) win.width / win.height;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
	gluPerspective(win.fieldOfViewAngle, aspect, win.zNear, win.zFar);
    glMatrixMode(GL_MODELVIEW);
    glShadeModel( GL_SMOOTH );
    glClearColor( 0.0f, 0.1f, 0.0f, 0.5f );
    glClearDepth( 1.0f );
    glEnable( GL_DEPTH_TEST );
    glDepthFunc( GL_LEQUAL );
    glHint( GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST );
    
    GLfloat amb_light[] = { 0.1, 0.1, 0.1, 1.0 };
    GLfloat diffuse[] = { 0.6, 0.6, 0.6, 1 };
    GLfloat specular[] = { 0.7, 0.7, 0.3, 1 };
    glLightModelfv( GL_LIGHT_MODEL_AMBIENT, amb_light );
    glLightfv( GL_LIGHT0, GL_DIFFUSE, diffuse );
    glLightfv( GL_LIGHT0, GL_SPECULAR, specular );
    glEnable( GL_LIGHT0 );
    glEnable( GL_COLOR_MATERIAL );
    glShadeModel( GL_SMOOTH );
    glLightModeli( GL_LIGHT_MODEL_TWO_SIDE, GL_FALSE );
    glDepthFunc( GL_LEQUAL );
    glEnable( GL_DEPTH_TEST );
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_CULL_FACE);
}


void keyboard ( unsigned char key, int x, int y )
{
    switch ( key ) {
        case KEY_ESCAPE:
            cout << key << " has been pressed!" << endl;
            exit ( 0 );
            break;
        case KEY_ENTER:
            cout << "Enter" << " has been pressed!" << endl;
            break;
        case 'w':
            cout << "You walked forward a step!" << endl;
            glRotatef(o_rotation++, 0.0, 1.0, 0.0);
            break;
        case 'a':
            cout << "You sidestepped to the left!" << endl;
            glRotatef(o_rotation++, 1.0, 0.0, 0.0);
            break;
        case 'd':
            cout << "You sidestepped to the rdight!" << endl;
            glRotatef(o_rotation--, 1.0, 0.0, 0.0);
            break;
        case 's':
            cout << "You took a step back!" << endl;
            updateUI(o_rotation--,0.0,1.0,0.0);
            break;
        case 'q':
            glRotatef(o_rotation--, 0.0, 0.0, 1.0);
            break;
        case 'e':
            glRotatef(o_rotation++, 0.0, 0.0, 1.0);
            break;
        case 'f':
            glutFullScreen();
            break;
        default:
            cout << key << " has been pressed!" << endl;
            break;
    }
}

int main(int argc, char * argv[])
{

    win.width = 640;
    win.height = 480;
    win.title = "Pinion Studios Game Engine";
    win.fieldOfViewAngle = 50;
    win.zNear = 1.0f;
    win.zFar = 500.f;
    PinionStudios::DifferentiatedFraction diff1;
    diff1.dx = 4.7;
    diff1.dt = 10.6;
    diff1.display();
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
//    glutInitWindowSize(win.width,win.height);
//    glutCreateWindow(win.title);
//    glutDisplayFunc(display);
//    glutIdleFunc(display);
//    glutKeyboardFunc(keyboard);
//    initialize();
//    obj.load("/Users/aarongoy/Documents/cube.obj");
//    glutMainLoop();
    return 0;
}

