//
//  FileInputStream.cpp
//  Game Engine
//
//  Created by Aaron Goy on 9/2/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "FileInputStream.h"

using namespace std;
FileInputStream::FileInputStream()
{
    
}
FileInputStream::FileInputStream(const char* fileName, PS_FILE_TYPE fileType)
{
    
}

FileInputStream::~FileInputStream()
{
    
}

bool FileInputStream::openFile(const char* fileName, PS_FILE_TYPE fileType)
{
    if(isOpen())
    {
        closeFile();
    }
    if(fileType == (PS_FILE_TYPE)12)
    {
        m_fileStream.open(fileName,ifstream::in);
    }
    else
    {
        m_fileStream.open(fileName, ifstream::in | ifstream::binary);
    }
    return (isOpen());
}
void FileInputStream::closeFile()
{
    m_fileStream.close();
}

void FileInputStream::seekStreamToStart()
{
    m_fileStream.seekg(0, ios::beg);
}
void FileInputStream::seekStreamToEnd()
{
    m_fileStream.seekg(0, ios::end);
}
void FileInputStream::seekPast(int offset)
{
    m_fileStream.seekg(offset,ios::cur);
}
int FileInputStream::getSeekPosition()
{
    return m_fileStream.tellg();
}

bool FileInputStream::read(char* buffer, int bytesToRead)
{
    if(!isOpen() || buffer == NULL || bytesToRead <= 0)
    {
        return false;
    }
    m_fileStream.read(buffer, bytesToRead);
    
    return true;
}
bool FileInputStream::write(char* buffer, int bytesToWrite)
{
    return false;
}

int FileInputStream::getFileSize()
{
    int length = 0, streamPos = 0;
    
    streamPos = m_fileStream.tellg();
    m_fileStream.seekg(0,ios::beg);
    
    m_fileStream.seekg(0,ios::end);
    length = m_fileStream.tellg();
    
//  m_fileStream.seekg(0,streamPos);
    return length;
}
bool FileInputStream::isOpen()
{
    if(m_fileStream.fail())
    {
        return true;
    }
    return false;
}
