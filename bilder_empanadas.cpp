#include <iostream>
#include <memory> //puntero inteligente
#include <string>
using namespace std;

class Empanada
{
    private:
        string m_masa;
        string m_relleno;
        string m_coccion;
    public:
        void setMasa(const string &masa){ m_masa = masa;}
        void setRelleno( const string &relleno){m_relleno = relleno;}
        void setCoccion(const string &coccion){m_coccion = coccion;}
        void open(){
            cout << "Empanada rellena de "<< m_relleno << " con masa "<< m_masa<<" cocinada "<< m_coccion<< endl;

        }
};

class EmpanadaBuilder
{
    protected:
        unique_ptr<Empanada> m_empanada;//puntero de tipo Empanada
    public:
        virtual ~EmpanadaBuilder() {}; //destructor
        Empanada *getEmpanada()
        {
            return m_empanada.get();
        }
        void cocinarNuevaEmpanada()
        {
            m_empanada = make_unique<Empanada> ();
        }
        virtual void buildMasa()=0;
        virtual void builtRelleno()=0;
        virtual void buildCoccion()=0;
};

class EmpanadaCarneBuilder : public EmpanadaBuilder
{
    public:
        virtual ~EmpanadaCarneBuilder(){};
        virtual void buildMasa()
        {
            m_empanada->setMasa (" criolla");
        }
        virtual void buildRelleno()
        {
            m_empanada->setRelleno(" carne picada, aceitunas y huevo");
        }
        virtual void buildCoccion()
        {
            m_empanada->setCoccion(" frita");
        }
};

class EmpanadaJyQBuilder : public EmpanadaBuilder
{
    public:
        virtual ~EmpanadaJyQBuilder(){};
        virtual void buildMasa()
        {
            m_empanada->setMasa (" semi hojaldre");
        }
        virtual void buildRelleno()
        {
            m_empanada->setRelleno(" jamon y queso");
        }
        virtual void buildCoccion()
        {
            m_empanada->setCoccion ("al horno");
        }
};

class Cocina
{
    private:
        EmpanadaBuilder *m_empanadaBuilder;
    public:
       
        void openEmpanada()
        {
            m_empanadaBuilder->getEmpanada()->open();
        }
        void makeEmpanada(EmpanadaBuilder *eb)
        {
            m_empanadaBuilder = eb;
            m_empanadaBuilder->cocinarNuevaEmpanada();
            m_empanadaBuilder->buildMasa();
            m_empanadaBuilder->builtRelleno();
            m_empanadaBuilder->buildCoccion();
        }
};

int main()
{
    Cocina cocina;
    EmpanadaCarneBuilder empanadaCarneBuilder;
    EmpanadaJyQBuilder empanadaJyQBuilder;
    
    cocina.makeEmpanada(&empanadaCarneBuilder);
    cocina.openEmpanada();

    cocina.makeEmpanada(&empanadaJyQBuilder);
    cocina.openEmpanada();

}