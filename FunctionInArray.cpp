#include <iostream>

// Function prototype for taking array input
void TakingInputElement(double Array[], int Size);
// Function prototype for showing array output
void ShowingOutputElement(double Array[], int Size);

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
