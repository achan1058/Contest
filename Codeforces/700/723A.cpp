#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi arr(3);
	cin >> arr[0] >> arr[1] >> arr[2];
	printf("%d\n", *max_element(all(arr)) - *min_element(all(arr)));
}