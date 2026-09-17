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

// Function: sub_0021C7F0
// Address: 0x21c7f0 - 0x21c858
void sub_0021C7F0_0x21c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C7F0_0x21c7f0");
#endif

    switch (ctx->pc) {
        case 0x21c834u: goto label_21c834;
        case 0x21c840u: goto label_21c840;
        case 0x21c848u: goto label_21c848;
        default: break;
    }

    ctx->pc = 0x21c7f0u;

    // 0x21c7f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c7f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c7f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c7f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21c7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21c800: 0x9203002d  lbu         $v1, 0x2D($s0)
    ctx->pc = 0x21c800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x21c804: 0x92020031  lbu         $v0, 0x31($s0)
    ctx->pc = 0x21c804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x21c808: 0x54430010  bnel        $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x21C808u;
    {
        const bool branch_taken_0x21c808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21c808) {
            ctx->pc = 0x21C80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C808u;
            // 0x21c80c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C84Cu;
            goto label_21c84c;
        }
    }
    ctx->pc = 0x21C810u;
    // 0x21c810: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x21c810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x21c814: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21c814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21c818: 0x2c4303e8  sltiu       $v1, $v0, 0x3E8
    ctx->pc = 0x21c818u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1000) ? 1 : 0);
    // 0x21c81c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C81Cu;
    {
        const bool branch_taken_0x21c81c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C81Cu;
        // 0x21c820: 0xae0200e4  sw          $v0, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c81c) {
            ctx->pc = 0x21C82Cu;
            goto label_21c82c;
        }
    }
    ctx->pc = 0x21C824u;
    // 0x21c824: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x21c824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x21c828: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x21c828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
label_21c82c:
    // 0x21c82c: 0xc087fca  jal         func_21FF28
    ctx->pc = 0x21C82Cu;
    SET_GPR_U32(ctx, 31, 0x21C834u);
    ctx->pc = 0x21C830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C82Cu;
    // 0x21c830: 0x8e0400e4  lw          $a0, 0xE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FF28u, 0x21C82Cu, 0x21C834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C834u;
label_21c834:
    // 0x21c834: 0x92040031  lbu         $a0, 0x31($s0)
    ctx->pc = 0x21c834u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x21c838: 0xc0850f0  jal         func_2143C0
    ctx->pc = 0x21C838u;
    SET_GPR_U32(ctx, 31, 0x21C840u);
    ctx->pc = 0x21C83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C838u;
    // 0x21c83c: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2143C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2143C0u, 0x21C838u, 0x21C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C840u;
label_21c840:
    // 0x21c840: 0xc08510c  jal         func_214430
    ctx->pc = 0x21C840u;
    SET_GPR_U32(ctx, 31, 0x21C848u);
    ctx->pc = 0x214430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214430u, 0x21C840u, 0x21C848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C848u;
label_21c848:
    // 0x21c848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c84c:
    // 0x21c84c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21c84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c850: 0x3e00008  jr          $ra
    ctx->pc = 0x21C850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C850u;
        // 0x21c854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C858u;
}
