#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "PatientNode.hpp"
class LinkedList
{
    private:
        PatientNode* head;
    public:
        LinkedList() { head=NULL;}
        virtual ~LinkedList(){}
    
        void insertNode(int id);
        bool isInList(int);
        void findNode(int);
        void modifyNode(); //buscar y modificar
        void printList();
        void deleteNode(int);
    
};

void LinkedList::insertNode(int id)
{
    PatientNode *patient = new PatientNode();
    patient->m_patientId = id;

    if (head == NULL) //assign to head
    {
        head = patient;
        return;
    }
    //else{head->next = patient;} //si hay elementos inserta despues

    PatientNode* temp = head;
    while (temp->next !=NULL) //&& (temp-> m_patientId < id) insertar ordenado
    {
        //head=temp;
        temp = temp->next;
    } 
    
    temp->next= patient;
} 

void LinkedList::findNode(int id)
{
    PatientNode* temp = head;

    while (temp != NULL)//buscar
    {
        if(temp->m_patientId == id)
        {
            cout << "Patient "<< temp->m_patientId << " found"<< endl;
            return;
        }
        else
        {
            cout <<" Not exist"<< endl;
            temp = temp->next;
        }
    }  
}

void LinkedList::modifyNode()
{
    int value;
    int newValue;
    PatientNode* temp= head;
    
    cout<< "Enter value to modify"<<endl;
    cin>> value;
    cout<< "Enter new value"<< endl;
    cin >>newValue;

    while (temp != NULL)//buscar
    {
        if(temp->m_patientId == value)
        {
            cout << "Patient "<< temp->m_patientId << " found"<< endl;
            temp->setPatientId(newValue);
            cout << "Updated patient " <<temp->m_patientId<<  endl;
            return;
        }
        else
        {
           
            cout <<" Not exist"<< endl;
            temp = temp->next;
        }
    }  
    
   

}

void LinkedList::printList()
{
    PatientNode* temp = head;
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    while (temp != NULL)
    {
        cout <<" Patient: "<< temp->m_patientId << endl;
        temp = temp->next;
    }
}

void LinkedList::deleteNode(int nodeOffset)
{
    if (head != NULL)
    {
        PatientNode* borrar = head, *anterior = NULL;
        //int ListLen=0 ;
        while((borrar != NULL) && (borrar->m_patientId != nodeOffset))
        {
            anterior = borrar;
            borrar = borrar->next;
        }

        if (borrar == NULL)
        {
            cout<<"List empty "<< endl;
            return;
        }
        else if(anterior == NULL)
        {
            head=head->next;
            delete borrar;
        } else
            {
                anterior->next = borrar->next;
                delete borrar;
            }

    }     
        
}
#endif //LINKEDLIST_HPP