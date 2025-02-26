#include <iostream>

// Function prototype for taking array input
void TakingInputElement(double Array[], int Size);
// Function prototype for showing array output
void ShowingOutputElement(double Array[], int Size);
// Function prototype for sorting array output in ascending
void SortArrayInAscending(double Array[], int Size);
// Function prototype for sorting array output in descending
void SortArrayInDescending(double Array[], int Size);
// Function prototype for counting total number of negative elements
int CountingNumOfNegativeValue(double Array[], int Size);

int main()
{
    int size; // Variable to store the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size; // User input for array size

    double* array = new double[size]; // Dynamic memory allocation for the array
    std::cout << "\nEnter the elements of the array" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    TakingInputElement(array, size); // Function call to take array input

    std::cout << "\nArray: ";
    ShowingOutputElement(array, size); // Function call to show array output
    std::cout << "\n---------------------------------------------" << std::endl;
    std::cout << std::endl;


    int countNegative = CountingNumOfNegativeValue (array, size); // Function call to count total of negative element

    std::cout<< "Count of Negative Elements in the Array: ";
    if(countNegative<=0)
    {
        std::cout << "N/A" << std::endl;
    }
    else
    {
        std::cout<< countNegative << std::endl;
    }

    SortArrayInAscending(array, size); // Function to sort array elements in ascending

    std::cout << "Array in Ascending Order: ";
    ShowingOutputElement(array, size); // Display sorted array
    std::cout << std::endl;

    SortArrayInDescending(array, size); //Function to sort array element in descending

    std::cout << "Array in Descending Order: ";
    ShowingOutputElement(array, size);
    std::cout << std::endl;

    delete[] array; // Deallocate dynamically allocated memory
    return 0;
}

// Function to take user input for array elements
void TakingInputElement(double Array[], int Size)
{
    for (int i = 0; i < Size; i++)
    {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> Array[i];
    }
}

// Function to show user-given input for array elements
void ShowingOutputElement(double Array[], int Size)
{
    for (int i = 0; i < Size; i++)
    {
        std::cout << Array[i] << " ";
    }
}

// Function to find total number of negative value
int CountingNumOfNegativeValue(double Array[], int Size)
{
    int count = 0;
    for (int i = 0; i < Size; i++)
    {
        if(Array[i]<0)
        {
            count++; // Increment by one when value is negative
        }
    }
    return count;
}

// Function to sort array elements in ascending order
void SortArrayInAscending(double Array[], int Size)
{
    for (int i = 0; i < Size - 1; i++)
    {
        for (int j = 0; j < Size - i - 1; j++) // Optimized inner loop
        {
            if (Array[j] > Array[j + 1])
            {
                double temp = Array[j];
                Array[j] = Array[j + 1];
                Array[j + 1] = temp;
            }
        }
    }
}

//Function to sort array element in descending order
void SortArrayInDescending(double Array[], int Size)
{
    for (int i = 0; i < Size - 1; i++)
    {
        for (int j = 0; j < Size - i - 1; j++)
        {
            if (Array[j] < Array[j + 1])
            {
                double temp = Array[j];
                Array[j] = Array[j + 1];
                Array[j + 1] = temp;
            }
        }
    }
}
//code by Emon