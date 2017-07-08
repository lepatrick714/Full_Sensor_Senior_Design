#include <iostream> 
#include <vector> //Will need to upgrade this to a hash table

using namespace std; 

int main() { 
    Storage st; 
    st.partition(100, 0, 0); 
    st.print_sys(); 

    return 0;
}
