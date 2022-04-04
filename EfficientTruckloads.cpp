#include "EfficientTruckloads.h"
#include <map>
#include <iostream>

EfficientTruckloads::EfficientTruckloads(){
}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
    if(numCrates<1){
        return 0;
    }
    if(memo[numCrates]){
        return memo[numCrates];
    }
    int trucks=0;
    if (numCrates<loadSize+1){
        trucks=trucks+1;
        memo[numCrates]=trucks;
        return trucks;
    }
    else{
        if (numCrates % 2==0){
            int pile1 = numCrates/2;
            trucks = numTrucks(pile1,loadSize)+trucks;
            int pile2 = numCrates/2;
            trucks=numTrucks(pile2,loadSize)+trucks;
            memo[numCrates]=trucks;
            return trucks;
        }else{
            int pile1=numCrates/2;
            trucks = numTrucks(pile1,loadSize)+trucks;
            int pile2=numCrates/2+1;
            trucks = numTrucks(pile2,loadSize)+trucks;
            memo[numCrates]=trucks;

            return trucks;
        }
        
    }
}