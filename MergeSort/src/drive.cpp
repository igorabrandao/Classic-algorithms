/*! \brief drive.cpp.
 *
 *  Program to test the MergeSort class.
*/
#include <iostream>
#include <string>
#include "MergeSort.h"

using namespace std;

/**
 * Main method
 */
int main()
{
    // Array initial size
    int iSize = 10;

    /* -------------------------- [ Test MergeSort class ] -------------------------- */

    // Merge Sort instances
    MergeSort<int> intMergeSort;

    // Array instance of int
    Array<int> intArray;

    // Fill the array with random values
    for (int i = 0; i < iSize; i++)
        intArray.push((rand() % iSize));

    // Print the initial state of the array
    cout << "intArray initial state:" << endl;
    intArray.print("");
    cout << endl;

    // TODO: Merge Sort here

    // Print the int array after sorting
    cout << "intArray after Merge Sort:" << endl;
    intArray.print("");
    cout << endl;

    /* ============================================================================== */

    // Finish the program
    cout << "Finished successfully!\n";
    return EXIT_SUCCESS;
}