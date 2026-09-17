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

// Function: sub_00237A70
// Address: 0x237a70 - 0x237ca0
void sub_00237A70_0x237a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237A70_0x237a70");
#endif

    switch (ctx->pc) {
        case 0x237ad8u: goto label_237ad8;
        case 0x237b00u: goto label_237b00;
        case 0x237b38u: goto label_237b38;
        case 0x237b68u: goto label_237b68;
        case 0x237b94u: goto label_237b94;
        case 0x237bd8u: goto label_237bd8;
        case 0x237bf4u: goto label_237bf4;
        case 0x237c0cu: goto label_237c0c;
        case 0x237c24u: goto label_237c24;
        default: break;
    }

    ctx->pc = 0x237a70u;

    // 0x237a70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x237a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x237a74: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x237a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x237a78: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x237a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x237a7c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x237a7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a80: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x237a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x237a84: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x237a84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a88: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x237a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x237a8c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x237a8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a90: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x237a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x237a94: 0x24637c40  addiu       $v1, $v1, 0x7C40
    ctx->pc = 0x237a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31808));
    // 0x237a98: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x237a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x237a9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x237a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237aa0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x237aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x237aa4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x237aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x237aa8: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x237aa8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x237aac: 0xe7b40068  swc1        $f20, 0x68($sp)
    ctx->pc = 0x237aacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x237ab0: 0x96650166  lhu         $a1, 0x166($s3)
    ctx->pc = 0x237ab0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 358)));
    // 0x237ab4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x237ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x237ab8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x237ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x237abc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x237abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x237ac0: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x237ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x237ac4: 0x1a00006a  blez        $s0, . + 4 + (0x6A << 2)
    ctx->pc = 0x237AC4u;
    {
        const bool branch_taken_0x237ac4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x237AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AC4u;
        // 0x237ac8: 0x8cb10000  lw          $s1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ac4) {
            ctx->pc = 0x237C70u;
            goto label_237c70;
        }
    }
    ctx->pc = 0x237ACCu;
    // 0x237acc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x237accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x237ad0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x237ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ad4: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x237ad4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_237ad8:
    // 0x237ad8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x237ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x237adc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x237adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x237ae0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x237ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x237ae4: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x237ae4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x237ae8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x237ae8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237aec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x237aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x237af0: 0x1490fff9  bne         $a0, $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x237AF0u;
    {
        const bool branch_taken_0x237af0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x237AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AF0u;
        // 0x237af4: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237af0) {
            ctx->pc = 0x237AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237ad8;
        }
    }
    ctx->pc = 0x237AF8u;
    // 0x237af8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x237AF8u;
    SET_GPR_U32(ctx, 31, 0x237B00u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x237AF8u, 0x237B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B00u;
label_237b00:
    // 0x237b00: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x237b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x237b04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x237b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x237b08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237b0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x237b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x237b10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x237b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237b14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x237b14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x237b18: 0x12040011  beq         $s0, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x237B18u;
    {
        const bool branch_taken_0x237b18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x237B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B18u;
        // 0x237b1c: 0x46150042  mul.s       $f1, $f0, $f21 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b18) {
            ctx->pc = 0x237B60u;
            goto label_237b60;
        }
    }
    ctx->pc = 0x237B20u;
    // 0x237b20: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x237b20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x237b24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237b28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x237b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x237b2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x237B2Cu;
    {
        const bool branch_taken_0x237b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B2Cu;
        // 0x237b30: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b2c) {
            ctx->pc = 0x237B54u;
            goto label_237b54;
        }
    }
    ctx->pc = 0x237B34u;
    // 0x237b34: 0x0  nop
    ctx->pc = 0x237b34u;
    // NOP
