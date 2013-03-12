//
//  FileInputStream.h
//  Game Engine
//
//  Created by Aaron Goy on 9/2/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//

#ifndef Game_Engine_FileInputStream_h
#define Game_Engine_FileInputStream_h
#include <fstream>
#include "FileStream.h"

using namespace std;
class FileInputStream : public FileStream {

private:

    ifstream m_fileStream;
public:
    FileInputStream();
    FileInputStream(const char* fileName, PS_FILE_TYPE fileType); //    Note PS -> PinionStudios
    
    virtual ~FileInputStream();
    
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
