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

// Function: sub_003049D0
// Address: 0x3049d0 - 0x304d40
void sub_003049D0_0x3049d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003049D0_0x3049d0");
#endif

    switch (ctx->pc) {
        case 0x304a90u: goto label_304a90;
        case 0x304aa8u: goto label_304aa8;
        case 0x304abcu: goto label_304abc;
        case 0x304ad8u: goto label_304ad8;
        case 0x304ae8u: goto label_304ae8;
        case 0x304b90u: goto label_304b90;
        case 0x304cdcu: goto label_304cdc;
        case 0x304d08u: goto label_304d08;
        case 0x304d10u: goto label_304d10;
        default: break;
    }

    ctx->pc = 0x3049d0u;

    // 0x3049d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3049d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3049d4: 0x2402006b  addiu       $v0, $zero, 0x6B
    ctx->pc = 0x3049d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x3049d8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3049d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3049dc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3049dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3049e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3049e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3049e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3049e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3049e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3049e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3049ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3049ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3049f0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3049f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3049f4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3049f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x3049f8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x3049f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x3049fc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x3049fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x304a00: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x304a00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x304a04: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x304a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x304a08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x304a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304a0c: 0x8e920894  lw          $s2, 0x894($s4)
    ctx->pc = 0x304a0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2196)));
    // 0x304a10: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x304a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x304a14: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x304a14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x304a18: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x304a18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x304a1c: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x304a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x304a20: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x304a20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x304a24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x304a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304a28: 0xc4540004  lwc1        $f20, 0x4($v0)
    ctx->pc = 0x304a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x304a2c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x304a2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x304a30: 0xe69406c0  swc1        $f20, 0x6C0($s4)
    ctx->pc = 0x304a30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1728), bits); }
    // 0x304a34: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x304a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x304a38: 0x9684003c  lhu         $a0, 0x3C($s4)
    ctx->pc = 0x304a38u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x304a3c: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x304A3Cu;
    {
        const bool branch_taken_0x304a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x304A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A3Cu;
        // 0x304a40: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a3c) {
            ctx->pc = 0x304A78u;
            goto label_304a78;
        }
    }
    ctx->pc = 0x304A44u;
    // 0x304a44: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x304a44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x304a48: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x304A48u;
    {
        const bool branch_taken_0x304a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304a48) {
            ctx->pc = 0x304A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304A48u;
            // 0x304a4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304A60u;
            goto label_304a60;
        }
    }
    ctx->pc = 0x304A50u;
    // 0x304a50: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x304A50u;
    {
        const bool branch_taken_0x304a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x304A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A50u;
        // 0x304a54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a50) {
            ctx->pc = 0x304A70u;
            goto label_304a70;
        }
    }
    ctx->pc = 0x304A58u;
    // 0x304a58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x304A58u;
    {
        const bool branch_taken_0x304a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304a58) {
            ctx->pc = 0x304A88u;
            goto label_304a88;
        }
    }
    ctx->pc = 0x304A60u;
label_304a60:
    // 0x304a60: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x304A60u;
    {
        const bool branch_taken_0x304a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x304A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A60u;
        // 0x304a64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a60) {
            ctx->pc = 0x304A80u;
            goto label_304a80;
        }
    }
    ctx->pc = 0x304A68u;
    // 0x304a68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x304A68u;
    {
        const bool branch_taken_0x304a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304a68) {
            ctx->pc = 0x304A88u;
            goto label_304a88;
        }
    }
    ctx->pc = 0x304A70u;
label_304a70:
    // 0x304a70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x304A70u;
    {
        const bool branch_taken_0x304a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A70u;
        // 0x304a74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a70) {
            ctx->pc = 0x304A84u;
            goto label_304a84;
        }
    }
    ctx->pc = 0x304A78u;
label_304a78:
    // 0x304a78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x304A78u;
    {
        const bool branch_taken_0x304a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A78u;
        // 0x304a7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a78) {
            ctx->pc = 0x304A84u;
            goto label_304a84;
        }
    }
    ctx->pc = 0x304A80u;
