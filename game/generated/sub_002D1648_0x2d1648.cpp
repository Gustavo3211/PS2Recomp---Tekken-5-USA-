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

// Function: sub_002D1648
// Address: 0x2d1648 - 0x2d16e0
void sub_002D1648_0x2d1648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1648_0x2d1648");
#endif

    switch (ctx->pc) {
        case 0x2d169cu: goto label_2d169c;
        case 0x2d16b8u: goto label_2d16b8;
        default: break;
    }

    ctx->pc = 0x2d1648u;

    // 0x2d1648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d1648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d164c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d164cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d1650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d1654: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d1654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d1658: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d1658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d165c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d165cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d1660: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x2d1660u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
    // 0x2d1664: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d1664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d1668: 0x2642f658  addiu       $v0, $s2, -0x9A8
    ctx->pc = 0x2d1668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294964824));
    // 0x2d166c: 0x2231814  dsllv       $v1, $v1, $s1
    ctx->pc = 0x2d166cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x2d1670: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2d1670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d1674: 0xdc840000  ld          $a0, 0x0($a0)
    ctx->pc = 0x2d1674u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d1678: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d1678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d167c: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x2d167cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x2d1680: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1680u;
    {
        const bool branch_taken_0x2d1680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1680u;
        // 0x2d1684: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1680) {
            ctx->pc = 0x2D16A0u;
            goto label_2d16a0;
        }
    }
    ctx->pc = 0x2D1688u;
    // 0x2d1688: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2d1688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d168c: 0x52220004  beql        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D168Cu;
    {
        const bool branch_taken_0x2d168c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d168c) {
            ctx->pc = 0x2D1690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D168Cu;
            // 0x2d1690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D16A0u;
            goto label_2d16a0;
        }
    }
    ctx->pc = 0x2D1694u;
    // 0x2d1694: 0xc0b2a6a  jal         func_2CA9A8
    ctx->pc = 0x2D1694u;
    SET_GPR_U32(ctx, 31, 0x2D169Cu);
    ctx->pc = 0x2CA9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9A8u, 0x2D1694u, 0x2D169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D169Cu;
label_2d169c:
    // 0x2d169c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d169cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d16a0:
    // 0x2d16a0: 0x2221014  dsllv       $v0, $v0, $s1
    ctx->pc = 0x2d16a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x2d16a4: 0x2022025  or          $a0, $s0, $v0
    ctx->pc = 0x2d16a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2d16a8: 0x12040006  beq         $s0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D16A8u;
    {
        const bool branch_taken_0x2d16a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2D16ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16A8u;
        // 0x2d16ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d16a8) {
            ctx->pc = 0x2D16C4u;
            goto label_2d16c4;
        }
    }
    ctx->pc = 0x2D16B0u;
    // 0x2d16b0: 0xc0db644  jal         func_36D910
    ctx->pc = 0x2D16B0u;
    SET_GPR_U32(ctx, 31, 0x2D16B8u);
    ctx->pc = 0x2D16B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D16B0u;
    // 0x2d16b4: 0x2644f658  addiu       $a0, $s2, -0x9A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294964824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D910u, 0x2D16B0u, 0x2D16B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D16B8u;
label_2d16b8:
    // 0x2d16b8: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2d16b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x2d16bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d16c0: 0xac624520  sw          $v0, 0x4520($v1)
    ctx->pc = 0x2d16c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E4520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E4520u, _value); } while (0);
label_2d16c4:
    // 0x2d16c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d16c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d16c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d16c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d16cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d16ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d16d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d16d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d16d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D16D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16D4u;
        // 0x2d16d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D16D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D16DCu;
    // 0x2d16dc: 0x0  nop
    ctx->pc = 0x2d16dcu;
    // NOP
    ctx->pc = 0x2d16e0u;
}
