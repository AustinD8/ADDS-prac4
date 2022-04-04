#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H
#include <map>

class EfficientTruckloads{
public:
    EfficientTruckloads();
    int numTrucks(int numCrates, int loadSize);
private:
    std::map<int,int> memo;

};
#endif