#include "person.h"
#include <windows.h>


string Person::getCode() const
{
    return code;
}

void Person::setCode(const string &value)
{
    code = value;
}

string Person::getSurnames() const
{
    return surnames;
}

void Person::setSurnames(const string &value)
{
    surnames = value;
}

string Person::getNames() const
{
    return names;
}

void Person::setNames(const string &value)
{
    names = value;
}

string Person::getDateBirth() const
{
    return dateBirth;
}

void Person::setDateBirth(const string &value)
{
    dateBirth = value;
}

string Person::getId() const
{
    return id;
}

void Person::setId(const string &value)
{
    id = value;
}

string Person::getAddress() const
{
    return address;
}

void Person::setAddress(const string &value)
{
    address = value;
}

double Person::getSalary() const
{
    return salary;
}

void Person::setSalary(double value)
{
    salary = value;
}

unsigned short Person::getNumberChildren() const
{
    return numberChildren;
}

void Person::setNumberChildren(unsigned short value)
{
    numberChildren = value;
}

int Person::counter = 1;

//Añadir CONFIG += c++11 en el .pro
Person::Person()
{
    this->salary = 0.0;
    this->numberChildren = 0;
    this->code = "Persona - " + to_string(Person::counter);
    Person::counter++;
}

/*Person::Person()
{
    this->salary = 0.0;
    this->numberChildren = 0;

    string codigo = "P";
    char numero[10];
    string num;
    int valor = Person::counter++;
    itoa(valor , numero , 10);
    num = string(numero);
    codigo.append(num);
    this->code = codigo;
}*/

Person::~Person()
{

}

int Person::readInteger( string message ){
    int integer;
    do{
        cout << message;
        cin >> integer;
    }while(!( integer > 0 ));
    return integer;
}

unsigned short Person::readUnsignedShort( string message ){
    unsigned short unsignedShort;
    do{
        cout << message;
        cin >> unsignedShort;
    }while(!( unsignedShort > 0 ));
    return unsignedShort;
}

unsigned short Person::readAge( string message ){
    unsigned short age;
    do{
        cout << message;
        cin >> age;
    }while(!( age >= 18 && age <= 120 ));
    return age;
}

string Person::readText(string message){
    string text;
    do{
        cout << message;
        fflush(stdin);
        getline(cin,text);
    }while(!( text.length() > 0));
    return text;
}

string Person::readId(string message){
    string text;
    do{
        cout << message;
        fflush(stdin);
        getline(cin, text);
    }while(!(text.length() == 8));
    return text;
}

double Person::readReal (string message){
    double number;
    do{
        cout << message;
        cin >> number;
    }while(!( number > 0));
    return number;
}

bool Person::readGender(string message){
    string gender;
    do{
        cout << message;
        fflush(stdin);
        getline(cin, gender);
    }while(gender != "M" && gender != "F");
    if(gender == "M") return true;
    else return false;
}

void Person::position(int x, int y){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;dwPos.X = x;dwPos.Y= y;
    SetConsoleCursorPosition(hcon,dwPos);
}

void Person::colour(int x){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,x);
}


void Person::readPerson(){
    system("cls");
    //position(30,5); this->code = readText("CODIGO: ");
    position(30,6); this->names = readText("NOMBRES: ");
    position(30,7); this->surnames = readText("APELLIDOS: ");
    position(30,8); this->dateBirth = readText("FECH. NAC.: ");
    position(30,9); this->salary = readReal("SALARIO: ");
    position(30,10); this->numberChildren = readUnsignedShort("N HIJOS: ");
    position(30,11); this->id = readText("DNI: ");
    position(30,12); this->address = readText("DIRECCION: ");
}

void Person::showPerson(int x){
    position(10 ,5 + x);    cout << this->code;
    position(25 ,5 + x);    cout << this->names;
    position(35 ,5 + x);    cout << this->surnames;
    position(55 ,5 + x);    cout << this->dateBirth;
    position(75 ,5 + x);    cout << this->salary;
    position(85 ,5 + x);    cout << this->numberChildren;
    position(95 ,5 + x);    cout << this->id;
    position(110,5 + x );   cout << this->address;
}
