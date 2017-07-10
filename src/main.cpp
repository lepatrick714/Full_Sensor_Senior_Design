#include "./Permutations.cpp"
#include <iostream> 
#include <fstream> 

using namespace std; 

int main(int argc, char**argv) { 
    string output;  
    ////////////////////////
    ofstream Out_1("100"); 
   
    cout << "Running Interval of 100" << endl;

    Permutations *P_1 = new Permutations(); 
    P_1->partitions_Gases(100, 0, 0, 0, 0, 100); 
    output = P_1->To_CSV(); 
    cout<< output; 

    Out_1.close();
    cout << endl;
    
    
    /* 
    
    ////////////////////////
    ofstream Out_2("75"); 
   
    cout << "Running Interval of Fifty" << endl;
   
    Permutations *P_2 = new Permutations(); 
    P_2->partitions_Gases(100, 0, 0, 0, 0, 100); 
    Out_2 << P_2->To_CSV(); 
    
    Out_2.close();   
    cout << endl; 

    
    
    
    
    ////////////////////////
    ofstream Out_3("50"); 
   
    cout << "Running Interval of Fifty" << endl;
    Permutations *P_3 = new Permutations(); 
    P_3->partitions_Gases(100, 0, 0, 0, 0, 100); 
    Out_3 << P_3->To_CSV(); 
    
    Out_3.close();   
    cout << endl;
   

    */
    return 0;
}
