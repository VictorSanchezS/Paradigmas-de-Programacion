#include <structures.cpp>

// Inicializar Lista de estudiants

void initialiseStudentsList(studentsList *students){
    students->header = NULL;
    students->max = 0;
    students->numberStudents = 0;
}

// Inicializar Lista de Cursos

void initialiseCourseList(courseList *courses){
    courses->header = NULL;
    courses->max = 0;
    courses->numberCourses = 0;
}

//opc 1 Registar Alumno

void initialiseStudent(student *alumno){
    alumno->age = 0;

    alumno->courses = new courseList();

    alumno->courses->header = NULL;
    alumno->courses->max = 0;
    alumno->courses->numberCourses = 0;
}

void readStudent(student *alumno){
    clearScreen();
    registrationHeaderStudent();
    position(40,6);alumno->code = readText("CODIGO: ");
    position(40,7);alumno->surnames = readText("APELLIDOS: ");
    position(40,8);alumno->names = readText("NOMBRES: ");
    position(40,9);alumno->age = readAge("EDAD: ");
    position(40,10);alumno->career = readText("CARRERA: ");
}

void grow(studentsList *students){
    student *aux = new student[students->max + increase];
    for(int x = 0; x < students->max; x++){
        *(aux + x ) = *(students->header + x);
    }
    if(students->header != NULL){
        delete students->header;
    }
    students->header = aux;
    students->max += increase;
}

void insertStudent(studentsList *students, student *alumno){
    if(students->numberStudents == students->max){
        grow(students);
    }
    *(students->header + students->numberStudents) = *alumno;
    students->numberStudents++;
}

void registerStudent(studentsList *students){
    char answer;
    do{
        student *alumno = new student;
        initialiseStudent(alumno);
        readStudent(alumno);
        insertStudent(students,alumno);
        do{
            position(40,12);cout << "Desea insertar otro Alumno?: ";
            fflush(stdin);
            cin.get(answer);
        }while(!(answer == 'N' || answer == 'n' || answer == 'S' || answer == 's'));
    }while(!(answer == 'N' || answer == 'n'));
}

// opc 2 Registrar Curso

void initialiseCourse(course *curso){
    curso->cycle = 0;
    curso->numberCredits = 0;
}

void readCourse(course *curso){
    position(35,5); curso->code = readText("CODIGO: ");
    position(35,6); curso->name = readText("NOMBRE: ");
    position(35,7); curso->cycle = readUnsignedShort("CICLO: ");
    position(35,8); curso->numberCredits = readUnsignedShort("CREDITOS: ");
}

void growCourses(courseList *courses){
    course *aux = new course[courses->max + increase];
    for(int x = 0; x < courses->max; x++){
        *(aux + x ) = *(courses->header + x);
    }
    if(courses->header != NULL){
        delete courses->header;
    }
    courses->header = aux;
    courses->max += increase;
}

void insertCourse(courseList *courses,course *curso){
    if(courses->numberCourses == courses->max){
        growCourses(courses);
    }
    *(courses->header + courses->numberCourses) = *curso;
    courses->numberCourses++;
}

void registerCourse(courseList *courses){
    clearScreen();
    char answer;
    do{
        course *curso = new course;
        initialiseCourse(curso);
        readCourse(curso);
        insertCourse(courses,curso);
        do{
            position(40,12);cout << "Desea insertar otro Curso?: ";
            fflush(stdin);
            cin.get(answer);
        }while(!(answer == 'N' || answer == 'n' || answer == 'S' || answer == 's'));
    }while(!(answer == 'N' || answer == 'n'));
}

// opc 3 Matricular Alumno en un curso

