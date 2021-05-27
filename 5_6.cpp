namespace hm {
void ZerOne (int arr[]) {
	for (int i = 0; i < 8; i++)
		arr[i] ^= 1;
}
		
void FillingArr (int arr[]) {
	for (int i = 0; i < 8; i++)
		arr[i] = i*3 + 1;
}

bool checkBalance(int arr[]) {
	int n = 0;
	bool check (false);
	for (int i = 0; i < 5; i++)
		n += arr[i];
	int i = 0;
	int k = n/2; 
	if (n % 2 == 0)
		while (n >= k) {
			if (n == k) check = true;
			n -= arr[i++];
		}

	return check;
}

/*void mvArr(int arr[], int n) {
	int tm[6] = {0};
	if (n > 0)
		for (int i = 0; i < 6; i++) {
			if (n + i <= 5) tm[i + n] = arr[i];
			else tm[i + n - 6] = arr[i];
		}
	if (n < 0)
		for (int i = 0; i < 6; i++) {
                        if (i + n >= 0) tm[i + n] = arr[i];
                        else tm[i + n + 6] = arr[i];
		}

	for (int i = 0; i < 6; i++) 
		arr[i] = tm [i];
}

void ZerOne5 (int size, ...) {
	va_list lst;ch
	va_start(lst, size);

        for (int i = 0; i < size; i++)
                printf ("%d ", va_arg(lst, int) ^ 1);

	va_end(lst);
}*/
}
