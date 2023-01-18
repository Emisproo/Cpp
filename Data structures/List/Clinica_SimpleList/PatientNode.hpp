#ifndef PATIENTNODE_HPP
#define PATIENTNODE_HPP

#include <iostream>
using namespace  std;

class PatientNode
{
    public:
        int m_patientId;
        PatientNode* next;
    
        PatientNode()
        {
            m_patientId = 0;
            next = NULL;
        }
        
        PatientNode(int patientId)
        {
            m_patientId = patientId; 
            next = NULL;
        }
        virtual ~PatientNode(){};

        void setPatientId(int patientId)
        {
            m_patientId = patientId;
        }
        int getPatientId()
        {
            return m_patientId;
        }
};
#endif //PATIENTNODE_HPP

