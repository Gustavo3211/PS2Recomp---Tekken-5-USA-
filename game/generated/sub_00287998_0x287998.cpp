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

// Function: sub_00287998
// Address: 0x287998 - 0x287c38
void sub_00287998_0x287998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287998_0x287998");
#endif

    switch (ctx->pc) {
        case 0x287a70u: goto label_287a70;
        case 0x287a90u: goto label_287a90;
        case 0x287aa0u: goto label_287aa0;
        case 0x287aacu: goto label_287aac;
        case 0x287ac0u: goto label_287ac0;
        case 0x287ad0u: goto label_287ad0;
        case 0x287b1cu: goto label_287b1c;
        case 0x287b2cu: goto label_287b2c;
        case 0x287b3cu: goto label_287b3c;
        case 0x287b4cu: goto label_287b4c;
        case 0x287b60u: goto label_287b60;
        case 0x287bbcu: goto label_287bbc;
        case 0x287c18u: goto label_287c18;
        default: break;
    }

    ctx->pc = 0x287998u;

    // 0x287998: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x287998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28799c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x28799cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2879a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2879a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2879a4: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x2879a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2879a8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2879a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2879ac: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2879acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2879b0: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2879b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2879b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2879b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2879b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2879b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2879bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2879bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2879c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2879c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2879c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2879c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2879c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2879c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2879cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2879ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2879d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2879d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2879d4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2879d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2879d8: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2879d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2879dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2879DCu;
    {
        const bool branch_taken_0x2879dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2879E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879DCu;
        // 0x2879e0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879dc) {
            ctx->pc = 0x2879F8u;
            goto label_2879f8;
        }
    }
    ctx->pc = 0x2879E4u;
    // 0x2879e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2879e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2879e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2879e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2879ec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2879ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2879f0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2879f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2879f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2879f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2879f8:
    // 0x2879f8: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2879f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2879fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2879fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287a00: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x287a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x287a04: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x287a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x287a08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x287a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287a0c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x287a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x287a10: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x287a10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x287a14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x287a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x287a18: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x287a18u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x287a1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x287a1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287a20: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x287a20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x287a24: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x287a24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x287a28: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x287A28u;
    {
        const bool branch_taken_0x287a28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A28u;
        // 0x287a2c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a28) {
            ctx->pc = 0x287A48u;
            goto label_287a48;
        }
    }
    ctx->pc = 0x287A30u;
    // 0x287a30: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x287a30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x287a34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x287a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x287a38: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x287a38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x287a3c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x287a3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x287a40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x287a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x287a44: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x287a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_287a48:
    // 0x287a48: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x287a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x287a4c: 0x34426060  ori         $v0, $v0, 0x6060
    ctx->pc = 0x287a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24672);
    // 0x287a50: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x287a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x287a54: 0x248497f8  addiu       $a0, $a0, -0x6808
    ctx->pc = 0x287a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940664));
    // 0x287a58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x287a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a5c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x287a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x287a60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x287a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287a64: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x287a64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a68: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287A68u;
    SET_GPR_U32(ctx, 31, 0x287A70u);
    ctx->pc = 0x287A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A68u;
    // 0x287a6c: 0x629025  or          $s2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287A68u, 0x287A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A70u;
label_287a70:
    // 0x287a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287a74: 0x56020022  bnel        $s0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x287A74u;
    {
        const bool branch_taken_0x287a74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x287a74) {
            ctx->pc = 0x287A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287A74u;
            // 0x287a78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287B00u;
            goto label_287b00;
        }
    }
    ctx->pc = 0x287A7Cu;
    // 0x287a7c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x287a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x287a80: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x287a80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    // 0x287a84: 0x24843b98  addiu       $a0, $a0, 0x3B98
    ctx->pc = 0x287a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15256));
    // 0x287a88: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287A88u;
    SET_GPR_U32(ctx, 31, 0x287A90u);
    ctx->pc = 0x287A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A88u;
    // 0x287a8c: 0x26103ba0  addiu       $s0, $s0, 0x3BA0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287A88u, 0x287A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A90u;
