int hashfct(const char * key) {
	int hash = 401;
	int c;

	while (*key != '\0') {
		hash = ((hash4) + (int)(*key)) % MAX_TABLE;
		key++;
	}

	return hash % MAX_TABLE;
}

