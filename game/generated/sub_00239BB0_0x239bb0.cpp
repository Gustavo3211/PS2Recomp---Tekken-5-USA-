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

// Function: sub_00239BB0
// Address: 0x239bb0 - 0x239c50
void sub_00239BB0_0x239bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239BB0_0x239bb0");
#endif

    switch (ctx->pc) {
        case 0x239bc8u: goto label_239bc8;
        default: break;
    }

    ctx->pc = 0x239bb0u;

    // 0x239bb0: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x239bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x239bb4: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x239bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x239bb8: 0x2448d630  addiu       $t0, $v0, -0x29D0
    ctx->pc = 0x239bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956592));
    // 0x239bbc: 0x2467d650  addiu       $a3, $v1, -0x29B0
    ctx->pc = 0x239bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x239bc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x239bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239bc4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x239bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_239bc8:
    // 0x239bc8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x239bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x239bcc: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x239bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x239bd0: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x239bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x239bd4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x239bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239bd8: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x239bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x239bdc: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x239bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239be0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x239be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239be4: 0x46001845  abs.s       $f1, $f3
    ctx->pc = 0x239be4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[3]);
    // 0x239be8: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x239be8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x239bec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x239becu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239bf0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x239BF0u;
    {
        const bool branch_taken_0x239bf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x239BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239BF0u;
        // 0x239bf4: 0x28c30004  slti        $v1, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239bf0) {
            ctx->pc = 0x239C00u;
            goto label_239c00;
        }
    }
    ctx->pc = 0x239BF8u;
    // 0x239bf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x239BF8u;
    {
        const bool branch_taken_0x239bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239BF8u;
        // 0x239bfc: 0xe4430000  swc1        $f3, 0x0($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x239bf8) {
            ctx->pc = 0x239C04u;
            goto label_239c04;
        }
    }
    ctx->pc = 0x239C00u;
label_239c00:
    // 0x239c00: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x239c00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_239c04:
    // 0x239c04: 0x5460fff0  bnel        $v1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x239C04u;
    {
        const bool branch_taken_0x239c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239c04) {
            ctx->pc = 0x239C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239C04u;
            // 0x239c08: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239bc8;
        }
    }
    ctx->pc = 0x239C0Cu;
    // 0x239c0c: 0x2784a848  addiu       $a0, $gp, -0x57B8
    ctx->pc = 0x239c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944840));
    // 0x239c10: 0x2785a850  addiu       $a1, $gp, -0x57B0
    ctx->pc = 0x239c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944848));
    // 0x239c14: 0x2786a858  addiu       $a2, $gp, -0x57A8
    ctx->pc = 0x239c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944856));
    // 0x239c18: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x239c18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x239c1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x239c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x239c20: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x239c20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x239c24: 0x8cc90004  lw          $t1, 0x4($a2)
    ctx->pc = 0x239c24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x239c28: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x239c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x239c2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x239c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x239c30: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x239c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x239c34: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x239c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x239c38: 0xaf82c97c  sw          $v0, -0x3684($gp)
    ctx->pc = 0x239c38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953340), GPR_U32(ctx, 2));
    // 0x239c3c: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x239c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x239c40: 0xaf83c980  sw          $v1, -0x3680($gp)
    ctx->pc = 0x239c40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953344), GPR_U32(ctx, 3));
    // 0x239c44: 0x3e00008  jr          $ra
    ctx->pc = 0x239C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C44u;
        // 0x239c48: 0xaf84c984  sw          $a0, -0x367C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239C4Cu;
    // 0x239c4c: 0x0  nop
    ctx->pc = 0x239c4cu;
    // NOP
    ctx->pc = 0x239c50u;
}
