#include <iostream>
#include <algorithm>	//for (element : range)

using namespace std;

int main()
{
	int cpp_array[] = {1,2,3,4,5,6,7,8,9};
	for( int elem : cpp_array )
	{
		cout<<elem<<endl;
	}
	return 0;
}