#include <iostream>
#include "calculator.h"

using namespace std;

int main(int argc, char *argv[])
{
	Calculator calculator;
	
	if (argc == 2) {
		cout<<argv[1]<<" magic = "<<calculator.Magic(atof(argv[1]))<<endl;
	} else if (argc == 3) {
		cout<<argv[1]<<" - "<<argv[2]<<" = "<<calculator.Sub(atof(argv[1]), atof(argv[2]))<<endl;
	} else {
		cout<<"Hello!";
	}
	
	return 0;
}
