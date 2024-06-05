#include <iostream>
#include <exception>
using namespace std;

int main () {
  try
  {
    int* myarray= new int[99999999999999];
  }
  catch (exception& e)
  {
    cout << "Standard exception: " << e.what() << endl;
  }
  return 0;
}