label_287a90:
    // 0x287a90: 0x3c050009  lui         $a1, 0x9
    ctx->pc = 0x287a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9 << 16));
    // 0x287a94: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x287a94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x287a98: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287A98u;
    SET_GPR_U32(ctx, 31, 0x287AA0u);
    ctx->pc = 0x287A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A98u;
    // 0x287a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287A98u, 0x287AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287AA0u;
label_287aa0:
    // 0x287aa0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x287aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x287aa4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287AA4u;
    SET_GPR_U32(ctx, 31, 0x287AACu);
    ctx->pc = 0x287AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287AA4u;
    // 0x287aa8: 0x24843ba8  addiu       $a0, $a0, 0x3BA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287AA4u, 0x287AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287AACu;
label_287aac:
    // 0x287aac: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x287aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x287ab0: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x287ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x287ab4: 0x24843bb0  addiu       $a0, $a0, 0x3BB0
    ctx->pc = 0x287ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15280));
    // 0x287ab8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287AB8u;
    SET_GPR_U32(ctx, 31, 0x287AC0u);
    ctx->pc = 0x287ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287AB8u;
    // 0x287abc: 0x24a5ad88  addiu       $a1, $a1, -0x5278 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287AB8u, 0x287AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287AC0u;
label_287ac0:
    // 0x287ac0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x287ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x287ac4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x287ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ac8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287AC8u;
    SET_GPR_U32(ctx, 31, 0x287AD0u);
    ctx->pc = 0x287ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287AC8u;
    // 0x287acc: 0x24843bb8  addiu       $a0, $a0, 0x3BB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287AC8u, 0x287AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287AD0u;
label_287ad0:
    // 0x287ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ad4: 0x3c050009  lui         $a1, 0x9
    ctx->pc = 0x287ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9 << 16));
    // 0x287ad8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x287ad8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x287adc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x287adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287ae0: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x287ae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    // 0x287ae4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x287ae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287ae8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x287ae8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x287aec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x287aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287af0: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x287af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x287af4: 0x80b640e  j           func_2D9038
    ctx->pc = 0x287AF4u;
    ctx->pc = 0x287AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287AF4u;
    // 0x287af8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    sub_002D9038_0x2d9038(rdram, ctx, runtime); return;
    ctx->pc = 0x287AFCu;
    // 0x287afc: 0x0  nop
    ctx->pc = 0x287afcu;
    // NOP
label_287b00:
    // 0x287b00: 0x56020023  bnel        $s0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x287B00u;
    {
        const bool branch_taken_0x287b00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x287b00) {
            ctx->pc = 0x287B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287B00u;
            // 0x287b04: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287B90u;
            goto label_287b90;
        }
    }
    ctx->pc = 0x287B08u;
    // 0x287b08: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x287b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x287b0c: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x287b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    // 0x287b10: 0x24843b98  addiu       $a0, $a0, 0x3B98
    ctx->pc = 0x287b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15256));
    // 0x287b14: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287B14u;
    SET_GPR_U32(ctx, 31, 0x287B1Cu);
    ctx->pc = 0x287B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B14u;
    // 0x287b18: 0x26103ba0  addiu       $s0, $s0, 0x3BA0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287B14u, 0x287B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B1Cu;
label_287b1c:
    // 0x287b1c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x287b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x287b20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x287b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287b24: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287B24u;
    SET_GPR_U32(ctx, 31, 0x287B2Cu);
    ctx->pc = 0x287B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B24u;
    // 0x287b28: 0x24843bc0  addiu       $a0, $a0, 0x3BC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287B24u, 0x287B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B2Cu;
label_287b2c:
    // 0x287b2c: 0x3c050009  lui         $a1, 0x9
    ctx->pc = 0x287b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9 << 16));
    // 0x287b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287b34: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287B34u;
    SET_GPR_U32(ctx, 31, 0x287B3Cu);
    ctx->pc = 0x287B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B34u;
    // 0x287b38: 0x34a50006  ori         $a1, $a1, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287B34u, 0x287B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B3Cu;
label_287b3c:
    // 0x287b3c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x287b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x287b40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x287b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287b44: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287B44u;
    SET_GPR_U32(ctx, 31, 0x287B4Cu);
    ctx->pc = 0x287B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B44u;
    // 0x287b48: 0x24843bb8  addiu       $a0, $a0, 0x3BB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287B44u, 0x287B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B4Cu;
