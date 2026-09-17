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

// Function: sub_00292800
// Address: 0x292800 - 0x292a90
void sub_00292800_0x292800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292800_0x292800");
#endif

    switch (ctx->pc) {
        case 0x292880u: goto label_292880;
        case 0x292894u: goto label_292894;
        case 0x2928bcu: goto label_2928bc;
        case 0x2928d0u: goto label_2928d0;
        case 0x292968u: goto label_292968;
        case 0x292970u: goto label_292970;
        case 0x292a38u: goto label_292a38;
        default: break;
    }

    ctx->pc = 0x292800u;

    // 0x292800: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x292800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x292804: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x292804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x292808: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x292808u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29280c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29280cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x292810: 0x26a40164  addiu       $a0, $s5, 0x164
    ctx->pc = 0x292810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 356));
    // 0x292814: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x292814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x292818: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x292818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29281c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x29281cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x292820: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x292820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x292824: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x292824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x292828: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x292828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x29282c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x29282cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x292830: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x292830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x292834: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x292834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x292838: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292838u;
    {
        const bool branch_taken_0x292838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292838u;
        // 0x29283c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292838) {
            ctx->pc = 0x292850u;
            goto label_292850;
        }
    }
    ctx->pc = 0x292840u;
    // 0x292840: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x292840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x292844: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x292844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x292848: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292848u;
    {
        const bool branch_taken_0x292848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x292848) {
            ctx->pc = 0x29284Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292848u;
            // 0x29284c: 0x8ea20130  lw          $v0, 0x130($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292860u;
            goto label_292860;
        }
    }
    ctx->pc = 0x292850u;
label_292850:
    // 0x292850: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x292850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x292854: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x292854u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292858: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x292858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x29285c: 0x8ea20130  lw          $v0, 0x130($s5)
    ctx->pc = 0x29285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 304)));
label_292860:
    // 0x292860: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x292860u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292864: 0x26be000c  addiu       $fp, $s5, 0xC
    ctx->pc = 0x292864u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x292868: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x292868u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29286c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x29286cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x292870: 0x3c134000  lui         $s3, 0x4000
    ctx->pc = 0x292870u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16384 << 16));
    // 0x292874: 0x36730400  ori         $s3, $s3, 0x400
    ctx->pc = 0x292874u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1024);
    // 0x292878: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x292878u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x29287c: 0x0  nop
    ctx->pc = 0x29287cu;
    // NOP
label_292880:
    // 0x292880: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x292880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x292884: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x292884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x292888: 0x54200b  movn        $a0, $v0, $s4
    ctx->pc = 0x292888u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x29288c: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x29288Cu;
    SET_GPR_U32(ctx, 31, 0x292894u);
    ctx->pc = 0x292890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29288Cu;
    // 0x292890: 0x149080  sll         $s2, $s4, 2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x29288Cu, 0x292894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292894u;
label_292894:
    // 0x292894: 0x240700f1  addiu       $a3, $zero, 0xF1
    ctx->pc = 0x292894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x292898: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x292898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29289c: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x29289cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x2928a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2928a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2928a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2928a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2928a8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2928a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2928ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2928acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2928b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2928b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2928b4: 0xc0c82b8  jal         func_320AE0
    ctx->pc = 0x2928B4u;
    SET_GPR_U32(ctx, 31, 0x2928BCu);
    ctx->pc = 0x2928B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2928B4u;
    // 0x2928b8: 0x24510050  addiu       $s1, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320AE0u, 0x2928B4u, 0x2928BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928BCu;
label_2928bc:
    // 0x2928bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2928bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2928c0: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x2928c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2928c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2928c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2928c8: 0xc0c8304  jal         func_320C10
    ctx->pc = 0x2928C8u;
    SET_GPR_U32(ctx, 31, 0x2928D0u);
    ctx->pc = 0x2928CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2928C8u;
    // 0x2928cc: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320C10u, 0x2928C8u, 0x2928D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928D0u;
label_2928d0:
    // 0x2928d0: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2928d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2928d4: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x2928d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x2928d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2928d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2928dc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2928DCu;
    {
        const bool branch_taken_0x2928dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2928E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2928DCu;
        // 0x2928e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2928dc) {
            ctx->pc = 0x2928F8u;
            goto label_2928f8;
        }
    }
    ctx->pc = 0x2928E4u;
    // 0x2928e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2928e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2928e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2928e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2928ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2928ECu;
    {
        const bool branch_taken_0x2928ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2928F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2928ECu;
        // 0x2928f0: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2928ec) {
            ctx->pc = 0x292910u;
            goto label_292910;
        }
    }
    ctx->pc = 0x2928F4u;
    // 0x2928f4: 0x0  nop
    ctx->pc = 0x2928f4u;
    // NOP