label_237b38:
    // 0x237b38: 0x10900009  beq         $a0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x237B38u;
    {
        const bool branch_taken_0x237b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x237B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B38u;
        // 0x237b3c: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b38) {
            ctx->pc = 0x237B60u;
            goto label_237b60;
        }
    }
    ctx->pc = 0x237B40u;
    // 0x237b40: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x237b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x237b44: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x237b44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x237b48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x237b48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237b4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x237b4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x237b50: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x237b50u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_237b54:
    // 0x237b54: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x237b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237b58: 0x4502fff7  bc1fl       . + 4 + (-0x9 << 2)
    ctx->pc = 0x237B58u;
    {
        const bool branch_taken_0x237b58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x237b58) {
            ctx->pc = 0x237B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237B58u;
            // 0x237b5c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237b38;
        }
    }
    ctx->pc = 0x237B60u;
label_237b60:
    // 0x237b60: 0xc08b8a2  jal         func_22E288
    ctx->pc = 0x237B60u;
    SET_GPR_U32(ctx, 31, 0x237B68u);
    ctx->pc = 0x237B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B60u;
    // 0x237b64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E288u, 0x237B60u, 0x237B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B68u;
label_237b68:
    // 0x237b68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x237b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237b6c: 0x54600032  bnel        $v1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x237B6Cu;
    {
        const bool branch_taken_0x237b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x237b6c) {
            ctx->pc = 0x237B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237B6Cu;
            // 0x237b70: 0x926201bf  lbu         $v0, 0x1BF($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 447)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237C38u;
            goto label_237c38;
        }
    }
    ctx->pc = 0x237B74u;
    // 0x237b74: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x237b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x237b78: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x237b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x237b7c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x237b7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237b80: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x237b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x237b84: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x237B84u;
    {
        const bool branch_taken_0x237b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B84u;
        // 0x237b88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b84) {
            ctx->pc = 0x237C34u;
            goto label_237c34;
        }
    }
    ctx->pc = 0x237B8Cu;
    // 0x237b8c: 0xc08c1e6  jal         func_230798
    ctx->pc = 0x237B8Cu;
    SET_GPR_U32(ctx, 31, 0x237B94u);
    ctx->pc = 0x237B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B8Cu;
    // 0x237b90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230798u, 0x237B8Cu, 0x237B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B94u;
label_237b94:
    // 0x237b94: 0x86630012  lh          $v1, 0x12($s3)
    ctx->pc = 0x237b94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x237b98: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x237b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x237b9c: 0x86440012  lh          $a0, 0x12($s2)
    ctx->pc = 0x237b9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x237ba0: 0x2442dda0  addiu       $v0, $v0, -0x2260
    ctx->pc = 0x237ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958496));
    // 0x237ba4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x237ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x237ba8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237bac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x237bacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x237bb0: 0x78660010  lq          $a2, 0x10($v1)
    ctx->pc = 0x237bb0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x237bb4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x237bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x237bb8: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x237bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x237bbc: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x237bbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x237bc0: 0x7e460000  sq          $a2, 0x0($s2)
    ctx->pc = 0x237bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 6));
    // 0x237bc4: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x237bc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x237bc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x237bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237bcc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x237bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x237bd0: 0xc08b672  jal         func_22D9C8
    ctx->pc = 0x237BD0u;
    SET_GPR_U32(ctx, 31, 0x237BD8u);
    ctx->pc = 0x237BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237BD0u;
    // 0x237bd4: 0x7e820000  sq          $v0, 0x0($s4) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D9C8u, 0x237BD0u, 0x237BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237BD8u;
