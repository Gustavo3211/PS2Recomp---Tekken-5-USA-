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

// Function: sub_001F6C18
// Address: 0x1f6c18 - 0x1f6dd0
void sub_001F6C18_0x1f6c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6C18_0x1f6c18");
#endif

    switch (ctx->pc) {
        case 0x1f6c68u: goto label_1f6c68;
        case 0x1f6cb8u: goto label_1f6cb8;
        case 0x1f6cc0u: goto label_1f6cc0;
        case 0x1f6cd0u: goto label_1f6cd0;
        case 0x1f6d34u: goto label_1f6d34;
        default: break;
    }

    ctx->pc = 0x1f6c18u;

    // 0x1f6c18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f6c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f6c1c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f6c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f6c20: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f6c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1f6c24: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x1f6c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f6c28: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f6c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f6c2c: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x1f6c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x1f6c30: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1f6c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1f6c34: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1f6c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1f6c38: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f6c38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c3c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1f6c3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1f6c40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f6c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c44: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1f6c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1f6c48: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1f6c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1f6c4c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1f6c4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f6c50: 0xc4d51fc8  lwc1        $f21, 0x1FC8($a2)
    ctx->pc = 0x1f6c50u;
    { uint32_t bits = FAST_READ32(0x151FC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f6c54: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f6c54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x1f6c58: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f6c58u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x1f6c5c: 0x24720750  addiu       $s2, $v1, 0x750
    ctx->pc = 0x1f6c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1872));
    // 0x1f6c60: 0xc091726  jal         func_245C98
    ctx->pc = 0x1F6C60u;
    SET_GPR_U32(ctx, 31, 0x1F6C68u);
    ctx->pc = 0x1F6C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6C60u;
    // 0x1f6c64: 0x24b00750  addiu       $s0, $a1, 0x750 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C98u, 0x1F6C60u, 0x1F6C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6C68u;
label_1f6c68:
    // 0x1f6c68: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f6c68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c6c: 0x5a60004f  blezl       $s3, . + 4 + (0x4F << 2)
    ctx->pc = 0x1F6C6Cu;
    {
        const bool branch_taken_0x1f6c6c = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x1f6c6c) {
            ctx->pc = 0x1F6C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6C6Cu;
            // 0x1f6c70: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6DACu;
            goto label_1f6dac;
        }
    }
    ctx->pc = 0x1F6C74u;
    // 0x1f6c74: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1f6c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6c78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f6c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c7c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1f6c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6c80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f6c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f6c84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f6c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f6c88: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f6c88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f6c8c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1f6c8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1f6c90: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1f6c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f6c94: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1f6c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6c98: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1f6c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6c9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f6c9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6ca0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1f6ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1f6ca4: 0x1a60002c  blez        $s3, . + 4 + (0x2C << 2)
    ctx->pc = 0x1F6CA4u;
    {
        const bool branch_taken_0x1f6ca4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1F6CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6CA4u;
        // 0x1f6ca8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ca4) {
            ctx->pc = 0x1F6D58u;
            goto label_1f6d58;
        }
    }
    ctx->pc = 0x1F6CACu;
    // 0x1f6cac: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x1f6cacu;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x1f6cb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f6cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6cb4: 0x0  nop
    ctx->pc = 0x1f6cb4u;
    // NOP
label_1f6cb8:
    // 0x1f6cb8: 0xc09175c  jal         func_245D70
    ctx->pc = 0x1F6CB8u;
    SET_GPR_U32(ctx, 31, 0x1F6CC0u);
    ctx->pc = 0x1F6CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6CB8u;
    // 0x1f6cbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245D70u, 0x1F6CB8u, 0x1F6CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6CC0u;
label_1f6cc0:
    // 0x1f6cc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f6cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6cc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f6cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6cc8: 0xc09175c  jal         func_245D70
    ctx->pc = 0x1F6CC8u;
    SET_GPR_U32(ctx, 31, 0x1F6CD0u);
    ctx->pc = 0x1F6CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6CC8u;
    // 0x1f6ccc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245D70u, 0x1F6CC8u, 0x1F6CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6CD0u;
