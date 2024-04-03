#include <iostream>
using namespace std;
int main() {
	int a;
	int b;
	cin >> a;
	cin >> b;
	cout << b / a;
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	int a;
	int b;
	cin >> a;
	cin >> b;
	cout << b % a;
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	cout << a % 10;
	return 0;
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	cout << a / 10;
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;

	cout << (a % 100) / 10;
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	int num;
	int a;
	int b;
	int c;
	cin >> num;
	a = num % 10;
	b = (num / 10) % 10;
	c = num / 100;
	cout << a + b + c;

	return 0;
}
#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	cout << (x / 2 + x / 2 + 2);
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	cout << (a / 2) + (a % 2) + (b / 2) + (b % 2) + (c / 2) + (c % 2);


	// put your code here
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	// put your code here
	int a;
	int b;
	int c;

	cin >> a >> b >> c;
	int resrub = a * 100;
	int reskop = b;
	int result = resrub + reskop;
	int res2 = result * c;
	int resr = res2 / 100;
	int resk = res2 % 100;
	cout << resr << " " << resk;


	return 0;
}
#include <iostream>
using namespace std;
int main() {
	// put your code here
	int n;
	cin >> n;
	cout << n / 3600 % 24 << ':' << n / 600 % 6 << n % 3600 / 60 % 10 << ':' << n / 10 % 6 << n % 10;

	return 0;
}
#include <iostream>
using namespace std;
int main() {
	// put your code here
	int a1;
	int b1;
	int c1;
	cin >> a1 >> b1 >> c1;

	int a2;
	int b2;
	int c2;
	cin >> a2 >> b2 >> c2;

	int sek1 = c1 + (b1 * 60) + (a1 * 60 * 60);
	int sek2 = c2 + (b2 * 60) + (a2 * 60 * 60);
	int res = sek2 - sek1;

	cout << res;

	return 0;
}
#include <iostream>
using namespace std;
int main() {
	int doroga = 109;
	int skorost;
	int vrema;
	cin >> skorost >> vrema;
	int result = ((109 + ((skorost * vrema) % 109)) % 109);
	cout << result;

	return 0;
}
#include <iostream>
using namespace std;
int main() {
	// put your code here
	int n;
	cin >> n;
	cout << n / 100 - n % 100 % 10 * 10 - n % 100 / 10 + 1;

	return 0;
}
#include <iostream>
using namespace std;
int main() {
	// put your code here
	int h, a, b;
	cin >> h >> a >> b;
	cout << ((h - b) + (a - b) - 1) / (a - b);
	return 0;
}



