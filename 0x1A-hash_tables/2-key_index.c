#include "hash_tables.h"
/**
 * key_index - a fucntion that gets the index of a given key
 * @size: the size of the hash table
 * @key: the key
 * Return: returns the index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int long index;
	index = hash_djb2(key);
	return (index % size);
}
