//
//  ArchiveFileHeader.cpp
//  Game Engine
//
//  Created by Aaron Goy on 9/2/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//

#include <iostream>
#include "ArchiveFileHeader.h"
using namespace std;

ArchiveFileHeader::ArchiveFileHeader()
{
    m_fileName[0] = '\0';
    m_size = 0;
    m_offset = 0;
}

char* ArchiveFileHeader::getFileName()
{
    return m_fileName;
}

int ArchiveFileHeader::getSize()
{
    return m_size;
}
int ArchiveFileHeader::getOffset()
{
    return m_offset;
}

void ArchiveFileHeader::setFileName(char* fileName)
{
    int len;
    m_fileName[0] = '\0';
    
    if(fileName == NULL)
    {
        return;
    }
    len = strlen(fileName);
    
    if(len > 255)
    {
        return;
    }
    
    memcpy(m_fileName, fileName, len);
    m_fileName[len] = '\0';
}

void ArchiveFileHeader::setSize(int size)
{
    this->m_size = size;
}
void ArchiveFileHeader::setOffSet(int ofset)
{
    this->m_offset = ofset;
}

void ArchiveFileHeader::operator=(ArchiveFileHeader &header)
{
    m_size = header.getSize();
    setFileName(header.getFileName());
    m_offset = header.getOffset();
}