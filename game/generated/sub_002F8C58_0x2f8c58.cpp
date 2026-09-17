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

// Function: sub_002F8C58
// Address: 0x2f8c58 - 0x2f8f18
void sub_002F8C58_0x2f8c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8C58_0x2f8c58");
#endif

    switch (ctx->pc) {
        case 0x2f8ca8u: goto label_2f8ca8;
        case 0x2f8da0u: goto label_2f8da0;
        case 0x2f8de0u: goto label_2f8de0;
        case 0x2f8e20u: goto label_2f8e20;
        case 0x2f8eacu: goto label_2f8eac;
        case 0x2f8ec0u: goto label_2f8ec0;
        case 0x2f8ee4u: goto label_2f8ee4;
        default: break;
    }

    ctx->pc = 0x2f8c58u;

    // 0x2f8c58: 0xc4810138  lwc1        $f1, 0x138($a0)
    ctx->pc = 0x2f8c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8c5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f8c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8c60: 0xc480013c  lwc1        $f0, 0x13C($a0)
    ctx->pc = 0x2f8c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8c64: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2f8c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f8c68: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f8c68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f8c6c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2f8c6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f8c70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8C70u;
    {
        const bool branch_taken_0x2f8c70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F8C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C70u;
        // 0x2f8c74: 0xe4810138  swc1        $f1, 0x138($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c70) {
            ctx->pc = 0x2F8C80u;
            goto label_2f8c80;
        }
    }
    ctx->pc = 0x2F8C78u;
    // 0x2f8c78: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C78u;
        // 0x2f8c7c: 0xe4820138  swc1        $f2, 0x138($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 312), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8C80u;
label_2f8c80:
    // 0x2f8c80: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2f8c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2f8c84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f8c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8c88: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f8c88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f8c8c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8C8Cu;
    {
        const bool branch_taken_0x2f8c8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f8c8c) {
            ctx->pc = 0x2F8CA0u;
            goto label_2f8ca0;
        }
    }
    ctx->pc = 0x2F8C94u;
    // 0x2f8c94: 0xe4800138  swc1        $f0, 0x138($a0)
    ctx->pc = 0x2f8c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 312), bits); }
    // 0x2f8c98: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C98u;
        // 0x2f8c9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8CA0u;
label_2f8ca0:
    // 0x2f8ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8CA0u;
        // 0x2f8ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8CA8u;
label_2f8ca8:
    // 0x2f8ca8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f8ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f8cac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f8cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f8cb0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2f8cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2f8cb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f8cb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8cb8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2f8cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2f8cbc: 0x26700140  addiu       $s0, $s3, 0x140
    ctx->pc = 0x2f8cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
    // 0x2f8cc0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f8cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f8cc4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2f8cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2f8cc8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2f8cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2f8ccc: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2f8cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2f8cd0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2f8cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2f8cd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8cd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8CD8u;
    {
        const bool branch_taken_0x2f8cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8CD8u;
        // 0x2f8cdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8cd8) {
            ctx->pc = 0x2F8CF0u;
            goto label_2f8cf0;
        }
    }
    ctx->pc = 0x2F8CE0u;
    // 0x2f8ce0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f8ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f8ce4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f8ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f8ce8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8CE8u;
    {
        const bool branch_taken_0x2f8ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8ce8) {
            ctx->pc = 0x2F8CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8CE8u;
            // 0x2f8cec: 0x8c820120  lw          $v0, 0x120($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8D00u;
            goto label_2f8d00;
        }
    }
    ctx->pc = 0x2F8CF0u;
label_2f8cf0:
    // 0x2f8cf0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f8cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2f8cf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f8cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8cf8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f8cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f8cfc: 0x8c820120  lw          $v0, 0x120($a0)
    ctx->pc = 0x2f8cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x120u));
