#include <iostream>

using namespace std;

class Triangle
{
public:
    Triangle(float a, float b, float c) :
        m_a(a),
        m_b(b),
        m_c(c)
    {
    }

    void printData()
    {
        cout << "Triangle:" << endl;
        cout << "a: " << m_a << endl;
        cout << "b: " << m_b << endl;
        cout << "c: " << m_c << endl;
        printCircuit();
        cout << endl;
    }

    void printCircuit()
    {
        cout << "Circuit: " << getCircuit() << endl;
    }

    float getCircuit()
    {
        return m_a + m_b + m_c;
    }

private:
    float m_a;
    float m_b;
    float m_c;
};

int main()
{
    Triangle t1(10, 20, 30);
    t1.printData();

    return 0;
}
