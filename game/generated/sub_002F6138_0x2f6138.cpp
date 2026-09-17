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

// Function: sub_002F6138
// Address: 0x2f6138 - 0x2f61e0
void sub_002F6138_0x2f6138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6138_0x2f6138");
#endif

    switch (ctx->pc) {
        case 0x2f617cu: goto label_2f617c;
        case 0x2f618cu: goto label_2f618c;
        case 0x2f619cu: goto label_2f619c;
        case 0x2f61b8u: goto label_2f61b8;
        case 0x2f61c8u: goto label_2f61c8;
        case 0x2f61d0u: goto label_2f61d0;
        default: break;
    }

    ctx->pc = 0x2f6138u;

    // 0x2f6138: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f6138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f613c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f613cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f6140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f6140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6144: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f6144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f6148: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x2f6148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2f614c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f614cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6150: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6150u;
    {
        const bool branch_taken_0x2f6150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6150) {
            ctx->pc = 0x2F6154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6150u;
            // 0x2f6154: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F616Cu;
            goto label_2f616c;
        }
    }
    ctx->pc = 0x2F6158u;
    // 0x2f6158: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f6158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f615c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f615cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f6160: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6160u;
    {
        const bool branch_taken_0x2f6160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f6160) {
            ctx->pc = 0x2F6174u;
            goto label_2f6174;
        }
    }
    ctx->pc = 0x2F6168u;
    // 0x2f6168: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f6168u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f616c:
    // 0x2f616c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f616cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6170: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f6170u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f6174:
    // 0x2f6174: 0xc0bbb2a  jal         func_2EECA8
    ctx->pc = 0x2F6174u;
    SET_GPR_U32(ctx, 31, 0x2F617Cu);
    ctx->pc = 0x2EECA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EECA8u, 0x2F6174u, 0x2F617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F617Cu;
label_2f617c:
    // 0x2f617c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F617Cu;
    {
        const bool branch_taken_0x2f617c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F617Cu;
        // 0x2f6180: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f617c) {
            ctx->pc = 0x2F61D0u;
            goto label_2f61d0;
        }
    }
    ctx->pc = 0x2F6184u;
    // 0x2f6184: 0xc0bb914  jal         func_2EE450
    ctx->pc = 0x2F6184u;
    SET_GPR_U32(ctx, 31, 0x2F618Cu);
    ctx->pc = 0x2EE450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE450u, 0x2F6184u, 0x2F618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F618Cu;
label_2f618c:
    // 0x2f618c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F618Cu;
    {
        const bool branch_taken_0x2f618c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F618Cu;
        // 0x2f6190: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f618c) {
            ctx->pc = 0x2F61B0u;
            goto label_2f61b0;
        }
    }
    ctx->pc = 0x2F6194u;
    // 0x2f6194: 0xc092940  jal         func_24A500
    ctx->pc = 0x2F6194u;
    SET_GPR_U32(ctx, 31, 0x2F619Cu);
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2F6194u, 0x2F619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F619Cu;
label_2f619c:
    // 0x2f619c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f619cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f61a0: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x2f61a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x2f61a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F61A4u;
    {
        const bool branch_taken_0x2f61a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F61A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F61A4u;
        // 0x2f61a8: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f61a4) {
            ctx->pc = 0x2F61D0u;
            goto label_2f61d0;
        }
    }
    ctx->pc = 0x2F61ACu;
    // 0x2f61ac: 0x0  nop
    ctx->pc = 0x2f61acu;
    // NOP
label_2f61b0:
    // 0x2f61b0: 0xc0bd8ec  jal         func_2F63B0
    ctx->pc = 0x2F61B0u;
    SET_GPR_U32(ctx, 31, 0x2F61B8u);
    ctx->pc = 0x2F61B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F61B0u;
    // 0x2f61b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F63B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F63B0u, 0x2F61B0u, 0x2F61B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F61B8u;
label_2f61b8:
    // 0x2f61b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F61B8u;
    {
        const bool branch_taken_0x2f61b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F61BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F61B8u;
        // 0x2f61bc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f61b8) {
            ctx->pc = 0x2F61D0u;
            goto label_2f61d0;
        }
    }
    ctx->pc = 0x2F61C0u;
    // 0x2f61c0: 0xc092940  jal         func_24A500
    ctx->pc = 0x2F61C0u;
    SET_GPR_U32(ctx, 31, 0x2F61C8u);
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2F61C0u, 0x2F61C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F61C8u;
label_2f61c8:
    // 0x2f61c8: 0xc0bd996  jal         func_2F6658
    ctx->pc = 0x2F61C8u;
    SET_GPR_U32(ctx, 31, 0x2F61D0u);
    ctx->pc = 0x2F61CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F61C8u;
    // 0x2f61cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6658u, 0x2F61C8u, 0x2F61D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F61D0u;
label_2f61d0:
    // 0x2f61d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f61d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f61d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f61d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f61d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F61D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F61DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F61D8u;
        // 0x2f61dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F61D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F61E0u;
}
