#include <iostream>
#include <algorithm>

int binarySearch(const int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    return -1; 
}

int main() {
    const int arraySize = 15;
    
    int lista1[arraySize];
    int lista2[arraySize];
    int lista3[arraySize];
    
    for (int i = 0; i < arraySize; ++i) {
        lista1[i] = i * 2;
        lista2[i] = i * 3;
        lista3[i] = i * 5;
        
    }
    
    int target = 20;
    
    int index1 = binarySearch(lista1, arraySize, target);
    int index2 = binarySearch(lista2, arraySize, target);
    int index3 = binarySearch(lista3, arraySize, target);
    

    if (index1 != -1)
        std::cout << target << " encontrar en la lista1  " << index1 << std::endl;
    else
        std::cout << target << " no encontrado en la lista1" << std::endl;
    
    if (index2 != -1)
        std::cout << target << " encontrar en la lista2 " << index2 << std::endl;
    else
        std::cout << target << " no encontrar en la lista2" << std::endl;
    
    if (index3 != -1)
        std::cout << target << " encontrar en la lista3  " << index3 << std::endl;
    else
        std::cout << target << " no encontrado en la lista3" << std::endl;
    
    
    
    

    return 0;
}