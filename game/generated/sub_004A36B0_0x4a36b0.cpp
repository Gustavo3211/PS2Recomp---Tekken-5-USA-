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

// Function: sub_004A36B0
// Address: 0x4a36b0 - 0x4a3918
void sub_004A36B0_0x4a36b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A36B0_0x4a36b0");
#endif

    switch (ctx->pc) {
        case 0x4a3704u: goto label_4a3704;
        case 0x4a3720u: goto label_4a3720;
        case 0x4a3728u: goto label_4a3728;
        case 0x4a3734u: goto label_4a3734;
        case 0x4a37c0u: goto label_4a37c0;
        case 0x4a3808u: goto label_4a3808;
        case 0x4a389cu: goto label_4a389c;
        case 0x4a38e8u: goto label_4a38e8;
        default: break;
    }

    ctx->pc = 0x4a36b0u;

    // 0x4a36b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a36b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4a36b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a36b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a36b8: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4a36b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4a36bc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a36bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a36c0: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4a36c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4a36c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a36c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a36c8: 0x3c12feac  lui         $s2, 0xFEAC
    ctx->pc = 0x4a36c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65196 << 16));
    // 0x4a36cc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4a36ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4a36d0: 0x3c130c00  lui         $s3, 0xC00
    ctx->pc = 0x4a36d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)3072 << 16));
    // 0x4a36d4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4a36d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4a36d8: 0x24147fff  addiu       $s4, $zero, 0x7FFF
    ctx->pc = 0x4a36d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4a36dc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4a36dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4a36e0: 0x241500d4  addiu       $s5, $zero, 0xD4
    ctx->pc = 0x4a36e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x4a36e4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4a36e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4a36e8: 0x2416000d  addiu       $s6, $zero, 0xD
    ctx->pc = 0x4a36e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4a36ec: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4a36ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4a36f0: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x4a36f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a36f4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4a36f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4a36f8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4a36f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x4a36fc: 0xc124620  jal         func_491880
    ctx->pc = 0x4A36FCu;
    SET_GPR_U32(ctx, 31, 0x4A3704u);
    ctx->pc = 0x4A3700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A36FCu;
    // 0x4a3700: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x4A36FCu, 0x4A3704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3704u;
label_4a3704:
    // 0x4a3704: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4a3704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x4a3708: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x4a3708u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4a370c: 0xa437e820  sh          $s7, -0x17E0($at)
    ctx->pc = 0x4a370cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961184), (uint16_t)GPR_U32(ctx, 23));
    // 0x4a3710: 0x240400d5  addiu       $a0, $zero, 0xD5
    ctx->pc = 0x4a3710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
    // 0x4a3714: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x4a3714u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4a3718: 0xc1233ec  jal         func_48CFB0
    ctx->pc = 0x4A3718u;
    SET_GPR_U32(ctx, 31, 0x4A3720u);
    ctx->pc = 0x4A371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3718u;
    // 0x4a371c: 0x3673ffff  ori         $s3, $s3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CFB0u, 0x4A3718u, 0x4A3720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3720u;
label_4a3720:
    // 0x4a3720: 0xc124910  jal         func_492440
    ctx->pc = 0x4A3720u;
    SET_GPR_U32(ctx, 31, 0x4A3728u);
    ctx->pc = 0x4A3724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3720u;
    // 0x4a3724: 0x3c040006  lui         $a0, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)6 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4A3720u, 0x4A3728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3728u;
label_4a3728:
    // 0x4a3728: 0x26310c0c  addiu       $s1, $s1, 0xC0C
    ctx->pc = 0x4a3728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3084));
    // 0x4a372c: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A372Cu;
    SET_GPR_U32(ctx, 31, 0x4A3734u);
    ctx->pc = 0x4A3730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A372Cu;
    // 0x4a3730: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A372Cu, 0x4A3734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3734u;
label_4a3734:
    // 0x4a3734: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4a3734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a3738: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a373c: 0x240604cc  addiu       $a2, $zero, 0x4CC
    ctx->pc = 0x4a373cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1228));
    // 0x4a3740: 0x24040600  addiu       $a0, $zero, 0x600
    ctx->pc = 0x4a3740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x4a3744: 0xa4550008  sh          $s5, 0x8($v0)
    ctx->pc = 0x4a3744u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 21));
    // 0x4a3748: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a374c: 0xa465000e  sh          $a1, 0xE($v1)
    ctx->pc = 0x4a374cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 5));
    // 0x4a3750: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3754: 0xa4560148  sh          $s6, 0x148($v0)
    ctx->pc = 0x4a3754u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 328), (uint16_t)GPR_U32(ctx, 22));
    // 0x4a3758: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a375c: 0xa47e0030  sh          $fp, 0x30($v1)
    ctx->pc = 0x4a375cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 30));
    // 0x4a3760: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3764: 0xa446000c  sh          $a2, 0xC($v0)
    ctx->pc = 0x4a3764u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x4a3768: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a3768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a376c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a376cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3770: 0xa462002e  sh          $v0, 0x2E($v1)
    ctx->pc = 0x4a3770u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a3774: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3778: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a3778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4a377c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4a377cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a3780: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4a3780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4a3784: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a3784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3788: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x4a3788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x4a378c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a378cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a3790: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a3790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a3794: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4a3794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4a3798: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a3798u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a379c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a379cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a37a0: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x4a37a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x4a37a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a37a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a37a8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a37a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a37ac: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4a37acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4a37b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a37b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a37b4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a37b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a37b8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A37B8u;
    SET_GPR_U32(ctx, 31, 0x4A37C0u);
    ctx->pc = 0x4A37BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A37B8u;
    // 0x4a37bc: 0xa4a0011c  sh          $zero, 0x11C($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 284), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A37B8u, 0x4A37C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A37C0u;
