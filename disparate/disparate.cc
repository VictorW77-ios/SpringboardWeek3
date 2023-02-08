#include<iostream>
#include<iomanip>

using namespace std;

int main ()
{
  {
    int32_t big, small, sum;
    big = 100'000'000;
    small = 1; 
    sum = big + small; 
    /////////////////////////////////
    // CREATE THREE int32_t VALUES //
    // (big, small, sum)           //
    /////////////////////////////////


    cout << "int32_t:" << endl;
    cout << "  big   = " << big   << endl;
    cout << "  small = " << small << endl;
    cout << "  sum   = " << sum   << endl;
  }

  {
    float big, small, sum;
    big = 16'777'215; 
    small = 1; 
    sum = small + big; 
    ///////////////////////////////
    // CREATE THREE float VALUES //
    // (big, small, sum)         //
    ///////////////////////////////


    cout << "float:" << endl;
    cout << "  big   = " << fixed << setprecision(1) << big   << endl;
    cout << "  small = " << fixed << setprecision(1) << small << endl;
    cout << "  sum   = " << fixed << setprecision(1) << sum   << endl;
  }
}

