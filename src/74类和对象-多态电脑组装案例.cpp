#include <iostream>
using namespace std;

class CPU {
public:
    virtual void calculate() = 0;
};
class DIMM {
public:
    virtual void storage() = 0;
};
class GPU {
public:
    virtual void display() = 0;
};

class IntelCPU: public CPU {
    void calculate() {
        cout << "IntelCPU 工作ing" << endl;
    }
};
class IntelDIMM: public DIMM {
    void storage() {
        cout << "IntelDIMM 工作ing" << endl;
    }
};
class IntelGPU: public GPU {
    void display() {
        cout << "IntelGPU 工作ing" << endl;
    }
};

class LenovoCPU: public CPU {
    void calculate() {
        cout << "LenovoCPU 工作ing" << endl;
    }
};
class LenovoDIMM: public DIMM {
    void storage() {
        cout << "LenovoDIMM 工作ing" << endl;
    }
};
class LenovoGPU: public GPU {
    void display() {
        cout << "LenovoGPU 工作ing" << endl;
    }
};

class Computer {
public:
    Computer(CPU* cpu, DIMM* dimm, GPU* gpu) {
        this->cpu = cpu;
        this->dimm = dimm;
        this->gpu = gpu;
    }

    void computerWork() {
        cpu->calculate();
        dimm->storage();
        gpu->display();
    }

    ~Computer() {
        if (this->cpu != NULL) {
            delete this->cpu;
            this->cpu = NULL;
            cout << "CPU Stop" << endl;
        }
        if (this->dimm != NULL) {
            delete this->dimm;
            this->dimm = NULL;
            cout << "DIMM Stop" << endl;
        }
        if (this->gpu != NULL) {
            delete this->gpu;
            this->gpu = NULL;
            cout << "GPU Stop" << endl;
        }
    }

private:
    CPU* cpu;
    DIMM* dimm;
    GPU* gpu;
};

int main() {
    //intel
    CPU* intel_cpu = new IntelCPU;
    DIMM* intel_dimm = new IntelDIMM;
    GPU* intel_gpu = new IntelGPU;

    Computer* intel_computer = new Computer(intel_cpu, intel_dimm, intel_gpu);
    intel_computer->computerWork();
    delete intel_computer;
    cout << "intel_computer Stop" << endl;

    //lenovo
    CPU* lenovo_cpu = new LenovoCPU;
    DIMM* lenovo_dimm = new LenovoDIMM;
    GPU* lenovo_gpu = new LenovoGPU;

    Computer* lenovo_computer = new Computer(lenovo_cpu, lenovo_dimm, lenovo_gpu);
    lenovo_computer->computerWork();
    delete lenovo_computer;
    cout << "lenovo_computer Stop" << endl;

    return 0;
}