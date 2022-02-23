#if 0

//VT 103 COD 001

#include <iostream>

struct Alumno
{
    int id{};
    int edad{};
    double tutorId{};
};

int main()
{
    Alumno juan { 1, 17, 2.5 };

    // Usamos operador de selección de miembro (.) 
    // para seleccionar un miembro del objeto struct
    ++juan.edad; // Juna ha cumplido años
    juan.tutorId = 3.0; // Juan ha cambiado de tutor

    return 0;
}


//VT 103 COD 002
#include <iostream>

struct Alumno
{
    int id{};
    int edad{};
    double tutorId{};
};

void imprimirAlumno(const Alumno& e)
{
    // Usamos operador de selección de miembro (.) 
    // para seleccionar un miembro desde referencia a struct
    std::cout << "  Id: " << e.id;
    std::cout << "  Edad: " << e.edad;
    std::cout << "  tutorId: " << e.tutorId;
}

int main()
{
    Alumno juan{ 1, 17, 2.5 };

    ++juan.edad;
    juan.tutorId = 3.5;

    imprimirAlumno(juan);

    return 0;
}


//VT 103 COD 003
#include <iostream>

struct Alumno
{
    int id{};
    int edad{};
    double tutorId{};
};

int main()
{
    Alumno juan{ 1, 17, 2.5 };

    ++juan.edad;
    juan.tutorId = 3.5;

    Alumno* ptr{ &juan };
    std::cout << ptr.id; // Error compilación: no podemos usar operador 
                         // "." con punteros

    return 0;
}


//VT 103 COD 004
#include <iostream>

struct Alumno
{
    int id{};
    int edad{};
    double tutorId{};
};

int main()
{
    Alumno juan{ 1, 17, 2.5 };

    ++juan.edad;
    juan.tutorId = 3.5;

    Alumno* ptr{ &juan };
    std::cout << (*ptr).id;  // Funciona, pero confuso: Primero indireccionamos ptr, 
                            // luego usamos operador selección de miembro

    return 0;
}


//VT 103 COD 005
#include <iostream>

struct Alumno
{
    int id{};
    int edad{};
    double tutorId{};
};

int main()
{
    Alumno juan{ 1, 17, 2.5 };

    ++juan.edad;
    juan.tutorId = 3.5;

    Alumno* ptr{ &juan };
    std::cout << ptr->id; // Mejor: usa -> para seleccionar miembro de puntero a objeto

    return 0;
}
#endif
//VT 103 COD 006
#include <iostream>
#include <string>

struct Pata
{
    int garras{};
};

struct Animal
{
    std::string nombre{};
    Pata pata{};
};

void impAnimal(Animal& a)
{
    std::cout << a.nombre << " " << a.pata.garras << '\n';
}

int main()
{
    Animal puma{ "Puma", { 5 } };

    Animal* ptr{ &puma };

    impAnimal(puma);

    // ptr es un puntero, usa ->
    // pata no es un puntero, usa .

    std::cout <<ptr-> nombre << " " << ptr->pata.garras << '\n';

    return 0;
}


#if 0
#endif