#include <iostream>

using namespace std;

class Klasa
{
private:
	int a = 5;

public:
	Klasa(int aa = 50)
	{
		this->a = aa;
	}
	void wypisz()
	{
		cout<<a<<endl;
	}
	void czytaj()
	{
		cout<<"a: ";
		cin>>a;
	}
};
int main()
{
	Klasa Objekt(7);

	Objekt.wypisz();
	return 0;
}