#include <iostream>
using namespace std;



int main() {
    long long n;
    cin >> n;
    long long sum = n*(n+1)/2;
    if (sum % 2 == 0) {
        cout << "YES" << endl << "Граммировки у Пети: ";
        long long *mash = new long long[n];
        long long ch = 0;
        long long petsum = 0; long long mashsum = 0;
        long long petpor = 0;long long mashpor = 0;
        long long pol = sum/2;
        for (int i = n; i>0;i--) {
            if (petsum + i <= sum/2) {
                petsum+=i;
                cout << i << " ";
                petpor++;
            }else {
                mash[ch] = i;
                mashpor++;
                ch++;
            }
        }
        mash[ch] = 0;
        cout << endl << "Количество порций у Пети: " << petpor << endl;
        cout << "Количество порций у Маши: " << mashpor << endl;
        cout << "Граммировки у Маши: ";
        long long sch=0;
        while (mash[sch]!=0) {
            cout << mash[sch] << " ";
            sch++;
        }
        delete[] mash;
        cout << endl;
        
    }else {
        cout << "NO" << endl;
    }
}