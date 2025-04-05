#include <iostream>
using namespace std;
struct SSD
{
    int read, write;
};
struct HDD
{
    int rotation;
};
union discType
{
    HDD hardDrive;
    SSD solidStateDrive{0,0};
};
enum interfaceType
{
    M2,
    PCIe,
    Sata
};
enum displayPanel
{
    AMOLED,
    VA,
    IPS,
    LCD,
    TN,
    OLED
};

class Memory
{
protected:
    discType disc;
    interfaceType interface;
    string memoryBrand, memoryModel;

public:
    Memory(discType disc, interfaceType interface, string memoryBrand, string memoryModel)
    {
        this->disc = disc;
        this->interface = interface;
        this->memoryBrand = memoryBrand;
        this->memoryModel = memoryModel;
    }
    discType getDiscType() { return disc; }
    interfaceType getInterfaceType() { return interface; }
    string getMemoryBrand() { return memoryBrand; }
    string getMemoryModel() { return memoryModel; }
    void setDiscType() { this->disc = disc; }
    void setInterfaceType() { this->interface = interface; }
    void setMemoryBrand() { this->memoryBrand = memoryBrand; }
    void setMemoryModel() { this->memoryModel = memoryModel; }
};

class CPU
{
protected:
    string socket;
    short cores;
    int timing;
    string CPUBrand, CPUModel;

public:
    CPU(string socket, short cores, int timing, string CPUBrand, string CPUModel)
    {
        this->socket = socket;
        this->cores = cores;
        this->timing = timing;
        this->CPUBrand = CPUBrand;
        this->CPUModel = CPUModel;
    }
    void setSocket(string socket) { this->socket = socket; }
    void setCores(short cores) { this->cores = cores; }
    void setTiming(int timing) { this->timing = timing; }
    void setCPUBrand(string brand) { this->CPUBrand = brand; }
    void setCPUModel(string model) { this->CPUModel = model; }
    string getSocket() { return socket; }
    short getCores() { return cores; }
    int getTiming() { return timing; }
    string getCPUBrand() { return CPUBrand; }
    string getCPUModel() { return CPUModel; }
};

class Matrix
{
protected:
    int size;
    displayPanel displayPanelType;

public:
    Matrix(int size, displayPanel displayPanelType)
    {
        this->size = size;
        this->displayPanelType = displayPanelType;
    }
    int getSize() { return size; }
    displayPanel getDisplayPanelType() { return displayPanelType; }
    void setSize(int size) { this->size = size; }
    void setDisplayPanelType(displayPanel displayPanelType) { this->displayPanelType = displayPanelType; }
};
class Touchscreen : public Matrix
{
protected:
    bool touchscreen{true};

public:
    Touchscreen(int size, displayPanel displayPanelType, bool touchscreen) : Matrix(size, displayPanelType) { this->touchscreen = touchscreen; }
};

class Desktop : protected Memory, protected CPU, protected Matrix
{
protected:
    bool RGB;

public:
    Desktop(discType disc, interfaceType interface, string memoryBrand, string memoryModel,
            string socket, short cores, int timing, string CPUBrand, string CPUModel,
            int size, displayPanel displayPanelType, bool RGB)
        : Memory(disc, interface, memoryBrand, memoryModel),
          CPU(socket, cores, timing, CPUBrand, CPUModel),
          Matrix(size, displayPanelType), RGB(RGB) {}
    void display()
    {
        cout << "Desktop Specifications:" << endl;
        cout << "Memory Brand: " << getMemoryBrand() << endl;
        cout << "Memory Model: " << getMemoryModel() << endl;

        if (disc.solidStateDrive.read > 0)
        {
            cout << "Disk Type: SSD" << endl;
            cout << "SSD Read Speed: " << disc.solidStateDrive.read << " MB/s" << endl;
            cout << "SSD Write Speed: " << disc.solidStateDrive.write << " MB/s" << endl;
        }
        else
        {
            cout << "Disk Type: HDD" << endl;
            cout << "HDD Rotation Speed: " << disc.hardDrive.rotation << " RPM" << endl;
        }
        cout << "Disk Interface: " << (interface == M2 ? "M.2" : (interface == PCIe ? "PCIe" : "SATA")) << endl;
        cout << "CPU Socket: " << getSocket() << endl;
        cout << "CPU Cores: " << getCores() << endl;
        cout << "CPU Timing: " << getTiming() << " MHz" << endl;
        cout << "CPU Brand: " << getCPUBrand() << endl;
        cout << "CPU Model: " << getCPUModel() << endl;
        cout << "Display Size: " << getSize() << " inches" << endl;
        cout << "Display Panel Type: " << (getDisplayPanelType() == AMOLED ? "AMOLED" : (getDisplayPanelType() == VA ? "VA" : (getDisplayPanelType() == IPS ? "IPS" : (getDisplayPanelType() == LCD ? "LCD" : (getDisplayPanelType() == TN ? "TN" : "OLED"))))) << endl;
        cout << "RGB Lighting: " << (RGB ? "Yes" : "No") << endl;
    }
};
class Laptop : protected Memory, protected CPU, protected Matrix
{
protected:
    string computerCaseModel;

public:
    Laptop(discType disc, interfaceType interface, string memoryBrand, string memoryModel,
           string socket, short cores, int timing, string CPUBrand, string CPUModel,
           int size, displayPanel displayPanelType, string computerCaseModel)
        : Memory(disc, interface, memoryBrand, memoryModel),
          CPU(socket, cores, timing, CPUBrand, CPUModel),
          Matrix(size, displayPanelType), computerCaseModel(computerCaseModel) {}

