#include "2.h"

class patientData : public QSharedData
{
public:

};

patient::patient() : data(new patientData)
{

}

patient::patient(const patient &rhs) : data(rhs.data)
{

}

patient &patient::operator=(const patient &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

patient::~patient()
{

}
