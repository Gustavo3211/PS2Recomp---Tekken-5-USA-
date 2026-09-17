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

// Function: sub_0034D550
// Address: 0x34d550 - 0x34d624
void sub_0034D550_0x34d550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D550_0x34d550");
#endif

    switch (ctx->pc) {
        case 0x34d594u: goto label_34d594;
        case 0x34d5d4u: goto label_34d5d4;
        case 0x34d5fcu: goto label_34d5fc;
        case 0x34d608u: goto label_34d608;
        default: break;
    }

    ctx->pc = 0x34d550u;

    // 0x34d550: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34d550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34d554: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34d554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x34d558: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34d558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x34d55c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34d55cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d560: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34d560u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34d564: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34d564u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34d568: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34d568u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34d56c: 0xafc00028  sw          $zero, 0x28($fp)
    ctx->pc = 0x34d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
    // 0x34d570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34d570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d574: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34d574u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34d578: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34d578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x34d57c: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x34d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x34d580: 0xafc00030  sw          $zero, 0x30($fp)
    ctx->pc = 0x34d580u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 0));
    // 0x34d584: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34d584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x34d588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34d588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d58c: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x34D58Cu;
    SET_GPR_U32(ctx, 31, 0x34D594u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x34D58Cu, 0x34D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D594u;
label_34d594:
    // 0x34d594: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34d594u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34d598: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34d598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34d59c: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D59Cu;
    {
        const bool branch_taken_0x34d59c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x34d59c) {
            ctx->pc = 0x34D5B4u;
            goto label_34d5b4;
        }
    }
    ctx->pc = 0x34D5A4u;
    // 0x34d5a4: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34d5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34d5a8: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x34d5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x34d5ac: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x34D5ACu;
    {
        const bool branch_taken_0x34d5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d5ac) {
            ctx->pc = 0x34D60Cu;
            goto label_34d60c;
        }
    }
    ctx->pc = 0x34D5B4u;
label_34d5b4:
    // 0x34d5b4: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34d5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34d5b8: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x34d5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34d5bc: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x34d5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34d5c0: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x34d5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x34d5c4: 0x24e7f09c  addiu       $a3, $a3, -0xF64
    ctx->pc = 0x34d5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963356));
    // 0x34d5c8: 0x8fc80014  lw          $t0, 0x14($fp)
    ctx->pc = 0x34d5c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34d5cc: 0xc0d3589  jal         func_34D624
    ctx->pc = 0x34D5CCu;
    SET_GPR_U32(ctx, 31, 0x34D5D4u);
    ctx->pc = 0x34D624u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D624u, 0x34D5CCu, 0x34D5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D5D4u;
label_34d5d4:
    // 0x34d5d4: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34d5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34d5d8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34d5dc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D5DCu;
    {
        const bool branch_taken_0x34d5dc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34d5dc) {
            ctx->pc = 0x34D5F0u;
            goto label_34d5f0;
        }
    }
    ctx->pc = 0x34D5E4u;
    // 0x34d5e4: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34d5e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34D5E8u;
    {
        const bool branch_taken_0x34d5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d5e8) {
            ctx->pc = 0x34D60Cu;
            goto label_34d60c;
        }
    }
    ctx->pc = 0x34D5F0u;
label_34d5f0:
    // 0x34d5f0: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34d5f4: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34D5F4u;
    SET_GPR_U32(ctx, 31, 0x34D5FCu);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34D5F4u, 0x34D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D5FCu;
label_34d5fc:
    // 0x34d5fc: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34d5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34d600: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x34D600u;
    SET_GPR_U32(ctx, 31, 0x34D608u);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x34D600u, 0x34D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D608u;
label_34d608:
    // 0x34d608: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34d608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34d60c:
    // 0x34d60c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34d60cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d610: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34d610u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34d614: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34d614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34d618: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34d618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34d61c: 0x3e00008  jr          $ra
    ctx->pc = 0x34D61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D624u;
}
