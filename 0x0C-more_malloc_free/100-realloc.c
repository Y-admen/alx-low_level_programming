#include"main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr:old ptr
 * @old_size:int
 * @new_size:int
 * Return: ptr2
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
	switch (new_size) {
	case 0:
		if (ptr != NULL) {
			free(ptr);
	}
	return NULL;
	case old_size:
		return ptr;
	default:
	if (new_size > old_size) {
		void *new_ptr = malloc(new_size);
		if (new_ptr == NULL) {
			return NULL;
		}
		memcpy(new_ptr, ptr, old_size);
		free(ptr);
		return new_ptr;
		} else {
		// new_size is less than or equal to old_size
		// Do nothing and return the original pointer
		return ptr;
		}
  			}
}
