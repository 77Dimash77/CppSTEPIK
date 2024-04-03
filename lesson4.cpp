#include <iostream>
using namespace std;
int main() {
    // put your code here
    int a;
    int b;
    cin >> a >> b;
    if (a > b) {
        cout << a;
    }
    else if (a < b) {
        cout << b;
    }
    else {
        cout << a;
    }

    return 0;
}
#include <iostream>
using namespace std;
int main() {
    // put your code here
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << 1;
    }
    else if (a < b) {
        cout << 2;
    }
    else {
        cout << 0;
    }
#include <iostream>
    using namespace std;
    int main() {
        // put your code here
        int a, b, c;
        cin >> a >> b >> c;
        if (a >= b && a >= c) {
            cout << a;
        }
        else if (b >= a && b >= c) {
            cout << b;
        }

        else if (c >= a && c >= b) {
            cout << c;
        }
        return 0;
    }

    return 0;
}
#include <iostream>
using namespace std;
int main() {
    // put your code here
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && a == c && b == c) {
        cout << 3;
    }
    else if (a != b && a != c && b != c) {
        cout << 0;
    }
    else {
        cout << 2;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    // put your code here
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && c + b > a) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c || b == d) cout << "YES";

    else cout << "NO";

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a, b, a1, b1;
    cin >> a >> b >> a1 >> b1;
    if (((a == a1) || (a == a1 - 1) || (a == a1 + 1)) && ((b == b1) || (b == b1 + 1) || (b == b1 - 1)))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (((c - a) == (d - b)) || ((c - a) == (b - d)) || ((a - c) == (d - b)) || ((a - c) == (b - d))) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (((c == a + 1) && (d == b + 2)) || ((c == a - 1) && (d == b + 2)) || ((c == a + 2) && (d == b + 1)) || ((c == a + 2) && (d == b - 1)) || ((c == a + 1) && (d == b - 2)) || ((c == a - 1) && (d == b - 2)) || ((c == a - 2) && (d == b - 1)) || ((c == a - 2) && (d == b + 1))) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int m, n, k;
    cin >> m >> n >> k;
    if (((k % n == 0 && k <= m * n) || (k % m == 0 && k <= m * n)) || ((m * n - k == m ||
        n * m % k == 0) && (m >= n && k >= n)) || ((m * n - k == n || m * n % k == 0) && (n >= m && k >= m))) {
        cout << "YES";
    }
    else { cout << "NO"; }
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    if (n > m) {
        int n1 = n;
        n = m;
        m = n1;
    }
    int x2 = n - x;
    int y2 = m - y;
    if (x <= y && x <= x2 && x <= y2) {
        cout << x;
    }
    else if (x2 <= y && x2 <= x && x2 <= y2) {
        cout << x2;
    }
    else if (y <= x && y <= y2 && y <= x2) {
        cout << y;
    }
    else {
        cout << y2;
    }
    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) {
        swap(a, b);
    }
    if (a > c) {
        swap(a, c);
    }
    if (b > c) {
        swap(b, c);
    }
    cout << a << " " << b << " " << c;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(NULL); cin.tie(nullptr);
    int A1, B1, C1, A2, B2, C2;
    cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
    int s[] = { A1, B1, C1 };
    int z[] = { A2, B2, C2 };
    sort(s, s + 3);
    sort(z, z + 3);
    if (s[0] == z[0] && s[1] == z[1] && s[2] == z[2]) {
        cout << "Boxes are equal";
    }
    else if (s[0] >= z[0] && s[1] >= z[1] && s[2] >= z[2]) {
        cout << "The first box is larger than the second one";
    }
    else if (s[0] <= z[0] && s[1] <= z[1] && s[2] <= z[2]) {
        cout << "The first box is smaller than the second one";
    }
    else {
        cout << "Boxes are incomparable";
    }
    return 0;
}
