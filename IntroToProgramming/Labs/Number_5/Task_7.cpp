#include <iostream>
using namespace std;

int main()
{int chislo1;
  int chislo2;
  cout<<"\n Pervoe chislo  --> "; cin>>chislo1;
  cout<<"\n Vtoroe chislo  --> "; cin>>chislo2;
  cout<<"\n Chastnoe kak zeloe --> "<< chislo1 / chislo2;
  cout<<"\n Chastnoe  kak veshestvennoe 1 --> "<< (float)chislo1 / chislo2;
  cout << "\n Chastnoe kak veshestvennoe 2  --> " << 1.0*chislo1 / chislo2;
  cout << "\n Chastnoe kak veshestvennoe  3 --> " << static_cast <float> (chislo1 / chislo2)<<endl;
  cout << "\n Chastnoe kak veshestvennoe  4 --> " << static_cast <float> (chislo1) / chislo2<<endl;
  system("pause");
  return 0;
}