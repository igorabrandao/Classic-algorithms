/*!
	<PRE>
	SOURCE FILE : MergeSort.h
	DESCRIPTION.: MergeSort class - with implementation.
	AUTHOR......: Igor A. Brandão
	LOCATION....: NATAL/RN.
	SATARTED ON.: August/2021

	TO COMPILE..: Use makefile.
	OBS.........: Part of Classic Algorithms Project.

	tail UPDATE.: August 02nd, 2021.
	</pre>
*/
#ifndef MERGE_SORT_H_
#define MERGE_SORT_H_

#include <iostream>
#include <string>
#include "../../lib/Array.h"

using namespace std;

/**
 * MergeSort template class
 */
template <class T>
class MergeSort
{
private:
    // ***************************************************
    // ** Functions
    // ***************************************************
    void mergeArrays(Array<T> arrX_, Array<T> arrY_, Array<T> *arr_, int start_, int end_); // Method to merge 2 arrays

public:
    // ***************************************************
    // ** Functions
    // ***************************************************
    MergeSort(){};                                        // Class constructor
    ~MergeSort(){};                                       // Class Destructor
    void mergeSort(Array<T> *arr_, int start_, int end_); // Method to perform the Merge Sort operation
};

#include "MergeSort.inl"
#endif

/* --------------------- [ End of the MergeSort.h header ] ------------------- */
/* ========================================================================= */