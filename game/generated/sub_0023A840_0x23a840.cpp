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

// Function: sub_0023A840
// Address: 0x23a840 - 0x23a8b0
void sub_0023A840_0x23a840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A840_0x23a840");
#endif

    switch (ctx->pc) {
        case 0x23a854u: goto label_23a854;
        case 0x23a878u: goto label_23a878;
        case 0x23a89cu: goto label_23a89c;
        default: break;
    }

    ctx->pc = 0x23a840u;

    // 0x23a840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a848: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23a84c: 0xc08eaea  jal         func_23ABA8
    ctx->pc = 0x23A84Cu;
    SET_GPR_U32(ctx, 31, 0x23A854u);
    ctx->pc = 0x23A850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A84Cu;
    // 0x23a850: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ABA8u, 0x23A84Cu, 0x23A854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A854u;
label_23a854:
    // 0x23a854: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x23a854u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x23a858: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x23a858u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    // 0x23a85c: 0x24e73180  addiu       $a3, $a3, 0x3180
    ctx->pc = 0x23a85cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12672));
    // 0x23a860: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23a860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23a864: 0x24050f50  addiu       $a1, $zero, 0xF50
    ctx->pc = 0x23a864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3920));
    // 0x23a868: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A868u;
    {
        const bool branch_taken_0x23a868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A868u;
        // 0x23a86c: 0x34c60003  ori         $a2, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a868) {
            ctx->pc = 0x23A880u;
            goto label_23a880;
        }
    }
    ctx->pc = 0x23A870u;
    // 0x23a870: 0xc089248  jal         func_224920
    ctx->pc = 0x23A870u;
    SET_GPR_U32(ctx, 31, 0x23A878u);
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x23A870u, 0x23A878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A878u;
label_23a878:
    // 0x23a878: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23A878u;
    {
        const bool branch_taken_0x23a878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A878u;
        // 0x23a87c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a878) {
            ctx->pc = 0x23A884u;
            goto label_23a884;
        }
    }
    ctx->pc = 0x23A880u;
label_23a880:
    // 0x23a880: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23a880u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a884:
    // 0x23a884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a888: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23a888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23a88c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23a88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23a890: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23a890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a894: 0xc08e9b6  jal         func_23A6D8
    ctx->pc = 0x23A894u;
    SET_GPR_U32(ctx, 31, 0x23A89Cu);
    ctx->pc = 0x23A898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A894u;
    // 0x23a898: 0xac43d730  sw          $v1, -0x28D0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956848), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6D8u, 0x23A894u, 0x23A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A89Cu;
label_23a89c:
    // 0x23a89c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a89cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a8a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23a8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x23A8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A8A4u;
        // 0x23a8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A8ACu;
    // 0x23a8ac: 0x0  nop
    ctx->pc = 0x23a8acu;
    // NOP
    ctx->pc = 0x23a8b0u;
}
