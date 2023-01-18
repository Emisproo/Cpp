#include "STLfuntions.hpp"

int main()
{
    
    do
    {
       cout << endl<< "Choose Option "<<endl<<endl;
        cout << "1) Create Patient"<< endl
            << "2) UpDate Patient"<< endl
            << "3) Find Patient"<< endl
            << "4) List Patients"<< endl
            << "5) Delete Patient"<<endl
            << "6) Exit" << endl;
        cin >> op;
        switch (op)
        {
            case 1: insert();
            break;
            case 2: modifyNode();        
            break;
            case 3: find();
            break;
            case 4: printList(PatientsList); 
            break;
            case 5: deleteNode();
            break;
            default:
            break;
        }
    } while (op != 6 );
    
 

    return 0;
}