label_2928f8:
    // 0x2928f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2928f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2928fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2928fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x292900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292904: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x292904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x292908: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x292908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x29290c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x29290cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_292910:
    // 0x292910: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x292910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x292914: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x292914u;
    {
        const bool branch_taken_0x292914 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x292918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292914u;
        // 0x292918: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292914) {
            ctx->pc = 0x292930u;
            goto label_292930;
        }
    }
    ctx->pc = 0x29291Cu;
    // 0x29291c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29291cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292920: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x292920u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x292924: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x292924u;
    {
        const bool branch_taken_0x292924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292924u;
        // 0x292928: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x292924) {
            ctx->pc = 0x292950u;
            goto label_292950;
        }
    }
    ctx->pc = 0x29292Cu;
    // 0x29292c: 0x0  nop
    ctx->pc = 0x29292cu;
    // NOP
label_292930:
    // 0x292930: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x292930u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x292934: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x292934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x292938: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x292938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29293c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29293cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292940: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x292940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x292944: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x292944u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x292948: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x292948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x29294c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x29294cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_292950:
    // 0x292950: 0x246388d0  addiu       $v1, $v1, -0x7730
    ctx->pc = 0x292950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x292954: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x292954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x292958: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x292958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x29295c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29295cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x292960: 0xc0853bc  jal         func_214EF0
    ctx->pc = 0x292960u;
    SET_GPR_U32(ctx, 31, 0x292968u);
    ctx->pc = 0x292964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292960u;
    // 0x292964: 0x246583c0  addiu       $a1, $v1, -0x7C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214EF0u, 0x292960u, 0x292968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292968u;
label_292968:
    // 0x292968: 0xc086408  jal         func_219020
    ctx->pc = 0x292968u;
    SET_GPR_U32(ctx, 31, 0x292970u);
    ctx->pc = 0x29296Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292968u;
    // 0x29296c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219020u, 0x292968u, 0x292970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292970u;
label_292970:
    // 0x292970: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x292970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292974: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x292974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x292978: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x292978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29297c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x29297cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x292980: 0x24500050  addiu       $s0, $v0, 0x50
    ctx->pc = 0x292980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x292984: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x292984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x292988: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x292988u;
    {
        const bool branch_taken_0x292988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292988u;
        // 0x29298c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292988) {
            ctx->pc = 0x292A44u;
            goto label_292a44;
        }
    }
    ctx->pc = 0x292990u;
    // 0x292990: 0x1680000b  bnez        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x292990u;
    {
        const bool branch_taken_0x292990 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x292990) {
            ctx->pc = 0x2929C0u;
            goto label_2929c0;
        }
    }
    ctx->pc = 0x292998u;
    // 0x292998: 0x14970005  bne         $a0, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x292998u;
    {
        const bool branch_taken_0x292998 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 23));
        ctx->pc = 0x29299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292998u;
        // 0x29299c: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292998) {
            ctx->pc = 0x2929B0u;
            goto label_2929b0;
        }
    }
    ctx->pc = 0x2929A0u;
    // 0x2929a0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2929a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2929a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2929a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2929a8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2929A8u;
    {
        const bool branch_taken_0x2929a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2929ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929A8u;
        // 0x2929ac: 0x2445b148  addiu       $a1, $v0, -0x4EB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929a8) {
            ctx->pc = 0x292A30u;
            goto label_292a30;
        }
    }
    ctx->pc = 0x2929B0u;
label_2929b0:
    // 0x2929b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2929b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2929b4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2929B4u;
    {
        const bool branch_taken_0x2929b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2929B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929B4u;
        // 0x2929b8: 0x2465b128  addiu       $a1, $v1, -0x4ED8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929b4) {
            ctx->pc = 0x292A30u;
            goto label_292a30;
        }
    }
    ctx->pc = 0x2929BCu;
    // 0x2929bc: 0x0  nop
    ctx->pc = 0x2929bcu;
    // NOP
