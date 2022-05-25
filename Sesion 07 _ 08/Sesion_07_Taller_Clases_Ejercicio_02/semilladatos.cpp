#include "semilladatos.h"

semillaDatos::semillaDatos()
{

}

semillaDatos::~semillaDatos()
{

}


void semillaDatos::semilla(Supermercado *supermercado){
    Zona *zona_1,*zona_2;
    Estante *estante_1,*estante_2;
    Producto *producto_1,*producto_2;
    Cliente *cliente_1,*cliente_2;

    supermercado->setNombre("SuperMarket");
    supermercado->setDireccion("Luis Gonzales 123");
    supermercado->setRuc("89659874851");

    zona_1 = new zona();

}
