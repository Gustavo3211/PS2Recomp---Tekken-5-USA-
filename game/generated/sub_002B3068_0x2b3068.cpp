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

// Function: sub_002B3068
// Address: 0x2b3068 - 0x2b31c0
void sub_002B3068_0x2b3068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3068_0x2b3068");
#endif

    switch (ctx->pc) {
        case 0x2b3150u: goto label_2b3150;
        case 0x2b315cu: goto label_2b315c;
        case 0x2b3194u: goto label_2b3194;
        default: break;
    }

    ctx->pc = 0x2b3068u;

    // 0x2b3068: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b3068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b306c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b306cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b3070: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b3070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b3074: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b3074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b3078: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b3078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b307c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b307cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3080: 0x2405f00f  addiu       $a1, $zero, -0xFF1
    ctx->pc = 0x2b3080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x2b3084: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b3084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b3088: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b3088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b308c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b308cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b3090: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b3090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2b3094: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2b3094u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b3098: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x2b3098u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2b309c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2b309cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b30a0: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x2b30a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b30a4: 0xc6420038  lwc1        $f2, 0x38($s2)
    ctx->pc = 0x2b30a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b30a8: 0x86460002  lh          $a2, 0x2($s2)
    ctx->pc = 0x2b30a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b30ac: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x2b30acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2b30b0: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2b30b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2b30b4: 0xe6220018  swc1        $f2, 0x18($s1)
    ctx->pc = 0x2b30b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2b30b8: 0xe623001c  swc1        $f3, 0x1C($s1)
    ctx->pc = 0x2b30b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x2b30bc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2b30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b30c0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2b30c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b30c4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2b30c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2b30c8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2b30c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b30cc: 0x30630ff0  andi        $v1, $v1, 0xFF0
    ctx->pc = 0x2b30ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4080);
    // 0x2b30d0: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x2b30d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2b30d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b30d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b30d8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2b30d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2b30dc: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b30dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b30e0: 0xc4b40000  lwc1        $f20, 0x0($a1)
    ctx->pc = 0x2b30e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b30e4: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2b30e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2b30e8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2b30e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2b30ec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b30ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b30f0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b30f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b30f4: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x2b30f4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b30f8: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B30F8u;
    {
        const bool branch_taken_0x2b30f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b30f8) {
            ctx->pc = 0x2B30FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B30F8u;
            // 0x2b30fc: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3100u;
            goto label_2b3100;
        }
    }
    ctx->pc = 0x2B3100u;
label_2b3100:
    // 0x2b3100: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2b3100u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2b3104: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2b3104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2b3108: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2b3108u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x2b310c: 0x2694ce50  addiu       $s4, $s4, -0x31B0
    ctx->pc = 0x2b310cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954576));
    // 0x2b3110: 0x284a021  addu        $s4, $s4, $a0
    ctx->pc = 0x2b3110u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2b3114: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2b3114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b3118: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b3118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b311c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B311Cu;
    {
        const bool branch_taken_0x2b311c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B311Cu;
        // 0x2b3120: 0x911021  addu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b311c) {
            ctx->pc = 0x2B3140u;
            goto label_2b3140;
        }
    }
    ctx->pc = 0x2B3124u;
    // 0x2b3124: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2b3124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2b3128: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x2b3128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x2b312c: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x2b312cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b3130: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b3130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3134: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b3134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b3138: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2B3138u;
    {
        const bool branch_taken_0x2b3138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3138u;
        // 0x2b313c: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3138) {
            ctx->pc = 0x2B3198u;
            goto label_2b3198;
        }
    }
    ctx->pc = 0x2B3140u;
label_2b3140:
    // 0x2b3140: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b3140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b3144: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b3144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b3148: 0xc0aa626  jal         func_2A9898
    ctx->pc = 0x2B3148u;
    SET_GPR_U32(ctx, 31, 0x2B3150u);
    ctx->pc = 0x2B314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3148u;
    // 0x2b314c: 0x2453003c  addiu       $s3, $v0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9898u, 0x2B3148u, 0x2B3150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3150u;
label_2b3150:
    // 0x2b3150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b3150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3154: 0xc0aa622  jal         func_2A9888
    ctx->pc = 0x2B3154u;
    SET_GPR_U32(ctx, 31, 0x2B315Cu);
    ctx->pc = 0x2B3158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3154u;
    // 0x2b3158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9888u, 0x2B3154u, 0x2B315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B315Cu;
label_2b315c:
    // 0x2b315c: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x2b315cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x2b3160: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2b3160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2b3164: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2b3164u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2b3168: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b3168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b316c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b316cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b3170: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2b3170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b3174: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2b3174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b3178: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2b3178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2b317c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b317cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b3180: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3180u;
    {
        const bool branch_taken_0x2b3180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3180u;
        // 0x2b3184: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3180) {
            ctx->pc = 0x2B3198u;
            goto label_2b3198;
        }
    }
    ctx->pc = 0x2B3188u;
    // 0x2b3188: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2b3188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2b318c: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2B318Cu;
    SET_GPR_U32(ctx, 31, 0x2B3194u);
    ctx->pc = 0x2B3190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B318Cu;
    // 0x2b3190: 0x248401c8  addiu       $a0, $a0, 0x1C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2B318Cu, 0x2B3194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3194u;
label_2b3194:
    // 0x2b3194: 0x0  nop
    ctx->pc = 0x2b3194u;
    // NOP
label_2b3198:
    // 0x2b3198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b319c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b319cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b31a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b31a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b31a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b31a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b31a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b31a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b31ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b31acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b31b0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2b31b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b31b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B31B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B31B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B31B4u;
        // 0x2b31b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B31B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B31BCu;
    // 0x2b31bc: 0x0  nop
    ctx->pc = 0x2b31bcu;
    // NOP
    ctx->pc = 0x2b31c0u;
}
