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

// Function: sub_002D5A08
// Address: 0x2d5a08 - 0x2d5b58
void sub_002D5A08_0x2d5a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5A08_0x2d5a08");
#endif

    switch (ctx->pc) {
        case 0x2d5ac4u: goto label_2d5ac4;
        case 0x2d5ad8u: goto label_2d5ad8;
        case 0x2d5b4cu: goto label_2d5b4c;
        default: break;
    }

    ctx->pc = 0x2d5a08u;

    // 0x2d5a08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d5a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d5a0c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2d5a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2d5a10: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d5a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d5a14: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x2d5a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x2d5a18: 0x2421df40  addiu       $at, $at, -0x20C0
    ctx->pc = 0x2d5a18u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294958912));
    // 0x2d5a1c: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x2d5a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x2d5a20: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2d5a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2d5a24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d5a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5a28: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2d5a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d5a2c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2d5a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d5a30: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2d5a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d5a34: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2d5a34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d5a38: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D5A38u;
    {
        const bool branch_taken_0x2d5a38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A38u;
        // 0x2d5a3c: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5a38) {
            ctx->pc = 0x2D5A58u;
            goto label_2d5a58;
        }
    }
    ctx->pc = 0x2D5A40u;
    // 0x2d5a40: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2d5a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5a44: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2d5a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5a48: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2d5a48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d5a4c: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x2d5a4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2d5a50: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2d5a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d5a54: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2d5a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2d5a58:
    // 0x2d5a58: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x2d5a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d5a5c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2d5a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d5a60: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2d5a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2d5a64: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2d5a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2d5a68: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2d5a68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d5a6c: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D5A6Cu;
    {
        const bool branch_taken_0x2d5a6c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A6Cu;
        // 0x2d5a70: 0xe7a30024  swc1        $f3, 0x24($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5a6c) {
            ctx->pc = 0x2D5A8Cu;
            goto label_2d5a8c;
        }
    }
    ctx->pc = 0x2D5A74u;
    // 0x2d5a74: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2d5a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5a78: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2d5a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5a7c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2d5a7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2d5a80: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2d5a80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2d5a84: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2d5a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d5a88: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2d5a88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2d5a8c:
    // 0x2d5a8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d5a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d5a90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d5a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5a94: 0x35030660  ori         $v1, $t0, 0x660
    ctx->pc = 0x2d5a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1632);
    // 0x2d5a98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d5a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a9c: 0x240400f6  addiu       $a0, $zero, 0xF6
    ctx->pc = 0x2d5a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x2d5aa0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d5aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d5aa4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2d5aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d5aa8: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2d5aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2d5aac: 0xe7ac003c  swc1        $f12, 0x3C($sp)
    ctx->pc = 0x2d5aacu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2d5ab0: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x2d5ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x2d5ab4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2d5ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x2d5ab8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2d5ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d5abc: 0xc0c8328  jal         func_320CA0
    ctx->pc = 0x2D5ABCu;
    SET_GPR_U32(ctx, 31, 0x2D5AC4u);
    ctx->pc = 0x2D5AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5ABCu;
    // 0x2d5ac0: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x320CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320CA0u, 0x2D5ABCu, 0x2D5AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5AC4u;
label_2d5ac4:
    // 0x2d5ac4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ac8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d5ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d5acc: 0x27a60054  addiu       $a2, $sp, 0x54
    ctx->pc = 0x2d5accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2d5ad0: 0xc0c8304  jal         func_320C10
    ctx->pc = 0x2D5AD0u;
    SET_GPR_U32(ctx, 31, 0x2D5AD8u);
    ctx->pc = 0x2D5AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5AD0u;
    // 0x2d5ad4: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320C10u, 0x2D5AD0u, 0x2D5AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5AD8u;
label_2d5ad8:
    // 0x2d5ad8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d5ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d5adc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D5ADCu;
    {
        const bool branch_taken_0x2d5adc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D5AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5ADCu;
        // 0x2d5ae0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5adc) {
            ctx->pc = 0x2D5AF8u;
            goto label_2d5af8;
        }
    }
    ctx->pc = 0x2D5AE4u;
    // 0x2d5ae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d5ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5ae8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d5ae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d5aec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D5AECu;
    {
        const bool branch_taken_0x2d5aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AECu;
        // 0x2d5af0: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5aec) {
            ctx->pc = 0x2D5B10u;
            goto label_2d5b10;
        }
    }
    ctx->pc = 0x2D5AF4u;
    // 0x2d5af4: 0x0  nop
    ctx->pc = 0x2d5af4u;
    // NOP
label_2d5af8:
    // 0x2d5af8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d5af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d5afc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d5afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d5b00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d5b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5b04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d5b04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d5b08: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d5b08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2d5b0c: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x2d5b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_2d5b10:
    // 0x2d5b10: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5B10u;
    {
        const bool branch_taken_0x2d5b10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D5B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B10u;
        // 0x2d5b14: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b10) {
            ctx->pc = 0x2D5B28u;
            goto label_2d5b28;
        }
    }
    ctx->pc = 0x2D5B18u;
    // 0x2d5b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d5b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5b1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d5b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d5b20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D5B20u;
    {
        const bool branch_taken_0x2d5b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B20u;
        // 0x2d5b24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b20) {
            ctx->pc = 0x2D5B44u;
            goto label_2d5b44;
        }
    }
    ctx->pc = 0x2D5B28u;
label_2d5b28:
    // 0x2d5b28: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2d5b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2d5b2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d5b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d5b30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d5b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d5b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d5b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5b38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d5b38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d5b3c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d5b3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2d5b40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d5b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d5b44:
    // 0x2d5b44: 0xc0c96de  jal         func_325B78
    ctx->pc = 0x2D5B44u;
    SET_GPR_U32(ctx, 31, 0x2D5B4Cu);
    ctx->pc = 0x2D5B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5B44u;
    // 0x2d5b48: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x325B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325B78u, 0x2D5B44u, 0x2D5B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5B4Cu;
label_2d5b4c:
    // 0x2d5b4c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d5b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d5b50: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B50u;
        // 0x2d5b54: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5B58u;
}
