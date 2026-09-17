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

// Function: sub_00242120
// Address: 0x242120 - 0x2421a8
void sub_00242120_0x242120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242120_0x242120");
#endif

    switch (ctx->pc) {
        case 0x242160u: goto label_242160;
        case 0x24216cu: goto label_24216c;
        case 0x242174u: goto label_242174;
        default: break;
    }

    ctx->pc = 0x242120u;

    // 0x242120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x242120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x242124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242128: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x242128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24212c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24212cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x242130: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x242130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242134: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x242134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x242138: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x242138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24213c: 0x8e720050  lw          $s2, 0x50($s3)
    ctx->pc = 0x24213cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x242140: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x242140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x242144: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x242144u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    // 0x242148: 0x26310710  addiu       $s1, $s1, 0x710
    ctx->pc = 0x242148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1808));
    // 0x24214c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x24214cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x242150: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x242150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x242154: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x242154u;
    {
        const bool branch_taken_0x242154 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x242158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242154u;
        // 0x242158: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242154) {
            ctx->pc = 0x242184u;
            goto label_242184;
        }
    }
    ctx->pc = 0x24215Cu;
    // 0x24215c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24215cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242160:
    // 0x242160: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x242160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x242164: 0xc0905ae  jal         func_2416B8
    ctx->pc = 0x242164u;
    SET_GPR_U32(ctx, 31, 0x24216Cu);
    ctx->pc = 0x242168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242164u;
    // 0x242168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416B8u, 0x242164u, 0x24216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24216Cu;
label_24216c:
    // 0x24216c: 0xc0c1078  jal         func_3041E0
    ctx->pc = 0x24216Cu;
    SET_GPR_U32(ctx, 31, 0x242174u);
    ctx->pc = 0x242170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24216Cu;
    // 0x242170: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3041E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3041E0u, 0x24216Cu, 0x242174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242174u;
label_242174:
    // 0x242174: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x242174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x242178: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x242178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24217c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24217Cu;
    {
        const bool branch_taken_0x24217c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24217Cu;
        // 0x242180: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24217c) {
            ctx->pc = 0x242160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242160;
        }
    }
    ctx->pc = 0x242184u;
label_242184:
    // 0x242184: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x242184u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x242188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24218c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24218cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x242190: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x242190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242194: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x242194u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x242198: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x242198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24219c: 0x3e00008  jr          $ra
    ctx->pc = 0x24219Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2421A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24219Cu;
        // 0x2421a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24219Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2421A4u;
    // 0x2421a4: 0x0  nop
    ctx->pc = 0x2421a4u;
    // NOP
    ctx->pc = 0x2421a8u;
}
