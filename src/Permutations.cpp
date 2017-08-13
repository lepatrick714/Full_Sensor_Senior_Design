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
   }
}

void Permutations::check_valid(int gas1, int gas2, int gas3, int gas4, int gas5, ofstream &out) {
    GPD temp(gas1, gas2, gas3, gas4, gas5);
    int check_total = gas1 + gas2 + gas3 + gas4 + gas5;

    if(GD_Hash.find(temp) == GD_Hash.end() && check_total == 100) {
        GD_Hash.insert(temp);
        GD.push_back(temp);
        out << temp.gas1 << ',' << temp.gas2 << ',' << temp.gas3 << ',' << temp.gas4 << ',' << temp.gas5 << endl;
    }
}

void Permutations::partitions_Gases(int gas1, int gas2, int gas3, int gas4, int gas5, int interval) {
    if(gas1 == 0) {
        check_valid(gas1, gas2, gas3, gas4, gas5);
        return;
    }
    else if(gas1 < 0 || gas2 < 0 || gas3 < 0 || gas4 < 0 || gas5 < 0) {
        return;
    }
    else if(gas1 > 100 || gas2 > 100 || gas3 > 100 || gas4 > 100 || gas5 > 100) {
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

void Permutations::partitions_Gases(int gas1, int gas2, int gas3, int gas4, int gas5, int interval, ofstream &out) {
    if(gas1 == 0) {
        check_valid(gas1, gas2, gas3, gas4, gas5, out);
        return;
    }
    else if(gas1 < 0 || gas2 < 0 || gas3 < 0 || gas4 < 0 || gas5 < 0) {
        return;
    }
    else {

        check_valid(gas1, gas2, gas3, gas4, gas5, out);
        partitions_Gases(gas1-interval, gas2+interval, gas3, gas4, gas5, interval, out);
        partitions_Gases(gas1-interval, gas2, gas3+interval, gas4, gas5, interval, out);
        partitions_Gases(gas1-interval, gas2, gas3, gas4+interval, gas5, interval, out);
        partitions_Gases(gas1-interval, gas2, gas3, gas4, gas5+interval, interval, out);

    }
}

// Added By Rick, Takes a super long time for results. Function should be depricated
void Permutations::partitions_Gases(int interval, ofstream &out) {
    int step_count = 1;                                                       //Variable to keep track of progress.
    for ( int gas1 = 0; gas1 <= 100; gas1++) {
        for (int gas2 = 0; gas2 <= 100; gas2++) {
                if (gas1 + gas2 > 100) {
                    break;
                }
            for (int gas3 = 0; gas3 <= 100; gas3++) {
                if(gas1 + gas2 + gas3 > 100) {
                    break;
                }
                for (int gas4 = 0; gas4 <= 100; gas4++) {
                    if (gas1 + gas2 + gas3 + gas4  > 100) {
                        break;
                    }
                    for (int gas5 = 0; gas5 <=100; gas5++) {

                        if ( gas1 + gas2 + gas3 + gas4 + gas5 > 100) {
                            break;
                        }

                        check_valid(gas1, gas2, gas3, gas4, gas5, out);
                        cout << step_count << " combinations evaluated." << endl;
                        step_count++;
                    }
                }
            }
        }
    }
}

// Optimized version of Code.
void Permutations::partitions_Gases_Opt(int interval, ofstream &out) {
    int total_gas = 100;
	  int count = 0;

    for (int gas5 = 0; gas5 < 100; gas5++) {
      for (int gas4 = 0; gas4 < total_gas - gas5; gas4++) {
        for (int gas3 = 0; gas3 < total_gas - gas5 - gas4; gas3++) {
          for (int gas2 = 0; gas2 < total_gas - gas5 - gas4 - gas3; gas2++) {
            for (int gas1 = total_gas; gas1 <= 0; gas1--) {
                int temp_gas2 = total_gas - gas1;
                int temp_gas3 = total_gas - gas2 -  gas1;
                cout << gas1 << ", " << temp_gas2 << ", " << temp_gas3 << ", " << gas4 << ", " << gas5 << endl;
                count++;
            }
          }
        }
      }
    }

  cout << "Total Count: " << count << endl;
}


string Permutations::To_CSV() {
    string results = "";
    for(GPD i : this->GD) {
        results += to_string(i.gas1) + "," + to_string(i.gas2) + "," + to_string(i.gas3) + "," + to_string(i.gas4) + "," + to_string(i.gas5) + "\n";
    }
    return results;
}
