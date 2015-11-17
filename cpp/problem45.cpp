// brute force
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	unsigned int range = 60000;
	unsigned long long int triangles[range];
	unsigned long long int pentagonals[range];
	unsigned long long int hexagonals[range];
	int start = clock();
	int begin = start;

	//fill arrays
	for(unsigned int i = 1; i<range; i++)
	{
		triangles[i-1] = i*(i+1)/2;
		pentagonals[i-1] =  i*(3*i-1)/2;
		hexagonals[i-1] = i*(2*i-1);
	}
	cout<<"arrays filled in: "<<(clock()-start)/double(CLOCKS_PER_SEC)<<"sec"<<endl;
	start = clock();

	//find matches
	unsigned long long int *wskt, *wskp, *wskh;	
	int t = 1;
	bool match_found = false;

	for(wskt = triangles; wskt<(triangles+(range-1)); *wskt++, t++)
	{
		for(wskp = pentagonals; wskp<(pentagonals+(range-1)); *wskp++)
		{
			if(*wskt == *wskp)
			{
				for(wskh = hexagonals; wskh<(hexagonals+(range-1)); *wskh++)
				{
					if(*wskp == *wskh)
					{
						cout<<"match found at T["<<t<<"], = "<<*wskh<<endl;
						match_found == true;					
					}
				}
			}
		}
	}
	if(match_found == true)
	{
		cout<<"matches found in: "<<(clock()-start)/double(CLOCKS_PER_SEC)<<"sec"<<endl;
	}
	else
	{
		cout<<"no matches found"<<endl;
	}
	cout<<"execution time: "<<(clock()-begin)/double(CLOCKS_PER_SEC)<<"sec"<<endl;
	return 0;
}