#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float discount;
	bool gifts = false;
	char customerType;
	int money;
	cin >> customerType;
	cin >> money;
	discount = (customerType == 'V') ? 
	            ((money <= 500) ? 0.85 : //VIP�ͻ���Ʒ�۸���500Ԫ���� 
	            (((money > 500) && (money <= 1000)) ? 0.8 :  //��Ʒ�۸���500��1000Ԫ֮�� 
				0.75)) :                 //��Ʒ�۸��Լ1000Ԫ 
	            0.9;                     //��ͨ�ͻ���Ʒ�۸��ۿ� 
    gifts = (customerType == 'V') ? ((money > 1000) ? true : false) :
    	     ((money > 500) ? true : false);
	cout << (gifts ? "YES" : "NO") << endl; 
	cout << fixed << setprecision(2) << money * discount << endl;
	return 0;
}
