#include "LinkedList.hpp"
#include "PatientNode.hpp"

int main ()
{   
    LinkedList* list = new LinkedList();
    int op, id;
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
        case 1: 
                cout << "Enter id: ";
                cin>> id;
                list->insertNode(id);
                cout << " Patient created"<< endl;
        break;
        
        case 2: 
                list->modifyNode();
                cout << " Patient updated"<< endl;
        break;

        case 3: 
                cout<< "Insert patient ID: ";
                cin>>id;
                list->findNode(id);
        break;
        case 4:
                list->printList(); 
        break;

        case 5:
                cout<< "Insert patient ID: ";
                cin>>id;
                list->deleteNode(id);
        break;
        default:
            break;
        }
    } while (op != 6 );
    
 delete list;

    return 0;
}