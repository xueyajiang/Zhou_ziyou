#include <iostream>
using namespace std;
int main()
{
	char letter;
	int a, b, c;
	
	cin >> letter;
	(letter == 'J') ? (cin >> a >> b, cout << "�����ε��ܳ��������" << (a + b) * 2 <<" "<< a * b << endl) : (cin >> a >> b >> c, cout << "�����ε��ܳ���" << a + b + c << endl); 

	return 0;
}
