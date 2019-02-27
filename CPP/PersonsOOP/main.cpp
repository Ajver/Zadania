#include <iostream>
#include <windows.h>

using namespace std;

//----------------------------------------------------------------

class Person
{
public:
    Person() :
        m_id(0),
        m_weight(0),
        m_height(0.0f)
    {
    }

    Person(int id, int weight, float height) :
        m_id(id),
        m_weight(weight),
        m_height(height)
    {
    }

    void drawData()
    {
        cout << "Dane: \nID: " << m_id << "\nwaga: " << m_weight << "\nwzrost: " << m_height << endl;
    }

    void drawBMI()
    {
        cout << "Wskaznik bmi wynosi: " <<  getBMI() <<endl;
    }

    void drawFigureType()
    {
        cout << "Posiada " << getFigureType() << endl;
    }

    float getBMI()
    {
        float wz = m_height*m_height;

        if(wz != 0)
            return m_weight / wz;
        else
            return 0;
    }

private:
    int m_id;
    int m_weight;
    float m_height;

    string getFigureType()
    {
        float bmi = getBMI();

        if(bmi <= 18.5f)
            return "niedowage";

        if(bmi < 25.0f)
            return "wage prawidlowa";

        if(bmi < 30.0f)
            return "nadwage";

        return "otylosc";
    }

};

//----------------------------------------------------------------

int main()
{
    Person p0;
 	Person p1(1,58,1.72);
 	Person p2(2,66,1.90);

	cout << endl << "--------------------------" << endl;
	cout << "Osoba 0:" << endl;

	p0.drawData();
	p0.drawBMI();
	p0.drawFigureType();

	cout << endl << "--------------------------" << endl;
	cout << "Osoba 1:" << endl;

	p1.drawData();
	p1.drawBMI();
	p1.drawFigureType();

	cout << endl << "--------------------------" << endl;
	cout << "Osoba 2:" << endl;

	p2.drawData();
	p2.drawBMI();
	p2.drawFigureType();

	cout << endl << endl;
	system("pause");

	return 0;
}


