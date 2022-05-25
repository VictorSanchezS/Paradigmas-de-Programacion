#include "dataseed.h"

DataSeed::DataSeed()
{

}

DataSeed::~DataSeed()
{

}

void DataSeed::seed(Automotive *automotive){
    Client *client_1, *client_2;
    Car *car_1, *car_2, *car_3, *car_4;

    automotive->setName("Bravo");

    client_1 = new Client("Felipe","Torres","74209863",18,true);
    client_2 = new Client("Yoselin","Sanchez","74253019",19,false);

    car_1 = new Car("Mazda", "Mazda-3",126000,"ab-123","Rojo","M1");
    car_2 = new Car("Toyota","Hiace",130000,"ac-124","Blanco","M1");
    car_3 = new Car("Audi","Coupe",892300,"bd-158","Negro","M1");
    car_4 = new Car("Scania","F113",227250,"bc-136","Azul","M2-C3");

    client_1->getCars()->insert(car_1);
    client_1->getCars()->insert(car_2);
    client_2->getCars()->insert(car_3);
    client_2->getCars()->insert(car_4);

    automotive->getClients()->insert(client_1);
    automotive->getClients()->insert(client_2);
}
