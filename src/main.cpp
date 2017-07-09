#include "./Permutations.cpp"

using namespace std; 

int main() { 
    Permutations *test = new Permutations(); 

    test->partitions_Gases(100, 0, 0, 0, 0, 10); 

    test->To_CSV(); 
    
    
    return 0;
}
