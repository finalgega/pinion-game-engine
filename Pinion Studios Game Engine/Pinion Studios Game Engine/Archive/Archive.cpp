//
//  Archive.cpp
//  Game Engine
//
//  Created by Aaron Goy on 9/2/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//

#include <iostream>
#include "Archive.h"
#include "ArchiveFileHeader.h"
#include "ArchiveHeader.h"
#include "Endian.h"
Archive::Archive()
{
    
}
 Archive::~Archive()
{
    
}

bool Archive::readArchiveFile(char* fileName)
{
    Endian endianSwap;
    ArchiveHeader archiveHeader;
}
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
