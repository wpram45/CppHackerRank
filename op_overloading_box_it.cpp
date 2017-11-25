#include <sstream>
class Box
{
  private:
    long l,b,h;
  public:
    
  int getLength() { return l;}
 int  getBreadth(){return b;}
  int getHeight()  { return h;}
    long long CalculateVolume() { long long  c= l*h*b; return c;}
    
    //constructor
    Box()
    {
        l=0;
        b=0;
        h=0;
        
    }
    //parametleri constructor
   Box(int length, int breadth, int height)
    {
        l=length;
        b=breadth;
        h=height;
        
        
    }
    
    Box(Box &bx)
    {
        l=bx.l;
        b=bx.b;
        h=bx.h;
        
        
    }
    
    
    friend ostream &operator<<( ostream &output, const Box &B ) { 
       
        output << B.l  << " " << B.b << " " << B.h;
        return output;
      }
    
    friend bool operator<(Box& bx,Box bx2)
    {
        if (bx.l <   bx2.l)
        { return true;}
    else if(bx.b < bx2.b && bx.l==bx2.l)
            {
                return true;
                
             }
            
   else if (bx.h < bx2.h &&  bx.b==bx.b    && bx.l==bx2.l ) {return true;}
               
                    
                   
                
       
          return false;  
        
    }
    
        
        
    
    
};


//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)