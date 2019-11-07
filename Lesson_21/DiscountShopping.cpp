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
	            ((money <= 500) ? 0.85 : //VIP客户商品价格在500元以下 
	            (((money > 500) && (money <= 1000)) ? 0.8 :  //商品价格在500到1000元之间 
				0.75)) :                 //商品价格大约1000元 
	            0.9;                     //普通客户商品价格折扣 
    gifts = (customerType == 'V') ? ((money > 1000) ? true : false) :
    	     ((money > 500) ? true : false);
	cout << (gifts ? "YES" : "NO") << endl; 
	cout << fixed << setprecision(2) << money * discount << endl;
	return 0;
}
