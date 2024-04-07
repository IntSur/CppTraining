#include <iostream>
#include <string>
using namespace std;

class Cube {
public:
    double m_Length;
    double m_Height;
    double m_Width;

    double cubeVolume(int height, int length, int width) {
        return height * length * width;
    };

};

bool isCubeVolumeEqual(double cubevolume1, double cubevolume2) {
    return (cubevolume1 > cubevolume2) ? true : false;
};

int main() {
    Cube cube1;
    Cube cube2;

    cout << isCubeVolumeEqual(cube1.cubeVolume(1, 1, 1), cube2.cubeVolume(2, 1, 1)) << endl;

    return 0;
}