#include <iostream>
#include <vector>

using namespace std;

// Function to merge two sorted arrays
void merge(vector<int>& arr, int left, int mid, int right) {
  // Create two temporary arrays to store the left and right subarrays
  vector<int> leftArray(mid - left + 1);
  vector<int> rightArray(right - mid);

  // Copy the left and right subarrays into the temporary arrays
  for (int i = 0; i < leftArray.size(); i++) {
    leftArray[i] = arr[left + i];
  }
  for (int i = 0; i < rightArray.size(); i++) {
    rightArray[i] = arr[mid + 1 + i];
  }

  // Merge the two temporary arrays back into the original array
  int i = 0, j = 0, k = left;
  while (i < leftArray.size() && j < rightArray.size()) {
    if (leftArray[i] <= rightArray[j]) {
      arr[k] = leftArray[i];
      i++;
    } else {
      arr[k] = rightArray[j];
      j++;
    }
    k++;
  }

  // Copy any remaining elements from the temporary arrays into the original array
  while (i < leftArray.size()) {
    arr[k] = leftArray[i];
    i++;
    k++;
  }
  while (j < rightArray.size()) {
    arr[k] = rightArray[j];
    j++;
    k++;
  }
}

// Function to sort an array using the merge insertion algorithm
void mergeInsertionSort(vector<int>& arr) {
  // If the array is empty or has only one element, it is already sorted
  if (arr.size() <= 1) {
    return;
  }

  // Divide the array into pairs of elements
  for (int i = 0; i < arr.size() - 1; i += 2) {
    // Swap the elements if they are in the wrong order
    if (arr[i] > arr[i + 1]) {
      swap(arr[i], arr[i + 1]);
    }
  }

  // Recursively sort the sorted pairs using the merge insertion algorithm
  for (int i = 2; i < arr.size(); i += 2) {
    mergeInsertionSort(arr.begin() + i - 2, arr.begin() + i);
  }

  // Merge the sorted subarrays
  merge(arr, 0, arr.size() / 2 - 1, arr.size() - 1);
}

// Main function
int main() {
  // Create an unsorted array
  vector<int> arr = {5, 3, 2, 1, 4, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21};

  // Sort the array using the merge insertion algorithm
  mergeInsertionSort(arr);

  // Print the sorted array
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}