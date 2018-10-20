//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// skiplist.h
//
// Identification: src/include/index/skiplist.h
//
// Copyright (c) 2015-17, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#pragma once

namespace peloton {
namespace index {

/*
 * SKIPLIST_TEMPLATE_ARGUMENTS - Save some key strokes
 */
#define SKIPLIST_TEMPLATE_ARGUMENTS                                       \
  template <typename KeyType, typename ValueType, typename KeyComparator, \
            typename KeyEqualityChecker, typename ValueEqualityChecker>
template <typename KeyType, typename ValueType, typename KeyComparator,
          typename KeyEqualityChecker, typename ValueEqualityChecker>
class SkipList {
 public:
  class SkipListNode {
   public:
    SkipListNode();
   private:
    KeyType key_;
    ValueType value_;
    SkipListNode* next_;
    SkipListNode* up_;
    SkipListNode* low_;
    uint8_t level_;
  };

  SkipList();
  bool Insert(KeyType key, ValueType value);
  bool Delete(KeyType key);
  
 private:
  SkipList* base_;
 // feel free to add any thing neccessary
 // or reorder the structure
 // or rename everything
};

}  // namespace index
}  // namespace peloton
