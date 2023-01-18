#include "IClient.hpp"
#include "Client.hpp"
#include "json.hpp"
using namespace std;
using json = nlohmann::json;
// #include "ClientManager.hpp"


int main()
{
    // int id;
    // Client client1(1, "emi", 4554545, "jhsfhahsjañsha");
    // Client client2(2, "pepe", 878779, "jdrdrdsssas");
    // ClientManager* cManager = new ClientManager();

    // cManager->addClient(client1);
    // cManager->addClient(client2);


    // cManager->list();
    // cout<< "ingrese id: " ;
    // cin >> id;
    // cout<< " id: "<< cManager->find(id) << endl;

    // cout<< "ingrese id: " ;
    // cin >> id;
    // cManager->supr(id);
    // cManager->list();

    Client c(1, "emi", 4554545, "jhsfhahsjañsha");
    json storage;
    storage["id"] = c.getId();
    storage["name"] = c.getName();
    storage["dni"] = c.getDNI();
    storage["email"] = c.getEmail();  

    cout << setw(4) << storage << endl; 


    cout << storage["name"] << endl; 
    return 0;
}