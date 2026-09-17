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

// Function: sub_001049A8
// Address: 0x1049a8 - 0x104a30
void sub_001049A8_0x1049a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001049A8_0x1049a8");
#endif

    switch (ctx->pc) {
        case 0x104a04u: goto label_104a04;
        default: break;
    }

    ctx->pc = 0x1049a8u;

    // 0x1049a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1049a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1049ac: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1049acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1049b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1049b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1049b4: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1049B4u;
    {
        const bool branch_taken_0x1049b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1049b4) {
            ctx->pc = 0x1049B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1049B4u;
            // 0x1049b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1049BCu;
            goto label_1049bc;
        }
    }
    ctx->pc = 0x1049BCu;
label_1049bc:
    // 0x1049bc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1049bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1049c0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1049c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1049c4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1049c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1049c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1049c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1049cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1049ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1049d0: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x1049d0u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1049d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1049d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1049d8: 0x1012  mflo        $v0
    ctx->pc = 0x1049d8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1049dc: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1049dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1049e0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1049e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1049e4: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x1049e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1049e8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1049E8u;
    {
        const bool branch_taken_0x1049e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1049e8) {
            ctx->pc = 0x1049ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1049E8u;
            // 0x1049ec: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1049F8u;
            goto label_1049f8;
        }
    }
    ctx->pc = 0x1049F0u;
    // 0x1049f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1049F0u;
    {
        const bool branch_taken_0x1049f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1049F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049F0u;
        // 0x1049f4: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1049f0) {
            ctx->pc = 0x104A08u;
            goto label_104a08;
        }
    }
    ctx->pc = 0x1049F8u;
label_1049f8:
    // 0x1049f8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1049f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1049fc: 0xc0417dc  jal         func_105F70
    ctx->pc = 0x1049FCu;
    SET_GPR_U32(ctx, 31, 0x104A04u);
    ctx->pc = 0x104A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1049FCu;
    // 0x104a00: 0x24a5d8c8  addiu       $a1, $a1, -0x2738 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F70u, 0x1049FCu, 0x104A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A04u;
label_104a04:
    // 0x104a04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x104a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_104a08:
    // 0x104a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x104A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A0Cu;
        // 0x104a10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104A14u;
    // 0x104a14: 0x0  nop
    ctx->pc = 0x104a14u;
    // NOP
    // 0x104a18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x104a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104a1c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x104a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x104a20: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x104a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x104a24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104a28: 0x3e00008  jr          $ra
    ctx->pc = 0x104A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A28u;
        // 0x104a2c: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104A30u;
}
