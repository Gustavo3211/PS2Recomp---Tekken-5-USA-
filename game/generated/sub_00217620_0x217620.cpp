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

// Function: sub_00217620
// Address: 0x217620 - 0x2176a0
void sub_00217620_0x217620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217620_0x217620");
#endif

    switch (ctx->pc) {
        case 0x217630u: goto label_217630;
        case 0x21763cu: goto label_21763c;
        case 0x217644u: goto label_217644;
        case 0x21764cu: goto label_21764c;
        case 0x217658u: goto label_217658;
        case 0x217670u: goto label_217670;
        case 0x217678u: goto label_217678;
        case 0x21768cu: goto label_21768c;
        default: break;
    }

    ctx->pc = 0x217620u;

    // 0x217620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217628: 0xc085116  jal         func_214458
    ctx->pc = 0x217628u;
    SET_GPR_U32(ctx, 31, 0x217630u);
    ctx->pc = 0x214458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214458u, 0x217628u, 0x217630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217630u;
label_217630:
    // 0x217630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x217630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217634: 0xc092460  jal         func_249180
    ctx->pc = 0x217634u;
    SET_GPR_U32(ctx, 31, 0x21763Cu);
    ctx->pc = 0x217638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217634u;
    // 0x217638: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249180u, 0x217634u, 0x21763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21763Cu;
label_21763c:
    // 0x21763c: 0xc092958  jal         func_24A560
    ctx->pc = 0x21763Cu;
    SET_GPR_U32(ctx, 31, 0x217644u);
    ctx->pc = 0x217640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21763Cu;
    // 0x217640: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A560u, 0x21763Cu, 0x217644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217644u;
label_217644:
    // 0x217644: 0xc0820c4  jal         func_208310
    ctx->pc = 0x217644u;
    SET_GPR_U32(ctx, 31, 0x21764Cu);
    ctx->pc = 0x208310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208310u, 0x217644u, 0x21764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21764Cu;
label_21764c:
    // 0x21764c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21764cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217650: 0xc07e23e  jal         func_1F88F8
    ctx->pc = 0x217650u;
    SET_GPR_U32(ctx, 31, 0x217658u);
    ctx->pc = 0x217654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217650u;
    // 0x217654: 0xaf809718  sw          $zero, -0x68E8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940440), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88F8u, 0x217650u, 0x217658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217658u;
label_217658:
    // 0x217658: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x217658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21765c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x21765cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x217660: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x217660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x217664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x217664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217668: 0xc0a3a92  jal         func_28EA48
    ctx->pc = 0x217668u;
    SET_GPR_U32(ctx, 31, 0x217670u);
    ctx->pc = 0x21766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217668u;
    // 0x21766c: 0xac62886c  sw          $v0, -0x7794($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA48u, 0x217668u, 0x217670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217670u;
label_217670:
    // 0x217670: 0xc0b6b5a  jal         func_2DAD68
    ctx->pc = 0x217670u;
    SET_GPR_U32(ctx, 31, 0x217678u);
    ctx->pc = 0x2DAD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAD68u, 0x217670u, 0x217678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217678u;
label_217678:
    // 0x217678: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x217678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21767c: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x21767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x217680: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x217680u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x217684: 0xc0929f4  jal         func_24A7D0
    ctx->pc = 0x217684u;
    SET_GPR_U32(ctx, 31, 0x21768Cu);
    ctx->pc = 0x217688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217684u;
    // 0x217688: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A7D0u, 0x217684u, 0x21768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21768Cu;
label_21768c:
    // 0x21768c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21768cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217694: 0x3e00008  jr          $ra
    ctx->pc = 0x217694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217694u;
        // 0x217698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21769Cu;
    // 0x21769c: 0x0  nop
    ctx->pc = 0x21769cu;
    // NOP
    ctx->pc = 0x2176a0u;
}
