//
//  core.cpp
//  Pinion Engine
//
//  Created by Aaron Goy on 9/9/11.
//  Copyright 2011 PinionStudios/AaronGoy Productions. All rights reserved.
//  This module forms the core of the engine and will be used to interact
//  at a low-level environment to work with the cpu and hand in hand with
//  the various portions of the engine (rendering,audio,io,physics,etc)
#ifdef __APPLE__
#include <iostream>
#include <string>
#include <fstream>
#include "Difficulty.h"
#include "glut_obj.cpp"
#include "Creature.h"
#include "Object.h"
#include "Event.h"
#elif __WINDOWS__
#include <direct.h>
#include <windows.h>
#endif
using namespace std;
using namespace PinionEngine;

void enInit(int argc,char **argv);
void game_start();
/**
 *  To abstract out all the read file and write files to a separate header and cpp file.
 *  Note that return types and parameters are NOT finalized.
 *  Could change at any moment
 */

void updateUI();
void resize();
void createCreature(string name);
void createBinaryFile(string file_name, string text); // function to create binary files (images/etc)
void createTxtFile(string file_name, string text);   //  function to create text-based files (plaintext,etc)
void readFile(string filename); //

//Render renderObj;
float angle;

//void enInit(int argc, char **argv)
//{
//    string path ="/Users/macpro/Downloads/My Workstation.obj";
//    cout << "Initializing engine" << endl;
//    //  Begins checking of resources to ensure all are valid
//    cout << "Checking resources ...... " <<endl;
//    string curr_path = "getPath"; //    Call the appropriate f(x) or api to get current path
//    
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
//    glutInitWindowSize(800, 600);
//    glutInitWindowPosition(150, 150);
//    glutCreateWindow("Pinion Engine Render");
//    initialize();
//    freopen("CON", "wt", stdout);
//    freopen("CON", "wt", stderr);
//    
//    obj.Load("My Workstation.obj");
//    
//    glEnable(GL_DEPTH_TEST);
//    glEnable(GL_LIGHTING);
//    glEnable(GL_LIGHT0);
//}
//
//void game_start()
//{
//    int dif;
//    //  alows them to choose difficulty level
//    //  difficulty level probably stored in a ini file and read from as necessary
//    cout << "Please choose the difficulty level. " << endl;
//    cout << "Beginner  \t 0" << endl;
//    cout << "Novice \t 1" << endl;
//    cout << "Expert \t 2" << endl;
//    cin >> dif;
//    
//}
//
//void updateUI()
//{
//    cout << "Updating UI" << endl;
//    glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//    glLoadIdentity();
//    
//    glTranslatef(0.0f, -2.75f, -5.0f);
////    obj.Draw("My Workstation.obj");
//    glutSwapBuffers();
//    angle += .1f;
//}
//
//void resize(int width,int height){
//    glViewport(0, 0, (GLsizei)width, (GLsizei)height);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    gluPerspective(60, (GLfloat)width / (GLfloat)height, 1.0, 100.0);
//    glMatrixMode(GL_MODELVIEW);
//}
int main(int argc,char *argv[])
{
    win.width = 640;
    win.height = 480;
    win.title = "OpenGL | GLUT OBJ Loader";
    win.field_of_view_angle = 50;
    win.z_near = 1.0f;
    win.z_far = 500.f;
    glutInit(&argc, argv);                                      // GLUT initialization
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH );  // Display Mode
	glutInitWindowSize(win.width,win.height);					// set window size
	glutCreateWindow(win.title);								// create Window
	glutDisplayFunc(display);									// register Display Function
	glutIdleFunc( display );									// register Idle Function
    glutKeyboardFunc( keyboard );								// register Keyboard Handler
	initialize();
	obj.Load("My Workstation.obj");
    glutMainLoop();
							// register Keyboard Handler
       return 0;
}