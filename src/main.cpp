/*************************************************************************************************************************
 *
 * Copyright © 2016 <Team_Name_Pending>. All rights reserved.
 * The contents of this medium are confidential and proprietary to <Team_Name_Pending>, 
 * and shall not be disclosed, disseminated, copied or used except as expressly 
 * authorized in writing by a <Team_Name_Pending> offical.
 *
 * **********************************************************************************************************************/

#include "./Permutations.cpp"
#include <iostream> 
#include <fstream> 

using namespace std; 

int main(int argc, char**argv) { 
    ////////////////////////
    ofstream Out_1("1"); 
   
    /*
    cout << "Running Interval of 100" << endl;

    Permutations *P_1 = new Permutations(); 
    P_1->partitions_Gases(100, 0, 0, 0, 0, 100); 
    Out_1 << P_1->To_CSV(); 
    
    Out_1 << endl;
    
    
    ////////////////////////
    cout << "Running Interval of 20" << endl;
   
    Permutations *P_2 = new Permutations(); 
    P_2->partitions_Gases(100, 0, 0, 0, 0, 20); 
    Out_1 << P_2->To_CSV(); 
    
    Out_1 << endl; 

    
    ////////////////////////
    cout << "Running Interval of 50" << endl;
    Permutations *P_3 = new Permutations(); 
    P_3->partitions_Gases(100, 0, 0, 0, 0, 50); 
    Out_1 << P_3->To_CSV(); 
    
    Out_1 << endl;
   

    ////////////////////////
    cout << "Running Interval of 25" << endl;
    Permutations *P_4 = new Permutations(); 
    P_4->partitions_Gases(100, 0, 0, 0, 0, 25); 
    Out_1 << P_4->To_CSV(); 
    
    Out_1 << endl;
    
    
    ///////////////////////    
    cout << "Running Interval of 10" << endl;
    Permutations *P_5 = new Permutations(); 
    P_5->partitions_Gases(100, 0, 0, 0, 0, 10); 
    Out_1 << P_5->To_CSV(); 
    
    Out_1 << endl;
       
    
    ///////////////////////    
    cout << "Running Interval of 5" << endl;
    Permutations *P_6 = new Permutations(); 
    P_6->partitions_Gases(100, 0, 0, 0, 0, 5, Out_1); 
    
    Out_1 << endl;
    */   
    
    ///////////////////////    
    cout << "Running Interval of 2" << endl;
    Permutations *P_7 = new Permutations(); 
    P_7->partitions_Gases(100, 0, 0, 0, 0, 1, Out_1); 
    Out_1 << P_7->To_CSV(); 
    
    Out_1.close();   
       
    
    return 0;
}
