#ifndef __PERMUTATIONS_H__
#define __PRRMUTATIONS_H__

class Storage { 
    private: 
        vector<Table> sv; 

    public: 
        Storage(); 
        Storage(vector<Table> sv); 

        void check_identical_obj(int m, int c, int e) { 
            for(int i=0; i<v.size(); i++) {
                if(v.at(i).getM() == m && v.at(i).getC() == c && v.at(i).getE() == e) {
                    return; // if identical, return
                }
                else { 
                    continue; 
                }

            }
            Object obj(m, c, e); // if no identical, create new obj
            v.push_back(obj);
        }

        // Partition Recursion 
        void partition(int m, int c, int e) { 
            if(m == 0) { 
                check_sys(m, c, e); 
                return; 
            }
            else { 
                check_sys(m, c, e); // Check for dups 
                partition(m - 10, c + 10, e); 
                partition(m - 10, c, e + 10); 
            }
        }

        void print_sys() { 

            for(int i=0; i<v.size(); i++) {
                cout << "Methane: " << v.at(i).getM() << " " << "CO2: " << v.at(i).getC() << " " << "Ethane: " << v.at(i).getE() << endl;
            }
}
#endif
