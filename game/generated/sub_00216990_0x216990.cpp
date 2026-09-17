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

// Function: sub_00216990
// Address: 0x216990 - 0x2169f8
void sub_00216990_0x216990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216990_0x216990");
#endif

    switch (ctx->pc) {
        case 0x2169dcu: goto label_2169dc;
        default: break;
    }

    ctx->pc = 0x216990u;

    // 0x216990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216994: 0xaf80c91c  sw          $zero, -0x36E4($gp)
    ctx->pc = 0x216994u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953244), GPR_U32(ctx, 0));
    // 0x216998: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21699c: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x21699cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x2169a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2169a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2169a4: 0x26108858  addiu       $s0, $s0, -0x77A8
    ctx->pc = 0x2169a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    // 0x2169a8: 0xa0a00030  sb          $zero, 0x30($a1)
    ctx->pc = 0x2169a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x2169ac: 0x26060048  addiu       $a2, $s0, 0x48
    ctx->pc = 0x2169acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x2169b0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2169b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x2169b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2169b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2169b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2169bc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2169bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2169c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2169c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2169c4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2169c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2169c8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2169c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2169cc: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x2169ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x2169d0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2169d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169d4: 0xc07c75c  jal         func_1F1D70
    ctx->pc = 0x2169D4u;
    SET_GPR_U32(ctx, 31, 0x2169DCu);
    ctx->pc = 0x2169D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2169D4u;
    // 0x2169d8: 0x84c40000  lh          $a0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1D70u, 0x2169D4u, 0x2169DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2169DCu;
label_2169dc:
    // 0x2169dc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2169dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2169e0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2169e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2169e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2169e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2169e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2169e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2169ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2169ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2169f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2169F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2169F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2169F0u;
        // 0x2169f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2169F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2169F8u;
}
