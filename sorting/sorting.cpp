#include <chrono>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include "util/generate.h"
#include "sort/merge.h"
#include "sort/bubble.h"
#include "sort/insertion.h"

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
	cout << endl;
}

/**
 * @brief Main
 *
 * @return int
 */
int main()
{
	bool debug = false;

	util::generate generate;
	sort::merge merge;
	sort::bubble bubble;
	sort::insertion insertion;
	vector<unsigned long> unsorted_data;
	vector<unsigned long> sorted_data;
	int data_size;
	int loop_size;

	if (debug)
	{
		data_size = 2;
		loop_size = 4;
	}
	else
	{
		data_size = 1000;
		loop_size = 10;
	}

	// 0 = MergeSort;
	// 1 = BubbleSort
	// 2 = insertionSort

	for (int j = 0; j < 3; j++)
	{
		for (int i = 1; i <= loop_size; i++)
		{
			// Generate the unsorted data
			unsorted_data = generate.raw(i * data_size);

			// Start the clock
			auto start = high_resolution_clock::now();

			// Sort
			if (j == 0)
				sorted_data = merge.sort(unsorted_data);
			else if (j == 1)
				sorted_data = bubble.sort(unsorted_data);
			else if (j == 2)
				sorted_data = insertion.sort(unsorted_data);

			// Stop the clock
			auto stop = high_resolution_clock::now();

			// Output info
			auto duration = duration_cast<milliseconds>(stop - start);

			string sort_type;
			if (j == 0)
				sort_type = ", MergeSort";
			else if (j == 1)
				sort_type = ", BubbleSort";
			else if (j == 2)
				sort_type = ", insertionSort";

			if (debug)
			{
				bool valid = generate.validate(unsorted_data, sorted_data);
				cout << "Size: " << unsorted_data.size() << ", duration(ms): " << duration.count() << (valid ? ", valid" : ", invalid") << sort_type << endl;
				display(unsorted_data);
				display(sorted_data);
			}
			else
				cout << "Size: " << unsorted_data.size() << ", duration(ms): " << duration.count() << sort_type << endl;
		}
		cout
			<< endl;
	}

	return 0;
}
