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

using namespace std;

/**
 * MergeSort template class
 */
template <class T>
class MergeSort
{
private:
    // ***************************************************
    // ** Attributes
    // ***************************************************

public:
    // ***************************************************
    // ** Functions
    // ***************************************************
    MergeSort();  // Class constructor
    ~MergeSort(); // Class Destructor
};

#include "MergeSort.inl"
#endif

/* --------------------- [ End of the MergeSort.h header ] ------------------- */
/* ========================================================================= */