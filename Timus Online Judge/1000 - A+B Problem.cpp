#include <iostream>
#include <chrono>
//#define DEBUG

using namespace std;
int main()
{
	int a, b;
	std::cin >> a;
	std::cin >> b;
	auto start = chrono::high_resolution_clock::now();
	//start time
	std::cout << a + b;
	//end time
	auto end = chrono::high_resolution_clock::now();
	chrono::duration<float> duration = end - start;
	cout << "\ntime - " << duration.count() << "s" << endl;


#ifdef DEBUG
	printf("\ntime = %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
#endif // DEBUG

	return 0;
}