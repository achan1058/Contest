#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi arr(3);
	read(arr);
	printf("%d\n", *max_element(all(arr)) - *min_element(all(arr)));
}
