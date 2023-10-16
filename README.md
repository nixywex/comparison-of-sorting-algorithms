# Comparison of bubble sort, selection sort and insertion sort
The topic, now that we have to deal with a large amount of data, is very relevant, but the algorithms considered are not effective.

**Purpose**: to analyze the implementation of the above algorithms, to compare their performance, and to choose the most effective among those considered.

**Task**: write code in C for three types of algorithms, carry out tests on operability, carry out tests on a large amount of data, and compare the speed of work.
## Realisation
The implementation of the algorithms is written in C. An array of personal structs with the fields id, name, sum, and date and a length of 20000 elements was used for comparison.

Unit testing was done using the Google testing framework.

### Bubble sort
```c
void bubbleSort(int array[], int length){
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - 1; j++) {
            if (CONDITION) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}
```

### Selection sort
```c
void selectionSort(int array[], int length){
    int minIndex, tmp;

    for (int i = 0; i < length; i++){
        minIndex = i;

        for (int j = i + 1; j < length; j++)
            if (CONDITION)
                minIndex = j;

        tmp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = tmp;
    }
}
```
### Insertion sort
```c
void insertionSort(int array[], int length){
    int newElement, index;

    for (int i = 1; i < length; i++){
        newElement = array[i];
        index = i - 1;

        while(index >= 0 && CONDITION){
            array[index + 1] = array[index];
            index -= 1;
        }

        array[index + 1] = newElement;
    }
}
```
## Tests
|           | The Worst Performance | Best Performance | Average performance | Efficiency    | Average operating speed<sup>*</sup>  |
|-----------|-----------------------|------------------|---------------------|---------------|-------------------------|
| Bubble    | О(n²)                 | О(n)             | О(n²)               | Low           | 6,835480                |
| Selection | О(n²)                 | О(n²)            | О(n²)               | Not practical | 2,216371                |
| Insertion | О(n²)                 | О(n)             | О(n²)               | Mostly low    | 0,794791                |

<sup>*</sup> the same arrays of struct, with a length of 20,000 elements, and sorted by the "date" field. The average time was calculated on the basis of 5 measurements of sorting in C.

## Conclusion
After comparing the sorting algorithms, we can conclude that the most effective among them is sorting by inclusion, followed by sorting by selection, and finally the bubble method.

These algorithms are in the same group (time O (n²)). There are more efficient methods with execution times of O(n log n), O(n), and O(n log² n), but these algorithms are easy to implement and suitable for small data sets.
