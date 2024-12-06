using namespace std;
#include <iostream>
#include <vector>
#include <string>

class point {
    int x;
    int y;
public:
    point(int x, int y) : x(x), y(y) {}
    void print() {
        cout << x << " " << y << endl;
    }
};

int main()
{
    vector<point> figure1;
    figure1.push_back({ 2,6 });
    figure1.push_back({ 5,8 });
    figure1.push_back({ -1,2 });
    figure1.push_back({ 2,-6 });
}