label_4a37c0:
    // 0x4a37c0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x4a37c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a37c4: 0x501824  and         $v1, $v0, $s0
    ctx->pc = 0x4a37c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4a37c8: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4a37c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4a37cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4a37ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4a37d0: 0xa4c30022  sh          $v1, 0x22($a2)
    ctx->pc = 0x4a37d0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a37d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a37d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a37d8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a37d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a37dc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4a37dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a37e0: 0xa4a20024  sh          $v0, 0x24($a1)
    ctx->pc = 0x4a37e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a37e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a37e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a37e8: 0xa4600026  sh          $zero, 0x26($v1)
    ctx->pc = 0x4a37e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a37ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a37f0: 0xa4540028  sh          $s4, 0x28($v0)
    ctx->pc = 0x4a37f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 20));
    // 0x4a37f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a37f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a37f8: 0xa460002a  sh          $zero, 0x2A($v1)
    ctx->pc = 0x4a37f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a37fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a37fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3800: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A3800u;
    SET_GPR_U32(ctx, 31, 0x4A3808u);
    ctx->pc = 0x4A3804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3800u;
    // 0x4a3804: 0xa454002c  sh          $s4, 0x2C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A3800u, 0x4A3808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3808u;
label_4a3808:
    // 0x4a3808: 0x240604cd  addiu       $a2, $zero, 0x4CD
    ctx->pc = 0x4a3808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1229));
    // 0x4a380c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a380cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3810: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x4a3810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x4a3814: 0x24040600  addiu       $a0, $zero, 0x600
    ctx->pc = 0x4a3814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x4a3818: 0xa4750008  sh          $s5, 0x8($v1)
    ctx->pc = 0x4a3818u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 21));
    // 0x4a381c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a381cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3820: 0xa457000e  sh          $s7, 0xE($v0)
    ctx->pc = 0x4a3820u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 23));
    // 0x4a3824: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3828: 0xa4760148  sh          $s6, 0x148($v1)
    ctx->pc = 0x4a3828u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 328), (uint16_t)GPR_U32(ctx, 22));
    // 0x4a382c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a382cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3830: 0xa45e0030  sh          $fp, 0x30($v0)
    ctx->pc = 0x4a3830u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 30));
    // 0x4a3834: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a3834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a3838: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a383c: 0xa466000c  sh          $a2, 0xC($v1)
    ctx->pc = 0x4a383cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x4a3840: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a3840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3844: 0xa4a2002e  sh          $v0, 0x2E($a1)
    ctx->pc = 0x4a3844u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a3848: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a384c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4a3850: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4a3850u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a3854: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4a3854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4a3858: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a3858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a385c: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x4a385cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x4a3860: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a3860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a3864: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a3864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a3868: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4a3868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4a386c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a386cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a3870: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3874: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x4a3874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x4a3878: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a3878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a387c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a387cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a3880: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4a3880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4a3884: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a3884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a3888: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a3888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a388c: 0xa4a0011c  sh          $zero, 0x11C($a1)
    ctx->pc = 0x4a388cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a3890: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3894: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4A3894u;
    SET_GPR_U32(ctx, 31, 0x4A389Cu);
    ctx->pc = 0x4A3898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3894u;
    // 0x4a3898: 0xa4470118  sh          $a3, 0x118($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4A3894u, 0x4A389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A389Cu;
label_4a389c:
    // 0x4a389c: 0x3c040052  lui         $a0, 0x52
    ctx->pc = 0x4a389cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)82 << 16));
    // 0x4a38a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a38a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a38a4: 0x508024  and         $s0, $v0, $s0
    ctx->pc = 0x4a38a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4a38a8: 0x108402  srl         $s0, $s0, 16
    ctx->pc = 0x4a38a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x4a38ac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4a38acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4a38b0: 0xa4700022  sh          $s0, 0x22($v1)
    ctx->pc = 0x4a38b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 34), (uint16_t)GPR_U32(ctx, 16));
    // 0x4a38b4: 0x248489d8  addiu       $a0, $a0, -0x7628
    ctx->pc = 0x4a38b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937048));
    // 0x4a38b8: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x4a38b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a38bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a38bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a38c0: 0xa4450024  sh          $a1, 0x24($v0)
    ctx->pc = 0x4a38c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 5));
    // 0x4a38c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a38c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a38c8: 0xa4600026  sh          $zero, 0x26($v1)
    ctx->pc = 0x4a38c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a38cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a38d0: 0xa4540028  sh          $s4, 0x28($v0)
    ctx->pc = 0x4a38d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 20));
    // 0x4a38d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a38d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a38d8: 0xa460002a  sh          $zero, 0x2A($v1)
    ctx->pc = 0x4a38d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a38dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a38dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a38e0: 0xc123bf2  jal         func_48EFC8
    ctx->pc = 0x4A38E0u;
    SET_GPR_U32(ctx, 31, 0x4A38E8u);
    ctx->pc = 0x4A38E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A38E0u;
    // 0x4a38e4: 0xa454002c  sh          $s4, 0x2C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EFC8u, 0x4A38E0u, 0x4A38E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A38E8u;
label_4a38e8:
    // 0x4a38e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a38e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a38ec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a38ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a38f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a38f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a38f4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4a38f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a38f8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4a38f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a38fc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4a38fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a3900: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4a3900u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a3904: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4a3904u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4a3908: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4a3908u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a390c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4a390cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4a3910: 0x3e00008  jr          $ra
    ctx->pc = 0x4A3910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3910u;
        // 0x4a3914: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A3910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A3918u;
}
