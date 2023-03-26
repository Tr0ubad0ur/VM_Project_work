#include <iostream>

using namespace std;

class Medication 
{  
  private:
      string name;
      double price;
      string compound;
  public:
      void SetInitial(string FileName, double FilePrice, string FileCompound)
      {
        name = FileName;
        price = FilePrice;
        compound = FileCompound;
      }
      
      void GetInfo();
      
};


