#include "add.h"  
#include "gtest\gtest.h"
 

TEST(Add, positive1) {  
 EXPECT_EQ(Add(-1,-2), -3);  
 EXPECT_GT(Add(-4,-5), -6);  
}  
   

TEST(Add, positive2) {
	EXPECT_EQ(Add(-1, -2), -3);
	EXPECT_GT(Add(-4, -5), -6);
}

TEST(Add, negative) {  
 EXPECT_EQ(Add(1,2), 3);  
 EXPECT_GT(Add(4,5), 6);  
} 

