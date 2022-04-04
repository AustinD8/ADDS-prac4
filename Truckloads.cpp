#include "Truckloads.h"
#include <iostream>

Truckloads::Truckloads(){
    trucks=0;
}

int Truckloads::numTrucks(int numCrates, int loadSize){
    std::cout<<trucks<<std::endl;
    std::cout<<numCrates<<std::endl;
    std::cout<<"iteration"<<std::endl;
    if (numCrates<loadSize+1){
        return trucks+1;
    }
    else{
        if (numCrates % 2==0){
            int pile1 = numCrates/2;
            trucks = numTrucks(pile1,loadSize);
            int pile2 = numCrates/2;
            trucks=numTrucks(pile2,loadSize);
            return trucks;
        }else{
            int pile1=numCrates/2;
            trucks = numTrucks(pile1,loadSize);
            int pile2=numCrates/2+1;
            trucks = numTrucks(pile2,loadSize);
            return trucks;
        }
        
    }
}