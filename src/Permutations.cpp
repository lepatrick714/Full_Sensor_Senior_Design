#include "../headers/Permutations.h"

using namespace std; 

Permutations::Permutations() { 
    this->GD.clear();
}

void Permutations::check_valid(int gas1, int gas2, int gas3, int gas4, int gas5) { 
    GPD temp(gas1, gas2, gas3, gas4, gas5); 
    int check_total = gas1 + gas2 + gas3 + gas4 + gas5; 

    if(GD_Hash.find(temp) == GD_Hash.end() && check_total == 100) { 
        GD_Hash.insert(temp); 
        GD.push_back(temp);
        //std::cout << temp.gas1 << ',' << temp.gas2 << ',' << temp.gas3 << ',' << temp.gas4 << ',' << temp.gas5 << endl;
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

string Permutations::To_CSV() { 
    string results = ""; 
    for(GPD i : this->GD) {
        results += to_string(i.gas1) + "," + to_string(i.gas2) + "," + to_string(i.gas3) + "," + to_string(i.gas4) + "," + to_string(i.gas5) + "\n";
    }
    return results; 
}
