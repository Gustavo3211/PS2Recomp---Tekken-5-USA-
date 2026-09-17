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

// Function: sub_00327A60
// Address: 0x327a60 - 0x327ba0
void sub_00327A60_0x327a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327A60_0x327a60");
#endif

    ctx->pc = 0x327a60u;

    // 0x327a60: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x327a60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x327a64: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x327a64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x327a68: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x327a68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x327a6c: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x327a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x327a70: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x327a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x327a74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x327a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327a78: 0x94c3000c  lhu         $v1, 0xC($a2)
    ctx->pc = 0x327a78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x327a7c: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x327a7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x327a80: 0x30460003  andi        $a2, $v0, 0x3
    ctx->pc = 0x327a80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x327a84: 0x10c4001a  beq         $a2, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x327A84u;
    {
        const bool branch_taken_0x327a84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x327A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A84u;
        // 0x327a88: 0x30673fff  andi        $a3, $v1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327a84) {
            ctx->pc = 0x327AF0u;
            goto label_327af0;
        }
    }
    ctx->pc = 0x327A8Cu;
    // 0x327a8c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x327a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x327a90: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x327A90u;
    {
        const bool branch_taken_0x327a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x327a90) {
            ctx->pc = 0x327A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327A90u;
            // 0x327a94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327AA8u;
            goto label_327aa8;
        }
    }
    ctx->pc = 0x327A98u;
    // 0x327a98: 0x50c00009  beql        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x327A98u;
    {
        const bool branch_taken_0x327a98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x327a98) {
            ctx->pc = 0x327A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327A98u;
            // 0x327a9c: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327AC0u;
            goto label_327ac0;
        }
    }
    ctx->pc = 0x327AA0u;
    // 0x327aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x327AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327AA8u;
label_327aa8:
    // 0x327aa8: 0x10c2001f  beq         $a2, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x327AA8u;
    {
        const bool branch_taken_0x327aa8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x327AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AA8u;
        // 0x327aac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327aa8) {
            ctx->pc = 0x327B28u;
            goto label_327b28;
        }
    }
    ctx->pc = 0x327AB0u;
    // 0x327ab0: 0x10c2002d  beq         $a2, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x327AB0u;
    {
        const bool branch_taken_0x327ab0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x327AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AB0u;
        // 0x327ab4: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ab0) {
            ctx->pc = 0x327B68u;
            goto label_327b68;
        }
    }
    ctx->pc = 0x327AB8u;
    // 0x327ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x327AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327AC0u;
label_327ac0:
    // 0x327ac0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x327ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x327ac4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x327ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x327ac8: 0x24630340  addiu       $v1, $v1, 0x340
    ctx->pc = 0x327ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 832));
    // 0x327acc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x327accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x327ad0: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x327ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x327ad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327ad8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x327ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x327adc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x327adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327ae0: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x327ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x327ae4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x327ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x327AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AE8u;
        // 0x327aec: 0xe4a10024  swc1        $f1, 0x24($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327AF0u;
label_327af0:
    // 0x327af0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x327af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x327af4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x327af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x327af8: 0x24840340  addiu       $a0, $a0, 0x340
    ctx->pc = 0x327af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 832));
    // 0x327afc: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x327afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x327b00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327b04: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x327b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x327b08: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x327b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327b0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x327b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x327b10: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x327b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x327b14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x327b14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x327b18: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x327b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x327b1c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x327b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327b20: 0x3e00008  jr          $ra
    ctx->pc = 0x327B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B20u;
        // 0x327b24: 0xe4a10024  swc1        $f1, 0x24($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327B28u;
label_327b28:
    // 0x327b28: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x327b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x327b2c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x327b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x327b30: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x327b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x327b34: 0x24630340  addiu       $v1, $v1, 0x340
    ctx->pc = 0x327b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 832));
    // 0x327b38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x327b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x327b3c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x327b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x327b40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327b44: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x327b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x327b48: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x327b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327b4c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x327b4cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x327b50: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x327b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x327b54: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x327b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327b58: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x327b58u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x327b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x327B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B5Cu;
        // 0x327b60: 0xe4a10024  swc1        $f1, 0x24($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327B64u;
    // 0x327b64: 0x0  nop
    ctx->pc = 0x327b64u;
    // NOP
label_327b68:
    // 0x327b68: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x327b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x327b6c: 0x24840340  addiu       $a0, $a0, 0x340
    ctx->pc = 0x327b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 832));
    // 0x327b70: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x327b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x327b74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327b78: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x327b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x327b7c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x327b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327b80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x327b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x327b84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x327b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x327b88: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x327b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x327b8c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x327b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327b90: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x327b90u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x327b94: 0x3e00008  jr          $ra
    ctx->pc = 0x327B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B94u;
        // 0x327b98: 0xe4a00024  swc1        $f0, 0x24($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327B9Cu;
    // 0x327b9c: 0x0  nop
    ctx->pc = 0x327b9cu;
    // NOP
    ctx->pc = 0x327ba0u;
}
