//
//  ArchiveFileHeader.h
//  Game Engine
//
//  Created by Aaron Goy on 9/2/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//
//  This class ArchiveFileHeader  stores the individual file headers
//  of the packed files. It contains member variables such as
//  filename, size of file and the offset of the file from the start
//  of the archive in bytes so the file stream can quickly seek to 
//  the start of the file's data. Similar to the ArchiveHeader class,
//  the class is also made up of acessor and mutator methods to
//  manipulate and store the variables
#ifndef Game_Engine_ArchiveFileHeader_h
#define Game_Engine_ArchiveFileHeader_h

class ArchiveFileHeader {
private:
    char m_fileName[256];
    int m_size;
    int m_offset;
    
public:
    ArchiveFileHeader();
    
    char* getFileName();
    
    int getSize();
    int getOffset();
    
    void setFileName(char* fileName);
    
    void setSize(int size);
    void setOffSet(int ofset);
    
    void operator=(ArchiveFileHeader &header);

};

#endif
