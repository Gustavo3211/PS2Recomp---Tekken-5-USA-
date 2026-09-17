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

// Function: sub_00344978
// Address: 0x344978 - 0x344a10
void sub_00344978_0x344978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344978_0x344978");
#endif

    switch (ctx->pc) {
        case 0x344998u: goto label_344998;
        case 0x3449a0u: goto label_3449a0;
        case 0x3449a8u: goto label_3449a8;
        case 0x3449bcu: goto label_3449bc;
        case 0x3449c4u: goto label_3449c4;
        case 0x3449d8u: goto label_3449d8;
        default: break;
    }

    ctx->pc = 0x344978u;

    // 0x344978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34497c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34497cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344980: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344984: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x344984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x344988: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x344988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x34498c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34498Cu;
    {
        const bool branch_taken_0x34498c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34498c) {
            ctx->pc = 0x3449B4u;
            goto label_3449b4;
        }
    }
    ctx->pc = 0x344994u;
    // 0x344994: 0x0  nop
    ctx->pc = 0x344994u;
    // NOP
label_344998:
    // 0x344998: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x344998u;
    SET_GPR_U32(ctx, 31, 0x3449A0u);
    ctx->pc = 0x34499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344998u;
    // 0x34499c: 0x8e0400c0  lw          $a0, 0xC0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x344998u, 0x3449A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3449A0u;
label_3449a0:
    // 0x3449a0: 0xc0d124c  jal         func_344930
    ctx->pc = 0x3449A0u;
    SET_GPR_U32(ctx, 31, 0x3449A8u);
    ctx->pc = 0x3449A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3449A0u;
    // 0x3449a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344930u, 0x3449A0u, 0x3449A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3449A8u;
label_3449a8:
    // 0x3449a8: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x3449a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x3449ac: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3449ACu;
    {
        const bool branch_taken_0x3449ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3449ac) {
            ctx->pc = 0x344998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344998;
        }
    }
    ctx->pc = 0x3449B4u;
label_3449b4:
    // 0x3449b4: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x3449B4u;
    SET_GPR_U32(ctx, 31, 0x3449BCu);
    ctx->pc = 0x3449B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3449B4u;
    // 0x3449b8: 0x8e0400c8  lw          $a0, 0xC8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x3449B4u, 0x3449BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3449BCu;
label_3449bc:
    // 0x3449bc: 0xc043c78  jal         func_10F1E0
    ctx->pc = 0x3449BCu;
    SET_GPR_U32(ctx, 31, 0x3449C4u);
    ctx->pc = 0x10F1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1E0u, 0x3449BCu, 0x3449C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3449C4u;
label_3449c4:
    // 0x3449c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3449c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3449c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3449c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3449cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3449CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3449D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3449CCu;
        // 0x3449d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3449CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3449D4u;
    // 0x3449d4: 0x0  nop
    ctx->pc = 0x3449d4u;
    // NOP
label_3449d8:
    // 0x3449d8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3449d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3449dc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3449dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3449e0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3449e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3449e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3449e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3449e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3449e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3449ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3449ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3449f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3449f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3449f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3449f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3449f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3449f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3449fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3449fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x344a00: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x344a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x344a04: 0x80d1540  j           func_345500
    ctx->pc = 0x344A04u;
    ctx->pc = 0x344A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344A04u;
    // 0x344a08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345500u, 0x344A04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x344A0Cu;
    // 0x344a0c: 0x0  nop
    ctx->pc = 0x344a0cu;
    // NOP
    ctx->pc = 0x344a10u;
}
