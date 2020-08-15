#include "../src/Body.h"
#include "../src/Check.h"
#include "../src/Menu.h"
#include "gtest/gtest.h"

TEST(InputCheckTest, Input)
{
    ASSERT_EQ(InputCheck("1"), 1);
}
TEST(InputCheckTest, An_Input)
{
    ASSERT_EQ(InputCheck("3"), 3);
}
TEST(InputCheckTest, Wr_Input)
{
    ASSERT_EQ(InputCheck("e"), 0);
}

TEST(ComparseTest, Input)
{
    ASSERT_EQ(Comparse("1", "1"), 1);
}
TEST(ComparseTest, An_Input)
{
    ASSERT_EQ(Comparse("3", "3"), 1);
}
TEST(ComparseTest, Wr_Input)
{
    ASSERT_EQ(Comparse("e", "4"), 0);
}
// LevelStartMenu(int in_num)
TEST(LevelStartMenuTest, Input)
{
    ASSERT_EQ(LevelStartMenu(1), 1);
}
TEST(LevelStartMenuTest, An_Input)
{
    ASSERT_EQ(LevelStartMenu(2), 2);
}
TEST(LevelStartMenuTest, Wr_Input)
{
    ASSERT_EQ(LevelStartMenu(1515), 0);
}