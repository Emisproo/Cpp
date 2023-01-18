// CPP code to illustrate Queue in 
// Standard Template Library (STL)
#include <iostream>
#include <queue>
  
using namespace std;
  
// Print the queue
void showq(queue<int> Queue)
{
    queue<int> g = Queue;
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}
void getNextClient(queue<int> Queue)
{
    queue<int> g = Queue;
    if(!g.empty())
    {
        cout << g.front(); 
    }else{
        cout<<"Era el ultimo"<<endl;
    }
}
// Driver Code
int main()
{
    queue<int> NewQueue;
    int client, op;
    do
    {
        cout << " 1. Ingresar numero de cliente"<<endl;
        cout<<" 2. Cola de Clientes:" << endl;
        cout<<" 3. Proximo Cliente:" << endl;
        cout<<" 0. Salir" << endl;
        cin>>op;
        switch (op)
        {
            case 1:
                cout << "Numero de cliente: ";
                cin>>client;
                NewQueue.push(client);
            break;
            case 2:
                showq(NewQueue);
            break;
            case 3:
                getNextClient(NewQueue);
                NewQueue.pop();
                cout<<endl;

            break;

            default:
            break;
        }
    } while (op!=0);

    return 0;
}