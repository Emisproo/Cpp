#include <iostream>
#include <string.h>
using namespace std;

struct Nodo
{
    char data;
    Nodo *right;
    Nodo *left; 
};

Nodo *createNodo(char *x);
void insertNodo(Nodo *&tree, char*x);
void showTree(Nodo *tree, int contador);
Nodo *tree= NULL;

int main()
{
    int cont = 0;
    char chars[] = {'G', 'B', 'Q', 'A', 'C', 'K', 'F', 'P', 'D', 'E', 'R', 'H'};

	for (int i = 0; i < sizeof(chars); i++)
	{
		char *_char = &chars[i];
		insertNodo(tree, _char);
	}
    showTree(tree, cont);



    return 0;
}

Nodo *createNodo(char *x)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->data = *x;
    nuevoNodo->right = NULL;
    nuevoNodo->left = NULL;

    return nuevoNodo;
}

void insertNodo ( Nodo *&tree, char *x)
{
    if (tree == NULL){
        Nodo *nuevo_nodo = createNodo(x);
        tree = nuevo_nodo;
    }
    else{
        char rootValue = tree->data;
        int compare= strcmp(&rootValue, x);
        if (compare == 0){
            insertNodo(tree->left, x);
        }
        else if (compare <0)
        {
            insertNodo(tree->right, x);
        }
        else if(compare > 0)
        {
            insertNodo(tree->left, x);
        }
    }
}

void showTree(Nodo *tree, int contador)
{
    if(tree == NULL)
    {
        return;
    }
    else{
        showTree(tree->right, contador+1); 
        for(int i = 0; i < contador; i++)
        {
            cout<<" ";
        }
        cout<< tree->data<<endl;
        showTree(tree->left, contador++);
    }
}