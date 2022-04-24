#ifndef __SIMPLECPPPROJECT_CONTAINER__
#define __SIMPLECPPPROJECT_CONTAINER__

class Person
{
private:
    /* data */
    int age_;

public:
    Person(/* args */);
    explicit Person(int age);
    ~Person();

    int age() const {return age_;}
};

#endif