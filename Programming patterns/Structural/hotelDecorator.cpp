#include <iostream>
using namespace std;
class Alquiler
{
    public:
        virtual ~Alquiler(){}
        virtual float calcularPresupuesto()=0;
};

class Hotel : public Alquiler
{
    private:
        float m_costoBase= 100; 
    public:
        Hotel( float costoBase)
            {
                m_costoBase=costoBase;
            }
        virtual ~Hotel(){}

        float calcularPresupuesto()
            {
                return m_costoBase;
            }
};

class DecoratorAlquiler : public Alquiler
{
    protected:
        Alquiler* m_alquiler;
    public:
        DecoratorAlquiler(Alquiler* alquiler)
            {
                m_alquiler=alquiler;
            }
    
        float calcularPresupuesto()
            {
                return this->m_alquiler->calcularPresupuesto();
            }

};

class Allinclusive : public DecoratorAlquiler
{
    public:
        Allinclusive(Alquiler* alquiler) : DecoratorAlquiler(alquiler){}
        float calcularPresupuesto()
        {
            return  DecoratorAlquiler::calcularPresupuesto()+100;
        }

};

class ClienteVip : public DecoratorAlquiler
{
    public:
        ClienteVip(Alquiler* alquiler): DecoratorAlquiler(alquiler){}
        float calcularPresupuesto()
        {
            return DecoratorAlquiler::calcularPresupuesto()* 0.8;
        }
};

void clientCode(Alquiler* alquiler)
{
    cout << "result: "<< alquiler->calcularPresupuesto();
}
int main ()
{
    Alquiler* hotel = new Hotel(100);
    cout << "costo de hotel media pension por noche "; clientCode(hotel); cout<< endl;
    
    
    Alquiler* allinclusive = new Allinclusive(hotel);
    cout << "Costo all inclusive por noche "; clientCode(allinclusive); cout << endl;

    Alquiler* clienteVip = new ClienteVip(allinclusive);
    cout << "Costo cliente vip all inclusive por noche "; clientCode(clienteVip); cout<< endl;
    

    delete hotel;
    delete allinclusive;
    delete clienteVip;
}