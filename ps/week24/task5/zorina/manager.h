#pragma once

void createNewFile(const char* fileName);
void deleteFile(const char* fileName);
void renameFile(char* fileName, const char* newFileName);
void transferFile(const char* filename, const char* catToTransfer);
void printFile(const char* filename);
bool copyFile(const char* source, const char* destination);