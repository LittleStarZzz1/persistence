#include <iostream>

using namespace std;


int main1()
{
	char ch[100];    
	char num[55];     
	bool vis[74] = { false };    
	int cnt = 0;     
	cin >> ch;     
	for (int i = 0; ch[i]; i++)    
	{ 
		if (!vis[ch[i] - '0'])        
		{ 
			vis[ch[i] - '0'] = true;            
			num[cnt++] = ch[i]; 
		} 
	}    
	num[cnt] = '\0';     

	cout << num << endl;
	

	system("pause");
	return 0;
}