#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n,m;
	while (cin >> n >> m&&!(n==0&&m==0))
	{
		vector<int> vec;
		int a;
		while (n--)
		{
			cin >> a;
			vec.push_back(a);
		}
		vec.push_back(m);
		sort(vec.begin(), vec.end());
		for (auto iter = vec.begin(); iter != vec.end(); iter++)
		{
			if (iter + 1 != vec.end())
				cout << *iter << " ";
			else
				cout << *iter << endl;
		}
	}
	return 0;
}