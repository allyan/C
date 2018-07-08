#ifndef __BUBBLE_SORT__
#define __BUBBLE_SORT__

/** 
 * @brief Generic Bubble Sort, that sorting any types of array.
 * 
 * @author Author Alisher Aliev (allyanaliev@gmail.com) 
 */ 
 
#define TRUE 1
#define FALSE 0

typedef int (*fp)(void*, void*);

/**  
 * @brief Generic Bubble Sort
 * @param[in] _arr - pointer to any Array, which you want to sort
 * @param[in] sizeofitem - sizeof(YOUR_ITEM);
 * @param[in] _numOfItems - the number of actual items currently in array;
 * @param[in] _IsLess - The user provide _IsLess Function, that compares two items;
 * @return 
 *
 * @warning if _arr is NULL function will return. 
 */
void SortGen(void* _arr, size_t sizeofitem, size_t _numOfItems, fp _IsLess);

#endif /* __BUBBLE_SORT__ */
