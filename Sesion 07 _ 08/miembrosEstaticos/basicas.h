#ifndef BASICAS_H
#define BASICAS_H


class Basicas
{
public:
    Basicas();
    ~Basicas();
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
    static bool readGender(string message);
    static float readFloat(string message);
};

#endif // BASICAS_H
