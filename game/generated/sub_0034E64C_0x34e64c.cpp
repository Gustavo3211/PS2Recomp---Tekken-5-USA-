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

// Function: sub_0034E64C
// Address: 0x34e64c - 0x34e718
void sub_0034E64C_0x34e64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E64C_0x34e64c");
#endif

    switch (ctx->pc) {
        case 0x34e690u: goto label_34e690;
        case 0x34e6c8u: goto label_34e6c8;
        case 0x34e6f0u: goto label_34e6f0;
        case 0x34e6fcu: goto label_34e6fc;
        default: break;
    }

    ctx->pc = 0x34e64cu;

    // 0x34e64c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34e64cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34e650: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34e650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x34e654: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34e654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x34e658: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34e658u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e65c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34e65cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34e660: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34e660u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34e664: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34e664u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34e668: 0xafc00028  sw          $zero, 0x28($fp)
    ctx->pc = 0x34e668u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
    // 0x34e66c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e670: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34e670u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34e674: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34e674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x34e678: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x34e678u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x34e67c: 0xafc00030  sw          $zero, 0x30($fp)
    ctx->pc = 0x34e67cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 0));
    // 0x34e680: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34e680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x34e684: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34e684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e688: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x34E688u;
    SET_GPR_U32(ctx, 31, 0x34E690u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x34E688u, 0x34E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E690u;
label_34e690:
    // 0x34e690: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34e690u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34e694: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34e694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34e698: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E698u;
    {
        const bool branch_taken_0x34e698 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x34e698) {
            ctx->pc = 0x34E6B0u;
            goto label_34e6b0;
        }
    }
    ctx->pc = 0x34E6A0u;
    // 0x34e6a0: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34e6a4: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x34e6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x34e6a8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x34E6A8u;
    {
        const bool branch_taken_0x34e6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e6a8) {
            ctx->pc = 0x34E700u;
            goto label_34e700;
        }
    }
    ctx->pc = 0x34E6B0u;
label_34e6b0:
    // 0x34e6b0: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x34e6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34e6b4: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34e6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34e6b8: 0x24a5f09c  addiu       $a1, $a1, -0xF64
    ctx->pc = 0x34e6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963356));
    // 0x34e6bc: 0x8fc60014  lw          $a2, 0x14($fp)
    ctx->pc = 0x34e6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34e6c0: 0xc0d39c6  jal         func_34E718
    ctx->pc = 0x34E6C0u;
    SET_GPR_U32(ctx, 31, 0x34E6C8u);
    ctx->pc = 0x34E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E718u, 0x34E6C0u, 0x34E6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E6C8u;
label_34e6c8:
    // 0x34e6c8: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34e6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34e6cc: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e6d0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34E6D0u;
    {
        const bool branch_taken_0x34e6d0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34e6d0) {
            ctx->pc = 0x34E6E4u;
            goto label_34e6e4;
        }
    }
    ctx->pc = 0x34E6D8u;
    // 0x34e6d8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e6dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34E6DCu;
    {
        const bool branch_taken_0x34e6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e6dc) {
            ctx->pc = 0x34E700u;
            goto label_34e700;
        }
    }
    ctx->pc = 0x34E6E4u;
label_34e6e4:
    // 0x34e6e4: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34e6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34e6e8: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34E6E8u;
    SET_GPR_U32(ctx, 31, 0x34E6F0u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34E6E8u, 0x34E6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E6F0u;
label_34e6f0:
    // 0x34e6f0: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34e6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34e6f4: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x34E6F4u;
    SET_GPR_U32(ctx, 31, 0x34E6FCu);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x34E6F4u, 0x34E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E6FCu;
label_34e6fc:
    // 0x34e6fc: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34e700:
    // 0x34e700: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34e700u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e704: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34e704u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34e708: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34e708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34e70c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34e70cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34e710: 0x3e00008  jr          $ra
    ctx->pc = 0x34E710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E718u;
}
