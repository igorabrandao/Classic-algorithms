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
void MergeSort<T>::mergeArrays(Array<T> arrX_, Array<T> arrY_, Array<T> *arr_, int start_, int end_)
{
	// Declare the indexes used for the merge operation
	int mid = (start_ + end_) / 2; // mid of the input array
	int xIdx = start_;			   // index of the array X
	int yIdx = start_;			   // index of the array Y
	int idx = start_;			   // index of the merged array

	// Loop over both X & Y arrays
	while (xIdx <= mid && yIdx <= end_)
	{
		// Check which current value of array X & Y is smaller
		if (arrX_.getAt(xIdx) < arrY_.getAt(yIdx))
		{
			// Add the current value o X to the merged array
			arr_->push(arrX_[xIdx]);
			xIdx++;
		}
		else
		{
			// Add the current value o Y to the merged array
			arr_->push(arrY_[yIdx]);
			yIdx++;
		}

		// Increment the merge array index
		idx++;
	}

	// Add the remaining of X to the merged array
	while (xIdx <= arrX_.size())
	{
		arr_->push(arrX_[xIdx]);
		idx++;
		xIdx++;
	}

	// Add the remaining of Y to the merged array
	while (yIdx <= arrY_.size())
	{
		arr_->push(arrY_[yIdx]);
		idx++;
		yIdx++;
	}
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
	for (auto i = 0; i <= mid; i++)
		x.push(arr_->getAt(i)); // Fill the first half of the input array

	for (auto i = mid + 1; i <= end_; i++)
		y.push(arr_->getAt(i)); // Fill the second half of the input array

	// Sort each splitted array
	this->mergeSort(&x, start_, mid);
	this->mergeSort(&y, mid + 1, end_);

	// Merge the sorted array
	this->mergeArrays(x, y, arr_, start_, end_);
}