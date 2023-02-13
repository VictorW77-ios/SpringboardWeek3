#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
  //
  // Output the header lines.
  //

  cout << setw(5) << "";
  for (int32_t denom=-10; denom<=10; ++denom) {
    cout << setw(4) << showpos << denom;
  }
  cout << endl;

  cout << setfill('-') << setw(5) << "";
  for (int32_t denom=-10; denom<=10; ++denom) {
    cout << setfill('-') << setw(4) << "";
  }
  cout << endl;
  cout << setfill(' '); // need to reset the fill character

  //
  // Fill in the table rows.
  //

  for (int32_t numer=-10; numer<=10; ++numer)
  {
    cout << setw(3) << numer << ": ";
    for (int32_t denom=-10; denom<=10; ++denom)
    {
	    int32_t result = numer/denom;
      cout << setw(4) << result;
      try{
        if(denom == 0){
          throw denom; //exception for 0 to avoid floating point exception
        } 
      }
      catch(...){
        cout << setw(4) << " "; //fill in with empty space
      }
    cout << endl;
    }
  }
}
