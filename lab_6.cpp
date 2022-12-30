#include <iostream>

using namespace std;



int ack(int n, int m) {
	if (n == 0)
	{
		return m + 1;
	}
	else if (m == 0) {
		return ack(n - 1, 1);
	}
	else {
		return ack(n - 1, ack(n, m - 1));
	}

}

int main()
{
	int n, m;
	int result;
	cout << "Enter n,m:" << endl;
	cin >> n >> m;
	result = ack(n, m);
	cout << "Result:" << result;
  return 0;
}

