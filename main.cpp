#include<iostream>
using namespace std;
int main()
{
	int var = 5;
	cout << "3rd diagram" << endl;
	int DiagramCode[5][5] = { { 1,2,3,4,5 },{ 1,2,3,4,5 },{ 1,2,3,4,5 },{ 1,2,3,4,5 },{ 1,2,3,4,5 } };

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << DiagramCode[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Second Diagram";

	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
				cout << DiagramCode[i][j] << " ";
			cout << endl;
		}
	}
	cout << endl;
	cout << "1st Diagram" << endl;
	{


		for (int i = 0; i<5; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << "  ";
			}
			for (int k = 0; k < var; k++)
			{
				cout << DiagramCode[i][k] << " ";
			}
			var--;
			cout << endl;
		}


	}

	system("pause>0");
}