label_237bd8:
    // 0x237bd8: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x237bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x237bdc: 0xc4542dd4  lwc1        $f20, 0x2DD4($v0)
    ctx->pc = 0x237bdcu;
    { uint32_t bits = FAST_READ32(0x152DD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x237be0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x237be0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237be4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x237BE4u;
    {
        const bool branch_taken_0x237be4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x237BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BE4u;
        // 0x237be8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237be4) {
            ctx->pc = 0x237C30u;
            goto label_237c30;
        }
    }
    ctx->pc = 0x237BECu;
    // 0x237bec: 0xc08b672  jal         func_22D9C8
    ctx->pc = 0x237BECu;
    SET_GPR_U32(ctx, 31, 0x237BF4u);
    ctx->pc = 0x237BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237BECu;
    // 0x237bf0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D9C8u, 0x237BECu, 0x237BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237BF4u;
label_237bf4:
    // 0x237bf4: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x237bf4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237bf8: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x237BF8u;
    {
        const bool branch_taken_0x237bf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x237bf8) {
            ctx->pc = 0x237BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237BF8u;
            // 0x237bfc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237C34u;
            goto label_237c34;
        }
    }
    ctx->pc = 0x237C00u;
    // 0x237c00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x237c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c04: 0xc08b672  jal         func_22D9C8
    ctx->pc = 0x237C04u;
    SET_GPR_U32(ctx, 31, 0x237C0Cu);
    ctx->pc = 0x237C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C04u;
    // 0x237c08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D9C8u, 0x237C04u, 0x237C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C0Cu;
label_237c0c:
    // 0x237c0c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x237c0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237c10: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x237C10u;
    {
        const bool branch_taken_0x237c10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x237c10) {
            ctx->pc = 0x237C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237C10u;
            // 0x237c14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237C34u;
            goto label_237c34;
        }
    }
    ctx->pc = 0x237C18u;
    // 0x237c18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c1c: 0xc08b672  jal         func_22D9C8
    ctx->pc = 0x237C1Cu;
    SET_GPR_U32(ctx, 31, 0x237C24u);
    ctx->pc = 0x237C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C1Cu;
    // 0x237c20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D9C8u, 0x237C1Cu, 0x237C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C24u;
label_237c24:
    // 0x237c24: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x237c24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237c28: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x237C28u;
    {
        const bool branch_taken_0x237c28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x237c28) {
            ctx->pc = 0x237C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237C28u;
            // 0x237c2c: 0x926201bf  lbu         $v0, 0x1BF($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 447)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237C38u;
            goto label_237c38;
        }
    }
    ctx->pc = 0x237C30u;
label_237c30:
    // 0x237c30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x237c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237c34:
    // 0x237c34: 0x926201bf  lbu         $v0, 0x1BF($s3)
    ctx->pc = 0x237c34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 447)));
label_237c38:
    // 0x237c38: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x237C38u;
    {
        const bool branch_taken_0x237c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237c38) {
            ctx->pc = 0x237C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237C38u;
            // 0x237c3c: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237C60u;
            goto label_237c60;
        }
    }
    ctx->pc = 0x237C40u;
    // 0x237c40: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x237c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x237c44: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x237c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x237c48: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x237c48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237c4c: 0x3042fcff  andi        $v0, $v0, 0xFCFF
    ctx->pc = 0x237c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64767);
    // 0x237c50: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x237c50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x237c54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x237C54u;
    {
        const bool branch_taken_0x237c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C54u;
        // 0x237c58: 0x94620004  lhu         $v0, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c54) {
            ctx->pc = 0x237C70u;
            goto label_237c70;
        }
    }
    ctx->pc = 0x237C5Cu;
    // 0x237c5c: 0x0  nop
    ctx->pc = 0x237c5cu;
    // NOP
label_237c60:
    // 0x237c60: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x237c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x237c64: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x237c64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237c68: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x237c68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x237c6c: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x237c6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_237c70:
    // 0x237c70: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x237c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237c74: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x237c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x237c78: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x237c78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x237c7c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x237c7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x237c80: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x237c80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x237c84: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x237c84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x237c88: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x237c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x237c8c: 0xc7b50070  lwc1        $f21, 0x70($sp)
    ctx->pc = 0x237c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x237c90: 0xc7b40068  lwc1        $f20, 0x68($sp)
    ctx->pc = 0x237c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x237c94: 0x3e00008  jr          $ra
    ctx->pc = 0x237C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C94u;
        // 0x237c98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237C9Cu;
    // 0x237c9c: 0x0  nop
    ctx->pc = 0x237c9cu;
    // NOP
    ctx->pc = 0x237ca0u;
}
