#include <gtest/gtest.h>

#include "../app/Utils.hpp"

TEST(FunctionUtils, get_name) { EXPECT_FALSE(jsp::get_name().empty()); }
