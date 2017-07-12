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
    Out_1 << P_1->To_CSV(); 
    
    Out_1.close();
    cout << endl;
    
    
    ////////////////////////
    ofstream Out_2("20"); 
   
    cout << "Running Interval of 20" << endl;
   
    Permutations *P_2 = new Permutations(); 
    P_2->partitions_Gases(100, 0, 0, 0, 0, 20); 
    Out_2 << P_2->To_CSV(); 
    
    Out_2.close();   
    cout << endl; 

    
    ////////////////////////
    ofstream Out_3("50"); 
   
    cout << "Running Interval of 50" << endl;
    Permutations *P_3 = new Permutations(); 
    P_3->partitions_Gases(100, 0, 0, 0, 0, 50); 
    Out_3 << P_3->To_CSV(); 
    
    Out_3.close();   
    cout << endl;
   

    ////////////////////////
    ofstream Out_4("25"); 
   
    cout << "Running Interval of 25" << endl;
    Permutations *P_4 = new Permutations(); 
    P_4->partitions_Gases(100, 0, 0, 0, 0, 25); 
    Out_4 << P_4->To_CSV(); 
    
    Out_4.close();   
    cout << endl;
    
    
    ///////////////////////    
    ofstream Out_5("10"); 
   
    cout << "Running Interval of 10" << endl;
    Permutations *P_5 = new Permutations(); 
    P_5->partitions_Gases(100, 0, 0, 0, 0, 10); 
    Out_5 << P_5->To_CSV(); 
    
    Out_5.close();   
    cout << endl;
       
    
    ///////////////////////    
    ofstream Out_6("5"); 
   
    cout << "Running Interval of 5" << endl;
    Permutations *P_6 = new Permutations(); 
    P_6->partitions_Gases(100, 0, 0, 0, 0, 5); 
    Out_6 << P_6->To_CSV(); 
    
    Out_6.close();   
    cout << endl;
       
    
    ///////////////////////    
    ofstream Out_7("2"); 
   
    cout << "Running Interval of 2" << endl;
    Permutations *P_7 = new Permutations(); 
    P_7->partitions_Gases(100, 0, 0, 0, 0, 2); 
    Out_7 << P_7->To_CSV(); 
    
    Out_7.close();   
    cout << endl;
       
    
    return 0;
}
