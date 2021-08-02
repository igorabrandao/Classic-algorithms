// ***************************************************
// ** Implements the functions from MergeSort class
// ***************************************************
#include "MergeSort.h"

// ***************************************************
// ** Functions
// ***************************************************

/**
 * Method to merge 2 arrays
 */
template <typename T>
void mergeArrays(Array<T> arrX_, Array<T> arrY_, Array<T> arr_, int start_, int end_)
{
	// Declare the indexes used for the merge operation
	int mid = (start_ + end_) / 2;
	int idx1 = start_;
	int idx2 = mid + 1;

	
}

/**
 * Method to perform the Merge Sort operation
 */
template <typename T>
void MergeSort<T>::mergeSort(Array<T> *arr_, int start_, int end_)
{
	// Base case handler
	if (start_ >= end_)
		return; // It means the array size is 0 (start_ > end_) or 1 (start_ = end_)

	// Find the input array mid
	int mid = (start_ + end_) / 2;

	// Divide the input array into 2 arrays
	Array<T> x;
	Array<T> y;

	// Fill the splitted arrays
	for (auto i = 0; i < mid; i++)
		x.push(arr_->getAt(i)); // Fill the first half of the input array

	for (auto i = mid + 1; i <= end_; i++)
		y.push(arr_->getAt(i)); // Fill the second half of the input array

	// Sort each splitted array
	this->mergeSort(&x, start_, mid);
	this->mergeSort(&y, mid + 1, end_);

	// Merge the sorted array
	this->mergeArrays(x, y, arr_, start_, end_);
}