course *chooseCourse(courseList *courses){
    clearScreen();
    int number;
    cout << "Escoja entre los " << courses->numberCourses <<" cursos siguientes: " << endl << endl;
    for(int x = 0; x < courses->numberCourses;x++){
        cout << "[" << x + 1 <<"]";
        cout << " - Curso:";
        cout << ((courses->header + x)->name);
        cout << endl;
    }
    cout << endl << "Introduzca la Opcion deseada: ";
    cin >> number;

    while(!(1 <= number && number <= courses->numberCourses)){
        cout << "Por favor, introduzca un valor entre 1 y " << courses->numberCourses << "."<<endl;
        fflush(stdin);
        cin >> number;
    }
    return (courses->header + number) - 1;
}

student *chooseStudent(studentsList *students){
    clearScreen();
    int number;
    cout << "Escoja entre los " << students->numberStudents <<" estudiantes siguientes: " << endl << endl;
    for(int x = 0; x < students->numberStudents;x++){
        cout << "[" << x + 1 <<"]";
        cout << " - Estudiante:";
        cout << ((students->header + x)->names);
        cout << endl;
    }
    cout << endl << "Introduzca la Opcion deseada: ";
    cin >> number;

    while(!(1 <= number && number <= students->numberStudents)){
        cout << "Por favor, introduzca un valor entre 1 y " << students->numberStudents << "."<<endl;
        fflush(stdin);
        cin >> number;
    }
    return (students->header + number) - 1;
}

void enrollStudent(studentsList *students,courseList *courses){
    clearScreen();
    if(students->numberStudents == 0 && courses->numberCourses == 0){
        position(35,5); cout << "Registre Alumnos y/o Cursos";
        return;
    }

    int x = 0;

    student *aux = new student();
    aux = chooseStudent(students);

    course *aux2 = new course();
    aux2 = chooseCourse(courses);
}

//opc  Listar Estudiantes

void showStudents(student *alumno,int x){
    headerStudents();
    position(20, x + 5); cout << alumno->code;
    position(40, x + 5); cout << alumno->surnames;
    position(60, x + 5); cout << alumno->names;
    position(80, x + 5); cout << alumno->age;
    position(100, x + 5); cout << alumno->career;

}

void listStudents(studentsList *students){
    clearScreen();
    position(60,3); cout << "LISTA DE ALUMNOS";
    headerStudents();
    for(int x = 0; x < students->numberStudents; x++){
        showStudents((students->header + x), x);
    }
}

//opc  Buscar Alumno

void searchStudent(studentsList *students){
    if(students->numberStudents == 0){
        emptyList();
        return;
    }
    string studentToSearch;
    bool sw = false;
    clearScreen();
    studentToSearch = readText("INGRESE CODIGO DE ESTUDIANTE A BUSCAR: ");
    clearScreen();
    for(int i = 0 ; i < students->numberStudents ; i++){
        if((students->header + i)->code == studentToSearch){
            showStudents((students->header + i),0);
            sw = true;
            break;
        }
    }
    if(sw == false){
        position(35,5); cout << "Alumno no Encontrado";
    }
    cout << endl;
    system("pause");
}

void averageAges(studentsList *students){
    if(students->numberStudents == 0){
        emptyList();
        return;
    }
    double avarage;
    int addition = 0;
    for(int x = 0 ; x < students->numberStudents; x++){
        addition += (students->header + x)->age;
    }
    avarage = addition / students->numberStudents;
    clearScreen();
    position(35,5);  cout << "El promedio de edades ese: " << avarage;
    system("Pause");
}



int main()
{
    studentsList *students = new studentsList;
    initialiseStudentsList(students);
    courseList *courses = new courseList();
    initialiseCourseList(courses);
    int opc;
    do {
        opc = menu();
        switch (opc) {
            case 1: registerStudent(students); break;
            case 2: registerCourse(courses); break;
            case 3: enrollStudent(students,courses); break;
            case 4: averageAges(students); break;
            case 5: ; break;
            case 6: averageAges(students); break;
            case 7: averageAges(students); break;
        }
    }while (!(opc == 0));
    return 0;
}

