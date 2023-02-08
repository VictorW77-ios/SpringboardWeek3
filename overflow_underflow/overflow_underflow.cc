#include<iostream>

using namespace std;

int main ()
{
  {
    int32_t s, u = 0; 
    ///////////////////////////////////
    // CREATE SIGNED,UNSIGNED 32-BIT //
    // INTEGERS NAMED s,u AND        //
    // INITIALIZE THEM TO ZERO       //
    ///////////////////////////////////


    cout << "32-bit before decrement:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;

    s--;
    u--; 

    ///////////////////
    // DECREMENT s,u //
    ///////////////////


    cout << "32-bit after decrement:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;
  }

  {
    int16_t s, u;

    s = 32'767;
    u = 65'535; 
    ///////////////////////////////////
    // CREATE SIGNED,UNSIGNED 16-BIT //
    // INTEGERS NAMED s,u AND        //
    // INITIALIZE THEM TO MAXIMUMS   //
    ///////////////////////////////////


    cout << "16-bit before increment:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;

    ////////////////////////
    // INCREMENT s,u HERE //
    ////////////////////////
    s++; 
    u++;

    cout << "16-bit after increment:" << endl;
    cout << "  signed:   " << s << endl;
    cout << "  unsigned: " << u << endl;
  }
}
