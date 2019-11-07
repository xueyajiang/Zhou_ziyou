#include <iostream>
using namespace std;
int main()
{
	if(3 > 2)
	{
		cout<<'A'<<endl;
	}
	else
	{
    	cout<<'B'<<endl;
    }
    2 > 2 ? cout << 'A' <<endl : cout << 'B' << endl;
    
    int b = 3 > 2 ? 5 : 0;
    if(3>2){
    	b=5;
	}
	else{
		b=0;
	}
    cout << b << endl;
    
	return 0;
}
