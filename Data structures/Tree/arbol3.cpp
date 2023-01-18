#include <iostream>
#include <string.h>
using namespace std;

struct Node
{
    char data;
    Node *right;
    Node *left; 
};

Node *createNode(char *x);
void insertNode(Node *&tree, char*x);
void showTree(Node *tree, int contador);
void preOrder(Node *tree);
void inOrder (Node *tree);
void postOrder (Node *tree);
Node *tree= NULL;

int main()
{
    int cont = 0;
    char chars[] = {'G', 'B', 'Q', 'A', 'C', 'K', 'F', 'P', 'D', 'E', 'R', 'H'};

	for (int i = 0; i < sizeof(chars); i++)
	{
		char *_char = &chars[i];
		insertNode(tree, _char);
	}
    
    cout<< "Show tree"<< endl<<endl;
    showTree(tree, cont);
    cout<< "PreOrdered tree"<< endl<<endl;
    preOrder(tree);
    cout<< endl<<endl;
    cout<< "Tree in order"<< endl<<endl;
    inOrder(tree);
    cout<< endl<<endl;
    cout<< "PostOrdered tree"<< endl<<endl;
    postOrder(tree);
    
    return 0;
}

Node *createNode(char *x)
{
    Node *newNode = new Node();
    newNode->data = *x;
    newNode->right = NULL;
    newNode->left = NULL;

    return newNode;
}

void insertNode ( Node *&tree, char *x)
{
    if (tree == NULL){
        Node *new_Node = createNode(x);
        tree = new_Node;
    }
    else{
        char rootValue = tree->data;
        int compare= strcmp(&rootValue, x);
        if (compare == 0){
            insertNode(tree->left, x);
        }
        else if (compare <0)
        {
            insertNode(tree->right, x);
        }
        else if(compare > 0)
        {
            insertNode(tree->left, x);
        }
    }
}

void showTree(Node *tree, int contador)
{
    if(tree == NULL)
    {
        return;
    }
    else{
        showTree(tree->right, contador++); 
        for(int i = 0; i < contador; i++)
        {
            cout<<" ";
        }
        cout<< tree->data<<endl;
        showTree(tree->left, contador++);
    }
}

void preOrder(Node *tree)
{
    if (tree == NULL)
    {
        return;
    } else
        {
            cout << tree->data << "  ";
            preOrder(tree->left);
            preOrder(tree->right);
        }
}

void inOrder (Node *tree)
{
    if (tree == NULL)
    {
        return;
    } else
        {
            inOrder(tree->left);
            cout << tree->data << "  ";
            inOrder(tree->right);
        }
        
}

void postOrder (Node *tree)
{
    if (tree == NULL)
    {
        return;
    } else
        {
            postOrder(tree->left);
            postOrder(tree->right);
            cout << tree->data << "  ";
        }
}