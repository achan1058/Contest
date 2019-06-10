#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi v = { 123, 456, 789 };
	string s = "ASDF";

	printv(123); print();
	printv(123456789012345678ll); print();
	printv('c'); print();
	printv(s); print();
	printv(v); print();
	printv(v, true); print();
	printv(123, 123456789012345678ll, 'c', s); print();
	printv("%d %lld %c %s", 123, 123456789012345678ll, 'c', "ASDF"); print();
	printf("%d %lld %c %s", 123, 123456789012345678ll, 'c', "ASDF"); print();
	print();

	print(123);
	print(123456789012345678ll);
	print('c');
	print(s);
	print(v);
	print(v, true);
	print(123, 123456789012345678ll, 'c', s);
	print("%d %lld %c %s", 123, 123456789012345678ll, 'c', "ASDF");
}
