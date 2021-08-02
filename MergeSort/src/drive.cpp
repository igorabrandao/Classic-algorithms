/*! \brief drive.cpp.
 *
 *  Program to test the MergeSort class.
*/
#include <iostream>
#include <string>
#include "MergeSort.h"
#include "../../lib/Array.h"

using namespace std;

/**
 * Main method
 */
int main()
{
    // Array initial size
    int iSize = 10;

    /* -------------------------- [ Test MergeSort class ] -------------------------- */
    
    // Array instance of int
    Array<int> intArray(iSize);

    /* ============================================================================== */

    // Finish the program
    cout << "Finished successfully!\n";
    return EXIT_SUCCESS;
}