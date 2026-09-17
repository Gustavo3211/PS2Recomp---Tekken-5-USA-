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

// Function: sub_002B2688
// Address: 0x2b2688 - 0x2b27a8
void sub_002B2688_0x2b2688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2688_0x2b2688");
#endif

    switch (ctx->pc) {
        case 0x2b2738u: goto label_2b2738;
        case 0x2b2744u: goto label_2b2744;
        case 0x2b277cu: goto label_2b277c;
        default: break;
    }

    ctx->pc = 0x2b2688u;

    // 0x2b2688: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b2688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b268c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b268cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b2690: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b2690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b2694: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b2694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b2698: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b2698u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b269c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b269cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b26a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b26a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b26a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b26a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b26a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b26a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b26ac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b26acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2b26b0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2b26b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b26b4: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b26b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b26b8: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x2b26b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2b26bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b26bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b26c0: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x2b26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2b26c4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2b26c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b26c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b26c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b26cc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b26ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b26d0: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x2b26d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b26d4: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2b26d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2b26d8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2b26d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2b26dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B26DCu;
    {
        const bool branch_taken_0x2b26dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26DCu;
        // 0x2b26e0: 0x86450002  lh          $a1, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26dc) {
            ctx->pc = 0x2B26E8u;
            goto label_2b26e8;
        }
    }
    ctx->pc = 0x2B26E4u;
    // 0x2b26e4: 0xae24005c  sw          $a0, 0x5C($s1)
    ctx->pc = 0x2b26e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 4));
label_2b26e8:
    // 0x2b26e8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2b26e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b26ec: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x2b26ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2b26f0: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2b26f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x2b26f4: 0x2694cde0  addiu       $s4, $s4, -0x3220
    ctx->pc = 0x2b26f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954464));
    // 0x2b26f8: 0x284a021  addu        $s4, $s4, $a0
    ctx->pc = 0x2b26f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2b26fc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2b26fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b2700: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b2700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b2704: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B2704u;
    {
        const bool branch_taken_0x2b2704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2704u;
        // 0x2b2708: 0x911021  addu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2704) {
            ctx->pc = 0x2B2728u;
            goto label_2b2728;
        }
    }
    ctx->pc = 0x2B270Cu;
    // 0x2b270c: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x2b270cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2b2710: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x2b2710u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x2b2714: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x2b2714u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b2718: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b2718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b271c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b271cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b2720: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2B2720u;
    {
        const bool branch_taken_0x2b2720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2720u;
        // 0x2b2724: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2720) {
            ctx->pc = 0x2B2780u;
            goto label_2b2780;
        }
    }
    ctx->pc = 0x2B2728u;
label_2b2728:
    // 0x2b2728: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b2728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b272c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b272cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b2730: 0xc0aa626  jal         func_2A9898
    ctx->pc = 0x2B2730u;
    SET_GPR_U32(ctx, 31, 0x2B2738u);
    ctx->pc = 0x2B2734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2730u;
    // 0x2b2734: 0x24530064  addiu       $s3, $v0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9898u, 0x2B2730u, 0x2B2738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2738u;
label_2b2738:
    // 0x2b2738: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b273c: 0xc0aa622  jal         func_2A9888
    ctx->pc = 0x2B273Cu;
    SET_GPR_U32(ctx, 31, 0x2B2744u);
    ctx->pc = 0x2B2740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B273Cu;
    // 0x2b2740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9888u, 0x2B273Cu, 0x2B2744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2744u;
label_2b2744:
    // 0x2b2744: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x2b2744u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x2b2748: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2b2748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2b274c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2b274cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2b2750: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b2750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2754: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b2754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b2758: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2b2758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b275c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2b275cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b2760: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x2b2760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2b2764: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b2764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b2768: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2768u;
    {
        const bool branch_taken_0x2b2768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2768u;
        // 0x2b276c: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2768) {
            ctx->pc = 0x2B2780u;
            goto label_2b2780;
        }
    }
    ctx->pc = 0x2B2770u;
    // 0x2b2770: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2b2770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2b2774: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2B2774u;
    SET_GPR_U32(ctx, 31, 0x2B277Cu);
    ctx->pc = 0x2B2778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2774u;
    // 0x2b2778: 0x24840148  addiu       $a0, $a0, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2B2774u, 0x2B277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B277Cu;
label_2b277c:
    // 0x2b277c: 0x0  nop
    ctx->pc = 0x2b277cu;
    // NOP
label_2b2780:
    // 0x2b2780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2784: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b2784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2788: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b2788u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b278c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b278cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2790: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b2790u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2794: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b2794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b2798: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2b2798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b279c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B279Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B27A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B279Cu;
        // 0x2b27a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B279Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B27A4u;
    // 0x2b27a4: 0x0  nop
    ctx->pc = 0x2b27a4u;
    // NOP
    ctx->pc = 0x2b27a8u;
}
