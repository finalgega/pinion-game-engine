//
//  ArchiveHeader.h
//  Game Engine
//
//  Created by Aaron Goy on 9/2/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//
//  This class ArchiveHeader stores the ID of the archive file in a char
//  array, the major and minor version numbers as integers and the total
//  number of files as an integer and provides acessor and mutator methods
//  for the variables.

#ifndef Game_Engine_ArchiveHeader_h
#define Game_Engine_ArchiveHeader_h

//#define ARCHIVE_ID  "NYPPSE0"
#define ARCHIVE_ID "PINIONSTUDIOS0"
#define ARCHIVE_MAJOR   1
#define ARCHIVE_MINOR   0

class ArchiveHeader {
private:
    char m_id[15];
    int m_majorVersion;
    int m_minorVersion;
    int m_totalFiles;
public:
    ArchiveHeader();
    
    char* getID();
    
    int getMajorVersion();
    int getMinorVersion();
    int getTotalFiles();
    
    void setID(char* id);
    
    void setMajorVersion(int major);
    void setMinorVersion(int minor);
    void setTotalFiles(int total);
};


#endif
