#include <chrono>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "util/generate.h"
#include "sort/merge.h"

using namespace std::chrono;
using namespace util;
using namespace sort;

/**
 * @brief Display the vector to the screen
 *
 * @param data
 */
void display(vector<unsigned long> data)
{
	for (vector<unsigned long>::iterator Iter = data.begin(); Iter < data.end(); Iter++)
	{
		cout << *Iter;

		if (Iter < (data.end() - 1))
		{
			cout << ", ";
		}
	}
}

/**
 * @brief Main
 *
 * @return int
 */
int main()
{
	util::generate generate;
	sort::merge merge;
	vector<unsigned long> unsorted_data;
	vector<unsigned long> sorted_data;

	for (unsigned long i = 1; i <= 10; i++)
	{
		// Generate the unsorted data
		unsorted_data = generate.raw(i * 1000000);

		// Start the clock
		auto start = high_resolution_clock::now();

		// Sort
		sorted_data = merge.sort(unsorted_data);

		// Stop the clock
		auto stop = high_resolution_clock::now();

		// Output info
		auto duration = duration_cast<milliseconds>(stop - start);
		cout << "Size: " << unsorted_data.size() << ", duration(ms): " << duration.count() << endl;
	}

	// bool valid = generate.validate(data, sorted_data);
	// cout << "Size: " << data.size() << ", duration: " << duration.count() << (valid ? ", valid" : ", invalid") << endl;
	// display(data);
	// cout << "\n"
	// 	 << endl;
	// display(sorted_data);

	return 0;
}
