#include <iostream>
using namespace std;

int main()
{
    float money = 1000, discount, total, need;
    int age, option, menuE, menuP;

    cout << "Bienvenido" << endl;
    cout << "Digite su edad actual" << endl;
    cin >> age;

    if (age > 0)
    {
        if (age >= 16)
        {
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
                cout << "3. Laptop Básica: $900" << endl;
                cin >> menuE;
                switch (menuE)
                {
                case 1: // Laptop Básica: $900
                    discount = 900 * 0.8;
                    total = money - discount;
                    if (total >= 0)
                    {
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra exitosa: Usted ha commprado Laptop Basica" << endl;
                        cout << "Saldo Restante: $" << total << endl;
                    }
                    else
                    {
                        need = total * (-1);
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra no exitosa" << endl;
                        cout << "Le faltan $" << need << " para realizar la compra" << endl;
                    }

                    break;
                case 2: // Tablet Estudiantil: $600
                    discount = 600 * 0.8;
                    total = money - discount;
                    if (total >= 0)
                    {
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra exitosa: Usted ha commprado Tablet Estudiantil" << endl;
                        cout << "Saldo Restante: $" << total << endl;
                    }
                    else
                    {
                        need = total * (-1);
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra no exitosa" << endl;
                        cout << "Le faltan $" << need << " para realizar la compra" << endl;
                    }

                    break;
                case 3: // Laptop Básica: $900
                    discount = 900 * 0.8;
                    total = money - discount;
                    if (total >= 0)
                    {
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra exitosa: Usted ha commprado Laptop Básica" << endl;
                        cout << "Saldo Restante: $" << total << endl;
                    }
                    else
                    {
                        need = total * (-1);
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra no exitosa" << endl;
                        cout << "Le faltan $" << need << " para realizar la compra" << endl;
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
                    discount = 1500 * 0.9;
                    total = money - discount;
                    if (total >= 0)
                    {
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra exitosa: Usted ha commprado Laptop Basica" << endl;
                        cout << "Saldo Restante: $" << total << endl;
                    }
                    else
                    {
                        need = total * (-1);
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra no exitosa" << endl;
                        cout << "Le faltan $" << need << " para realizar la compra" << endl;
                    }

                    break;
                case 2: // Tablet Pro: $1200
                    discount = 1200 * 0.9;
                    total = money - discount;
                    if (total >= 0)
                    {
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra exitosa: Usted ha commprado Tablet Estudiantil" << endl;
                        cout << "Saldo Restante: $" << total << endl;
                    }
                    else
                    {
                        need = total * (-1);
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra no exitosa" << endl;
                        cout << "Le faltan $" << need << " para realizar la compra" << endl;
                    }

                    break;
                case 3: // Estación de Trabajo: $2000
                    discount = 2000 * 0.9;
                    total = money - discount;
                    if (total >= 0)
                    {
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra exitosa: Usted ha commprado Laptop Básica" << endl;
                        cout << "Saldo Restante: $" << total << endl;
                    }
                    else
                    {
                        need = total * (-1);
                        cout << "Saldo disponible: $" << money << endl;
                        cout << "Compra no exitosa" << endl;
                        cout << "Le faltan $" << need << " para realizar la compra" << endl;
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
                cout << " 3. Laptop Básica: $900" << endl;
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
        else
        {
            cout << "No puede continuar con la compra" << endl;
        }
    }
    else
    {
        cout << "Entrada de datos invalida" << endl;
    }

    return 0;
}