label_2f8d00:
    // 0x2f8d00: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2f8d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2f8d04: 0x5040007b  beql        $v0, $zero, . + 4 + (0x7B << 2)
    ctx->pc = 0x2F8D04u;
    {
        const bool branch_taken_0x2f8d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8d04) {
            ctx->pc = 0x2F8D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8D04u;
            // 0x2f8d08: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8EF4u;
            goto label_2f8ef4;
        }
    }
    ctx->pc = 0x2F8D0Cu;
    // 0x2f8d0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f8d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8d10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8D10u;
    {
        const bool branch_taken_0x2f8d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D10u;
        // 0x2f8d14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8d10) {
            ctx->pc = 0x2F8D28u;
            goto label_2f8d28;
        }
    }
    ctx->pc = 0x2F8D18u;
    // 0x2f8d18: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f8d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f8d1c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f8d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f8d20: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8D20u;
    {
        const bool branch_taken_0x2f8d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8d20) {
            ctx->pc = 0x2F8D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8D20u;
            // 0x2f8d24: 0x8c820120  lw          $v0, 0x120($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8D38u;
            goto label_2f8d38;
        }
    }
    ctx->pc = 0x2F8D28u;
label_2f8d28:
    // 0x2f8d28: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f8d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2f8d2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f8d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8d30: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f8d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f8d34: 0x8c820120  lw          $v0, 0x120($a0)
    ctx->pc = 0x2f8d34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x120u));
label_2f8d38:
    // 0x2f8d38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f8d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8d3c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8D3Cu;
    {
        const bool branch_taken_0x2f8d3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D3Cu;
        // 0x2f8d40: 0x2c550001  sltiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8d3c) {
            ctx->pc = 0x2F8D54u;
            goto label_2f8d54;
        }
    }
    ctx->pc = 0x2F8D44u;
    // 0x2f8d44: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f8d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f8d48: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f8d4c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8D4Cu;
    {
        const bool branch_taken_0x2f8d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8d4c) {
            ctx->pc = 0x2F8D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8D4Cu;
            // 0x2f8d50: 0x8c820120  lw          $v0, 0x120($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8D64u;
            goto label_2f8d64;
        }
    }
    ctx->pc = 0x2F8D54u;
label_2f8d54:
    // 0x2f8d54: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f8d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2f8d58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f8d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8d5c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f8d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f8d60: 0x8c820120  lw          $v0, 0x120($a0)
    ctx->pc = 0x2f8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x120u));
label_2f8d64:
    // 0x2f8d64: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F8D64u;
    {
        const bool branch_taken_0x2f8d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8d64) {
            ctx->pc = 0x2F8D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8D64u;
            // 0x2f8d68: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8DA8u;
            goto label_2f8da8;
        }
    }
    ctx->pc = 0x2F8D6Cu;
    // 0x2f8d6c: 0x26650148  addiu       $a1, $s3, 0x148
    ctx->pc = 0x2f8d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 328));
    // 0x2f8d70: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f8d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f8d74: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F8D74u;
    {
        const bool branch_taken_0x2f8d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8d74) {
            ctx->pc = 0x2F8D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8D74u;
            // 0x2f8d78: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8D90u;
            goto label_2f8d90;
        }
    }
    ctx->pc = 0x2F8D7Cu;
    // 0x2f8d7c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f8d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f8d80: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f8d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f8d84: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8D84u;
    {
        const bool branch_taken_0x2f8d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8d84) {
            ctx->pc = 0x2F8D98u;
            goto label_2f8d98;
        }
    }
    ctx->pc = 0x2F8D8Cu;
    // 0x2f8d8c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f8d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f8d90:
    // 0x2f8d90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f8d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8d94: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f8d94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f8d98:
    // 0x2f8d98: 0xc0bde92  jal         func_2F7A48
    ctx->pc = 0x2F8D98u;
    SET_GPR_U32(ctx, 31, 0x2F8DA0u);
    ctx->pc = 0x2F8D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8D98u;
    // 0x2f8d9c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7A48u, 0x2F8D98u, 0x2F8DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8DA0u;
label_2f8da0:
    // 0x2f8da0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F8DA0u;
    {
        const bool branch_taken_0x2f8da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8DA0u;
        // 0x2f8da4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8da0) {
            ctx->pc = 0x2F8DD0u;
            goto label_2f8dd0;
        }
    }
    ctx->pc = 0x2F8DA8u;
