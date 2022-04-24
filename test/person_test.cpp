#include <gmock/gmock.h>
#include "person.h"

class PersonTest: public ::testing::Test
{
private:
    /* data */

public:
    PersonTest(/* args */);
    ~PersonTest();
};

PersonTest::PersonTest(/* args */)
{
}

PersonTest::~PersonTest()
{
}

TEST_F(PersonTest, Get)
{
    Person person(10);

    ASSERT_EQ(10, person.age());
}