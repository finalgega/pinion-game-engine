//
//  FileStream.h
//  Game Engine
//
//  Created by Aaron Goy on 9/2/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//

#ifndef Game_Engine_FileStream_h
#define Game_Engine_FileStream_h

class FileStream {
    #define PS_FILE_TYPE long
public:
    bool openFile();
    void closeFile();
    void seekStreamToStart();
    void seekStreamToEnd();
    void seekPast();
    int getSeekPosition();
    bool read();
    bool write();
    int getFileSize();
    bool isOpen();
};

#endif
