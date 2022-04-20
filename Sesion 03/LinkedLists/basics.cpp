#include <iostream>
#include <windows.h>
#include <string>

#define increase 3

using namespace std;

void position(int x,int y){
     HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
     COORD dwPos;dwPos.X = x;dwPos.Y= y;
     SetConsoleCursorPosition(hcon,dwPos);
}

void colour(int x){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,x);
}

string itoa(int number) { return itoa(number); }
string itoa(float number) { return itoa(number); }

void clearScreen(){
    system("cls");
}

void addDelay(double sec){
    Sleep(sec*1000);
}

void pause(){
    system("pause");
}

int readInteger( string message ){
    int integer;
    do{
        cout << message;
        cin >> integer;
    }while(!( integer > 0 ));
    return integer;
}

unsigned short readUnsignedShort( string message ){
    unsigned short unsignedShort;
    do{
        cout << message;
        cin >> unsignedShort;
    }while(!( unsignedShort > 0 ));
    return unsignedShort;
}

unsigned short readAge( string message ){
    unsigned short age;
    do{
        cout << message;
        cin >> age;
    }while(!( age >= 18 && age <= 120 ));
    return age;
}

string readText(string message){
    string text;
    do{
        cout << message;
        fflush(stdin);
        getline(cin,text);
    }while(!( text.length() > 0));
    return text;
}

string readId(string message){
    string text;
    do{
        cout << message;
        fflush(stdin);
        getline(cin, text);
    }while(!(text.length() == 8));
    return text;
}

double readReal (string message){
    double number;
    do{
        cout << message;
        cin >> number;
    }while(!( number > 0));
    return number;
}

bool readGender(string message){
    string gender;
    do{
        cout << message;
        fflush(stdin);
        getline(cin, gender);
    }while(gender != "M" && gender != "F");
    if(gender == "M") return true;
    else return false;
}

void welcome(){
    for(int x = 0; x < 8 ; x++ ){
        position(45,4 + x );cout << "**************************";
        position(45,5 + x );cout << "| BIENVENIDO AL BANCO BV |";
        position(45,6 + x );cout << "**************************";
        addDelay(0.85);
        system("cls");
    }
    position(45,8 );cout << "**************************";
    position(45,9 );cout << "| BIENVENIDO AL BANCO BV |";
    position(45,10 );cout << "**************************";
    addDelay(1.5);
    system("cls");
}

void entryDenied(){
    position(45,5);cout << "USTED NO INGRESO AL SISTEMA";
    position(39,10);cout << " ";
}

int menu(){
    int opc;
    system("cls");
    position(40, 3); colour(10);cout<<"======================================";
    position(40, 4); colour(10);cout<<"||      TALLER LES - SESION 03      ||";
    position(40, 5); colour(10);cout<<"======================================";
    colour(7);
    position(40, 6); colour(10);cout<<"======================================";
    position(40, 7); colour(10);cout<<"||         MENU DE OPCIONES         ||";
    position(40, 8); colour(10);cout<<"======================================";

    position(40, 10); colour(10);cout<<"[1] Registrar Equipo";
    position(40, 11); colour(10);cout<<"[2] Registrar Jugador";
    position(40, 12); colour(10);cout<<"[3] Lista equipos con sus datos";
    position(40, 13); colour(10);cout<<"[4] Lista de Jugadores";
    position(40, 14);colour(10);cout<<"[5] Buscar Equipo";
    position(40, 15);colour(10);cout<<"[6] Buscar Jugador";
    position(40, 16);colour(10);cout<<"[0] Salir";
    do{
        position(40, 18);colour(33);cout<<"[*] INGRESE OPCION: ";
        cin>>opc;
    }while(!( opc >= 0 && opc < 7 ));
    system("color 7");
    return opc;
}

void registrationHeader(){
    system("cls");
    position(40,3);cout << "**********************";
    position(40,4);cout << "|  REGISTRAR EQUIPO  |";
    position(40,5);cout << "**********************";
}

void emptyGraph(){
    position(45,8); cout << "|==============================|";
    position(45,9); cout << "|\aNO HAY SUCURUSALES REGISTRADAS|";
    position(45,10); cout<< "|==============================|";
    addDelay(1);
}

void emptyList(){
    system("cls");
    position(45,8); cout << "|=================================|";
    position(45,9); cout << "|\a NO HAY TRABAJADORES REGISTRADOS |";
    position(45,10); cout<< "|=================================|";
    addDelay(1);
}

void emptyQueue(){
    system("cls");
    position(45,8); cout << "|===============================|";
    position(45,9); cout << "| \aNO HAY CLIENTES REGISTRADOS  |";
    position(45,10); cout<< "|===============================|";
    addDelay(1);
}

void headerTeam(){
    position(12,4); cout << "CODIGO";
    position(20,4); cout << "NOMBRE";
    position(35,4);cout << "CIUDAD";
    position(45,4);cout << "DT";
    position(65,4);cout << "ESTADIO";
}

void headerPlayers(){
    position(8,4); cout << "NOMBRES";
    position(25,4); cout << "APELLIDOS";
    position(45,4);cout << "EDAD";
    position(55,4);cout << "ESTATURA";
    position(65,4);cout << "PESO";
    position(75,4);cout << "POSICION";
}
