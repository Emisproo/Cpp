#include <iostream>
using namespace std;

class Stack
{
private:
    int stack[50];
    int MaxCapacity;
    int top;

public:
    Stack()
    {
        MaxCapacity = 50;
        top = -1;
    }
    int getTop();
    int pop();
    void push(int Element);
    int Empty();
    //int CurrSize();
    int IsFull();
    void getStack(Stack p);
};
int Stack ::getTop()
{
    if (!Empty()){
        return (stack[top]);
    }else{
        return 00;
    }    
}

int Stack ::pop()
{
    if (!Empty()){
        return (stack[top--]);
    }else{
        return 00;
    }
}
int Stack ::Empty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
int Stack ::IsFull()
{
    if (top == MaxCapacity - 1)
        return 1;
    else
        return 0;
}
/*int Stack ::CurrSize()
{
    return (top + 1);
}*/
void Stack ::push(int Element)
{
    if (!IsFull())
        stack[++top] = Element;
}
void Stack::getStack(Stack p)
{
    Stack t = p;
    while(!p.Empty())
    {
        cout<< p.getTop()<<endl;
        p.pop();
    }
}
int main()
{
    Stack S;
    int client;
    int op;
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
                S.push(client);
                cout<<endl;
            break;
            case 2:
                S.getStack(S);
                cout<<endl;
            break;

            default:
            break;
        }
    } while (op!=0);

    return 0;
}
