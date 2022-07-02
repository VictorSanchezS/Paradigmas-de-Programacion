#ifndef BASICS_H
#define BASICS_H
#include <windows.h>
#include <iostream>

using namespace std;


class Basics
{
public:

    static void position(int x, int y);
    static void colour(int x);
    static void clearScreen();
    static void addDelay(double sec);
    static void pause();
    static int readInteger(string message);
    static unsigned short readUnsignedShort(string message);
    static unsigned short readAge(string message);
    static string readText(string message);
    static string readId(string message);
    static double readReal(string message);
    static float readFloat(string message);
    static bool readGender(string message);
};

#endif // BASICS_H
