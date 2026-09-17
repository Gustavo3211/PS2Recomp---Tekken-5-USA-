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

// Function: sub_00D05700
// Address: 0xd05700 - 0xd058a8
void sub_00D05700_0xd05700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00D05700_0xd05700");
#endif

    switch (ctx->pc) {
        case 0xd05730u: goto label_d05730;
        case 0xd05738u: goto label_d05738;
        case 0xd0574cu: goto label_d0574c;
        case 0xd05758u: goto label_d05758;
        case 0xd05768u: goto label_d05768;
        case 0xd05778u: goto label_d05778;
        case 0xd0578cu: goto label_d0578c;
        case 0xd057a4u: goto label_d057a4;
        case 0xd057c8u: goto label_d057c8;
        case 0xd057e0u: goto label_d057e0;
        case 0xd057f0u: goto label_d057f0;
        case 0xd05810u: goto label_d05810;
        case 0xd05824u: goto label_d05824;
        case 0xd05844u: goto label_d05844;
        case 0xd0584cu: goto label_d0584c;
        case 0xd05860u: goto label_d05860;
        case 0xd05868u: goto label_d05868;
        case 0xd0588cu: goto label_d0588c;
        case 0xd05898u: goto label_d05898;
        default: break;
    }

    ctx->pc = 0xd05700u;

    // 0xd05700: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0xd05700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0xd05704: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0xd05704u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0xd05708: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0xd05708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0xd0570c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0xd0570cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0xd05710: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0xd05710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0xd05714: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0xd05714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0xd05718: 0x34a50010  ori         $a1, $a1, 0x10
    ctx->pc = 0xd05718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
    // 0xd0571c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd0571cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05720: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0xd05720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0xd05724: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0xd05724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0xd05728: 0xc042d06  jal         func_10B418
    ctx->pc = 0xD05728u;
    SET_GPR_U32(ctx, 31, 0xD05730u);
    ctx->pc = 0xD0572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05728u;
    // 0xd0572c: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B418u, 0xD05728u, 0xD05730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05730u;
label_d05730:
    // 0xd05730: 0xc042d0a  jal         func_10B428
    ctx->pc = 0xD05730u;
    SET_GPR_U32(ctx, 31, 0xD05738u);
    ctx->pc = 0xD05734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05730u;
    // 0xd05734: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B428u, 0xD05730u, 0xD05738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05738u;
label_d05738:
    // 0xd05738: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd0573c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0xd0573cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05740: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0xd05740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05744: 0xc042d24  jal         func_10B490
    ctx->pc = 0xD05744u;
    SET_GPR_U32(ctx, 31, 0xD0574Cu);
    ctx->pc = 0xD05748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05744u;
    // 0xd05748: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B490u, 0xD05744u, 0xD0574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD0574Cu;
label_d0574c:
    // 0xd0574c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd0574cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05750: 0xc042d60  jal         func_10B580
    ctx->pc = 0xD05750u;
    SET_GPR_U32(ctx, 31, 0xD05758u);
    ctx->pc = 0xD05754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05750u;
    // 0xd05754: 0x7ba50000  lq          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B580u, 0xD05750u, 0xD05758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05758u;
label_d05758:
    // 0xd05758: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd0575c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0xd0575cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0xd05760: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD05760u;
    SET_GPR_U32(ctx, 31, 0xD05768u);
    ctx->pc = 0xD05764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05760u;
    // 0xd05764: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD05760u, 0xD05768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05768u;
label_d05768:
    // 0xd05768: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd0576c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0xd0576cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05770: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD05770u;
    SET_GPR_U32(ctx, 31, 0xD05778u);
    ctx->pc = 0xD05774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05770u;
    // 0xd05774: 0x24060116  addiu       $a2, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD05770u, 0xD05778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05778u;
label_d05778:
    // 0xd05778: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd0577c: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0xd0577cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0xd05780: 0x34c60806  ori         $a2, $a2, 0x806
    ctx->pc = 0xd05780u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    // 0xd05784: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD05784u;
    SET_GPR_U32(ctx, 31, 0xD0578Cu);
    ctx->pc = 0xD05788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05784u;
    // 0xd05788: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD05784u, 0xD0578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD0578Cu;
label_d0578c:
    // 0xd0578c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd0578cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05790: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0xd05790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0xd05794: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0xd05794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0xd05798: 0x34c60044  ori         $a2, $a2, 0x44
    ctx->pc = 0xd05798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)68);
    // 0xd0579c: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD0579Cu;
    SET_GPR_U32(ctx, 31, 0xD057A4u);
    ctx->pc = 0xD057A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD0579Cu;
    // 0xd057a0: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD0579Cu, 0xD057A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD057A4u;
label_d057a4:
    // 0xd057a4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd057a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd057a8: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0xd057a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0xd057ac: 0x34c6000e  ori         $a2, $a2, 0xE
    ctx->pc = 0xd057acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)14);
    // 0xd057b0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0xd057b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0xd057b4: 0x34c66412  ori         $a2, $a2, 0x6412
    ctx->pc = 0xd057b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)25618);
    // 0xd057b8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0xd057b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0xd057bc: 0x34c63000  ori         $a2, $a2, 0x3000
    ctx->pc = 0xd057bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12288);
    // 0xd057c0: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD057C0u;
    SET_GPR_U32(ctx, 31, 0xD057C8u);
    ctx->pc = 0xD057C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD057C0u;
    // 0xd057c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD057C0u, 0xD057C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD057C8u;
