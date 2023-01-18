// Queue ADT
#include <iostream>
using namespace std;

class queue
{
private:
    int Rear, Front;
    int Queue[50];
    int max;
    int Size;

public:
    queue()
    {
        Size = 0;
        max = 50;
        Rear = Front - 1;
    }
    int Is_Empty();
    int Is_Full();
    void Add(int Element);
    int Delete();
    int getFront();
    void showQueue();
};


int queue :: Is_Empty()
{
    if (Front == Rear)
        return 1;
    else
        return 0;
}


int queue ::Is_Full()
{
    if (Rear == max - 1)
        return 1;
    else
        return 0;
}
void queue ::Add(int Element)
{
    if (!Is_Full())
        Queue[++Rear] = Element;
    Size++;
}
int queue ::Delete()
{
    if (!Is_Empty())
    {
        Size--;
        return (Queue[++Front]);
    }else{
        cout<<" Es el ultimo"<<endl << endl;
    }
}

int queue ::getFront()
{
    if (!Is_Empty()|| Front!=NULL)
        return (Queue[Front]);
    else{
        cout<<" No hay cola"<<endl;
    }
}
void queue::showQueue()
{
    if(!Is_Empty())
    {
        for(int i= 0; i < Size; i++)
        cout<< Queue[i]<< " ";
    }else{
        cout<<" No hay cola"<<endl;
    }
}
int main()
{
    queue Q;
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
                Q.Add(client);
            break;
            case 2:
                Q.showQueue(); 
                cout<< endl; 
            break;
            case 3:
                cout<< Q.getFront()<< endl; 
                Q.Delete(); 
            break;

            default:
            break;
        }
    } while (op!=0);

    return 0;
}