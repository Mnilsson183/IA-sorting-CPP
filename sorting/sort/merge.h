using namespace std;

/**
 * @brief This is an implementation of the insertion sort algorithm
 *
 */
namespace sort
{
	class merge
	{
	private:
		void split(vector<unsigned long> &b, unsigned long begin, unsigned long end, vector<unsigned long> &a);
		void merge_vector(vector<unsigned long> &a, unsigned long begin, unsigned long middle, unsigned long end, vector<unsigned long> &b);

	public:
		vector<unsigned long> sort(vector<unsigned long> unsorted);
	};
}