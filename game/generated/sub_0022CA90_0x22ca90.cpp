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

// Function: sub_0022CA90
// Address: 0x22ca90 - 0x22cd08
void sub_0022CA90_0x22ca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CA90_0x22ca90");
#endif

    switch (ctx->pc) {
        case 0x22caf8u: goto label_22caf8;
        case 0x22cb08u: goto label_22cb08;
        case 0x22cb24u: goto label_22cb24;
        case 0x22cb34u: goto label_22cb34;
        case 0x22cb3cu: goto label_22cb3c;
        case 0x22cb60u: goto label_22cb60;
        case 0x22cbfcu: goto label_22cbfc;
        case 0x22cc7cu: goto label_22cc7c;
        case 0x22cc9cu: goto label_22cc9c;
        case 0x22ccb0u: goto label_22ccb0;
        default: break;
    }

    ctx->pc = 0x22ca90u;

    // 0x22ca90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22ca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22ca94: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22ca98: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x22ca98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x22ca9c: 0x244323b0  addiu       $v1, $v0, 0x23B0
    ctx->pc = 0x22ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x22caa0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x22caa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x22caa4: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x22caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x22caa8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x22caa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x22caac: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x22caacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x22cab0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x22cab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22cab4: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x22cab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x22cab8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x22cab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x22cabc: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x22cabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x22cac0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22cac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22cac4: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x22cac4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x22cac8: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x22cac8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x22cacc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x22caccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x22cad0: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22CAD0u;
    {
        const bool branch_taken_0x22cad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAD0u;
        // 0x22cad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cad0) {
            ctx->pc = 0x22CAE4u;
            goto label_22cae4;
        }
    }
    ctx->pc = 0x22CAD8u;
    // 0x22cad8: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x22cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x22cadc: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22CADCu;
    {
        const bool branch_taken_0x22cadc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x22cadc) {
            ctx->pc = 0x22CAE8u;
            goto label_22cae8;
        }
    }
    ctx->pc = 0x22CAE4u;
label_22cae4:
    // 0x22cae4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22cae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22cae8:
    // 0x22cae8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22CAE8u;
    {
        const bool branch_taken_0x22cae8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cae8) {
            ctx->pc = 0x22CB00u;
            goto label_22cb00;
        }
    }
    ctx->pc = 0x22CAF0u;
    // 0x22caf0: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x22CAF0u;
    SET_GPR_U32(ctx, 31, 0x22CAF8u);
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x22CAF0u, 0x22CAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CAF8u;
label_22caf8:
    // 0x22caf8: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x22CAF8u;
    {
        const bool branch_taken_0x22caf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAF8u;
        // 0x22cafc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22caf8) {
            ctx->pc = 0x22CCD4u;
            goto label_22ccd4;
        }
    }
    ctx->pc = 0x22CB00u;
label_22cb00:
    // 0x22cb00: 0xc08afec  jal         func_22BFB0
    ctx->pc = 0x22CB00u;
    SET_GPR_U32(ctx, 31, 0x22CB08u);
    ctx->pc = 0x22CB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB00u;
    // 0x22cb04: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFB0u, 0x22CB00u, 0x22CB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB08u;
label_22cb08:
    // 0x22cb08: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x22CB08u;
    {
        const bool branch_taken_0x22cb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB08u;
        // 0x22cb0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cb08) {
            ctx->pc = 0x22CCD0u;
            goto label_22ccd0;
        }
    }
    ctx->pc = 0x22CB10u;
    // 0x22cb10: 0x3c170016  lui         $s7, 0x16
    ctx->pc = 0x22cb10u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)22 << 16));
    // 0x22cb14: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x22cb14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x22cb18: 0x26f09290  addiu       $s0, $s7, -0x6D70
    ctx->pc = 0x22cb18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294939280));
    // 0x22cb1c: 0xc08b240  jal         func_22C900
    ctx->pc = 0x22CB1Cu;
    SET_GPR_U32(ctx, 31, 0x22CB24u);
    ctx->pc = 0x22CB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB1Cu;
    // 0x22cb20: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C900u, 0x22CB1Cu, 0x22CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB24u;
label_22cb24:
    // 0x22cb24: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x22cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x22cb28: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x22cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x22cb2c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22CB2Cu;
    SET_GPR_U32(ctx, 31, 0x22CB34u);
    ctx->pc = 0x22CB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB2Cu;
    // 0x22cb30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22CB2Cu, 0x22CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB34u;
label_22cb34:
    // 0x22cb34: 0xc0b778c  jal         func_2DDE30
    ctx->pc = 0x22CB34u;
    SET_GPR_U32(ctx, 31, 0x22CB3Cu);
    ctx->pc = 0x22CB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB34u;
    // 0x22cb38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDE30u, 0x22CB34u, 0x22CB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB3Cu;