label_d057c8:
    // 0xd057c8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd057c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd057cc: 0x340680ff  ori         $a2, $zero, 0x80FF
    ctx->pc = 0xd057ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33023);
    // 0xd057d0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0xd057d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0xd057d4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0xd057d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0xd057d8: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD057D8u;
    SET_GPR_U32(ctx, 31, 0xD057E0u);
    ctx->pc = 0xD057DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD057D8u;
    // 0xd057dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD057D8u, 0xD057E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD057E0u;
label_d057e0:
    // 0xd057e0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd057e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd057e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0xd057e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0xd057e8: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD057E8u;
    SET_GPR_U32(ctx, 31, 0xD057F0u);
    ctx->pc = 0xD057ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD057E8u;
    // 0xd057ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD057E8u, 0xD057F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD057F0u;
label_d057f0:
    // 0xd057f0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd057f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd057f4: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0xd057f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0xd057f8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0xd057f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0xd057fc: 0x34c67ec0  ori         $a2, $a2, 0x7EC0
    ctx->pc = 0xd057fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32448);
    // 0xd05800: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0xd05800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0xd05804: 0x34c67800  ori         $a2, $a2, 0x7800
    ctx->pc = 0xd05804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)30720);
    // 0xd05808: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD05808u;
    SET_GPR_U32(ctx, 31, 0xD05810u);
    ctx->pc = 0xD0580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05808u;
    // 0xd0580c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD05808u, 0xD05810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05810u;
label_d05810:
    // 0xd05810: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05814: 0x3c060280  lui         $a2, 0x280
    ctx->pc = 0xd05814u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)640 << 16));
    // 0xd05818: 0x34c61000  ori         $a2, $a2, 0x1000
    ctx->pc = 0xd05818u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4096);
    // 0xd0581c: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD0581Cu;
    SET_GPR_U32(ctx, 31, 0xD05824u);
    ctx->pc = 0xD05820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD0581Cu;
    // 0xd05820: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD0581Cu, 0xD05824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05824u;
label_d05824:
    // 0xd05824: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05828: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0xd05828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0xd0582c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0xd0582cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0xd05830: 0x34c68140  ori         $a2, $a2, 0x8140
    ctx->pc = 0xd05830u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33088);
    // 0xd05834: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0xd05834u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0xd05838: 0x34c68800  ori         $a2, $a2, 0x8800
    ctx->pc = 0xd05838u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)34816);
    // 0xd0583c: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD0583Cu;
    SET_GPR_U32(ctx, 31, 0xD05844u);
    ctx->pc = 0xD05840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD0583Cu;
    // 0xd05840: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD0583Cu, 0xD05844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05844u;
label_d05844:
    // 0xd05844: 0xc042d66  jal         func_10B598
    ctx->pc = 0xD05844u;
    SET_GPR_U32(ctx, 31, 0xD0584Cu);
    ctx->pc = 0xD05848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05844u;
    // 0xd05848: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B598u, 0xD05844u, 0xD0584Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD0584Cu;
label_d0584c:
    // 0xd0584c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd0584cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05850: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0xd05850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05854: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0xd05854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05858: 0xc042d42  jal         func_10B508
    ctx->pc = 0xD05858u;
    SET_GPR_U32(ctx, 31, 0xD05860u);
    ctx->pc = 0xD0585Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05858u;
    // 0xd0585c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B508u, 0xD05858u, 0xD05860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05860u;
label_d05860:
    // 0xd05860: 0xc042d0e  jal         func_10B438
    ctx->pc = 0xD05860u;
    SET_GPR_U32(ctx, 31, 0xD05868u);
    ctx->pc = 0xD05864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05860u;
    // 0xd05864: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B438u, 0xD05860u, 0xD05868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05868u;
label_d05868:
    // 0xd05868: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0xd05868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0xd0586c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0xd0586cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000004u)); // MMIO: 0x70000004
    // 0xd05870: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0xd05870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0xd05874: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0xd05874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0xd05878: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0xd05878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0xd0587c: 0x8f84ccf0  lw          $a0, -0x3310($gp)
    ctx->pc = 0xd0587cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954224)));
    // 0xd05880: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0xd05880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0xd05884: 0xc04072c  jal         func_101CB0
    ctx->pc = 0xD05884u;
    SET_GPR_U32(ctx, 31, 0xD0588Cu);
    ctx->pc = 0xD05888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05884u;
    // 0xd05888: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101CB0u, 0xD05884u, 0xD0588Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD0588Cu;
label_d0588c:
    // 0xd0588c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0xd0588cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05890: 0xc0409b2  jal         func_1026C8
    ctx->pc = 0xD05890u;
    SET_GPR_U32(ctx, 31, 0xD05898u);
    ctx->pc = 0xD05894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05890u;
    // 0xd05894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1026C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1026C8u, 0xD05890u, 0xD05898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05898u;
label_d05898:
    // 0xd05898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0xd05898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0xd0589c: 0x3e00008  jr          $ra
    ctx->pc = 0xD0589Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0xD058A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD0589Cu;
        // 0xd058a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0xD0589Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0xD058A4u;
    // 0xd058a4: 0x0  nop
    ctx->pc = 0xd058a4u;
    // NOP
    ctx->pc = 0xd058a8u;
}
