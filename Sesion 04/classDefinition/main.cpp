#include <structures.cpp>

int main()
{
    house *home = new house();
    home->setAddress("Conquista 161");
    cout << home->getAddress() << endl;
    return 0;
}

