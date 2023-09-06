#include <gtest/gtest.h>

class DummyTest : public ::testing::Test {
	
};

TEST_F(DummyTest, Equals) {
	EXPECT_EQ(1, 1);
}
