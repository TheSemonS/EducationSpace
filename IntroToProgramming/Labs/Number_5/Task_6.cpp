#include <iostream>
using namespace std;

int main()
{
	int chislo1 = 4;
	int chislo2 = 4;
	cout<<endl<<"Pervoe chislo  -->  "<< chislo1;
	cout<<endl<<"Vtoroe chislo  -->  "<< chislo2;

	int b, c;
	b = 2 * ++chislo1;
	c = 2 * chislo2++;
	cout<<endl<<" Prefiksnaja forma  "<< b;
	cout<<endl<<" Postfiksnaja forma "<< c;
	cout<<endl<<"Pervoe chislo  -->  "<< chislo1;
	cout<<endl<<"Vtoroe chislo  -->  "<< chislo2<<endl;
	system("pause");
	return 0;
}