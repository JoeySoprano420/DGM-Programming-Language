# 🔢 Full 144-Entry Dodecagram ↔ LLVM IR Mapping Table

This is the canonical mapping table for the **DGM language** compiler.  
It is divided into four regions:

- **00–4B → LLVM Core Instructions**  
- **50–7B → Safety + Safe Arithmetic Extensions**  
- **80–9B → Data Structures**  
- **A0–BB → CIAM Extensions + Language Intrinsics**

---

## 00–4B: LLVM Core Ops

| DGM | LLVM IR         | Meaning                        |
|-----|-----------------|--------------------------------|
| 00  | nop             | No-op                         |
| 01  | alloca          | Allocate stack/register space |
| 02  | load            | Load from memory              |
| 03  | store           | Store to memory               |
| 04  | getelementptr   | Pointer arithmetic            |
| 05  | bitcast         | Type reinterpret              |
| 06  | trunc           | Truncate int                  |
| 07  | zext            | Zero extend int               |
| 08  | sext            | Sign extend int               |
| 09  | fptrunc         | FP truncate                   |
| 0a  | fpext           | FP extend                     |
| 0b  | fptoui          | FP → unsigned int             |
| 10  | fptosi          | FP → signed int               |
| 11  | uitofp          | Unsigned int → FP             |
| 12  | sitofp          | Signed int → FP               |
| 13  | ptrtoint        | Pointer → int                 |
| 14  | inttoptr        | Int → pointer                 |
| 15  | icmp            | Integer compare               |
| 16  | fcmp            | FP compare                    |
| 17  | add             | Integer add                   |
| 18  | sub             | Integer subtract              |
| 19  | mul             | Integer multiply              |
| 1a  | udiv            | Unsigned div                  |
| 1b  | sdiv            | Signed div                    |
| 20  | fadd            | FP add                        |
| 21  | fsub            | FP sub                        |
| 22  | fmul            | FP mul                        |
| 23  | fdiv            | FP div                        |
| 24  | frem            | FP remainder                  |
| 25  | shl             | Shift left                    |
| 26  | lshr            | Logical shift right           |
| 27  | ashr            | Arithmetic shift right        |
| 28  | and             | Bitwise AND                   |
| 29  | or              | Bitwise OR                    |
| 2a  | xor             | Bitwise XOR                   |
| 2b  | call            | Function call                 |
| 30  | br              | Branch                        |
| 31  | switch          | Switch                        |
| 32  | indirectbr      | Indirect branch               |
| 33  | ret             | Return                        |
| 34  | resume          | Resume (exceptions)           |
| 35  | unreachable     | Mark unreachable              |
| 36  | landingpad      | Exception landing pad         |
| 37  | invoke          | Invoke function               |
| 38  | phi             | PHI node                      |
| 39  | select          | Select (ternary)              |
| 3a  | extractvalue    | Extract from struct           |
| 3b  | insertvalue     | Insert into struct            |
| 40  | atomicrmw       | Atomic read-modify-write      |
| 41  | cmpxchg         | Compare-and-swap              |
| 42  | fence           | Memory fence                  |
| 43  | memset          | Memset                        |
| 44  | memcpy          | Memcpy                        |
| 45  | memmove         | Memmove                       |
| 46  | lifetime.start  | Lifetime start                |
| 47  | lifetime.end    | Lifetime end                  |
| 48  | sanitizer.check | Sanitizer bounds check        |
| 49  | assume          | Compiler assumption           |
| 4a  | llvm.dbg.declare| Debug declare                 |
| 4b  | llvm.dbg.value  | Debug value                   |

---

## 50–7B: Safe Arithmetic & Healing

| DGM | Meaning                  |
|-----|--------------------------|
| 50  | safe.add (auto heal add) |
| 51  | safe.sub                 |
| 52  | safe.mul                 |
| 53  | safe.div                 |
| 54  | safe.mod                 |
| 55  | safe.shift               |
| 56  | safe.and                 |
| 57  | safe.or                  |
| 58  | safe.xor                 |
| 59  | safe.neg                 |
| 5a  | safe.not                 |
| 60  | cascade.begin            |
| 61  | cascade.end              |
| 62  | cascade.yield            |
| 63  | cascade.resume           |
| 70  | branch.try               |
| 71  | branch.heal              |
| 72  | branch.soft              |
| 73  | branch.auto              |
| 7a  | recover                  |
| 7b  | language.assert          |

---

## 80–9B: Data Structures

| DGM | Meaning        |
|-----|----------------|
| 80  | tuple.pack     |
| 81  | tuple.unpack   |
| 82  | list.append    |
| 83  | list.remove    |
| 84  | list.insert    |
| 85  | list.pop       |
| 86  | array.load     |
| 87  | array.store    |
| 88  | group.spawn    |
| 89  | group.merge    |
| 8a  | group.split    |
| 8b  | nest.enter     |
| 90  | nest.exit      |
| 91  | derive.child   |
| 92  | derive.parent  |
| 93  | pair.create    |
| 94  | pair.split     |
| 95  | match.begin    |
| 96  | match.case     |
| 97  | match.end      |
| 98  | language.yield |
| 99  | language.halt  |
| 9a  | language.wait  |
| 9b  | language.resume|

---

## A0–BB: CIAM + Language Intrinsics

| DGM | Meaning           |
|-----|-------------------|
| A0  | language.inline   |
| A1  | language.expand   |
| A2  | language.fold     |
| A3  | language.derive   |
| A4  | language.macro    |
| A5  | language.trace    |
| A6  | language.echo     |
| A7  | language.link     |
| A8  | language.infer    |
| A9  | language.delete   |
| Aa  | language.replace  |
| Ab  | language.redirect |
| B0  | language.guard    |
| B1  | language.wrap     |
| B2  | language.unwrap   |
| B3  | language.enclose  |
| B4  | language.open     |
| B5  | language.close    |
| B6  | language.defer    |
| B7  | language.future   |
| B8  | language.parallel |
| B9  | language.sync     |
| Ba  | language.pragma   |
| Bb  | language.exit     |
