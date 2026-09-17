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

// Function: sub_00236A00
// Address: 0x236a00 - 0x236ab8
void sub_00236A00_0x236a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236A00_0x236a00");
#endif

    switch (ctx->pc) {
        case 0x236a60u: goto label_236a60;
        case 0x236a74u: goto label_236a74;
        case 0x236a7cu: goto label_236a7c;
        default: break;
    }

    ctx->pc = 0x236a00u;

    // 0x236a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x236a04: 0x24030097  addiu       $v1, $zero, 0x97
    ctx->pc = 0x236a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x236a08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x236a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x236a0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x236a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a10: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x236a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x236a14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x236a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x236a18: 0x96020166  lhu         $v0, 0x166($s0)
    ctx->pc = 0x236a18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x236a1c: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x236A1Cu;
    {
        const bool branch_taken_0x236a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x236A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A1Cu;
        // 0x236a20: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a1c) {
            ctx->pc = 0x236A68u;
            goto label_236a68;
        }
    }
    ctx->pc = 0x236A24u;
    // 0x236a24: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x236a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x236a28: 0x244323b0  addiu       $v1, $v0, 0x23B0
    ctx->pc = 0x236a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x236a2c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x236a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x236a30: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x236a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x236a34: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236A34u;
    {
        const bool branch_taken_0x236a34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x236A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A34u;
        // 0x236a38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a34) {
            ctx->pc = 0x236A48u;
            goto label_236a48;
        }
    }
    ctx->pc = 0x236A3Cu;
    // 0x236a3c: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x236a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x236a40: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x236A40u;
    {
        const bool branch_taken_0x236a40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x236a40) {
            ctx->pc = 0x236A4Cu;
            goto label_236a4c;
        }
    }
    ctx->pc = 0x236A48u;
label_236a48:
    // 0x236a48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x236a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236a4c:
    // 0x236a4c: 0x54a0000c  bnel        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x236A4Cu;
    {
        const bool branch_taken_0x236a4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x236a4c) {
            ctx->pc = 0x236A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236A4Cu;
            // 0x236a50: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x236A80u;
            goto label_236a80;
        }
    }
    ctx->pc = 0x236A54u;
    // 0x236a54: 0x86040012  lh          $a0, 0x12($s0)
    ctx->pc = 0x236a54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x236a58: 0xc0af9ee  jal         func_2BE7B8
    ctx->pc = 0x236A58u;
    SET_GPR_U32(ctx, 31, 0x236A60u);
    ctx->pc = 0x236A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A58u;
    // 0x236a5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE7B8u, 0x236A58u, 0x236A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A60u;
label_236a60:
    // 0x236a60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x236A60u;
    {
        const bool branch_taken_0x236a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A60u;
        // 0x236a64: 0xc441004c  lwc1        $f1, 0x4C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a60) {
            ctx->pc = 0x236A80u;
            goto label_236a80;
        }
    }
    ctx->pc = 0x236A68u;
label_236a68:
    // 0x236a68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x236a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236a6c: 0xc08da16  jal         func_236858
    ctx->pc = 0x236A6Cu;
    SET_GPR_U32(ctx, 31, 0x236A74u);
    ctx->pc = 0x236A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A6Cu;
    // 0x236a70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236858u, 0x236A6Cu, 0x236A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A74u;
label_236a74:
    // 0x236a74: 0xc08b634  jal         func_22D8D0
    ctx->pc = 0x236A74u;
    SET_GPR_U32(ctx, 31, 0x236A7Cu);
    ctx->pc = 0x236A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A74u;
    // 0x236a78: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8D0u, 0x236A74u, 0x236A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A7Cu;
label_236a7c:
    // 0x236a7c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x236a7cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_236a80:
    // 0x236a80: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x236a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x236a84: 0xc4402dc8  lwc1        $f0, 0x2DC8($v0)
    ctx->pc = 0x236a84u;
    { uint32_t bits = FAST_READ32(0x152DC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236a88: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x236a88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x236a8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x236A8Cu;
    {
        const bool branch_taken_0x236a8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x236A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A8Cu;
        // 0x236a90: 0x86020012  lh          $v0, 0x12($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a8c) {
            ctx->pc = 0x236A98u;
            goto label_236a98;
        }
    }
    ctx->pc = 0x236A94u;
    // 0x236a94: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x236a94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_236a98:
    // 0x236a98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x236a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236a9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x236a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x236aa0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x236aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236aa4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x236aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x236aa8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x236aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x236aac: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x236aacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x236ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x236AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236AB0u;
        // 0x236ab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236AB8u;
}
