#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string text = "";
	string t = "";
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	while (cin >> t) {
		text += t + " ";
	}
	t = "";
	for (int i = 1; i < text.length(); i++)
	{
		if (text[(text.length() - 1) - i] != ' ')
		{
			t += text[(text.length() - 1) - i];
		}
		else
		{
			t = string(t.rbegin(), t.rend());
			cout << setprecision(4) << fixed << sqrt(atoll(t.c_str())) << endl;
			t = "";
		}
	}
	if (t != "") {
		t = string(t.rbegin(), t.rend());
		cout << setprecision(4) << fixed << sqrt(atoll(t.c_str()));
	}
	return 0;
}