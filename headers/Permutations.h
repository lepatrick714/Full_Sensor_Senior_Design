#ifndef __PERMUTATIONS_H__
#define __PERMUTATIONS_H__

#include <vector> 
#include <iostream> 

using namespace std; 

struct GPD { 
    int gas1; 
    int gas2; 
    int gas3; 
    int gas4; 
    int gas5; 

    GPD(int gas1, int gas2, int gas3, int gas4, int gas5) { 
        this->gas1 = gas1; 
        this->gas2 = gas2; 
        this->gas3 = gas3; 
        this->gas4 = gas4; 
        this->gas5 = gas5;
    } 
};

class Permutations { 
    private: 
        vector<GPD> GD;                      // Gas Data 
    
    public: 
        Permutations(); 

        void check_valid(int, int, int, int, int);
        void partitions_Gases(int, int, int, int, int, int); 
        void To_CSV(); 

};
#endif