    void display()
    {
        cout << "Laptop Specifications:" << endl;
        cout << "Memory Brand: " << getMemoryBrand() << endl;
        cout << "Memory Model: " << getMemoryModel() << endl;

        if (disc.solidStateDrive.read > 0)
        {
            cout << "Disk Type: SSD" << endl;
            cout << "SSD Read Speed: " << disc.solidStateDrive.read << " MB/s" << endl;
            cout << "SSD Write Speed: " << disc.solidStateDrive.write << " MB/s" << endl;
        }
        else
        {
            cout << "Disk Type: HDD" << endl;
            cout << "HDD Rotation Speed: " << disc.hardDrive.rotation << " RPM" << endl;
        }

        cout << "Disk Interface: " << (interface == M2 ? "M.2" : (interface == PCIe ? "PCIe" : "SATA")) << endl;
        cout << "CPU Socket: " << getSocket() << endl;
        cout << "CPU Cores: " << getCores() << endl;
        cout << "CPU Timing: " << getTiming() << " MHz" << endl;
        cout << "CPU Brand: " << getCPUBrand() << endl;
        cout << "CPU Model: " << getCPUModel() << endl;
        cout << "Display Size: " << getSize() << " inches" << endl;
        cout << "Display Panel Type: " << (getDisplayPanelType() == AMOLED ? "AMOLED" : (getDisplayPanelType() == VA ? "VA" : (getDisplayPanelType() == IPS ? "IPS" : (getDisplayPanelType() == LCD ? "LCD" : (getDisplayPanelType() == TN ? "TN" : "OLED"))))) << endl;
        cout << "Computer Case Model: " << computerCaseModel << endl;
    }
};
class Tablet : protected Memory, protected CPU, protected Touchscreen
{
protected:
    string keyboardSize;

public:
    Tablet(discType disc, interfaceType interface, string memoryBrand, string memoryModel,
           string socket, short cores, int timing, string CPUBrand, string CPUModel,
           int size, displayPanel displayPanelType, bool touchscreen, string keyboardSize)
        : Memory(disc, interface, memoryBrand, memoryModel),
          CPU(socket, cores, timing, CPUBrand, CPUModel),
          Touchscreen(size, displayPanelType, touchscreen), 
          keyboardSize(keyboardSize)
    {
    }

    void display()
    {
        cout << "Tablet Specifications:" << endl;
        cout << "Memory Brand: " << getMemoryBrand() << endl;
        cout << "Memory Model: " << getMemoryModel() << endl;

        if (disc.solidStateDrive.read > 0)
        {
            cout << "Disk Type: SSD" << endl;
            cout << "SSD Read Speed: " << disc.solidStateDrive.read << " MB/s" << endl;
            cout << "SSD Write Speed: " << disc.solidStateDrive.write << " MB/s" << endl;
        }
        else
        {
            cout << "Disk Type: HDD" << endl;
            cout << "HDD Rotation Speed: " << disc.hardDrive.rotation << " RPM" << endl;
        }

        cout << "Disk Interface: " << (interface == M2 ? "M.2" : (interface == PCIe ? "PCIe" : "SATA")) << endl;
        cout << "CPU Socket: " << getSocket() << endl;
        cout << "CPU Cores: " << getCores() << endl;
        cout << "CPU Timing: " << getTiming() << " MHz" << endl;
        cout << "CPU Brand: " << getCPUBrand() << endl;
        cout << "CPU Model: " << getCPUModel() << endl;
        cout << "Display Size: " << getSize() << " inches" << endl;
        cout << "Display Panel Type: " << (getDisplayPanelType() == AMOLED ? "AMOLED" : (getDisplayPanelType() == VA ? "VA" : (getDisplayPanelType() == IPS ? "IPS" : (getDisplayPanelType() == LCD ? "LCD" : (getDisplayPanelType() == TN ? "TN" : "OLED"))))) << endl;
        cout << "Touchscreen: " << (touchscreen ? "Yes" : "No") << endl;
        cout << "Keyboard Size: " << keyboardSize << endl;
    }
};
int main()
{
    discType disc;
    disc.hardDrive.rotation = 4000;
    Tablet tablet(disc, Sata, "Wd black", "123", "LGa1104", 10, 4500, "intel", "i5", 27, VA, 1, "TKL");
    tablet.display();
}