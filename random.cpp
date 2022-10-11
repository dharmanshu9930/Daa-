
#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

int main()
{

	srand(time(0));

	for (int i = 0; i < 4; i++)
		cout << rand() << " ";

	return 0;
}
