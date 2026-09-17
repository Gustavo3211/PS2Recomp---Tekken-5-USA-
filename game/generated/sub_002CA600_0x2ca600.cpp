#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CA600
// Address: 0x2ca600 - 0x2ca6e8
void sub_002CA600_0x2ca600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA600_0x2ca600");
#endif

    switch (ctx->pc) {
        case 0x2ca624u: goto label_2ca624;
        case 0x2ca6c0u: goto label_2ca6c0;
        default: break;
    }

    ctx->pc = 0x2ca600u;

    // 0x2ca600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca608: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ca608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca60c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ca60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ca610: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ca610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca614: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ca614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ca618: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ca618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2ca61c: 0xc0b2a76  jal         func_2CA9D8
    ctx->pc = 0x2CA61Cu;
    SET_GPR_U32(ctx, 31, 0x2CA624u);
    ctx->pc = 0x2CA620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA61Cu;
    // 0x2ca620: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9D8u, 0x2CA61Cu, 0x2CA624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA624u;
label_2ca624:
    // 0x2ca624: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ca624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ca628: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ca628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca62c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ca62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ca630: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2ca630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2ca634: 0x8f84bb18  lw          $a0, -0x44E8($gp)
    ctx->pc = 0x2ca634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949656)));
    // 0x2ca638: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2ca638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2ca63c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2ca63cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ca640: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x2ca640u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ca644: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CA644u;
    {
        const bool branch_taken_0x2ca644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA644u;
        // 0x2ca648: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca644) {
            ctx->pc = 0x2CA6CCu;
            goto label_2ca6cc;
        }
    }
    ctx->pc = 0x2CA64Cu;
    // 0x2ca64c: 0x244203a4  addiu       $v0, $v0, 0x3A4
    ctx->pc = 0x2ca64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 932));
    // 0x2ca650: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca654: 0x6200018  bltz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2CA654u;
    {
        const bool branch_taken_0x2ca654 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2CA658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA654u;
        // 0x2ca658: 0x463821  addu        $a3, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca654) {
            ctx->pc = 0x2CA6B8u;
            goto label_2ca6b8;
        }
    }
    ctx->pc = 0x2CA65Cu;
    // 0x2ca65c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2ca65cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ca660: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA660u;
    {
        const bool branch_taken_0x2ca660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca660) {
            ctx->pc = 0x2CA664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA660u;
            // 0x2ca664: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA680u;
            goto label_2ca680;
        }
    }
    ctx->pc = 0x2CA668u;
    // 0x2ca668: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x2ca668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ca66c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CA66Cu;
    {
        const bool branch_taken_0x2ca66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA66Cu;
        // 0x2ca670: 0x2273021  addu        $a2, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca66c) {
            ctx->pc = 0x2CA6B8u;
            goto label_2ca6b8;
        }
    }
    ctx->pc = 0x2CA674u;
    // 0x2ca674: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2CA674u;
    {
        const bool branch_taken_0x2ca674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA674u;
        // 0x2ca678: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca674) {
            ctx->pc = 0x2CA6A0u;
            goto label_2ca6a0;
        }
    }
    ctx->pc = 0x2CA67Cu;
    // 0x2ca67c: 0x0  nop
    ctx->pc = 0x2ca67cu;
    // NOP
label_2ca680:
    // 0x2ca680: 0x113040  sll         $a2, $s1, 1
    ctx->pc = 0x2ca680u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2ca684: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x2ca684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2ca688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca68c: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2ca68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ca690: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2ca690u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ca694: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ca694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ca698: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA698u;
    {
        const bool branch_taken_0x2ca698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA698u;
        // 0x2ca69c: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca698) {
            ctx->pc = 0x2CA6B8u;
            goto label_2ca6b8;
        }
    }
    ctx->pc = 0x2CA6A0u;
label_2ca6a0:
    // 0x2ca6a0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2ca6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2ca6a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca6a8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2ca6a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ca6ac: 0xe31804  sllv        $v1, $v1, $a3
    ctx->pc = 0x2ca6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x2ca6b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ca6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ca6b4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2ca6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_2ca6b8:
    // 0x2ca6b8: 0xc0b70e4  jal         func_2DC390
    ctx->pc = 0x2CA6B8u;
    SET_GPR_U32(ctx, 31, 0x2CA6C0u);
    ctx->pc = 0x2DC390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC390u, 0x2CA6B8u, 0x2CA6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA6C0u;
label_2ca6c0:
    // 0x2ca6c0: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2ca6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x2ca6c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ca6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ca6c8: 0xac624520  sw          $v0, 0x4520($v1)
    ctx->pc = 0x2ca6c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E4520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E4520u, _value); } while (0);
label_2ca6cc:
    // 0x2ca6cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca6ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca6d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ca6d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca6d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ca6d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca6d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ca6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ca6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA6DCu;
        // 0x2ca6e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA6E4u;
    // 0x2ca6e4: 0x0  nop
    ctx->pc = 0x2ca6e4u;
    // NOP
    ctx->pc = 0x2ca6e8u;
}