label_1f6cd0:
    // 0x1f6cd0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1f6cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6cd4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f6cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6cd8: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1f6cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6cdc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f6cdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f6ce0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1f6ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f6ce4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1f6ce4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1f6ce8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1f6ce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1f6cec: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x1f6cecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1f6cf0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1f6cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6cf4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1f6cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6cf8: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x1f6cf8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1f6cfc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f6cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6d00: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1f6d00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1f6d04: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1f6d04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1f6d08: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1f6d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1f6d0c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1f6d0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1f6d10: 0x46026300  add.s       $f12, $f12, $f2
    ctx->pc = 0x1f6d10u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x1f6d14: 0x0  nop
    ctx->pc = 0x1f6d14u;
    // NOP
    // 0x1f6d18: 0x0  nop
    ctx->pc = 0x1f6d18u;
    // NOP
    // 0x1f6d1c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x1f6d1cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f6d20: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x1f6d20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6d24: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6D24u;
    {
        const bool branch_taken_0x1f6d24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6d24) {
            ctx->pc = 0x1F6D34u;
            goto label_1f6d34;
        }
    }
    ctx->pc = 0x1F6D2Cu;
    // 0x1f6d2c: 0xc04754c  jal         func_11D530
    ctx->pc = 0x1F6D2Cu;
    SET_GPR_U32(ctx, 31, 0x1F6D34u);
    ctx->pc = 0x11D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D530u, 0x1F6D2Cu, 0x1F6D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D34u;
label_1f6d34:
    // 0x1f6d34: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1f6d34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6d38: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6D38u;
    {
        const bool branch_taken_0x1f6d38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6d38) {
            ctx->pc = 0x1F6D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6D38u;
            // 0x1f6d3c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6D4Cu;
            goto label_1f6d4c;
        }
    }
    ctx->pc = 0x1F6D40u;
    // 0x1f6d40: 0xaf91c898  sw          $s1, -0x3768($gp)
    ctx->pc = 0x1f6d40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953112), GPR_U32(ctx, 17));
    // 0x1f6d44: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1f6d44u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1f6d48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f6d4c:
    // 0x1f6d4c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x1f6d4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1f6d50: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1F6D50u;
    {
        const bool branch_taken_0x1f6d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D50u;
        // 0x1f6d54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d50) {
            ctx->pc = 0x1F6CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6cb8;
        }
    }
    ctx->pc = 0x1F6D58u;
label_1f6d58:
    // 0x1f6d58: 0x12800013  beqz        $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F6D58u;
    {
        const bool branch_taken_0x1f6d58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D58u;
        // 0x1f6d5c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d58) {
            ctx->pc = 0x1F6DA8u;
            goto label_1f6da8;
        }
    }
    ctx->pc = 0x1F6D60u;
    // 0x1f6d60: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1f6d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f6d64: 0x8c448880  lw          $a0, -0x7780($v0)
    ctx->pc = 0x1f6d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x1f6d68: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6D68u;
    {
        const bool branch_taken_0x1f6d68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F6D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D68u;
        // 0x1f6d6c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d68) {
            ctx->pc = 0x1F6D88u;
            goto label_1f6d88;
        }
    }
    ctx->pc = 0x1F6D70u;
    // 0x1f6d70: 0x8f83c898  lw          $v1, -0x3768($gp)
    ctx->pc = 0x1f6d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953112)));
    // 0x1f6d74: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F6D74u;
    {
        const bool branch_taken_0x1f6d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f6d74) {
            ctx->pc = 0x1F6D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6D74u;
            // 0x1f6d78: 0xaf80c898  sw          $zero, -0x3768($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294953112), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6DA8u;
            goto label_1f6da8;
        }
    }
    ctx->pc = 0x1F6D7Cu;
    // 0x1f6d7c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F6D7Cu;
    {
        const bool branch_taken_0x1f6d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D7Cu;
        // 0x1f6d80: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d7c) {
            ctx->pc = 0x1F6DACu;
            goto label_1f6dac;
        }
    }
    ctx->pc = 0x1F6D84u;
    // 0x1f6d84: 0x0  nop
    ctx->pc = 0x1f6d84u;
    // NOP
label_1f6d88:
    // 0x1f6d88: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6D88u;
    {
        const bool branch_taken_0x1f6d88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F6D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D88u;
        // 0x1f6d8c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d88) {
            ctx->pc = 0x1F6DACu;
            goto label_1f6dac;
        }
    }
    ctx->pc = 0x1F6D90u;
    // 0x1f6d90: 0x8f83c898  lw          $v1, -0x3768($gp)
    ctx->pc = 0x1f6d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953112)));
    // 0x1f6d94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f6d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6d98: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6D98u;
    {
        const bool branch_taken_0x1f6d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F6D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D98u;
        // 0x1f6d9c: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d98) {
            ctx->pc = 0x1F6DB0u;
            goto label_1f6db0;
        }
    }
    ctx->pc = 0x1F6DA0u;
    // 0x1f6da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6da4: 0xaf82c898  sw          $v0, -0x3768($gp)
    ctx->pc = 0x1f6da4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953112), GPR_U32(ctx, 2));
label_1f6da8:
    // 0x1f6da8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f6da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f6dac:
    // 0x1f6dac: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1f6dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1f6db0:
    // 0x1f6db0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f6db0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6db4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1f6db4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6db8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1f6db8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f6dbc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1f6dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6dc0: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1f6dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f6dc4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1f6dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f6dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DC8u;
        // 0x1f6dcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6DD0u;
}
