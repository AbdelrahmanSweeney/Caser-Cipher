#include<iostream>

using namespace std;
int main()
{
	
	int numOflines=0;
	cout << "entre number of lines\n";
	cin >> numOflines;

	for (int line=1; line<= numOflines; line++)
	{
	
		for(int num=1; num<=line; num++)
		{
			cout << num;
		}
	
		cout << endl;
	
	}


	return 0;

}