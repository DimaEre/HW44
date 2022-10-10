#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std;

void показати(vector <int> A)
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

	показати(A);

	cout << "Enter number(1 - " << N << "):	";
	cin >> b;
	if (b == a)
	{
		cout << "Congratulations!! YOU WON!! \n";
	}
	else
	{
		cout << "Im sorry, you lose...\n";
	}
	return 0;


	
}