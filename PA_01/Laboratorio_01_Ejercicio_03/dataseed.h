#ifndef DATASEED_H
#define DATASEED_H
#include <automotive.h>


class DataSeed
{
public:
    DataSeed();
    ~DataSeed();
    static void seed(Automotive *automotive);
};

#endif // DATASEED_H
