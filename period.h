#ifndef PERIOD_H
#define PERIOD_H

class Period
{
public:
    //Constructor
    Period(int id);
    Period(Period *period);

    //Getter
    int getId();

private:
    int m_id;
};

#endif // PERIOD_H
