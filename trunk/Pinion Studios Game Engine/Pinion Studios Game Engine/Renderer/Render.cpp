//
//  Render.cpp
//  Game Engine
//
//  Created by PinionStudios on 3/3/13.
//  Copyright (c) 2013 Nanyang Polytechnic. All rights reserved.
//

#include "Render.h"
#include "../common.h"
using namespace std;

Render::Render()
{
    for (int i = 0; i < 256; i++) {
        vertex[i].x = 0;
        vertex[i].y = 0;
        vertex[i].z = 0;
    }
}

Render::~Render()
{
    
}

void Render::load(char *filename)
{
    ifstream file;
    file.open(filename);
    
    string str;
    string test = "HELLO IN Render:load(char *filename)";
    cout << test << endl;
    cout << "file is : " << filename << endl;
    while(!file.eof())
    {
        getline(file,str);
        cout << str << endl;

        if (str[0] == 'v') {
            break;
        }
    }
    int v = 0;
    
    while (str[0] == 'v') {
        int i = 0;
        while (true) {
            while (str[i] == ' ') {
                i++;    // moving a space over
            }
            i++;
            i++;
            int j = i, k = i;
            while (str[i] != ' ') {
                i++;
                k = i;
            }
            vertex[v].x = atof(str.substr(j,k-j).c_str());
            
            //  Moving on to the y coordinate
            
            while (str[i] == ' ') {
                i++;
            }
            
            int q = i, w = i;
            while (str[i] != ' ') {
                i++;
                w = i;
            }
            vertex[v].y = atof(str.substr(q, w-q).c_str());
            
            while (str[i] == ' ') {
                i++;
            }
            
            //  moving to z coordinate
            
            int a = i, s = i;
            while (str[i] != ' ') {
                i++;
                s = i;
            }
            vertex[v].z = atof(str.substr(a,s-a).c_str());
            
            break;
        }
        v++;
        getline(file, str);
    }
}

void Render::draw(char *filename)
{
    ifstream file;
    file.open(filename);
    string str;
    
    while (true) {
        getline(file, str);
        if (str[0] == 'f') {
            break;
        }
    }
    
    int i = 0;
    
    while (str[0] == 'f') {
        while (str[i] ==  'f') {
            i++;
        }
        while (str[i] == ' ') {
            i++;
        }
        int j= i, k = i;
        
        while (str[i] != ' ') {
            i++;
            k = i;
        }
        
        int one = atof(str.substr(j,k - j).c_str());
        
        i += 1;
        
        j = i;
        k = i;
        
        while (str[i] != ' ') {
            i++;
            k = i;
        }
        
        int two = atof(str.substr(j, k - j).c_str());
        
        i += 1;
        j = i;
        k = i;
        
        while (str[i] != ' ') {
            i++;
            k = i;
        }
        
        int three = atof(str.substr(j,k-j).c_str());
        
        i += 1;
        j = i; k = i;
        
        while (str[i] != ' ') {
            i++;
            k = i;
        }
        int four = atof(str.substr(j,k-j).c_str());
        
        glBegin(GL_POLYGON);
        glVertex3d(vertex[one - 1].x, vertex[one - 1].y, vertex[one - 1].z);
        glVertex3d(vertex[two - 1].x, vertex[two - 1].y, vertex[two - 1].z);
        glVertex3d(vertex[three - 1].x, vertex[three - 1].y, vertex[three - 1].z);
        glVertex3d(vertex[four - 1].x, vertex[four - 1].y, vertex[four - 1].z);
        glEnd();
        getline(file,str);
        i = 0;
    }
}
void Render::draw(vector<int> drawData)
{
    cout << " drawing" << endl;
}