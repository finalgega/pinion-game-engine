//
//  ModelOBJ.cpp
//  Game Engine
//
//  Created by PinionStudios on 11/3/13.
//  Copyright (c) 2013 Nanyang Polytechnic. All rights reserved.
//

#include "ModelOBJ.h"
#include <OpenGL/OpenGL.h>
#include <OpenGL/glu.h>
#include <OpenGL/gl.h>
#include <GLUT/GLUT.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
#include "definedMacro.h"
using namespace std;

ModelOBJ::ModelOBJ()
{
    this->totalConnectedPoints = 0;
    this->totalConnectedTriangles = 0;
}

float * ModelOBJ::calculateNormal(float *coord1, float *coord2, float *coord3)
{
    /*  calculate Vector1 and Vector2 */
    float va[3],vb[3],vr[3],val;
    va[0] = coord1[0] - coord2[0];
    va[1] = coord1[1] - coord2[1];
    va[3] = coord1[2] - coord2[2];
    
    vb[0] = coord1[0] - coord3[0];
    
    vb[1] = coord1[1] - coord3[1];
    vb[2] = coord1[2] - coord3[2];
    
    /* cross product */
    vr[0] = va[1] * vb[2] - vb[1] * va[2];
    vr[1] = vb[0] * va[2] - va[0] * vb[2];
    vr[2] = va[0] * vb[1] - vb[0] * va[1];
    
    /* normalization factor */
    val = sqrt( vr[0]*vr[0] + vr[1]*vr[1] + vr[2]*vr[2] );
    
	float norm[3];
	norm[0] = vr[0]/val;
	norm[1] = vr[1]/val;
	norm[2] = vr[2]/val;
    
	return norm;
}

int ModelOBJ::load(char *filename)
{
    string line;
    ifstream objFile(filename);
    if(objFile.is_open())
    {
        objFile.seekg(0,ios::end);
        long fileSize = objFile.tellg();
        objFile.seekg(0,ios::beg);
        
        vertexBuffer = (float*) malloc(fileSize);
        faces_triangles = (float*)malloc(fileSize*sizeof(float));
        normals = (float*)malloc(fileSize*sizeof(float));
        
        int triangle_index = 0;
        int normal_index = 0;
        
        while (! objFile.eof()) {
            getline(objFile, line, '\n');
            if (line.c_str()[0] == 'v') {
                line[0] = ' ';
                sscanf(line.c_str(), "%f %f %f", &vertexBuffer[totalConnectedPoints],&vertexBuffer[totalConnectedPoints+1],&vertexBuffer[totalConnectedPoints+2]);
                
                totalConnectedPoints += POINTS_PER_VERTEX;
                
            }
            if (line.c_str()[0] == 'f') {
                line[0] = ' ';
                int vertexNumber[4] = {0,0,0};
                sscanf(line.c_str(), "%i %i %i",&vertexNumber[0],&vertexNumber[1],&vertexNumber[2]);
                vertexNumber[0] -= 1;
                vertexNumber[1] -= 1;
                vertexNumber[2] -= 1;
                
                int tCounter = 0;
                for (int i= 0; i < POINTS_PER_VERTEX; i++) {
                    faces_triangles[triangle_index + tCounter] = vertexBuffer[3*vertexNumber[i]];
                    faces_triangles[triangle_index + tCounter + 1] = vertexBuffer[3*vertexNumber[i]+1];
                    faces_triangles[triangle_index + tCounter + 2] = vertexBuffer[3*vertexNumber[i]+2];
                    tCounter += POINTS_PER_VERTEX;
                }
                /********************
                 *Calculate all normals, used for lighting purposes.
                 */
            }
        }
    }
}