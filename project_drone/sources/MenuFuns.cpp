#include "../include/MenuFuns.h"
void control()
{
    dron.setMode("ON");

    cout << endl << "IBAG MODE: " << dron.getMode()<< endl
         << " Vel.: "<< dron.getSpeed() << "km/h" << endl
         << " X: " << dron.getPosX() << "       Y: " << dron.getPosY() << "     Z: " << dron.getPosZ() << endl
        << "Pedido: " << package.getPackageStatus() << endl << endl;
    cout << "   ***** CONTROLES *****"<< endl;
}

void cargarpackage()
{
    char cargar;
    cout << " Inserte c para cargar paquete" << endl;
    cin>> cargar;
    if (cargar == 'c')
    {
        dron.chargePackage();
    }
}
void controlesdron()
{
    
    string _name;
    int op = 0;
    cin.clear();
    cin.ignore();

    cargarpackage();

    do
    {
        control();
        cout << " 5) DESPEGAR "<< "     0) ATERRIZAR "<< endl
             << " 3) ACELERAR "<< endl
             << " 8) ADELANTE "<< "     2) REVERSA " << endl
             << " 4) IZQ " << "     6) DERCH " << endl
             << " 9) ELEVAR " << "      7) BAJAR " << endl
             << " 1) FRENAR "<< endl << endl;
        cout << " 10) ENTREGAR PEDIDO" << endl
             << " 11) TOMAR FOTO" << endl 
             << " 12) REGRESO AUTOMATICO "<< endl 
             << " 13) VER FOTO" << endl << endl
             << " 14) EXIT"<< endl<< endl;
        cout << " Inserte opcion: ";
        cin>> op;

        switch (op)
        {
            case 0: landing.action(dron);
            break;
            case 1: brake.action(dron);
            break;
            case 2: reverse.action(dron);
            break;
            case 3: aceleration.action(dron);
            break;
            case 4: turnleft.action(dron);
            break;
            case 5: takeoff.action(dron);
            break;
            case 6: turnright.action(dron);
            break;
            case 7: descent.action(dron);
            break;
            case 8: forwardd.action(dron);
            break;
            case 9: elevation.action(dron);
            break;
            case 10: dron.deliverPackage();
            break;
            case 11: cout<< "Nombre o identificacion de la foto"<< endl;
                    cin >> _name;
                    camara.shoot(_name);
            break;
            case 12:  automaticreturn.action(dron);
            break;
            case 13: camara.showPhotos();
            break;
            case 14: cout << "Hasta la proxima"; 
                    exit(14);
            break;

            default: cout << "ERROR...OPCION NO VALIDA"<< endl;
            break;
        }
        
    } while (op >= 0 && op <= 15);

}