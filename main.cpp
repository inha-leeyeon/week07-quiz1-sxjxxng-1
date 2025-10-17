
#include <iostream>
#include <vector>
#include <algorithm>
#include "Square.h"

using namespace std;


bool cmpArea(const Square& a, const Square& b) {
    if (a.getArea() == b.getArea()) return a.getName() < b.getName();
    return a.getArea() < b.getArea();
}

auto sidei = [](const Square& s) {return static_cast<int>(s.getSide()); };

bool cmpMaxX(const Square& a, const Square& b) {
    int maxXA = a.getX() + sidei(a);
    int maxXB = b.getX() + sidei(b);
    if (maxXA == maxXB) return a.getName() < b.getName();
    return maxXA < maxXB;
}

bool cmpMaxY(const Square& a, const Square& b) {
    int maxYA = a.getY() + sidei(a);
    int maxYB = b.getY() + sidei(b);
    if (maxYA == maxYB) return a.getName() < b.getName();
    return maxYA < maxYB;
}


int main()
{
    int n;
    cin >> n;
	vector<Square> v;
    for(int i= 0; i < n; i++) {
        string name;
        int x, y;
        unsigned int side;
        cin >> name >> x >> y >> side;
        v.push_back(Square(name,x,y,side));
	}
    
    cout << endl;

    sort(v.begin(), v.end(), cmpArea);
    cout << "Squares in increasing order of area" << endl;
    for (auto& s : v) {
        cout << s.getName() << "(" << s.getX() << ", " << 
            s.getY() << ") side=" << s.getSide() << ", area=" << s.getArea() << endl;
    }
    cout << endl;

	sort(v.begin(), v.end(), cmpMaxX);
    cout<< "Squares in increasing order of max x-coordinate" << endl;
    for (auto& s : v) {
        cout << s.getName() << "(" << (s.getX() + sidei(s)) << ", " << 
            s.getY() << ") side=" << s.getSide() << ", area=" << s.getArea() << endl;
    }
	cout << endl;

	sort(v.begin(), v.end(), cmpMaxY);
    cout<< "Squares in increasing order of max y-coordinate" << endl;
    for (auto& s : v) {
        cout << s.getName() << "(" << s.getX() << ", " << 
            (s.getY() + sidei(s)) << ") side=" << s.getSide() << ", area=" << s.getArea() << endl;
	}

    return 0;

}