label_304a80:
    // 0x304a80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x304a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_304a84:
    // 0x304a84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x304a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_304a88:
    // 0x304a88: 0xc08812e  jal         func_2204B8
    ctx->pc = 0x304A88u;
    SET_GPR_U32(ctx, 31, 0x304A90u);
    ctx->pc = 0x304A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304A88u;
    // 0x304a8c: 0x2406006b  addiu       $a2, $zero, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2204B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2204B8u, 0x304A88u, 0x304A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304A90u;
label_304a90:
    // 0x304a90: 0x8e51001c  lw          $s1, 0x1C($s2)
    ctx->pc = 0x304a90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x304a94: 0x8e530034  lw          $s3, 0x34($s2)
    ctx->pc = 0x304a94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x304a98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x304a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304a9c: 0x8e550030  lw          $s5, 0x30($s2)
    ctx->pc = 0x304a9cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x304aa0: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x304aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x304aa4: 0x0  nop
    ctx->pc = 0x304aa4u;
    // NOP
label_304aa8:
    // 0x304aa8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x304aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x304aac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x304aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x304ab0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x304ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x304ab4: 0xc0849c0  jal         func_212700
    ctx->pc = 0x304AB4u;
    SET_GPR_U32(ctx, 31, 0x304ABCu);
    ctx->pc = 0x304AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304AB4u;
    // 0x304ab8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x304AB4u, 0x304ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304ABCu;
label_304abc:
    // 0x304abc: 0x2a02006b  slti        $v0, $s0, 0x6B
    ctx->pc = 0x304abcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)107) ? 1 : 0);
    // 0x304ac0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x304AC0u;
    {
        const bool branch_taken_0x304ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AC0u;
        // 0x304ac4: 0x1020c0  sll         $a0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ac0) {
            ctx->pc = 0x304AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304aa8;
        }
    }
    ctx->pc = 0x304AC8u;
    // 0x304ac8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x304ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304acc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x304accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304ad0: 0xc04a151  jal         func_128544
    ctx->pc = 0x304AD0u;
    SET_GPR_U32(ctx, 31, 0x304AD8u);
    ctx->pc = 0x304AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304AD0u;
    // 0x304ad4: 0x24060504  addiu       $a2, $zero, 0x504 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x304AD0u, 0x304AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AD8u;
label_304ad8:
    // 0x304ad8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x304ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304adc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x304adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304ae0: 0xc04a151  jal         func_128544
    ctx->pc = 0x304AE0u;
    SET_GPR_U32(ctx, 31, 0x304AE8u);
    ctx->pc = 0x304AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304AE0u;
    // 0x304ae4: 0x24060504  addiu       $a2, $zero, 0x504 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x304AE0u, 0x304AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AE8u;
