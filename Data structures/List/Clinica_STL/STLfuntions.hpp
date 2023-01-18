#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
using namespace std;
list <int> PatientsList;
list<int>::iterator it;

int op, id;
void insert();
void find();
void modifyNode();
void printList(list<int> PatientsList);
void deleteNode();

void insert()
{
    cout << "Enter id: ";
    cin>> id;
    PatientsList.push_back(id);
    cout << " Patient created"<< endl;
}

void find()
{
    cout<< "Insert patient ID: ";
    cin>>id;

    it= find(PatientsList.begin(), PatientsList.end(), id); 
    
    cout<< "Patient "<< id << " found"<< endl;
}
void printList(list<int> PatientsList)
{
    for (it = PatientsList.begin(); it != PatientsList.end(); ++it);
    cout<<" "<< *it ;
    cout << '\n';
    
}
void modifyNode()
{
    int value;
    int newValue;

    cout<< "Enter value to modify"<<endl;
    cin>> value;
    cout<< "Enter new value"<< endl;
    cin >>newValue;
    
    it= find( PatientsList.begin(),  PatientsList.end(), value);  
    *it = newValue;
    cout<< "Update done --> new value = "<< *it << endl;

    
}

void deleteNode()
{
    cout<< "Insert patient ID: ";
    cin>>id;

    it= find(PatientsList.begin(), PatientsList.end(), id);
    PatientsList.erase(it);
    cout<< "Patient deleted"<< endl;
}