label_2f8da8:
    // 0x2f8da8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F8DA8u;
    {
        const bool branch_taken_0x2f8da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8da8) {
            ctx->pc = 0x2F8DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8DA8u;
            // 0x2f8dac: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8DC4u;
            goto label_2f8dc4;
        }
    }
    ctx->pc = 0x2F8DB0u;
    // 0x2f8db0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f8db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f8db4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f8db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f8db8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8DB8u;
    {
        const bool branch_taken_0x2f8db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F8DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8DB8u;
        // 0x2f8dbc: 0x2414000e  addiu       $s4, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8db8) {
            ctx->pc = 0x2F8DCCu;
            goto label_2f8dcc;
        }
    }
    ctx->pc = 0x2F8DC0u;
    // 0x2f8dc0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f8dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f8dc4:
    // 0x2f8dc4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f8dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f8dc8: 0x2414000e  addiu       $s4, $zero, 0xE
    ctx->pc = 0x2f8dc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2f8dcc:
    // 0x2f8dcc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f8dccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8dd0:
    // 0x2f8dd0: 0x5a800048  blezl       $s4, . + 4 + (0x48 << 2)
    ctx->pc = 0x2F8DD0u;
    {
        const bool branch_taken_0x2f8dd0 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x2f8dd0) {
            ctx->pc = 0x2F8DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8DD0u;
            // 0x2f8dd4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8EF4u;
            goto label_2f8ef4;
        }
    }
    ctx->pc = 0x2F8DD8u;
    // 0x2f8dd8: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x2f8dd8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
    // 0x2f8ddc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f8de0:
    // 0x2f8de0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F8DE0u;
    {
        const bool branch_taken_0x2f8de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8DE0u;
        // 0x2f8de4: 0x2552021  addu        $a0, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8de0) {
            ctx->pc = 0x2F8DFCu;
            goto label_2f8dfc;
        }
    }
    ctx->pc = 0x2F8DE8u;
    // 0x2f8de8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f8de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f8dec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f8decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8df0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f8df4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8DF4u;
    {
        const bool branch_taken_0x2f8df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8DF4u;
        // 0x2f8df8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8df4) {
            ctx->pc = 0x2F8E0Cu;
            goto label_2f8e0c;
        }
    }
    ctx->pc = 0x2F8DFCu;
label_2f8dfc:
    // 0x2f8dfc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f8dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2f8e00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f8e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8e04: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f8e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f8e08: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2f8e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2f8e0c:
    // 0x2f8e0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f8e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8e10: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f8e14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f8e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8e18: 0xc0a5d52  jal         func_297548
    ctx->pc = 0x2F8E18u;
    SET_GPR_U32(ctx, 31, 0x2F8E20u);
    ctx->pc = 0x2F8E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8E18u;
    // 0x2f8e1c: 0x8c45005c  lw          $a1, 0x5C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x2F8E18u, 0x2F8E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8E20u;
label_2f8e20:
    // 0x2f8e20: 0x8e620114  lw          $v0, 0x114($s3)
    ctx->pc = 0x2f8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x2f8e24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8E24u;
    {
        const bool branch_taken_0x2f8e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8e24) {
            ctx->pc = 0x2F8E3Cu;
            goto label_2f8e3c;
        }
    }
    ctx->pc = 0x2F8E2Cu;
    // 0x2f8e2c: 0x8e620118  lw          $v0, 0x118($s3)
    ctx->pc = 0x2f8e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x2f8e30: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x2f8e30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x2f8e34: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8E34u;
    {
        const bool branch_taken_0x2f8e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2F8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E34u;
        // 0x2f8e38: 0x3631ffff  ori         $s1, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8e34) {
            ctx->pc = 0x2F8E44u;
            goto label_2f8e44;
        }
    }
    ctx->pc = 0x2F8E3Cu;
label_2f8e3c:
    // 0x2f8e3c: 0x3c1180df  lui         $s1, 0x80DF
    ctx->pc = 0x2f8e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32991 << 16));
    // 0x2f8e40: 0x3631cfcf  ori         $s1, $s1, 0xCFCF
    ctx->pc = 0x2f8e40u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)53199);
label_2f8e44:
    // 0x2f8e44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f8e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8e48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8E48u;
    {
        const bool branch_taken_0x2f8e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E48u;
        // 0x2f8e4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8e48) {
            ctx->pc = 0x2F8E60u;
            goto label_2f8e60;
        }
    }
    ctx->pc = 0x2F8E50u;
    // 0x2f8e50: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f8e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f8e54: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f8e58: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8E58u;
    {
        const bool branch_taken_0x2f8e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8e58) {
            ctx->pc = 0x2F8E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8E58u;
            // 0x2f8e5c: 0x8c820120  lw          $v0, 0x120($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8E70u;
            goto label_2f8e70;
        }
    }
    ctx->pc = 0x2F8E60u;
