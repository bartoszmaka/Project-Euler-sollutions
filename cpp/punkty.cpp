#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

class Point
{
private:
	friend float dist(Point a, Point b);
	friend float area(Point a, Point b, Point c);
	float x,y;

public:
	Point(float x = 0, float y = 0)
	{
		this -> x = x;
		this -> y = y;
	}
	void tell()
	{
		cout<<"("<<x<<", "<<y<<")"<<endl;
	}
};
//------------------------------
float dist(Point a, Point b)
{
	float x1 = a.x;
	float y1 = a.y;
	float x2 = b.x;
	float y2 = b.y;
	float dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	return dist;
}
float area(Point a, Point b, Point c)
{
	float lena = dist(b,c); 
	float lenb = dist(a,c);
	float lenc = dist(a,b);
	float p = (lena+lenb+lenc)/2;
	float area = sqrt(p*(p-lena)*(p-lenb)*(p-lenc));
	return area;
}

//-----------------------------
int main()
{
	cout<<"podaj 3 punkty"<<endl;
	Point pkt[3];
	for(int i = 0; i<3; i++)
	{
		cout<<"Pkt"<<i<<": ";
		int x = 0;
		int y = 0;
		cin>>x>>y;
		pkt[i] = Point(x, y);
	}
	pkt[0].tell();
	pkt[1].tell();
	pkt[2].tell();
	cout<<area(pkt[0], pkt[1], pkt[2])<<endl;

	return 0;
} 