label_304ae8:
    // 0x304ae8: 0x86840042  lh          $a0, 0x42($s4)
    ctx->pc = 0x304ae8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 66)));
    // 0x304aec: 0x26230240  addiu       $v1, $s1, 0x240
    ctx->pc = 0x304aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x304af0: 0x26250900  addiu       $a1, $s1, 0x900
    ctx->pc = 0x304af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2304));
    // 0x304af4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x304af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x304af8: 0xae230ce0  sw          $v1, 0xCE0($s1)
    ctx->pc = 0x304af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3296), GPR_U32(ctx, 3));
    // 0x304afc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x304afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x304b00: 0x26240b40  addiu       $a0, $s1, 0xB40
    ctx->pc = 0x304b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2880));
    // 0x304b04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x304b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x304b08: 0x26230990  addiu       $v1, $s1, 0x990
    ctx->pc = 0x304b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2448));
    // 0x304b0c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x304b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x304b10: 0x24212028  addiu       $at, $at, 0x2028
    ctx->pc = 0x304b10u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 8232));
    // 0x304b14: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x304b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x304b18: 0x26260bd0  addiu       $a2, $s1, 0xBD0
    ctx->pc = 0x304b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 3024));
    // 0x304b1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x304b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304b20: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x304b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x304b24: 0xe6600110  swc1        $f0, 0x110($s3)
    ctx->pc = 0x304b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 272), bits); }
    // 0x304b28: 0xe6200c98  swc1        $f0, 0xC98($s1)
    ctx->pc = 0x304b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3224), bits); }
    // 0x304b2c: 0xae250d70  sw          $a1, 0xD70($s1)
    ctx->pc = 0x304b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3440), GPR_U32(ctx, 5));
    // 0x304b30: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x304b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304b34: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x304b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x304b38: 0xe6600114  swc1        $f0, 0x114($s3)
    ctx->pc = 0x304b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x304b3c: 0xe6200d20  swc1        $f0, 0xD20($s1)
    ctx->pc = 0x304b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3360), bits); }
    // 0x304b40: 0xae230e00  sw          $v1, 0xE00($s1)
    ctx->pc = 0x304b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3584), GPR_U32(ctx, 3));
    // 0x304b44: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x304b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304b48: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x304b48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x304b4c: 0xe6600124  swc1        $f0, 0x124($s3)
    ctx->pc = 0x304b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 292), bits); }
    // 0x304b50: 0xe6200db4  swc1        $f0, 0xDB4($s1)
    ctx->pc = 0x304b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3508), bits); }
    // 0x304b54: 0xae240e90  sw          $a0, 0xE90($s1)
    ctx->pc = 0x304b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3728), GPR_U32(ctx, 4));
    // 0x304b58: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x304b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304b5c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x304b5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x304b60: 0xe660012c  swc1        $f0, 0x12C($s3)
    ctx->pc = 0x304b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 300), bits); }
    // 0x304b64: 0xe6200e40  swc1        $f0, 0xE40($s1)
    ctx->pc = 0x304b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3648), bits); }
    // 0x304b68: 0xae260f20  sw          $a2, 0xF20($s1)
    ctx->pc = 0x304b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3872), GPR_U32(ctx, 6));
    // 0x304b6c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x304b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304b70: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x304b70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x304b74: 0xe660013c  swc1        $f0, 0x13C($s3)
    ctx->pc = 0x304b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 316), bits); }
    // 0x304b78: 0xe6200ed4  swc1        $f0, 0xED4($s1)
    ctx->pc = 0x304b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3796), bits); }
    // 0x304b7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x304b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304b80: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x304b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x304b84: 0x24561e68  addiu       $s6, $v0, 0x1E68
    ctx->pc = 0x304b84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 7784));
    // 0x304b88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x304b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304b8c: 0x0  nop
    ctx->pc = 0x304b8cu;
    // NOP
label_304b90:
    // 0x304b90: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x304b90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x304b94: 0xb61021  addu        $v0, $a1, $s6
    ctx->pc = 0x304b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x304b98: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x304b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x304b9c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x304b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x304ba0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x304ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x304ba4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x304ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x304ba8: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x304ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x304bac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x304bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x304bb0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x304bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304bb4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x304bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x304bb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x304bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x304bbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x304bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x304bc0: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x304bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x304bc4: 0x535021  addu        $t2, $v0, $s3
    ctx->pc = 0x304bc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x304bc8: 0x555821  addu        $t3, $v0, $s5
    ctx->pc = 0x304bc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x304bcc: 0x4c00043  bltz        $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x304BCCu;
    {
        const bool branch_taken_0x304bcc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x304BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BCCu;
        // 0x304bd0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304bcc) {
            ctx->pc = 0x304CDCu;
            goto label_304cdc;
        }
    }
    ctx->pc = 0x304BD4u;
    // 0x304bd4: 0x480000a  bltz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x304BD4u;
    {
        const bool branch_taken_0x304bd4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x304BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BD4u;
        // 0x304bd8: 0x640c0  sll         $t0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304bd4) {
            ctx->pc = 0x304C00u;
            goto label_304c00;
        }
    }
    ctx->pc = 0x304BDCu;
    // 0x304bdc: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x304bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x304be0: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x304be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x304be4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x304be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x304be8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x304be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x304bec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x304becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x304bf0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x304bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x304bf4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x304bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x304bf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x304BF8u;
    {
        const bool branch_taken_0x304bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BF8u;
        // 0x304bfc: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304bf8) {
            ctx->pc = 0x304C14u;
            goto label_304c14;
        }
    }
    ctx->pc = 0x304C00u;
