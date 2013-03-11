//
//  FileOutputStream.h
//  Game Engine
//
//  Created by Aaron Goy on 9/2/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//

#ifndef Game_Engine_FileOutputStream_h
#define Game_Engine_FileOutputStream_h
#include "FileStream.h"
#include <fstream>

using namespace std;
class FileOutputStream : public FileStream{
private:
    ofstream m_fileStream;
    
public:
    FileOutputStream();
    FileOutputStream(const char* fileName, PS_FILE_TYPE fileType);
    virtual ~FileOutputStream();
    
    bool openFile(const char* fileName, PS_FILE_TYPE fileType);
    void closeFile();
    
    void seekStreamToStart();
    void seekStreamToEnd();
    void seekPast(int offset);
    int getSeekPosition();
    
    bool read(char* buffer, int bytesToRead);
    bool write(char* buffer, int bytesToWrite);
    
    int getFileSize();
    bool isOpen();
                     
};


#endif
