; ModuleID = 'DGMModule'
source_filename = "DGMModule"
target triple = "x86_64-unknown-linux-gnu"

declare i32 @print(i32)

define i32 @main() {
entry:
  ; allocate locals
  %x = alloca i32, align 4, !dgm.opcode !2
  %y = alloca i32, align 4, !dgm.opcode !2
  %z = alloca i32, align 4, !dgm.opcode !2

  ; assign x = 10
  store i32 10, i32* %x, !dgm.opcode !3
  ; assign y = 20
  store i32 20, i32* %y, !dgm.opcode !3

  ; safe.add(x, y)
  %1 = load i32, i32* %x, !dgm.opcode !4
  %2 = load i32, i32* %y, !dgm.opcode !4
  %3 = add i32 %1, %2, !dgm.opcode !5
  store i32 %3, i32* %z, !dgm.opcode !3

  ; call print(z)
  %4 = load i32, i32* %z, !dgm.opcode !4
  call i32 @print(i32 %4), !dgm.opcode !0

  ret i32 0, !dgm.opcode !1
}

!0 = !{!"DGM:2b"} ; call
!1 = !{!"DGM:33"} ; ret
!2 = !{!"DGM:01"} ; alloca
!3 = !{!"DGM:03"} ; store
!4 = !{!"DGM:02"} ; load
!5 = !{!"DGM:50"} ; safe.add