label_22cb3c:
    // 0x22cb3c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x22cb3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cb40: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x22cb40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22cb44: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x22cb44u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x22cb48: 0x1a40005d  blez        $s2, . + 4 + (0x5D << 2)
    ctx->pc = 0x22CB48u;
    {
        const bool branch_taken_0x22cb48 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x22CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB48u;
        // 0x22cb4c: 0xa7a00028  sh          $zero, 0x28($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cb48) {
            ctx->pc = 0x22CCC0u;
            goto label_22ccc0;
        }
    }
    ctx->pc = 0x22CB50u;
    // 0x22cb50: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x22cb50u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x22cb54: 0xc79484b4  lwc1        $f20, -0x7B4C($gp)
    ctx->pc = 0x22cb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22cb58: 0x26b688d0  addiu       $s6, $s5, -0x7730
    ctx->pc = 0x22cb58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936784));
    // 0x22cb5c: 0x2794c170  addiu       $s4, $gp, -0x3E90
    ctx->pc = 0x22cb5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
label_22cb60:
    // 0x22cb60: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x22cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cb64: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22cb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22cb68: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x22cb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cb6c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x22cb6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22cb70: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x22cb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cb74: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x22cb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22cb78: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x22cb78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x22cb7c: 0x2a020064  slti        $v0, $s0, 0x64
    ctx->pc = 0x22cb7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x22cb80: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x22CB80u;
    {
        const bool branch_taken_0x22cb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB80u;
        // 0x22cb84: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cb80) {
            ctx->pc = 0x22CC08u;
            goto label_22cc08;
        }
    }
    ctx->pc = 0x22CB88u;
    // 0x22cb88: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x22cb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cb8c: 0x2602ffdc  addiu       $v0, $s0, -0x24
    ctx->pc = 0x22cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967260));
    // 0x22cb90: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22cb90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22cb94: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x22cb94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x22cb98: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x22cb98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x22cb9c: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x22cb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cba0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x22cba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x22cba4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x22cba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x22cba8: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x22cba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cbac: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x22cbacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x22cbb0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22CBB0u;
    {
        const bool branch_taken_0x22cbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBB0u;
        // 0x22cbb4: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cbb0) {
            ctx->pc = 0x22CBDCu;
            goto label_22cbdc;
        }
    }
    ctx->pc = 0x22CBB8u;
    // 0x22cbb8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x22cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x22cbbc: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22CBBCu;
    {
        const bool branch_taken_0x22cbbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBBCu;
        // 0x22cbc0: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cbbc) {
            ctx->pc = 0x22CBDCu;
            goto label_22cbdc;
        }
    }
    ctx->pc = 0x22CBC4u;
    // 0x22cbc4: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22CBC4u;
    {
        const bool branch_taken_0x22cbc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBC4u;
        // 0x22cbc8: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cbc4) {
            ctx->pc = 0x22CBDCu;
            goto label_22cbdc;
        }
    }
    ctx->pc = 0x22CBCCu;
    // 0x22cbcc: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22CBCCu;
    {
        const bool branch_taken_0x22cbcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBCCu;
        // 0x22cbd0: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cbcc) {
            ctx->pc = 0x22CBDCu;
            goto label_22cbdc;
        }
    }
    ctx->pc = 0x22CBD4u;
    // 0x22cbd4: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22CBD4u;
    {
        const bool branch_taken_0x22cbd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x22CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBD4u;
        // 0x22cbd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cbd4) {
            ctx->pc = 0x22CBF0u;
            goto label_22cbf0;
        }
    }
    ctx->pc = 0x22CBDCu;
label_22cbdc:
    // 0x22cbdc: 0xc780a508  lwc1        $f0, -0x5AF8($gp)
    ctx->pc = 0x22cbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294944008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cbe0: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x22cbe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22cbe4: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x22CBE4u;
    {
        const bool branch_taken_0x22cbe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22cbe4) {
            ctx->pc = 0x22CBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CBE4u;
            // 0x22cbe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CBF0u;
            goto label_22cbf0;
        }
    }
    ctx->pc = 0x22CBECu;
    // 0x22cbec: 0x36044000  ori         $a0, $s0, 0x4000
    ctx->pc = 0x22cbecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16384);
label_22cbf0:
    // 0x22cbf0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22cbf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cbf4: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x22CBF4u;
    SET_GPR_U32(ctx, 31, 0x22CBFCu);
    ctx->pc = 0x22CBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CBF4u;
    // 0x22cbf8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x22CBF4u, 0x22CBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CBFCu;
label_22cbfc:
    // 0x22cbfc: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x22CBFCu;
    {
        const bool branch_taken_0x22cbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBFCu;
        // 0x22cc00: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cbfc) {
            ctx->pc = 0x22CCB4u;
            goto label_22ccb4;
        }
    }
    ctx->pc = 0x22CC04u;
    // 0x22cc04: 0x0  nop
    ctx->pc = 0x22cc04u;
    // NOP
