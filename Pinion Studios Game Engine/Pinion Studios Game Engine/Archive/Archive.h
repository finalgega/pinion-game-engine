//
//  Archive.h
//  Game Engine
//
//  Created by Aaron Goy on 9/2/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//
//  This class Archive has functions to read and write an archive,
//  extract a file from the archive based on it's index and filename
//  and to get a file's data from the archive based on it's index
//  filename. As member variables, it is designed to have a file
//  input stream object, a list of fileheaders, and the total
//  number of files in the archive. The input stream object
//  is used to open an archive file and keep it open so
//  multiple files can be loaded without the overhead of opening
//  and closing many times through the operation of the application.
//  Loading all the file headers and keeping the filestream open
//  will allow the class to look up file data quickly so it can 
//  be accessed. 
#ifndef Game_Engine_Archive_h
#define Game_Engine_Archive_h
#include "FileInputStream.h"
#include "ArchiveFileHeader.h"
class Archive {
    ArchiveFileHeader* m_headers;
    int m_totalHeaders;
    
    FileInputStream m_fileStream;
    
public:
    Archive();
    virtual ~Archive();
    
    bool readArchiveFile(char* fileName);
    bool writeArchiveFile(char* fileName,ArchiveFileHeader* headers,int totalHeaders);
    
    void closeArchive();
    
    bool extract(int index, char* location);
    bool extract(char* fileName, char* location);
    
    int getFileIndex(char* fileName);
    bool getFileData(int index, char* buffer, int bytesToRead);
    bool getFileData(char* fileName, char* buffer,
                     int BytesToRead);
    bool getFileHeaderInfoByIndex(int index,ArchiveFileHeader* fh);
    
    int getTotalHeaders();
    
    bool isArchiveOpen();


};


#endif