label_287b4c:
    // 0x287b4c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x287b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x287b50: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x287b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x287b54: 0x24843bc8  addiu       $a0, $a0, 0x3BC8
    ctx->pc = 0x287b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15304));
    // 0x287b58: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287B58u;
    SET_GPR_U32(ctx, 31, 0x287B60u);
    ctx->pc = 0x287B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B58u;
    // 0x287b5c: 0x24a5ad8c  addiu       $a1, $a1, -0x5274 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287B58u, 0x287B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B60u;
label_287b60:
    // 0x287b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287b64: 0x3c050009  lui         $a1, 0x9
    ctx->pc = 0x287b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9 << 16));
    // 0x287b68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x287b68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x287b6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x287b6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287b70: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x287b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    // 0x287b74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x287b74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287b78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x287b78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x287b7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x287b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287b80: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x287b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x287b84: 0x80b640e  j           func_2D9038
    ctx->pc = 0x287B84u;
    ctx->pc = 0x287B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B84u;
    // 0x287b88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    sub_002D9038_0x2d9038(rdram, ctx, runtime); return;
    ctx->pc = 0x287B8Cu;
    // 0x287b8c: 0x0  nop
    ctx->pc = 0x287b8cu;
    // NOP
label_287b90:
    // 0x287b90: 0x56020022  bnel        $s0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x287B90u;
    {
        const bool branch_taken_0x287b90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x287b90) {
            ctx->pc = 0x287B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287B90u;
            // 0x287b94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287C1Cu;
            goto label_287c1c;
        }
    }
    ctx->pc = 0x287B98u;
    // 0x287b98: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x287b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x287b9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x287ba0: 0x2843003d  slti        $v1, $v0, 0x3D
    ctx->pc = 0x287ba0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x287ba4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x287BA4u;
    {
        const bool branch_taken_0x287ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x287BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287BA4u;
        // 0x287ba8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ba4) {
            ctx->pc = 0x287BB0u;
            goto label_287bb0;
        }
    }
    ctx->pc = 0x287BACu;
    // 0x287bac: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x287bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_287bb0:
    // 0x287bb0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x287bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x287bb4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287BB4u;
    SET_GPR_U32(ctx, 31, 0x287BBCu);
    ctx->pc = 0x287BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287BB4u;
    // 0x287bb8: 0x24843b98  addiu       $a0, $a0, 0x3B98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287BB4u, 0x287BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287BBCu;
label_287bbc:
    // 0x287bbc: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x287bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x287bc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287bc4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x287bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x287bc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x287bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287bcc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x287bccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x287bd0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x287bd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287bd4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x287bd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x287bd8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x287bd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x287bdc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x287BDCu;
    {
        const bool branch_taken_0x287bdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287BDCu;
        // 0x287be0: 0x3c0500ff  lui         $a1, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287bdc) {
            ctx->pc = 0x287BF8u;
            goto label_287bf8;
        }
    }
    ctx->pc = 0x287BE4u;
    // 0x287be4: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x287be4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x287be8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x287be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x287bec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x287becu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x287bf0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x287bf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x287bf4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x287bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_287bf8:
    // 0x287bf8: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x287bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x287bfc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x287bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x287c00: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x287c00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x287c04: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x287c04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    // 0x287c08: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x287c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x287c0c: 0x24843bd0  addiu       $a0, $a0, 0x3BD0
    ctx->pc = 0x287c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15312));
    // 0x287c10: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x287C10u;
    SET_GPR_U32(ctx, 31, 0x287C18u);
    ctx->pc = 0x287C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C10u;
    // 0x287c14: 0x34c60028  ori         $a2, $a2, 0x28 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)40);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x287C10u, 0x287C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C18u;
label_287c18:
    // 0x287c18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x287c18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_287c1c:
    // 0x287c1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x287c1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x287c20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x287c20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287c24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x287c24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x287c28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x287c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287c2c: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x287c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x287c30: 0x3e00008  jr          $ra
    ctx->pc = 0x287C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C30u;
        // 0x287c34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287C38u;
}
