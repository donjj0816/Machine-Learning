// Project UID db1f506d06d84ab787baf250c265e24e

#include "BinarySearchTree.h"
#include "unit_test_framework.h"


TEST(test_stub) {
    // Add your tests here
    ASSERT_TRUE(true);
}
TEST(not_empty) {
    BinarySearchTree<int> holder; 
    holder.insert(4);
    ASSERT_FALSE(holder.empty());
    ASSERT_TRUE(holder.size() == 1);
    ASSERT_TRUE(holder.height() == 1);
}
TEST(four_deep) {
    BinarySearchTree<int> holder; 
    holder.insert(4);
    holder.insert(5);
    holder.insert(6);
    holder.insert(7);

    ASSERT_FALSE(holder.empty());
    ASSERT_TRUE(holder.size() == 4);
    ASSERT_TRUE(holder.height() == 4);
}

TEST(empty) {
    BinarySearchTree<int> holder; 
    ASSERT_TRUE(holder.empty());
}

// TEST(two_copy){
//     BinarySearchTree<int> holder; 
//     holder.insert(4);
//     holder.insert(5);
//     holder.insert(6);
//     holder.insert(7);
//     BinarySearchTree<int> holder_2(holder); 
//     ASSERT_TRUE(*holder.find(4) == *holder_2.find(4));
//     ASSERT_TRUE(*holder.find(5) == *holder_2.find(5));
//     ASSERT_TRUE(*holder.find(6) == *holder_2.find(6));
// }
TEST(max_elm){
    BinarySearchTree<int> holder; 
    holder.insert(-4);
    holder.insert(5);
    holder.insert(6);
    holder.insert(7);

    ASSERT_TRUE(*holder.max_element() == 7);
    ASSERT_TRUE(*holder.min_element() == -4);
}
TEST(mingreaterthan){
        BinarySearchTree<int> holder; 
        holder.insert(6);
        ASSERT_TRUE(*holder.min_greater_than(5) == 6);
        ASSERT_TRUE(*holder.min_greater_than(3) == 6);
        ASSERT_TRUE(*holder.min_greater_than(2) == 6);
}
TEST(findish){
    BinarySearchTree<int> holder; 
    holder.insert(4);
    holder.insert(5);
    holder.insert(6);
    std::ostringstream holder_2;
    holder.traverse_inorder(holder_2);
    ASSERT_EQUAL(holder_2.str(), "4 5 6 ");
    ASSERT_TRUE(*holder.find(4) == 4);
    //ASSERT_TRUE(*holder.find(5) == 5);
   // ASSERT_TRUE(*holder.find(6) == 6);
}
TEST(order_again){
    BinarySearchTree<int> holder; 
    holder.insert(5);
    holder.insert(8);
    holder.insert(7);
    std::ostringstream holder_2;
    holder.traverse_preorder(holder_2);
    ASSERT_EQUAL(holder_2.str(), "5 8 7 ");
    std::ostringstream holder_3;
    holder.traverse_inorder(holder_3);
    ASSERT_EQUAL(holder_3.str(), "5 7 8 ");
}
TEST(sort_check){
    BinarySearchTree<int> holder; 
    holder.insert(3);
    holder.insert(5);
    holder.insert(6);
    BinarySearchTree<int>::Iterator first_it = holder.begin(); 
    *first_it = 4;
    ASSERT_TRUE(holder.check_sorting_invariant());
}
TEST(sort_check_ya_know){
    BinarySearchTree<int> holder; 
    holder.insert(3);
    holder.insert(5);
    holder.insert(7);
    holder.insert(8);
    holder.insert(6);
    BinarySearchTree<int>::Iterator first_it = holder.begin(); 
    *first_it = 4;
    ASSERT_TRUE(holder.check_sorting_invariant());
}

TEST_MAIN()
