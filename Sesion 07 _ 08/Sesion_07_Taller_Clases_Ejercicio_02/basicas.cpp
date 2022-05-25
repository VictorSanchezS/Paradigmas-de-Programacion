#include "basicas.h"


Basics::Basics()
{

}

Basics::~Basics()
{

}

#define increase 3


void Basics::position(int x,int y){
     HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
     COORD dwPos;dwPos.X = x;dwPos.Y= y;
     SetConsoleCursorPosition(hcon,dwPos);
}

void Basics::colour(int x){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,x);
}

void Basics::clearScreen(){
    system("cls");
}

void Basics::addDelay(double sec){
    Sleep(sec*1000);
}

void Basics::pause(){
    system("pause");
}


int Basics::readInteger( string message ){
    int integer;
    do{
        cout << message;
        cin >> integer;
    }while(!( integer > 0 ));
    return integer;
}

unsigned short Basics::readUnsignedShort( string message ){
    unsigned short unsignedShort;
    do{
        cout << message;
        cin >> unsignedShort;
    }while(!( unsignedShort > 0 ));
    return unsignedShort;
}

unsigned short Basics::readAge( string message ){
    unsigned short age;
    do{
        cout << message;
        cin >> age;
    }while(!( age >= 18 && age <= 120 ));
    return age;
}

string Basics::readText(string message){
    string text;
    do{
        cout << message;
        fflush(stdin);
        getline(cin,text);
    }while(!( text.length() > 0));
    return text;
}

string Basics::readId(string message){
    string text;
    do{
        cout << message;
        fflush(stdin);
        getline(cin, text);
    }while(!(text.length() == 8));
    return text;
}

double Basics::readReal (string message){
    double number;
    do{
        cout << message;
        cin >> number;
    }while(!( number > 0));
    return number;
}

float Basics::readFloat (string message){
    float number;
    do{
        cout << message;
        cin >> number;
    }while(!( number > 0));
    return number;
}

bool Basics::readGender(string message){
    string gender;
    do{
        cout << message;
        fflush(stdin);
        getline(cin, gender);
    }while(gender != "M" && gender != "F" && gender != "m"
           && gender != "f" && gender != "Masculino" && gender != "Femenino"
           && gender != "masculino" && gender != "femenino");
    if(gender == "M" || gender == "m" || gender == "Masculino" ||
            gender == "masculino") return true;
    else return false;
}
