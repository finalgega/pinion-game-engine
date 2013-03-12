//
//  ArchiveHeader.cpp
//  Game Engine
//
//  Created by Aaron Goy on 9/2/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//
//  The ArchiveHeader class implementation

#include "ArchiveHeader.h"
#include <iostream>

using namespace std;

ArchiveHeader::ArchiveHeader()
{
    m_id[0] = '\0';
    m_majorVersion = 0;
    m_minorVersion = 0;
    m_totalFiles = 0;
}

char* ArchiveHeader::getID()
{
    return m_id;
}

int ArchiveHeader::getMajorVersion()
{
    return m_majorVersion;
}
int ArchiveHeader::getMinorVersion()
{
    return m_minorVersion;
}
int ArchiveHeader::getTotalFiles()
{
    return m_totalFiles;
}

void ArchiveHeader::setID(char* id)
{
    if(id == NULL)
    {
        return;
    }
    memcpy(m_id, id, 4);
    m_id[4] = '\0'; //  Apppend the null terminator char
}

void ArchiveHeader::setMajorVersion(int major)
{
    this->m_majorVersion = major;
}
void ArchiveHeader::setMinorVersion(int minor)
{
    this->m_minorVersion = minor;
}
void ArchiveHeader::setTotalFiles(int total)
{
    this->m_totalFiles = total;
}
