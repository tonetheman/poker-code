#include "poker_defs.h"

/* 
 * Table AStudDeck_cardMasksTable
 */

/*
AStudDeck_cardMasks[].  Maps card indices (0..32) to CardMasks.  
The output mask has only one bit set, the bit corresponding to the card
identified by the index.
 */

#include "deck_astud.h" 
AStudDeck_CardMask AStudDeck_cardMasksTable[32] = { 
      { 0x0020000000000000i64 }  ,
      { 0x0040000000000000i64 }  ,
      { 0x0080000000000000i64 }  ,
      { 0x0100000000000000i64 }  ,
      { 0x0200000000000000i64 }  ,
      { 0x0400000000000000i64 }  ,
      { 0x0800000000000000i64 }  ,
      { 0x1000000000000000i64 }  ,
      { 0x0000002000000000i64 }  ,
      { 0x0000004000000000i64 }  ,
      { 0x0000008000000000i64 }  ,
      { 0x0000010000000000i64 }  ,
      { 0x0000020000000000i64 }  ,
      { 0x0000040000000000i64 }  ,
      { 0x0000080000000000i64 }  ,
      { 0x0000100000000000i64 }  ,
      { 0x0000000000200000i64 }  ,
      { 0x0000000000400000i64 }  ,
      { 0x0000000000800000i64 }  ,
      { 0x0000000001000000i64 }  ,
      { 0x0000000002000000i64 }  ,
      { 0x0000000004000000i64 }  ,
      { 0x0000000008000000i64 }  ,
      { 0x0000000010000000i64 }  ,
      { 0x0000000000000020i64 }  ,
      { 0x0000000000000040i64 }  ,
      { 0x0000000000000080i64 }  ,
      { 0x0000000000000100i64 }  ,
      { 0x0000000000000200i64 }  ,
      { 0x0000000000000400i64 }  ,
      { 0x0000000000000800i64 }  ,
      { 0x0000000000001000i64 }  
};
