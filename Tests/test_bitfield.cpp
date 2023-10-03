#include "..\qtest\gtest.h"
#include <climits>
#include "..\BitField\bitfield.h"

TEST(TBitField, can_get_length) {
  // Arrange & Act
  TBitField bf(5);

  // Assert
  EXPECT_EQ(5, bf.size());
}

TEST(TBitField, can_create_bitfield_with_positive_length) {
  // Arrange & Act & Assert
  ASSERT_NO_THROW(TBitField bf(5));
}

TEST(TBitField, can_create_too_large_bitfield) {
  // Arrange & Act
  TBitField bf(INT_MAX);
  // Assert
  EXPECT_EQ(INT_MAX, bf.size());

}

TEST(TBitField, new_bitfield_is_set_to_zero) {
  // Arrange & Act
  TBitField bf(150);

  // Assert
  int sum = 0;
  for (int i = 0; i < bf.size(); i++) sum += bf.test(i);
  EXPECT_EQ(0, sum);
}

TEST(TBitField, set_some_bits) {
	// Arrange & Act
	TBitField bf(150);
	bf.set(4);
	bf.set(5);
	bf.set(35);
	bf.set(149);
	// Assert
	int sum = 0;
	EXPECT_NO_THROW(std::cout << bf); //show to accept result
}

TEST(TBitField, or_for_bf_throw) {
	// Arrange & Act
	TBitField bf1(10);
	TBitField bf2(11);
	// Assert
	int sum = 0;
	EXPECT_ANY_THROW(bf1 | bf2); //show to accept result
}
TEST(TBitField, or_for_bf_no_throw) {
	// Arrange & Act
	TBitField bf1(10);
	TBitField bf2(10);
	TBitField bf3(10);
	// Assert
	bf1.set(1);
	bf1.set(3);
	bf1.set(5);
	bf2.set(2);
	bf2.set(4);
	bf2.set(6);
	bf3 = bf1 | bf2;
	EXPECT_NO_THROW(std::cout << bf3);
}
TEST(TBitField, and_for_bf_no_throw) {
	// Arrange & Act
	TBitField bf1(10);
	TBitField bf2(10);
	TBitField bf3(10);
	// Assert
	bf1.set(1);
	bf1.set(3);
	bf1.set(5);
	bf2.set(2);
	bf2.set(4);
	bf2.set(6);
	bf3 = bf1 & bf2;
	EXPECT_NO_THROW(std::cout << bf3);
}
TEST(TBitField, no_for_bf_no_throw) {
	// Arrange & Act
	TBitField bf1(10);
	TBitField bf3(10);
	// Assert
	bf1.set(1);
	bf1.set(3);
	bf1.set(5);
	bf3 = ~bf1;
	EXPECT_NO_THROW(std::cout << bf3);
}
TEST(TBitField, assig_for_bf_no_throw) {
	// Arrange & Act
	TBitField bf1(10);
	TBitField bf2(10);
	TBitField bf3(10);
	// Assert
	bf1.set(1);
	bf1.set(3);
	bf1.set(5);
	bf2.set(2);
	bf2.set(4);
	bf2.set(6);
	EXPECT_NO_THROW(bf1 = bf2);
	EXPECT_NO_THROW(std::cout << bf1);
}
TEST(TBitField, equal) {
	// Arrange & Act
	TBitField bf1(10);
	TBitField bf2(10);
	// Assert
	bf1.set(1);
	bf1.set(3);
	bf1.set(5);
	bf2.set(1);
	bf2.set(3);
	bf2.set(5);
	EXPECT_EQ(bf1, bf2);
}
TEST(TBitField, double_set) {
	// Arrange & Act
	TBitField bf1(10);
	TBitField bf2(10);
	// Assert
	bf1.set(1);
	bf1.set(1);
	bf1.set(1);
	bf2.set(1);
	EXPECT_EQ(bf1, bf2);
}
TEST(TBitField, reset_0) {
	// Arrange & Act
	TBitField bf1(10);
	TBitField bf2(10);
	// Assert
	bf1.reset(1);
	bf1.reset(1);
	bf1.reset(1);
	EXPECT_EQ(bf1, bf2);
}