#ifndef __TABLE_H__
#define __TABLE_H__ 

class Table { 

    private: 
        int me; 
        int co; 
        int et; 

    public: 
        Table(); 
        Table(int me, int co, int et); 

        int getM(); 
        int getC(); 
        int getE(); 

};
#endif 
