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

// Function: sub_00222970
// Address: 0x222970 - 0x2229c8
void sub_00222970_0x222970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222970_0x222970");
#endif

    switch (ctx->pc) {
        case 0x2229a0u: goto label_2229a0;
        case 0x2229acu: goto label_2229ac;
        default: break;
    }

    ctx->pc = 0x222970u;

    // 0x222970: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x222970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x222974: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x222974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x222978: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x222978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22297c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x22297cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x222980: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x222980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x222984: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x222984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x222988: 0x8c900044  lw          $s0, 0x44($a0)
    ctx->pc = 0x222988u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x22298c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x22298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x222990: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x222990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x222994: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x222994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222998: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x222998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x22299c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x22299cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2229a0:
    // 0x2229a0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2229a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2229a4: 0xc089146  jal         func_224518
    ctx->pc = 0x2229A4u;
    SET_GPR_U32(ctx, 31, 0x2229ACu);
    ctx->pc = 0x2229A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2229A4u;
    // 0x2229a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224518u, 0x2229A4u, 0x2229ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2229ACu;
label_2229ac:
    // 0x2229ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2229acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2229b0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2229b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2229b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2229b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2229b8: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2229b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2229bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2229bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2229c0: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2229C0u;
    {
        const bool branch_taken_0x2229c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2229C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2229C0u;
        // 0x2229c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229c0) {
            ctx->pc = 0x2229A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2229a0;
        }
    }
    ctx->pc = 0x2229C8u;
}
