#include <stdio.h> 

class base 
{ 
public: 
    virtual void print () 
    { printf("print base class\n"); } 
  
    void show () 
    { printf("show base class\n"); } 
}; 
  
class derived:public base 
{ 
public: 
    void print () 
    { printf("print derived class\n"); } 
  
    void show () 
    { printf("show derived class\n"); } 
}; 
  
int main() 
{ 
    base *bptr; 
    derived d; 
    bptr = &d; 
      
    //virtual function, binded at runtime 
    bptr->print();  
      
    // Non-virtual function, binded at compile time 
    bptr->show();  
} 

