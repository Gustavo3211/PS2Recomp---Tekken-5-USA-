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

// Function: sub_0034E874
// Address: 0x34e874 - 0x34e948
void sub_0034E874_0x34e874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E874_0x34e874");
#endif

    switch (ctx->pc) {
        case 0x34e8bcu: goto label_34e8bc;
        case 0x34e8f8u: goto label_34e8f8;
        case 0x34e920u: goto label_34e920;
        case 0x34e92cu: goto label_34e92c;
        default: break;
    }

    ctx->pc = 0x34e874u;

    // 0x34e874: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34e874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34e878: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34e878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x34e87c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34e87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x34e880: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34e880u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e884: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34e884u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34e888: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34e888u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34e88c: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34e890: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x34e890u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x34e894: 0xafc00028  sw          $zero, 0x28($fp)
    ctx->pc = 0x34e894u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
    // 0x34e898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34e898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e89c: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34e89cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34e8a0: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x34e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x34e8a4: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x34e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x34e8a8: 0xafc00030  sw          $zero, 0x30($fp)
    ctx->pc = 0x34e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 0));
    // 0x34e8ac: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x34e8b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34e8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e8b4: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x34E8B4u;
    SET_GPR_U32(ctx, 31, 0x34E8BCu);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x34E8B4u, 0x34E8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E8BCu;
label_34e8bc:
    // 0x34e8bc: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34e8c0: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e8c4: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E8C4u;
    {
        const bool branch_taken_0x34e8c4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x34e8c4) {
            ctx->pc = 0x34E8DCu;
            goto label_34e8dc;
        }
    }
    ctx->pc = 0x34E8CCu;
    // 0x34e8cc: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34e8d0: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x34e8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x34e8d4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x34E8D4u;
    {
        const bool branch_taken_0x34e8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e8d4) {
            ctx->pc = 0x34E930u;
            goto label_34e930;
        }
    }
    ctx->pc = 0x34E8DCu;
label_34e8dc:
    // 0x34e8dc: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x34e8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34e8e0: 0x8fc5000c  lw          $a1, 0xC($fp)
    ctx->pc = 0x34e8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e8e4: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x34e8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x34e8e8: 0x24c6f09c  addiu       $a2, $a2, -0xF64
    ctx->pc = 0x34e8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963356));
    // 0x34e8ec: 0x8fc70018  lw          $a3, 0x18($fp)
    ctx->pc = 0x34e8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e8f0: 0xc0d3a52  jal         func_34E948
    ctx->pc = 0x34E8F0u;
    SET_GPR_U32(ctx, 31, 0x34E8F8u);
    ctx->pc = 0x34E948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E948u, 0x34E8F0u, 0x34E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E8F8u;
label_34e8f8:
    // 0x34e8f8: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34e8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34e8fc: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e900: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34E900u;
    {
        const bool branch_taken_0x34e900 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34e900) {
            ctx->pc = 0x34E914u;
            goto label_34e914;
        }
    }
    ctx->pc = 0x34E908u;
    // 0x34e908: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34e908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e90c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34E90Cu;
    {
        const bool branch_taken_0x34e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e90c) {
            ctx->pc = 0x34E930u;
            goto label_34e930;
        }
    }
    ctx->pc = 0x34E914u;
label_34e914:
    // 0x34e914: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x34e914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e918: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34E918u;
    SET_GPR_U32(ctx, 31, 0x34E920u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34E918u, 0x34E920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E920u;
label_34e920:
    // 0x34e920: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x34e920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e924: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x34E924u;
    SET_GPR_U32(ctx, 31, 0x34E92Cu);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x34E924u, 0x34E92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E92Cu;
label_34e92c:
    // 0x34e92c: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34e930:
    // 0x34e930: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34e930u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e934: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34e934u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34e938: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34e938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34e93c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34e93cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34e940: 0x3e00008  jr          $ra
    ctx->pc = 0x34E940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E948u;
}
