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

// Function: sub_0023B8C0
// Address: 0x23b8c0 - 0x23b958
void sub_0023B8C0_0x23b8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B8C0_0x23b8c0");
#endif

    ctx->pc = 0x23b8c0u;

    // 0x23b8c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23b8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b8c4: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x23b8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x23b8c8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x23b8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x23b8cc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23B8CCu;
    {
        const bool branch_taken_0x23b8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8CCu;
        // 0x23b8d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b8cc) {
            ctx->pc = 0x23B914u;
            goto label_23b914;
        }
    }
    ctx->pc = 0x23B8D4u;
    // 0x23b8d4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x23b8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x23b8d8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B8D8u;
    {
        const bool branch_taken_0x23b8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b8d8) {
            ctx->pc = 0x23B8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B8D8u;
            // 0x23b8dc: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B8E8u;
            goto label_23b8e8;
        }
    }
    ctx->pc = 0x23B8E0u;
    // 0x23b8e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23B8E0u;
    {
        const bool branch_taken_0x23b8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8E0u;
        // 0x23b8e4: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b8e0) {
            ctx->pc = 0x23B8FCu;
            goto label_23b8fc;
        }
    }
    ctx->pc = 0x23B8E8u;
label_23b8e8:
    // 0x23b8e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23B8E8u;
    {
        const bool branch_taken_0x23b8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8E8u;
        // 0x23b8ec: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b8e8) {
            ctx->pc = 0x23B914u;
            goto label_23b914;
        }
    }
    ctx->pc = 0x23B8F0u;
    // 0x23b8f0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x23b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x23b8f4: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x23b8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x23b8f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23b8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b8fc:
    // 0x23b8fc: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x23b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936748)));
    // 0x23b900: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B900u;
    {
        const bool branch_taken_0x23b900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B900u;
        // 0x23b904: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b900) {
            ctx->pc = 0x23B914u;
            goto label_23b914;
        }
    }
    ctx->pc = 0x23B908u;
    // 0x23b908: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x23b908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9140)));
    // 0x23b90c: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x23b90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x23b910: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x23b910u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_23b914:
    // 0x23b914: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x23B914u;
    {
        const bool branch_taken_0x23b914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b914) {
            ctx->pc = 0x23B950u;
            goto label_23b950;
        }
    }
    ctx->pc = 0x23B91Cu;
    // 0x23b91c: 0xc4a10088  lwc1        $f1, 0x88($a1)
    ctx->pc = 0x23b91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b920: 0xc4a0008c  lwc1        $f0, 0x8C($a1)
    ctx->pc = 0x23b920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b924: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x23b924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b928: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x23B928u;
    {
        const bool branch_taken_0x23b928 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b928) {
            ctx->pc = 0x23B940u;
            goto label_23b940;
        }
    }
    ctx->pc = 0x23B930u;
    // 0x23b930: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x23b930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x23b934: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x23b934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x23b938: 0x3e00008  jr          $ra
    ctx->pc = 0x23B938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B938u;
        // 0x23b93c: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B940u;
label_23b940:
    // 0x23b940: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23b940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23b944: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23b944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b948: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23b948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23b94c: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x23b94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
label_23b950:
    // 0x23b950: 0x3e00008  jr          $ra
    ctx->pc = 0x23B950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B958u;
}
