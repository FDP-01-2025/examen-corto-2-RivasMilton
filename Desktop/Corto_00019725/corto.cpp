#include<iostream>
using namespace std;

int main ()
{
    cout << "==============================================================" << endl;
    cout << "Ingrese por favor ingrese su edad para determiminar una talla" << endl;

    int talla = 0;
    char genero;
    char compra;
    char compra2;
    char compra3;

    //saldo disponible del usuario
    int saldo = 300;

    //precios ropa masculina
    int comprah1 = 130;
    int comprah2 = 90;
    int comprah3 = 900;

    //precio ropa femenina
    int compram1 = 80;
    int coompram2 = 180;

    //variable que guarda respuesta del usuario al comprar
    char ask;

    cin >> talla;

    if (talla <= 10)
    {
        cout << "==============================================================" << endl;
        cout << "su talla es 8 segun su edad: " << talla << endl;
        cout << "Por favor ingrese su genero (M, F o C): " << talla << endl;
        cout << "Sus opciones son:  M: masculino, F: femenino y C: cualquiera" << endl;
        cin >> genero;

        switch (genero)
        {
            case 'M':
            cout << "==============================================================" << endl;
            cout << "Usted has seleccionado genero masculino en la coleccion" << endl;
            cout << "Para Hombre (descuento del 30%):" << endl;
            cout << "==============================================================" << endl;
            cout << "1 Pantalon Formal: $130 (descuento del 30%)." << endl;
            cout << "2 Camisa Casual: $90 (descuento del 30%)." << endl;
            cout << "3 Chaqueta Premium: $900 (descuento del 30%)." << endl;
            cout << "==============================================================" << endl;
            cout << "ingresa el numero del producto que quieres comprar" << endl;
            cin >> compra;
            switch (compra)
            {
            case '1':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah1 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
                case '2':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }

                case '3':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah3 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "No tienes suficiente dinero para esta compra" << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
            break;
            
            default:
            cout << "Selecciona un numero valido" << endl;
                break;
            }
            break;
            case 'F':
            cout << "==============================================================" << endl;
            cout << "Usted has seleccionado genero femenino en la coleccion" << endl;
            cout << "Para Mujer (descuento del 20%):" << endl;
            cout << "==============================================================" << endl;
            cout << "1 Blusa Moderna: $80 (descuento del 20%)." << endl;
            cout << "2 Falda Elegante: $110 (descuento del 20%)." << endl;
            cout << "3 Falda Elegante: $110 (descuento del 20%)." << endl;
            cout << "==============================================================" << endl;
            cout << "ingresa el numero del producto que quieres comprar" << endl;
            cin >> compra2;

             switch (compra2)
            {
            case '1':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << compram1 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
                case '2':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << coompram2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }

                case '3':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << coompram2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
            break;
            
            default:
            cout << "Selecciona un numero valido" << endl;
                break;
            }
            break;
            case 'C':
            cout << "==============================================================" << endl;
            cout << "Usted has seleccionado cualquiera, podra ver todas las colecciones disponibles" << endl;
            cout << "Para Hombre (descuento del 30%):" << endl;
            cout << "==============================================================" << endl;
            cout << "1 Pantalón Formal: $130 (descuento del 30%)." << endl;
            cout << "2 Camisa Casual: $90 (descuento del 30%)." << endl;
            cout << "3 Chaqueta Premium: $900 (descuento del 30%)." << endl;
            cout << "==============================================================" << endl;
            cout << "Para Mujer (descuento del 20%):";
            cout << "==============================================================" << endl;
            cout << "4 Blusa Moderna: $80 (descuento del 20%)." << endl;
            cout << "5 Falda Elegante: $110 (descuento del 20%)." << endl;
            cout << "6 Falda Elegante: $110 (descuento del 20%)." << endl;
            cout << "==============================================================" << endl;
            cout << "ingresa el numero del producto que quieres comprar" << endl;
            cin >> compra;
            switch (compra)
            {
            case '1':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah1 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
                case '2':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }

                case '3':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah3 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "No tienes suficiente dinero para esta compra" << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
            case '4':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << compram1 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
                case '5':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << coompram2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }

                case '6':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << coompram2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
            break;
            
            default:
            cout << "Selecciona un numero valido" << endl;
                break;
            }
            break;
    
        
        default:
        cout << "==============================================================" << endl;
        cout << "Su opcion no es valida" << endl;
        cout << "Sus opciones son:  M: masculino, F: femenino y C: cualquiera" << endl;
         break;
        }
    }
    else if(talla >= 11 && talla < 15)
    {
        cout << "==============================================================" << endl;
        cout << "su talla es: 12 segun su edad: " << talla << endl;
        cout << "Por favor ingrese su genero (M, F o C): " << talla << endl;
        cout << "Sus opciones son:  M: masculino, F: femenino y C: cualquiera" << endl;
        cin >> genero;

        switch (genero)
        {
            case 'M':
            cout << "==============================================================" << endl;
            cout << "Usted has seleccionado genero masculino en la coleccion" << endl;
            cout << "Para Hombre (descuento del 30%):" << endl;
            cout << "==============================================================" << endl;
            cout << "1 Pantalon Formal: $130 (descuento del 30%)." << endl;
            cout << "2 Camisa Casual: $90 (descuento del 30%)." << endl;
            cout << "3 Chaqueta Premium: $900 (descuento del 30%)." << endl;
            cout << "==============================================================" << endl;
            cout << "ingresa el numero del producto que quieres comprar" << endl;
            cin >> compra;
            switch (compra)
            {
            case '1':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah1 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
                case '2':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }

                case '3':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah3 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "No tienes suficiente dinero para esta compra" << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
            break;
            
            default:
            cout << "Selecciona un numero valido" << endl;
                break;
            }
            break;
            case 'F':
            cout << "==============================================================" << endl;
            cout << "Usted has seleccionado genero femenino en la coleccion" << endl;
            cout << "Para Mujer (descuento del 20%):" << endl;
            cout << "==============================================================" << endl;
            cout << "1 Blusa Moderna: $80 (descuento del 20%)." << endl;
            cout << "2 Falda Elegante: $110 (descuento del 20%)." << endl;
            cout << "3 Falda Elegante: $110 (descuento del 20%)." << endl;
            cout << "==============================================================" << endl;
            cout << "ingresa el numero del producto que quieres comprar" << endl;
            cin >> compra2;

             switch (compra2)
            {
            case '1':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << compram1 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
                case '2':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << coompram2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }

                case '3':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << coompram2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
            break;
            
            default:
            cout << "Selecciona un numero valido" << endl;
                break;
            }
            break;
            case 'C':
            cout << "==============================================================" << endl;
            cout << "Usted has seleccionado cualquiera, podra ver todas las colecciones disponibles" << endl;
            cout << "Para Hombre (descuento del 30%):" << endl;
            cout << "==============================================================" << endl;
            cout << "1 Pantalón Formal: $130 (descuento del 30%)." << endl;
            cout << "2 Camisa Casual: $90 (descuento del 30%)." << endl;
            cout << "3 Chaqueta Premium: $900 (descuento del 30%)." << endl;
            cout << "==============================================================" << endl;
            cout << "Para Mujer (descuento del 20%):";
            cout << "==============================================================" << endl;
            cout << "4 Blusa Moderna: $80 (descuento del 20%)." << endl;
            cout << "5 Falda Elegante: $110 (descuento del 20%)." << endl;
            cout << "6 Falda Elegante: $110 (descuento del 20%)." << endl;
            cout << "==============================================================" << endl;
            cout << "ingresa el numero del producto que quieres comprar" << endl;
            cin >> compra;
            switch (compra)
            {
            case '1':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah1 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
                case '2':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }

                case '3':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah3 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "No tienes suficiente dinero para esta compra" << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
            case '4':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << compram1 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
                case '5':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << coompram2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }

                case '6':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << coompram2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
            break;
            
            default:
            cout << "Selecciona un numero valido" << endl;
                break;
            }
            break;
    
        
        default:
        cout << "==============================================================" << endl;
        cout << "Su opcion no es valida" << endl;
        cout << "Sus opciones son:  M: masculino, F: femenino y C: cualquiera" << endl;
         break;
        }
    }
    else if (talla >= 16 && talla < 60)
    {
        cout << "==============================================================" << endl;
        cout << "su talla es 16 segun su edad: " << talla << endl;
        cout << "Por favor ingrese su genero (M, F o C): " << talla << endl;
        cout << "Sus opciones son:  M: masculino, F: femenino y C: cualquiera" << endl;
        cin >> genero;

        switch (genero)
        {
            case 'M':
            cout << "==============================================================" << endl;
            cout << "Usted has seleccionado genero masculino en la coleccion" << endl;
            cout << "Para Hombre (descuento del 30%):" << endl;
            cout << "==============================================================" << endl;
            cout << "1 Pantalon Formal: $130 (descuento del 30%)." << endl;
            cout << "2 Camisa Casual: $90 (descuento del 30%)." << endl;
            cout << "3 Chaqueta Premium: $900 (descuento del 30%)." << endl;
            cout << "==============================================================" << endl;
            cout << "ingresa el numero del producto que quieres comprar" << endl;
            cin >> compra;
            switch (compra)
            {
            case '1':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah1 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
                case '2':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }

                case '3':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah3 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "No tienes suficiente dinero para esta compra" << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
            break;
            
            default:
            cout << "Selecciona un numero valido" << endl;
                break;
            }
            break;
            case 'F':
            cout << "==============================================================" << endl;
            cout << "Usted has seleccionado genero femenino en la coleccion" << endl;
            cout << "Para Mujer (descuento del 20%):" << endl;
            cout << "==============================================================" << endl;
            cout << "1 Blusa Moderna: $80 (descuento del 20%)." << endl;
            cout << "2 Falda Elegante: $110 (descuento del 20%)." << endl;
            cout << "3 Falda Elegante: $110 (descuento del 20%)." << endl;
            cout << "==============================================================" << endl;
            cout << "ingresa el numero del producto que quieres comprar" << endl;
            cin >> compra2;

             switch (compra2)
            {
            case '1':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << compram1 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
                case '2':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << coompram2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }

                case '3':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << coompram2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
            break;
            
            default:
            cout << "Selecciona un numero valido" << endl;
                break;
            }
            break;
            case 'C':
            cout << "==============================================================" << endl;
            cout << "Usted has seleccionado cualquiera, podra ver todas las colecciones disponibles" << endl;
            cout << "Para Hombre (descuento del 30%):" << endl;
            cout << "==============================================================" << endl;
            cout << "1 Pantalón Formal: $130 (descuento del 30%)." << endl;
            cout << "2 Camisa Casual: $90 (descuento del 30%)." << endl;
            cout << "3 Chaqueta Premium: $900 (descuento del 30%)." << endl;
            cout << "==============================================================" << endl;
            cout << "Para Mujer (descuento del 20%):";
            cout << "==============================================================" << endl;
            cout << "4 Blusa Moderna: $80 (descuento del 20%)." << endl;
            cout << "5 Falda Elegante: $110 (descuento del 20%)." << endl;
            cout << "6 Falda Elegante: $110 (descuento del 20%)." << endl;
            cout << "==============================================================" << endl;
            cout << "ingresa el numero del producto que quieres comprar" << endl;
            cin >> compra;
            switch (compra)
            {
            case '1':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah1 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
                case '2':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }

                case '3':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah3 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "No tienes suficiente dinero para esta compra" << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
            case '4':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << compram1 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
                case '5':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << coompram2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }

                case '6':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << coompram2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
            break;
            
            default:
            cout << "Selecciona un numero valido" << endl;
                break;
            }
            break;
    
        
        default:
        cout << "==============================================================" << endl;
        cout << "Su opcion no es valida" << endl;
        cout << "Sus opciones son:  M: masculino, F: femenino y C: cualquiera" << endl;
         break;
        }
    }
    else if (talla >= 61 && talla < 120)
    {
        cout << "==============================================================" << endl;
        cout << "su talla es 18 segun su edad: " << talla << endl;
        cout << "Por favor ingrese su genero (M, F o C): " << talla << endl;
        cout << "Sus opciones son:  M: masculino, F: femenino y C: cualquiera" << endl;
        cin >> genero;

        switch (genero)
        {
            case 'M':
            cout << "==============================================================" << endl;
            cout << "Usted has seleccionado genero masculino en la coleccion" << endl;
            cout << "Para Hombre (descuento del 30%):" << endl;
            cout << "==============================================================" << endl;
            cout << "1 Pantalon Formal: $130 (descuento del 30%)." << endl;
            cout << "2 Camisa Casual: $90 (descuento del 30%)." << endl;
            cout << "3 Chaqueta Premium: $900 (descuento del 30%)." << endl;
            cout << "==============================================================" << endl;
            cout << "ingresa el numero del producto que quieres comprar" << endl;
            cin >> compra;
            switch (compra)
            {
            case '1':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah1 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
                case '2':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }

                case '3':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah3 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "No tienes suficiente dinero para esta compra" << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
            break;
            
            default:
            cout << "Selecciona un numero valido" << endl;
                break;
            }
            break;
            case 'F':
            cout << "==============================================================" << endl;
            cout << "Usted has seleccionado genero femenino en la coleccion" << endl;
            cout << "Para Mujer (descuento del 20%):" << endl;
            cout << "==============================================================" << endl;
            cout << "1 Blusa Moderna: $80 (descuento del 20%)." << endl;
            cout << "2 Falda Elegante: $110 (descuento del 20%)." << endl;
            cout << "3 Falda Elegante: $110 (descuento del 20%)." << endl;
            cout << "==============================================================" << endl;
            cout << "ingresa el numero del producto que quieres comprar" << endl;
            cin >> compra2;

             switch (compra2)
            {
            case '1':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << compram1 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
                case '2':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << coompram2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }

                case '3':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << coompram2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
            break;
            
            default:
            cout << "Selecciona un numero valido" << endl;
                break;
            }
            break;
            case 'C':
            cout << "==============================================================" << endl;
            cout << "Usted has seleccionado cualquiera, podra ver todas las colecciones disponibles" << endl;
            cout << "Para Hombre (descuento del 30%):" << endl;
            cout << "==============================================================" << endl;
            cout << "1 Pantalón Formal: $130 (descuento del 30%)." << endl;
            cout << "2 Camisa Casual: $90 (descuento del 30%)." << endl;
            cout << "3 Chaqueta Premium: $900 (descuento del 30%)." << endl;
            cout << "==============================================================" << endl;
            cout << "Para Mujer (descuento del 20%):";
            cout << "==============================================================" << endl;
            cout << "4 Blusa Moderna: $80 (descuento del 20%)." << endl;
            cout << "5 Falda Elegante: $110 (descuento del 20%)." << endl;
            cout << "6 Falda Elegante: $110 (descuento del 20%)." << endl;
            cout << "==============================================================" << endl;
            cout << "ingresa el numero del producto que quieres comprar" << endl;
            cin >> compra;
            switch (compra)
            {
            case '1':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah1 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
                case '2':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }

                case '3':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << comprah3 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "No tienes suficiente dinero para esta compra" << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
            case '4':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << compram1 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
                case '5':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << coompram2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }

                case '6':
                cout << "==============================================================" << endl;
                cout << "tu saldo de compra es de: $300" << endl;
                cout << "usted esta llevando un producto con el valor de: " << coompram2 << endl;
                cout << "desea realizar la compra? y/n" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "tu compra se realizo con exito tu cambio es de: " << endl;
                    exit;
                }
                else 
                {
                    cout << "No se realizo tu compra, lastima" << endl;
                }
            break;
            
            default:
            cout << "Selecciona un numero valido" << endl;
                break;
            }
            break;
    
        
        default:
        cout << "==============================================================" << endl;
        cout << "Su opcion no es valida" << endl;
        cout << "Sus opciones son:  M: masculino, F: femenino y C: cualquiera" << endl;
         break;
        }
    }

    return 0;

}