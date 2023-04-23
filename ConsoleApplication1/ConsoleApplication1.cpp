#include <iostream>
using namespace std;

class Road {
private:
    int length;
    int width;
public:
    Road() {
        length = 0;
        width = 0;
    }
    void setLength(int newlength) {
        length = newlength;
    }
    void setWidth(int newwidth) {
        width = newwidth;
    }
    void print() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
};
int main() {
    Road road1;
    road1.print();
    road1.setLength(44);
    road1.setWidth(11);
    road1.print();
    return 0;
}
