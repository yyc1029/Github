#include <bits/stdc++.h>
using namespace std;



int main(){
    int a, b, c, d, e, f, g, h, i;
    while(cin >> a >> b >> c >> d >> e >> f >> g >> h >> i){
        //a
        if(a != 0){
            if(a > 0 && a == 1){
                cout << "x^8";
            }
            if(a > 0 && a != 1){
                cout << a << "x^8";
            }
            if(a < 0 && a == -1){
                cout << "-x^8";
            }
            if(a < 0 && a != -1){
                cout << "-" << abs(a) << "x^8";
            }
        }
        //b
        if(a == 0){
            if(b != 0){
                if(b > 0 && b == 1){
                    cout << "x^7";
                }
                if(b > 0 && b != 1){
                    cout << b << "x^7";
                }
                if(b < 0 && b == -1){
                    cout << "-x^7";
                }
                if(b < 0 && b != -1){
                    cout << "-" << abs(b) << "x^7";
                }
            }
        }
        else{
            if(b != 0){
                if(b > 0 && b == 1){
                    cout <<" + x^7";
                }
                if(b > 0 && b != 1){
                    cout << " + "<< b << "x^7";
                }
                if(b < 0 && b == -1){
                    cout << " - x^7";
                }
                if(b < 0 && b != -1){
                    cout << " - " << abs(b) << "x^7";
                }
            }
        }
        //c
        if(a == 0 && b == 0){
            if(c != 0){
                if(c > 0 && c == 1){
                    cout << "x^6 ";
                }
                if(c > 0 && c != 1){
                    cout << c << "x^6";
                }
                if(c < 0 && c == -1){
                    cout << "-x^6";
                }
                if(c < 0 && c != -1){
                    cout << "-" << abs(c) << "x^6";
                }
            }
        }
        else{
            if(c != 0){
                if(c > 0 && c == 1){
                    cout <<" + x^6";
                }
                if(c > 0 && c != 1){
                    cout << " + "<< c << "x^6";
                }
                if(c < 0 && c == -1){
                    cout <<" - x^6";
                }
                if(c < 0 && c != -1){
                    cout << " - " << abs(c) << "x^6";
                }
            }
        }
        //d
        if(a == 0 && b == 0 && c == 0){
            if(d != 0){
                if(d > 0 && d == 1){
                    cout << "x^5";
                }
                if(d > 0 && d != 1){
                    cout << d << "x^5";
                }
                if(d < 0 && d == -1){
                    cout << "-x^5";
                }
                if(d < 0 && d != -1){
                    cout << "-" << abs(d) << "x^5";
                }
            }
        }
        else{
            if(d != 0){
                if(d > 0 && d == 1){
                    cout <<" + x^5";
                }
                if(d > 0 && d != 1){
                    cout << " + "<< d << "x^5";
                }
                if(d < 0 && d == -1){
                    cout <<" - x^5";
                }
                if(d < 0 && d != -1){
                    cout << " - " << abs(d) << "x^5";
                }
            }
        }
        //e
        if(a == 0 && b == 0 && c == 0 && d == 0){
            if(e != 0){
                if(e > 0 && e == 1){
                    cout << "x^4";
                }
                if(e > 0 && e != 1){
                    cout << e << "x^4";
                }
                if(e < 0 && e == -1){
                    cout << "-x^4";
                }
                if(e < 0 && e != -1){
                    cout << "-" << abs(e) << "x^4";
                }
            }
        }
        else{
            if(e != 0){
                if(e > 0 && e == 1){
                    cout <<" + x^4";
                }
                if(e > 0 && e != 1){
                    cout << " + "<< e << "x^4";
                }
                if(e < 0 && e == -1){
                    cout <<" - x^4";
                }
                if(e < 0 && e != -1){
                    cout << " - " << abs(e) << "x^4";
                }
            }
        }
        //f
        if(a == 0 && b == 0 && c == 0 && d == 0 && e == 0){
            if(f != 0){
                if(f > 0 && f == 1){
                    cout << "x^3";
                }
                if(f > 0 && f != 1){
                    cout << f << "x^3";
                }
                if(f < 0 && f == -1){
                    cout << "-x^3";
                }
                if(f < 0 && f != -1){
                    cout << "-" << abs(f) << "x^3";
                }
            }
        }
        else{
            if(f != 0){
                if(f > 0 && f == 1){
                    cout <<" + x^3";
                }
                if(f > 0 && f != 1){
                    cout << " + "<< d << "x^3";
                }
                if(f < 0 && f == -1){
                    cout <<" - x^3";
                }
                if(f < 0 && f != -1){
                    cout << " - " << abs(f) << "x^3";
                }
            }
        }
        //g
        if(a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0){
            if(g != 0){
                if(g > 0 && g == 1){
                    cout << "x^2";
                }
                if(g > 0 && g != 1){
                    cout << g << "x^2";
                }
                if(g < 0 && g == -1){
                    cout << "-x^2";
                }
                if(g < 0 && g != -1){
                    cout << "-" << abs(g) << "x^2";
                }
            }
        }
        else{
            if(g != 0){
                if(g > 0 && g == 1){
                    cout <<" + x^2";
                }
                if(g > 0 && g != 1){
                    cout << " + "<< g << "x^2";
                }
                if(g < 0 && g == -1){
                    cout <<" - x^2";
                }
                if(g < 0 && g != -1){
                    cout << " - " << abs(g) << "x^2";
                }
            }
        }
        //h
        if(a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0){
            if(h != 0){
                if(h > 0 && h == 1){
                    cout << "x";
                }
                if(h > 0 && h != 1){
                    cout << h << "x";
                }
                if(h < 0 && h == -1){
                    cout << "-x";
                }
                if(h < 0 && h != -1){
                    cout << "-" << abs(h) << "x";
                }
            }
        }
        else{
            if(h != 0){
                if(h > 0 && h == 1){
                    cout <<" + x";
                }
                if(h > 0 && h != 1){
                    cout << " + "<< h << "x";
                }
                if(h < 0 && h == -1){
                    cout <<" - x";
                }
                if(h < 0 && h != -1){
                    cout << " - " << abs(h) << "x";
                }
            }
        }
        //i
        if(a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0 && h == 0){
            cout << i;
        }
        else{
            if(i != 0){
                if(i > 0){
                    cout << " + "<< i;
                }
                if(i < 0){
                    cout << " - "<< abs(i);
                }
            }
        }
        cout << endl;
    }
    return 0;
}