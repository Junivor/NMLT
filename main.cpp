#include "header.h"

int CAU1() {
    int n;
    int tong = 0;

    
    do {
        cout << "Nhap n (n > 3 va n < 50): ";
        cin >> n;
    } while (n <= 3 || n >= 50);

    for (int i = 0; i <= n; i++) {
        tong += i;
    }
    return tong;
}

int CAU2() {
    int n;
    int tong = 0;

    
    do {
        cout << "Nhap n (n >= 5 va n <= 20): ";
        cin >> n;
    } while (n <= 5 || n >= 20);

    for (int i = 0; i <= n; i++) {
        int soMu = i * i;
        tong += soMu;
    }
    return tong;
}

float CAU3() {
    int n;
    float tong = 0;

    
    do {
        cout << "Nhap n (n >= 7): ";
        cin >> n;
    } while (n <= 7);

    for (int i = 1; i <= n; i++) {
        tong += 1 / (float)i;
    }

    return tong;
}

float CAU4() {
    int n;
    float tong = 0;

    
    do {
        cout << "Nhap n (n > 9): ";
        cin >> n;
    } while (n < 9);

    for (int i = 1; i <= n; i++) {
        tong += float(1) / (i * 2);
    }

    return tong;
}

float CAU5() {
    int n;
    float tong = 0;

    
    do {
        cout << "Nhap n (n >= 2): ";
        cin >> n;
    } while (n <= 2);

    for (int i = 0; i <= n; i++) {
        tong += float(1) / (2 * i + 1);
    }

    return tong;
}


float CAU6() {
    int n;
    float tong = 0;

    
    do {
        cout << "Nhap n (n > 6): ";
        cin >> n;
    } while (n < 6);

    for (int i = 1; i <= n; i++) {
        tong += float(1) / i * (i + 1);
    }

    return tong;
}

float CAU7() {
    int n;
    float tong = 0;

    
    do {
        cout << "Nhap n (n >= 1): ";
        cin >> n;
    } while (n <= 1);

    for (int i = 0; i <= n; i++) {
        tong += float(i) / (i + 1);
    }

    return tong;
}

float CAU8() {
    int n;
    float tong = 0;

    
    do {
        cout << "Nhap n (n > 5): ";
        cin >> n;
    } while (n < 5);

    for (int i = 0; i <= n; i++) {
        tong += float(2 * i + 1) / (2 * i + 2);
    }

    return tong;
}

int CAU9() {
    int n;
    int tong = 1;

    
    do {
        cout << "Nhap n (n > 6): ";
        cin >> n;
    } while (n < 6);

    for (int i = 1; i <= n; i++) {
        tong *= i;
    }

    return tong;
}

int CAU10(int x, int n) {
    int tong = x;
    for (int i = 1; i < n; i++) {
        tong *= x;
    }
    return tong;
}

int CAU11(int n) {
    int S = 0, P = 1;

    for (int i = 1 ; i <= n ; i++) {
        P *= i;
        S += P;
    }

    return S;
}

int CAU12(int x, int n) {
    int tong = x;
    for (int i = 1; i < n; i++) {
        tong *= x;
    }
    return tong;
}


int main() {
    int x, n;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    // cout << "Cau 1 >> " << CAU1() << endl;
    // cout << "Cau 2 >> " << CAU2() << endl;
    // cout << "Cau 3 >> " << CAU3() << endl;
    // cout << "Cau 4 >> " << CAU4() << endl;
    // cout << "Cau 5 >> " << CAU5() << endl;
    // cout << "Cau 6 >> " << CAU6() << endl;
    // cout << "Cau 7 >> " << CAU7() << endl;
    // cout << "Cau 8 >> " << CAU8() << endl;
    // cout << "Cau 9 >> " << CAU9() << endl;
    // cout << "Cau 10 >> " << CAU10(x, n) << endl;
    // cout << "Cau 11 >> " << CAU11(n) << endl;
    // cout << "Cau 12 >> " << CAU12(x, n) << endl;

}