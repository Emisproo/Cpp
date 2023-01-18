#include <iostream>
#include <stack>
using namespace std;

stack<int> s;

int main() {
    
    int client, op;
    do
    {
        cout<<" 1. Cargar numero telefonico de usuario llamado" << endl;
        cout<<" 2. Ver historial numeros telefonicos llamados"<<endl;
        cout<<" 0. Salir" << endl;
        cin>>op;
        switch (op)
        {
            case 1:
                cout << "Numero del cliente: ";
                cin>>client;
                s.push(client);
                cout<<endl;
            break;
            case 2:
                while (!s.empty()) 
                {
                    cout << s.top() <<endl;
                    s.pop();
                }
                cout<<endl;
            break;

            default:
            break;
        }
    } while (op!=0);

   return 0;
}