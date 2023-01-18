#include <iostream>
#include <string.h>
using namespace std;

struct Nodo
{
    char data;
    Nodo *right;
    Nodo *left; 
    Nodo *root;
};

Nodo *createNodo(char* x, Nodo *root);
void insertNodo(Nodo *&tree, char*x, Nodo *root);
void showTree(Nodo *tree, int contador);
Nodo *minim(Nodo *tree);
void replace(Nodo *tree, Nodo *NuevoNodo);
void undoNodo(Nodo *tree);
void deleteNodo(Nodo *tree);
void _delete(Nodo *tree, char *x);
Nodo *tree = NULL;

int main()
{
    Nodo *tree = NULL;
    int cont = 0;
    char chars[] = {'G', 'B', 'Q', 'A', 'C', 'K', 'F', 'P', 'D', 'E', 'R', 'H'};
    char delete_chars[] = {'E', 'C', 'G'};

	for (int i = 0; i < sizeof(chars); i++)
	{
		char *_char = new char(chars[i]);
		insertNodo(tree, _char, NULL);
	}
    cout << "NOT Deleted Tree: "<< endl;
    showTree(tree, cont);
    cout <<endl;

    for(int i = 0; i < sizeof(delete_chars[i]); i++)
    {
        char *_char = new char();
        strcpy(_char, &delete_chars[i]);
        _delete(tree, _char);
    }

    cout << "Deleted tree: "<< endl;
    showTree(tree, cont);

    return 0;
}

Nodo *createNodo(char *x, Nodo *root)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->data = *x;
    nuevoNodo->right = NULL;
    nuevoNodo->left = NULL;
    nuevoNodo->root = root;

    return nuevoNodo;
}

void insertNodo ( Nodo *&tree, char *x, Nodo *root)
{
    if (tree == NULL){
        Nodo *nuevo_nodo = createNodo(x, root);
        tree = nuevo_nodo;
    }
    else{
        char valorRaiz = tree->data;
        int compare= strcmp(&valorRaiz, x);
        if (compare == 0){
            insertNodo(tree->left, x, tree);
        } else if (compare <0)
                {
                    insertNodo(tree->right, x, tree);
                } else if(compare > 0)
                        {
                            insertNodo(tree->left, x, tree);
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

Nodo *minim(Nodo *tree)
{
    cout<< "Minim"<< endl;
    if (tree == NULL)
    {
        return NULL;
    }
    if (tree->left)
    {
        return minim(tree->left);
    }
    else{
        return tree;
    }
}

void replace(Nodo *tree, Nodo *NuevoNodo)
{
    cout << "Replace"<< endl;
    if (tree->root)
    {
        cout <<"Nodo root exist"<< endl;
        if(tree->root->left)
        {
            if (tree->root->left->data == tree->data)
            {
                tree->root->left = NuevoNodo;
            }
        }
        if (NuevoNodo)
        {
            NuevoNodo->root = tree->root;
        }
    }
}

void undoNodo(Nodo *tree)
{
    cout << "Undo Nodo"<< endl;
    tree->right = NULL;
    tree->left = NULL;
    delete tree;
}

void deleteNodo(Nodo *tree)
{
    cout<<"Delete Nodo"<< endl;
    if(tree->left && tree->right)
    {
        Nodo *minor = minim(tree->right);
        tree->data = minor->data;
        deleteNodo(minor);
    } else if(tree->left)
            {
                replace(tree, tree->left);
                undoNodo(tree);
            } else if(tree->right)
                    {
                        replace(tree, tree->right);
                        undoNodo(tree);
                    } else
                    {
                        replace(tree, NULL);
                        undoNodo(tree);
                    }
}

void _delete(Nodo *tree, char *x)
{
    cout<<" Delete "<< tree->data << " "<< *x << endl;
    char rootValue = tree->data;
    char *aux = new char;
    *aux = *x;

    if (tree == NULL)
    {
        return;
    } else if(tree->data == *aux)
            {
                deleteNodo(tree);
            } else if (tree->data < *aux)
                    {
                        _delete(tree->right, x);
                    } else if (tree->data > *aux)
                            {
                                _delete(tree->left, x);
                            }
}