#ifndef __PERMUTATIONS_H__
#define __PERMUTATIONS_H__

#include <vector> 
#include <iostream> 
#include <string>
#include <unordered_set>
#include <fstream> 

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

	bool operator==(const GPD B) const  
	{	
		if(gas1 == B.gas1 && gas2 == B.gas2 && gas3 == B.gas3 && gas4 == B.gas4 && gas5 == B.gas5)  
			return true;
		return false;
	}
	

};

namespace std {

	template <> struct hash< GPD > {
		inline size_t operator()(const GPD &v) const {
			std::hash<int> int_hasher;
			return int_hasher(v.gas1) ^ int_hasher(v.gas2) ^ int_hasher(v.gas3) ^ int_hasher(v.gas4) ^ int_hasher(v.gas5);
		}
	};

}


class Permutations { 
    private: 
        vector<GPD> GD;                      // Gas Data 
        unordered_set<GPD> GD_Hash;

    public: 
        Permutations(); 

        void check_valid(int, int, int, int, int);
        void check_valid(int, int, int, int, int, ofstream&);
        void partitions_Gases(int, int, int, int, int, int); 
        void partitions_Gases(int, int, int, int, int, int, ofstream&); 
        string To_CSV(); 

};
#endif
