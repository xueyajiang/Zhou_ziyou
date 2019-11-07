#include <iostream>
#include <unistd.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int sum = 0;
	int i = 2;
	int a;
	cin >> a;
	while(i < 100)
	{
		sum += i;
		i = i + 2;
		cout << i << " ";
	}
	sleep(5);
	system("echo TERM=xterm");
	cout << sum << endl;
	return 0;
}
