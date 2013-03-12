//
//  ModelOBJ.h
//  Game Engine
//
//  Created by PinionStudios on 11/3/13.
//  Copyright (c) 2013 Nanyang Polytechnic. All rights reserved.
//

#ifndef __Game_Engine__ModelOBJ__
#define __Game_Engine__ModelOBJ__


struct glutWindow {
    int width;
    int height;
    char *title;
    
    float fieldOfViewAngle;
    float zNear;
    float zFar;
};
class ModelOBJ {
    float *normals;                 //  Stores the normals
    float *faces_triangles;         //  Stores the triangles
    float *vertexBuffer;            //  Stores the points which makes up the object
    long totalConnectedPoints;      //  Stores the total number of vertices
    long totalConnectedTriangles;   //  Stores the total number of connected triangles
    
public:
    ModelOBJ();
    float* calculateNormal(float *coord1,float *coord2,float *coord3);
    int load(char *filename);
    // may move to render.h
    void draw();
    void release();
    
};

#endif /* defined(__Game_Engine__ModelOBJ__) */
