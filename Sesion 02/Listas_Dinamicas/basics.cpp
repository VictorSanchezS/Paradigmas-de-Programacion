#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

#define increase 3

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
    }while(!( age >= 16 && age <= 120 ));
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
    position(40, 4); colour(10);cout<<"||            TALLER LES            ||";
    position(40, 5); colour(10);cout<<"======================================";
    colour(7);
    position(40, 6); colour(11);cout<<"======================================";
    position(40, 7); colour(11);cout<<"||         MENU DE OPCIONES         ||";
    position(40, 8); colour(11);cout<<"======================================";

    position(40, 10); colour(11);cout<<"[1] Registrar Alumno";
    position(40, 11); colour(11);cout<<"[2] Registrar Curso";
    position(40, 12); colour(11);cout<<"[3] Matricular Alumno(elegir Curso)";
    position(40, 13); colour(11);cout<<"[4] Listar Alumnos";
    position(40, 14);colour(11);cout<<"[5] Cursos Matriculados Por Alumno";
    position(40, 15); colour(11);cout<<"[6] Buscar Alumno";
    position(40, 16); colour(11);cout<<"[7] Promedio de Edades";
    position(40, 17);colour(11);cout<<"[0] Salir";
    do{
        position(40, 19);colour(33);cout<<"[*] INGRESE OPCION: ";
        cin>>opc;
    }while(!( opc >= 0 && opc < 8 ));
    system("color 7");
    return opc;
}

void registrationHeaderDisease(){
    system("cls");
    position(40,3);cout << "**************************";
    position(40,4);cout << "|  REGISTRAR ENFERMEDAD  |";
    position(40,5);cout << "**************************";
}

void registrationHeaderStudent(){
    system("cls");
    position(40,3);cout << "**********************";
    position(40,4);cout << "|  REGISTRAR ALUMNO  |";
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
    position(45,8); cout << "|============================|";
    position(45,9); cout << "|\a NO HAY ALUMNOS REGISTRADOS |";
    position(45,10); cout<< "|============================|";
    addDelay(2);
}

void emptyPatientsList(){
    system("cls");
    position(45,8); cout << "|==============================|";
    position(45,9); cout << "|\a NO HAY PACIENTES REGISTRADOS |";
    position(45,10); cout<< "|==============================|";
    addDelay(2);
}

void emptyQueue(){
    system("cls");
    position(45,8); cout << "|===============================|";
    position(45,9); cout << "| \aNO HAY CLIENTES REGISTRADOS  |";
    position(45,10); cout<< "|===============================|";
    addDelay(1);
}

void headerDiseases(){
    position(12,4); cout << "CODIGO";
    position(20,4); cout << "NOMBRE";
}

void headerStudents(){
    position(20,4); cout << "CODIGO";
    position(40,4); cout << "APELLIDOS";
    position(60,4);cout << "NOMBRES";
    position(80,4);cout << "EDAD";
    position(100,4);cout << "CARRERA";
}




