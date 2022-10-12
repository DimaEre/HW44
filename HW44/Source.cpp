#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std;

void ïîêàçàòè(vector <int> A)
{
	for (size_t i = 0; i < A.size(); i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}



int main()
{
	srand(time(0));

	int N = 0;
	int a = 0;
	int b = 0;

	vector<int> A;
	vector<int> B;

	bool q = false;

	cout << "\nEnter size(N):	";
	cin >> N;
	for (size_t i = 1; i <= N + 1; i++)
	{
		A.push_back(i);
	}
	cout << endl;

	random_shuffle(A.begin(), A.end());
	a = A[N];
	A.pop_back();

	ïîêàçàòè(A);

	cout << endl << a;
	return 0;


	
}
