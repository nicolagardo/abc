
#include <iostream>
using namespace std;
int main()
{
	//int i, j, k;
	for (int i = 1, j = i + 1, k = j + 1; i*j*k <= 800*(i+j+k); i++,j++,k++)
	{
		cout << i <<" "<< j <<" "<< k<<endl;
		
	}
	//cout << "El producto de " << i << "x"<<j<<"x"<<k<<" = 800 x ("<<i<<"+"<<j<<"+"<<k<<")";
}