label_2929c0:
    // 0x2929c0: 0x10970015  beq         $a0, $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x2929C0u;
    {
        const bool branch_taken_0x2929c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 23));
        ctx->pc = 0x2929C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929C0u;
        // 0x2929c4: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929c0) {
            ctx->pc = 0x292A18u;
            goto label_292a18;
        }
    }
    ctx->pc = 0x2929C8u;
    // 0x2929c8: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2929C8u;
    {
        const bool branch_taken_0x2929c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2929CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929C8u;
        // 0x2929cc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929c8) {
            ctx->pc = 0x292A1Cu;
            goto label_292a1c;
        }
    }
    ctx->pc = 0x2929D0u;
    // 0x2929d0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2929D0u;
    {
        const bool branch_taken_0x2929d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2929D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929D0u;
        // 0x2929d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929d0) {
            ctx->pc = 0x292A18u;
            goto label_292a18;
        }
    }
    ctx->pc = 0x2929D8u;
    // 0x2929d8: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2929D8u;
    {
        const bool branch_taken_0x2929d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2929DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929D8u;
        // 0x2929dc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929d8) {
            ctx->pc = 0x292A18u;
            goto label_292a18;
        }
    }
    ctx->pc = 0x2929E0u;
    // 0x2929e0: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2929E0u;
    {
        const bool branch_taken_0x2929e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2929E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929E0u;
        // 0x2929e4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929e0) {
            ctx->pc = 0x292A18u;
            goto label_292a18;
        }
    }
    ctx->pc = 0x2929E8u;
    // 0x2929e8: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2929E8u;
    {
        const bool branch_taken_0x2929e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2929ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929E8u;
        // 0x2929ec: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929e8) {
            ctx->pc = 0x292A18u;
            goto label_292a18;
        }
    }
    ctx->pc = 0x2929F0u;
    // 0x2929f0: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2929F0u;
    {
        const bool branch_taken_0x2929f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2929F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929F0u;
        // 0x2929f4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929f0) {
            ctx->pc = 0x292A18u;
            goto label_292a18;
        }
    }
    ctx->pc = 0x2929F8u;
    // 0x2929f8: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2929F8u;
    {
        const bool branch_taken_0x2929f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2929FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929F8u;
        // 0x2929fc: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929f8) {
            ctx->pc = 0x292A18u;
            goto label_292a18;
        }
    }
    ctx->pc = 0x292A00u;
    // 0x292a00: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292A00u;
    {
        const bool branch_taken_0x292a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x292A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A00u;
        // 0x292a04: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a00) {
            ctx->pc = 0x292A18u;
            goto label_292a18;
        }
    }
    ctx->pc = 0x292A08u;
    // 0x292a08: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292A08u;
    {
        const bool branch_taken_0x292a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x292A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A08u;
        // 0x292a0c: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a08) {
            ctx->pc = 0x292A18u;
            goto label_292a18;
        }
    }
    ctx->pc = 0x292A10u;
    // 0x292a10: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292A10u;
    {
        const bool branch_taken_0x292a10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x292A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A10u;
        // 0x292a14: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a10) {
            ctx->pc = 0x292A28u;
            goto label_292a28;
        }
    }
    ctx->pc = 0x292A18u;
label_292a18:
    // 0x292a18: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x292a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_292a1c:
    // 0x292a1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x292a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x292A20u;
    {
        const bool branch_taken_0x292a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A20u;
        // 0x292a24: 0x2445b138  addiu       $a1, $v0, -0x4EC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a20) {
            ctx->pc = 0x292A30u;
            goto label_292a30;
        }
    }
    ctx->pc = 0x292A28u;
label_292a28:
    // 0x292a28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x292a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a2c: 0x2465b160  addiu       $a1, $v1, -0x4EA0
    ctx->pc = 0x292a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947168));
label_292a30:
    // 0x292a30: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x292A30u;
    SET_GPR_U32(ctx, 31, 0x292A38u);
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x292A30u, 0x292A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A38u;
label_292a38:
    // 0x292a38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x292a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a3c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x292a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x292a40: 0xac500078  sw          $s0, 0x78($v0)
    ctx->pc = 0x292a40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 16));
label_292a44:
    // 0x292a44: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x292a44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x292a48: 0x25e1021  addu        $v0, $s2, $fp
    ctx->pc = 0x292a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x292a4c: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x292a4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x292a50: 0xac450150  sw          $a1, 0x150($v0)
    ctx->pc = 0x292a50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 336), GPR_U32(ctx, 5));
    // 0x292a54: 0x1460ff8a  bnez        $v1, . + 4 + (-0x76 << 2)
    ctx->pc = 0x292A54u;
    {
        const bool branch_taken_0x292a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x292A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A54u;
        // 0x292a58: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a54) {
            ctx->pc = 0x292880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292880;
        }
    }
    ctx->pc = 0x292A5Cu;
    // 0x292a5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x292a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292a60: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x292a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x292a64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x292a64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292a68: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x292a68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x292a6c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x292a6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292a70: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x292a70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x292a74: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x292a74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292a78: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x292a78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x292a7c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x292a7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x292a80: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x292a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x292a84: 0x3e00008  jr          $ra
    ctx->pc = 0x292A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A84u;
        // 0x292a88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292A8Cu;
    // 0x292a8c: 0x0  nop
    ctx->pc = 0x292a8cu;
    // NOP
    ctx->pc = 0x292a90u;
}