label_2f8e60:
    // 0x2f8e60: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f8e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2f8e64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f8e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8e68: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f8e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f8e6c: 0x8c820120  lw          $v0, 0x120($a0)
    ctx->pc = 0x2f8e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x120u));
label_2f8e70:
    // 0x2f8e70: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F8E70u;
    {
        const bool branch_taken_0x2f8e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8E70u;
        // 0x2f8e74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8e70) {
            ctx->pc = 0x2F8EB8u;
            goto label_2f8eb8;
        }
    }
    ctx->pc = 0x2F8E78u;
    // 0x2f8e78: 0x26650148  addiu       $a1, $s3, 0x148
    ctx->pc = 0x2f8e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 328));
    // 0x2f8e7c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f8e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f8e80: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F8E80u;
    {
        const bool branch_taken_0x2f8e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8e80) {
            ctx->pc = 0x2F8E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8E80u;
            // 0x2f8e84: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8E9Cu;
            goto label_2f8e9c;
        }
    }
    ctx->pc = 0x2F8E88u;
    // 0x2f8e88: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f8e8c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f8e90: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8E90u;
    {
        const bool branch_taken_0x2f8e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8e90) {
            ctx->pc = 0x2F8EA4u;
            goto label_2f8ea4;
        }
    }
    ctx->pc = 0x2F8E98u;
    // 0x2f8e98: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f8e98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f8e9c:
    // 0x2f8e9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f8e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8ea0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f8ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f8ea4:
    // 0x2f8ea4: 0xc0bdedc  jal         func_2F7B70
    ctx->pc = 0x2F8EA4u;
    SET_GPR_U32(ctx, 31, 0x2F8EACu);
    ctx->pc = 0x2F8EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8EA4u;
    // 0x2f8ea8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7B70u, 0x2F8EA4u, 0x2F8EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8EACu;
label_2f8eac:
    // 0x2f8eac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8EACu;
    {
        const bool branch_taken_0x2f8eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8EACu;
        // 0x2f8eb0: 0x8fa80004  lw          $t0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8eac) {
            ctx->pc = 0x2F8EC4u;
            goto label_2f8ec4;
        }
    }
    ctx->pc = 0x2F8EB4u;
    // 0x2f8eb4: 0x0  nop
    ctx->pc = 0x2f8eb4u;
    // NOP
label_2f8eb8:
    // 0x2f8eb8: 0xc0be3c6  jal         func_2F8F18
    ctx->pc = 0x2F8EB8u;
    SET_GPR_U32(ctx, 31, 0x2F8EC0u);
    ctx->pc = 0x2F8EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8EB8u;
    // 0x2f8ebc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8F18u, 0x2F8EB8u, 0x2F8EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8EC0u;
label_2f8ec0:
    // 0x2f8ec0: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x2f8ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f8ec4:
    // 0x2f8ec4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2f8ec4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8ec8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2f8ec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8ecc: 0x26c41880  addiu       $a0, $s6, 0x1880
    ctx->pc = 0x2f8eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 6272));
    // 0x2f8ed0: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x2f8ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x2f8ed4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f8ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8ed8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2f8ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f8edc: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2F8EDCu;
    SET_GPR_U32(ctx, 31, 0x2F8EE4u);
    ctx->pc = 0x2F8EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8EDCu;
    // 0x2f8ee0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2F8EDCu, 0x2F8EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8EE4u;
label_2f8ee4:
    // 0x2f8ee4: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x2f8ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2f8ee8: 0x5440ffbd  bnel        $v0, $zero, . + 4 + (-0x43 << 2)
    ctx->pc = 0x2F8EE8u;
    {
        const bool branch_taken_0x2f8ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8ee8) {
            ctx->pc = 0x2F8EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8EE8u;
            // 0x2f8eec: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8de0;
        }
    }
    ctx->pc = 0x2F8EF0u;
    // 0x2f8ef0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f8ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f8ef4:
    // 0x2f8ef4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2f8ef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f8ef8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f8ef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8efc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2f8efcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f8f00: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2f8f00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8f04: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2f8f04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f8f08: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2f8f08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f8f0c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2f8f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8f10: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8F10u;
        // 0x2f8f14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8F18u;
}
