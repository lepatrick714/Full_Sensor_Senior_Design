#include "../headers/Permutations.h"

using namespace std; 

Permutations::Permutations() { 
    this->GD.clear();
}

void Permutations::check_valid(int gas1, int gas2, int gas3, int gas4, int gas5) { 
    if(gas1+gas2+gas3+gas4+gas5 == 100) { 
        GPD temp(gas1, gas2, gas3, gas4, gas5); 
        GD.push_back(temp);
    
    }
} 


void Permutations::partitions_Gases(int gas1, int gas2, int gas3, int gas4, int gas5, int interval) { 
    if(gas1 == 0) {  
        check_valid(gas1, gas2, gas3, gas4, gas5); 
        return;  
    }
    else {

        check_valid(gas1, gas2, gas3, gas4, gas5); 
        partitions_Gases(gas1-interval, gas2+interval, gas3, gas4, gas5, interval); 
        partitions_Gases(gas1-interval, gas2, gas3+interval, gas4, gas5, interval); 
        partitions_Gases(gas1-interval, gas2, gas3, gas4+interval, gas5, interval); 
        partitions_Gases(gas1-interval, gas2, gas3, gas4, gas5+interval, interval); 

    }
}

void Permutations::To_CSV() { 
    for(GPD i : this->GD) { 
        std::cout << i.gas1 << ',' << i.gas2 << ',' << i.gas3 << ',' << i.gas4 << ',' << i.gas5 << endl;
    } 
}
