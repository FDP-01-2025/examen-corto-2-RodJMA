#include <iostream>
using namespace std;

int main()
{
    // Definir variables
    float money = 1000, discount, total, need;
    int age, option, menuE, menuP;
    // Mensaje Usuario
    cout << "Bienvenido" << endl;
    cout << "Digite su edad actual" << endl;
    cin >> age;

    // Validar que no ingrese numeros negativos
    if (age > 0)
    {
        // Si es mayor o igual que 16 mostrar menu general
        if (age >= 16)
        {
            // Menu general
            cout << "Seleccione una categoria del menu" << endl;
            cout << "1. Estudiante" << endl;
            cout << "2. Profesional" << endl;
            cout << "3. Todos" << endl;
            cin >> option;
            switch (option)
            {
            case 1: // Estudiante
                cout << "Menu estudiante" << endl;
                cout << "1. Laptop Básica: $900" << endl;
                cout << "2. Tablet Estudiantil: $600" << endl;
                cout << "3. Chromebook: $700" << endl;
                cin >> menuE;
                switch (menuE)
                {
                case 1: // Laptop Básica: $900

                    // formula descuento
                    discount = 900 * 0.8;
                    // Saldo restante
                    total = money - discount;
                    // Validar que no compre algo mayor del presupuesto que tiene
                    if (total >= 0)
                    {
                        // Si tiene suficiente presupuesto
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra exitosa: Usted ha commprado Laptop Basica" << endl;
                        cout << "Saldo Restante: $" << total << endl;
                    }
                    // Si no tiene suficiente presupuesto
                    else
                    {
                        // Formula para saber cuanto necesita
                        need = total * (-1);
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra no exitosa" << endl;
                        cout << "Le faltan $" << need << " para realizar la compra de Laptop Básica " << endl;
                    }

                    break;
                case 2: // Tablet Estudiantil: $600
                    // formula descuento
                    discount = 600 * 0.8;
                    // Saldo restante
                    total = money - discount;
                    // Validar que no compre algo mayor del presupuesto que tieine
                    if (total >= 0)
                    {
                        // Si tiene suficiente presupuesto
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra exitosa: Usted ha commprado Tablet Estudiantil" << endl;
                        cout << "Saldo Restante: $" << total << endl;
                    }
                    // Si no tiene suficiente presupuesto
                    else
                    {
                        // Formula para saber cuanto necesita
                        need = total * (-1);
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra no exitosa" << endl;
                        cout << "Le faltan $" << need << " para realizar la compra de Tablet Estudiantil" << endl;
                    }

                    break;
                case 3: // Chromebook: $700
                    // formula descuento
                    discount = 700 * 0.8;
                    // Saldo restante
                    total = money - discount;
                    // Validar que no compre algo mayor del presupuesto que tieine
                    if (total >= 0)
                    {
                        // Si tiene suficiente presupuesto
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra exitosa: Usted ha commprado de Chromebook" << endl;
                        cout << "Saldo Restante: $" << total << endl;
                    }
                    // Si no tiene suficiente presupuesto
                    else
                    {
                        // Formula para saber cuanto necesita
                        need = total * (-1);
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra no exitosa" << endl;
                        cout << "Le faltan $" << need << " para realizar la compra de Chromebook" << endl;
                    }
                    break;

                default: // Menu Estudiantes
                    cout << "Porfavor, digite un numero que este dentro del menu" << endl;
                    break;
                }
                break;
            case 2: // Profesional
                cout << "Menu Profesional" << endl;
                cout << "1. Laptop Avanzada: $1500" << endl;
                cout << "2. Tablet Pro: $1200" << endl;
                cout << "3. Estación de Trabajo: $2000" << endl;
                cin >> menuP;
                switch (menuP)
                {
                case 1: // Laptop Avanzada: $1500
                    // formula descuento
                    discount = 1500 * 0.9;
                    // Saldo restante
                    total = money - discount;
                    // Validar que no compre algo mayor del presupuesto que tieine
                    if (total >= 0)
                    {
                        // Si tiene suficiente presupuesto
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra exitosa: Usted ha commprado Laptop Avanzada" << endl;
                        cout << "Saldo Restante: $" << total << endl;
                    }
                    // Si no tiene suficiente presupuesto
                    else
                    {
                        // Formula para saber cuanto necesita
                        need = total * (-1);
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra no exitosa" << endl;
                        cout << "Le faltan $" << need << " para realizar la compra de Laptop Avanzada:" << endl;
                    }

                    break;
                case 2: // Tablet Pro: $1200
                        // formula descuento
                    discount = 1200 * 0.9;
                    // Saldo restante
                    total = money - discount;
                    // Validar que no compre algo mayor del presupuesto que tieine
                    if (total >= 0)
                    {
                        // Si tiene suficiente presupuesto
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra exitosa: Usted ha commprado Tablet Pro" << endl;
                        cout << "Saldo Restante: $" << total << endl;
                    }
                    // Si no tiene suficiente presupuesto
                    else
                    {
                        // Formula para saber cuanto necesita
                        need = total * (-1);
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra no exitosa" << endl;
                        cout << "Le faltan $" << need << " para realizar la compra de Tablet Pro" << endl;
                    }

                    break;
                case 3: // Estación de Trabajo: $2000
                    // formula descuento
                    discount = 2000 * 0.9;
                    // Saldo restante
                    total = money - discount;
                    // Validar que no compre algo mayor del presupuesto que tieine
                    if (total >= 0)
                    {
                        // Si tiene suficiente presupuesto
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra exitosa: Usted ha commprado Estación de Trabajo" << endl;
                        cout << "Saldo Restante: $" << total << endl;
                    }
                    // Si no tiene suficiente presupuesto
                    else
                    {
                        // Formula para saber cuanto necesita
                        need = total * (-1);
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra no exitosa" << endl;
                        cout << "Le faltan $" << need << " para realizar la compra de Estación de Trabajo" << endl;
                    }
                    break;

                default: // Menu Profesional
                    cout << "Porfavor, digite un numero que este dentro del menu" << endl;
                    break;
                }
                break;

            case 3: // Todos
                cout << "Menu Total" << endl;
                cout << "Menu estudiante" << endl;
                cout << " 1. Laptop Básica: $900" << endl;
                cout << " 2. Tablet Estudiantil: $600" << endl;
                cout << " 3. Chromebook: $700" << endl;
                cout << "Menu Profesional" << endl;
                cout << " 1. Laptop Avanzada: $1500" << endl;
                cout << " 2. Tablet Pro: $1200" << endl;
                cout << " 3. Estación de Trabajo: $2000" << endl;

                break;

            default: // Menu general
                cout << "Opcion invalida, digite un numero del menu" << endl;
                break;
            }
        }
        // Si es menor de 16
        else
        {
            cout << "No puede continuar con la compra" << endl;
        }
    }
    // Si ingresa numero negativos
    else
    {
        cout << "Entrada de datos invalida" << endl;
    }

    return 0;
}