#include "Main.h"

int remove_item(hashtable_t* ht, char* k) {
    unsigned int slot = hash_fct(k) % ht->size;
    structure* item = ht->items[slot];
    structure* prev;
    while (item != NULL) {
        if(strcmp(item->key, k) == 0) {
            prev->next = item->next;
            free_item(item);
            return 0;
        }
        prev = item;
        item = item -> next;
    }
    return -1;
    
}
