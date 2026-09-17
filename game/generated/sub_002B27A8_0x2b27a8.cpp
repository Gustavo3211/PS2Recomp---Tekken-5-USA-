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

// Function: sub_002B27A8
// Address: 0x2b27a8 - 0x2b28c8
void sub_002B27A8_0x2b27a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B27A8_0x2b27a8");
#endif

    switch (ctx->pc) {
        case 0x2b2858u: goto label_2b2858;
        case 0x2b2864u: goto label_2b2864;
        case 0x2b289cu: goto label_2b289c;
        default: break;
    }

    ctx->pc = 0x2b27a8u;

    // 0x2b27a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b27a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b27ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b27acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b27b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b27b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b27b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b27b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b27b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b27b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b27bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b27bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b27c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b27c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b27c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b27c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b27c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b27c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b27cc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b27ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2b27d0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2b27d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b27d4: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b27d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b27d8: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x2b27d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2b27dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b27dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b27e0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2b27e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2b27e4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2b27e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b27e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b27e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b27ec: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b27ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b27f0: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x2b27f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b27f4: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2b27f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2b27f8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2b27f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2b27fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B27FCu;
    {
        const bool branch_taken_0x2b27fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27FCu;
        // 0x2b2800: 0x86450002  lh          $a1, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b27fc) {
            ctx->pc = 0x2B2808u;
            goto label_2b2808;
        }
    }
    ctx->pc = 0x2B2804u;
    // 0x2b2804: 0xae240034  sw          $a0, 0x34($s1)
    ctx->pc = 0x2b2804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 4));
label_2b2808:
    // 0x2b2808: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2b2808u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b280c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2b280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2b2810: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2b2810u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x2b2814: 0x2694ce50  addiu       $s4, $s4, -0x31B0
    ctx->pc = 0x2b2814u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954576));
    // 0x2b2818: 0x284a021  addu        $s4, $s4, $a0
    ctx->pc = 0x2b2818u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2b281c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2b281cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b2820: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b2820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b2824: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B2824u;
    {
        const bool branch_taken_0x2b2824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2824u;
        // 0x2b2828: 0x911021  addu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2824) {
            ctx->pc = 0x2B2848u;
            goto label_2b2848;
        }
    }
    ctx->pc = 0x2B282Cu;
    // 0x2b282c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2b282cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2b2830: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x2b2830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x2b2834: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x2b2834u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b2838: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b2838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b283c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b283cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b2840: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2B2840u;
    {
        const bool branch_taken_0x2b2840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2840u;
        // 0x2b2844: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2840) {
            ctx->pc = 0x2B28A0u;
            goto label_2b28a0;
        }
    }
    ctx->pc = 0x2B2848u;
label_2b2848:
    // 0x2b2848: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b2848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b284c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b284cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b2850: 0xc0aa626  jal         func_2A9898
    ctx->pc = 0x2B2850u;
    SET_GPR_U32(ctx, 31, 0x2B2858u);
    ctx->pc = 0x2B2854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2850u;
    // 0x2b2854: 0x2453003c  addiu       $s3, $v0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9898u, 0x2B2850u, 0x2B2858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2858u;
label_2b2858:
    // 0x2b2858: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b285c: 0xc0aa622  jal         func_2A9888
    ctx->pc = 0x2B285Cu;
    SET_GPR_U32(ctx, 31, 0x2B2864u);
    ctx->pc = 0x2B2860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B285Cu;
    // 0x2b2860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9888u, 0x2B285Cu, 0x2B2864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2864u;
label_2b2864:
    // 0x2b2864: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x2b2864u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x2b2868: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2b2868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2b286c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2b286cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2b2870: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b2870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2874: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b2874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b2878: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2b2878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b287c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2b287cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b2880: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2b2880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2b2884: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b2884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b2888: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2888u;
    {
        const bool branch_taken_0x2b2888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2888u;
        // 0x2b288c: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2888) {
            ctx->pc = 0x2B28A0u;
            goto label_2b28a0;
        }
    }
    ctx->pc = 0x2B2890u;
    // 0x2b2890: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2b2890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2b2894: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2B2894u;
    SET_GPR_U32(ctx, 31, 0x2B289Cu);
    ctx->pc = 0x2B2898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2894u;
    // 0x2b2898: 0x24840158  addiu       $a0, $a0, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2B2894u, 0x2B289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B289Cu;
label_2b289c:
    // 0x2b289c: 0x0  nop
    ctx->pc = 0x2b289cu;
    // NOP
label_2b28a0:
    // 0x2b28a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b28a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b28a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b28a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b28a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b28a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b28ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b28acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b28b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b28b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b28b4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b28b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b28b8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2b28b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b28bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B28BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B28C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28BCu;
        // 0x2b28c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B28BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B28C4u;
    // 0x2b28c4: 0x0  nop
    ctx->pc = 0x2b28c4u;
    // NOP
    ctx->pc = 0x2b28c8u;
}
