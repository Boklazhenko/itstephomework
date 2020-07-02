#pragma once

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include "File.h"

using namespace std;

string consonants = "áâãäæçéêëìíïğñòôõö÷øùúüÁÂÃÄÆÇÉÊËÌÍÏĞÑÒÔÕÖ×ØÙÚÜ";
string vowels = "àåıèîóşÿûÀÅİÈÎÓŞÁÛ";
string number = "1234567890";

bool search(char ch, string arr) {
    for (size_t i = 0; i < arr.size(); ++i) {
        if (ch == arr[i]) {
            return true;
        }
    }
}

int symFile() {
    int sym = 0;
    ifstream inFile("test.txt");
    if (!inFile)
    {
        exit(-1);
    }
    else
    {
        while (!inFile.eof())
        {
            char ch;
            inFile >> ch;
            sym++;
        }
    }

    return sym - 1;
}

int strFile() {
    int str = 0;
    ifstream inFile("test.txt");
    if (!inFile) {
        exit(-1);
    }
    else {
        string line;
        while (getline(inFile, line)) {
            str++;
        }
    }
    inFile.close();
    return str;
}

int vowelsFile() {
    int vowles = 0;
    ifstream inFile("test.txt");
    if (!inFile)
    {
        exit(-1);
    }
    else
    {
        while (!inFile.eof())
        {
            char ch;
            inFile >> ch;
            if (search(ch, vowels) == true) {
                vowles++;
            }
        }
    }
    inFile.close();
    return vowles;
}

int consonantsFile() {
    int cons = 0;
    ifstream inFile("test.txt");
    if (!inFile)
    {
        exit(-1);
    }
    else
    {
        while (!inFile.eof())
        {
            char ch;
            inFile >> ch;
            if (search(ch, consonants) == true) {
                cons++;
            }
        }
    }
    inFile.close();
    return cons;
}

int numbFile() {
    int num = 0;
    ifstream inFile("test.txt");
    if (!inFile)
    {
        exit(-1);
    }
    else
    {
        while (!inFile.eof())
        {
            char ch;
            inFile >> ch;
            if (search(ch, number) == true) {
                num++;
            }
        }
    }
    inFile.close();
    return num;
}
