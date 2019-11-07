#include <iostream>
using namespace std;
int main(){
	char name[10] = "I m Lisa.";
	cout << name << endl;
	name[1] = '\'';
	cout << name << endl;
	return 0;
}