label_22cc08:
    // 0x22cc08: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x22cc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cc0c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x22cc0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22cc10: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x22cc10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x22cc14: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x22cc14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x22cc18: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x22cc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cc1c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x22cc1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x22cc20: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x22cc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x22cc24: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x22cc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cc28: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x22cc28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x22cc2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22CC2Cu;
    {
        const bool branch_taken_0x22cc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC2Cu;
        // 0x22cc30: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc2c) {
            ctx->pc = 0x22CC50u;
            goto label_22cc50;
        }
    }
    ctx->pc = 0x22CC34u;
    // 0x22cc34: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x22cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22cc38: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x22cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x22cc3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22cc40: 0x8c640894  lw          $a0, 0x894($v1)
    ctx->pc = 0x22cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2196)));
    // 0x22cc44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22CC44u;
    {
        const bool branch_taken_0x22cc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC44u;
        // 0x22cc48: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc44) {
            ctx->pc = 0x22CC5Cu;
            goto label_22cc5c;
        }
    }
    ctx->pc = 0x22CC4Cu;
    // 0x22cc4c: 0x0  nop
    ctx->pc = 0x22cc4cu;
    // NOP
label_22cc50:
    // 0x22cc50: 0x8ea288d0  lw          $v0, -0x7730($s5)
    ctx->pc = 0x22cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936784)));
    // 0x22cc54: 0x8c430894  lw          $v1, 0x894($v0)
    ctx->pc = 0x22cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2196)));
    // 0x22cc58: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x22cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_22cc5c:
    // 0x22cc5c: 0xc4410078  lwc1        $f1, 0x78($v0)
    ctx->pc = 0x22cc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cc60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22cc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc64: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x22cc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cc68: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x22cc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22cc6c: 0xc44c0070  lwc1        $f12, 0x70($v0)
    ctx->pc = 0x22cc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22cc70: 0x46016b41  sub.s       $f13, $f13, $f1
    ctx->pc = 0x22cc70u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x22cc74: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x22CC74u;
    SET_GPR_U32(ctx, 31, 0x22CC7Cu);
    ctx->pc = 0x22CC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC74u;
    // 0x22cc78: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x22CC74u, 0x22CC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC7Cu;
label_22cc7c:
    // 0x22cc7c: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x22cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x22cc80: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x22cc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x22cc84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22cc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc88: 0xc44d0008  lwc1        $f13, 0x8($v0)
    ctx->pc = 0x22cc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22cc8c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x22cc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22cc90: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x22cc90u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x22cc94: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x22CC94u;
    SET_GPR_U32(ctx, 31, 0x22CC9Cu);
    ctx->pc = 0x22CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC94u;
    // 0x22cc98: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x22CC94u, 0x22CC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC9Cu;
label_22cc9c:
    // 0x22cc9c: 0x2604ff9c  addiu       $a0, $s0, -0x64
    ctx->pc = 0x22cc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967196));
    // 0x22cca0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22cca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cca4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x22cca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22cca8: 0xc095306  jal         func_254C18
    ctx->pc = 0x22CCA8u;
    SET_GPR_U32(ctx, 31, 0x22CCB0u);
    ctx->pc = 0x22CCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CCA8u;
    // 0x22ccac: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C18u, 0x22CCA8u, 0x22CCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CCB0u;
label_22ccb0:
    // 0x22ccb0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22ccb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_22ccb4:
    // 0x22ccb4: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x22ccb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22ccb8: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x22CCB8u;
    {
        const bool branch_taken_0x22ccb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCB8u;
        // 0x22ccbc: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ccb8) {
            ctx->pc = 0x22CB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cb60;
        }
    }
    ctx->pc = 0x22CCC0u;
label_22ccc0:
    // 0x22ccc0: 0x26e29290  addiu       $v0, $s7, -0x6D70
    ctx->pc = 0x22ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294939280));
    // 0x22ccc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ccc8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x22ccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x22cccc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x22ccccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_22ccd0:
    // 0x22ccd0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x22ccd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22ccd4:
    // 0x22ccd4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x22ccd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22ccd8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x22ccd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ccdc: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x22ccdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22cce0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x22cce0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22cce4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x22cce4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22cce8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x22cce8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22ccec: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x22ccecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x22ccf0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22ccf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22ccf4: 0xc7b50080  lwc1        $f21, 0x80($sp)
    ctx->pc = 0x22ccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22ccf8: 0xc7b40078  lwc1        $f20, 0x78($sp)
    ctx->pc = 0x22ccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22ccfc: 0x3e00008  jr          $ra
    ctx->pc = 0x22CCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCFCu;
        // 0x22cd00: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CD04u;
    // 0x22cd04: 0x0  nop
    ctx->pc = 0x22cd04u;
    // NOP
    ctx->pc = 0x22cd08u;
}