label_304c00:
    // 0x304c00: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x304c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x304c04: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x304c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x304c08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x304c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x304c0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x304c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x304c10: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x304c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
label_304c14:
    // 0x304c14: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x304c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304c18: 0x103840  sll         $a3, $s0, 1
    ctx->pc = 0x304c18u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x304c1c: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x304c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x304c20: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x304c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x304c24: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x304c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x304c28: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x304c28u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x304c2c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x304c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x304c30: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x304c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x304c34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x304c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x304c38: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x304c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x304c3c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x304c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x304c40: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x304c40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x304c44: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x304c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304c48: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x304c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x304c4c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x304c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x304c50: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x304c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x304c54: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x304c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x304c58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x304c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304c5c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x304c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x304c60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x304c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x304c64: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x304c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x304c68: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x304c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304c6c: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x304c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x304c70: 0xe4c00034  swc1        $f0, 0x34($a2)
    ctx->pc = 0x304c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x304c74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x304c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304c78: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x304c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x304c7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x304c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x304c80: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x304c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x304c84: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x304c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304c88: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x304c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x304c8c: 0xe4c00038  swc1        $f0, 0x38($a2)
    ctx->pc = 0x304c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x304c90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x304c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304c94: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x304c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x304c98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x304c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x304c9c: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x304c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x304ca0: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x304ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304ca4: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x304ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x304ca8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x304ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304cac: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x304cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x304cb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x304cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x304cb4: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x304cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x304cb8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x304cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304cbc: 0xe5600004  swc1        $f0, 0x4($t3)
    ctx->pc = 0x304cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x304cc0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x304cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304cc4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x304cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x304cc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x304cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x304ccc: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x304cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x304cd0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x304cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304cd4: 0xc0a0830  jal         func_2820C0
    ctx->pc = 0x304CD4u;
    SET_GPR_U32(ctx, 31, 0x304CDCu);
    ctx->pc = 0x304CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304CD4u;
    // 0x304cd8: 0xe5600008  swc1        $f0, 0x8($t3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2820C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2820C0u, 0x304CD4u, 0x304CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304CDCu;
label_304cdc:
    // 0x304cdc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x304cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x304ce0: 0x2a02006f  slti        $v0, $s0, 0x6F
    ctx->pc = 0x304ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)111) ? 1 : 0);
    // 0x304ce4: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x304CE4u;
    {
        const bool branch_taken_0x304ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304CE4u;
        // 0x304ce8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ce4) {
            ctx->pc = 0x304B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304b90;
        }
    }
    ctx->pc = 0x304CECu;
    // 0x304cec: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x304cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x304cf0: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x304cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x304cf4: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x304cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x304cf8: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x304cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x304cfc: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x304cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x304d00: 0xc0849c0  jal         func_212700
    ctx->pc = 0x304D00u;
    SET_GPR_U32(ctx, 31, 0x304D08u);
    ctx->pc = 0x304D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304D00u;
    // 0x304d04: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x304D00u, 0x304D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D08u;
label_304d08:
    // 0x304d08: 0xc0990e8  jal         func_2643A0
    ctx->pc = 0x304D08u;
    SET_GPR_U32(ctx, 31, 0x304D10u);
    ctx->pc = 0x304D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304D08u;
    // 0x304d0c: 0x8684003e  lh          $a0, 0x3E($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 62)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2643A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2643A0u, 0x304D08u, 0x304D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D10u;
label_304d10:
    // 0x304d10: 0xa682003e  sh          $v0, 0x3E($s4)
    ctx->pc = 0x304d10u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x304d14: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x304d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304d18: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x304d18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304d1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x304d1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304d20: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x304d20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304d24: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x304d24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x304d28: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x304d28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x304d2c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x304d2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x304d30: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x304d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x304d34: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x304d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x304d38: 0x3e00008  jr          $ra
    ctx->pc = 0x304D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D38u;
        // 0x304d3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304D40u;
}
