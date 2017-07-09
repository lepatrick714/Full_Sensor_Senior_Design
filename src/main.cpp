#include "./Permutations.cpp"
#include <iostream> 

using namespace std; 

int main(int argc, char**argv) { 
    string Input = "";  
    cout << "Enter an Interval: "; 
    cin >> Input; 
    
    Permutations *test = new Permutations(); 

    test->partitions_Gases(100, 0, 0, 0, 0, stoi(Input)); 

    test->To_CSV(); 
    
    return 0;
}
