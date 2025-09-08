; ModuleID = 'DGMModule'
source_filename = "DGMModule"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [19 x i8] c"Hello, DGM World!\00", align 1

declare i32 @print(i8*)

define i32 @main() {
entry:
  ; Create global string pointer
  %0 = getelementptr inbounds [19 x i8], [19 x i8]* @.str, i64 0, i64 0
  call i32 @print(i8* %0), !dgm.opcode !0
  ret i32 0, !dgm.opcode !1
}

!0 = !{!"DGM:2b"} ; 0x2b → call
!1 = !{!"DGM:33"} ; 0x33 → ret
