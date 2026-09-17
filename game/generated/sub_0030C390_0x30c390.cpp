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

// Function: sub_0030C390
// Address: 0x30c390 - 0x30c440
void sub_0030C390_0x30c390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C390_0x30c390");
#endif

    switch (ctx->pc) {
        case 0x30c3e0u: goto label_30c3e0;
        case 0x30c410u: goto label_30c410;
        default: break;
    }

    ctx->pc = 0x30c390u;

    // 0x30c390: 0x8f86cb88  lw          $a2, -0x3478($gp)
    ctx->pc = 0x30c390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953864)));
    // 0x30c394: 0x10c00028  beqz        $a2, . + 4 + (0x28 << 2)
    ctx->pc = 0x30C394u;
    {
        const bool branch_taken_0x30c394 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C394u;
        // 0x30c398: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c394) {
            ctx->pc = 0x30C438u;
            goto label_30c438;
        }
    }
    ctx->pc = 0x30C39Cu;
    // 0x30c39c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x30c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30c3a0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x30c3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30c3a4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x30c3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x30c3a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30c3a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c3ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30c3b0: 0xaf82cb88  sw          $v0, -0x3478($gp)
    ctx->pc = 0x30c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953864), GPR_U32(ctx, 2));
    // 0x30c3b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30c3b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c3b8: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x30c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x30c3bc: 0x24c50020  addiu       $a1, $a2, 0x20
    ctx->pc = 0x30c3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x30c3c0: 0x8f82cb8c  lw          $v0, -0x3474($gp)
    ctx->pc = 0x30c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953868)));
    // 0x30c3c4: 0xa0c30018  sb          $v1, 0x18($a2)
    ctx->pc = 0x30c3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x30c3c8: 0xacc20320  sw          $v0, 0x320($a2)
    ctx->pc = 0x30c3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 800), GPR_U32(ctx, 2));
    // 0x30c3cc: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x30c3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x30c3d0: 0xa0c3001a  sb          $v1, 0x1A($a2)
    ctx->pc = 0x30c3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x30c3d4: 0xa0c30019  sb          $v1, 0x19($a2)
    ctx->pc = 0x30c3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 25), (uint8_t)GPR_U32(ctx, 3));
    // 0x30c3d8: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x30c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x30c3dc: 0x0  nop
    ctx->pc = 0x30c3dcu;
    // NOP
label_30c3e0:
    // 0x30c3e0: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x30c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30c3e4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x30c3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x30c3e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x30c3e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c3ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30c3f0: 0x28e40100  slti        $a0, $a3, 0x100
    ctx->pc = 0x30c3f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x30c3f4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x30c3f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x30c3f8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x30c3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x30c3fc: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30C3FCu;
    {
        const bool branch_taken_0x30c3fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C3FCu;
        // 0x30c400: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c3fc) {
            ctx->pc = 0x30C3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c3e0;
        }
    }
    ctx->pc = 0x30C404u;
    // 0x30c404: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30c404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c408: 0x24c50220  addiu       $a1, $a2, 0x220
    ctx->pc = 0x30c408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 544));
    // 0x30c40c: 0x0  nop
    ctx->pc = 0x30c40cu;
    // NOP
label_30c410:
    // 0x30c410: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x30c410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30c414: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x30c414u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x30c418: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x30c418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c41c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30c420: 0x28e40100  slti        $a0, $a3, 0x100
    ctx->pc = 0x30c420u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x30c424: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x30c424u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x30c428: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x30c428u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x30c42c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30C42Cu;
    {
        const bool branch_taken_0x30c42c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C42Cu;
        // 0x30c430: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c42c) {
            ctx->pc = 0x30C410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c410;
        }
    }
    ctx->pc = 0x30C434u;
    // 0x30c434: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x30c434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_30c438:
    // 0x30c438: 0x3e00008  jr          $ra
    ctx->pc = 0x30C438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C440u;
}
