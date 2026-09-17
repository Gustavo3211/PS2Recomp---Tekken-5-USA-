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

// Function: sub_00D058A8
// Address: 0xd058a8 - 0xd05a50
void sub_00D058A8_0xd058a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00D058A8_0xd058a8");
#endif

    switch (ctx->pc) {
        case 0xd058d8u: goto label_d058d8;
        case 0xd058e0u: goto label_d058e0;
        case 0xd058f4u: goto label_d058f4;
        case 0xd05900u: goto label_d05900;
        case 0xd05910u: goto label_d05910;
        case 0xd05920u: goto label_d05920;
        case 0xd05934u: goto label_d05934;
        case 0xd0594cu: goto label_d0594c;
        case 0xd05970u: goto label_d05970;
        case 0xd05988u: goto label_d05988;
        case 0xd05998u: goto label_d05998;
        case 0xd059b8u: goto label_d059b8;
        case 0xd059ccu: goto label_d059cc;
        case 0xd059ecu: goto label_d059ec;
        case 0xd059f4u: goto label_d059f4;
        case 0xd05a08u: goto label_d05a08;
        case 0xd05a10u: goto label_d05a10;
        case 0xd05a34u: goto label_d05a34;
        case 0xd05a40u: goto label_d05a40;
        default: break;
    }

    ctx->pc = 0xd058a8u;

    // 0xd058a8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0xd058a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0xd058ac: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0xd058acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0xd058b0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0xd058b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0xd058b4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0xd058b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0xd058b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0xd058b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0xd058bc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0xd058bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0xd058c0: 0x34a50010  ori         $a1, $a1, 0x10
    ctx->pc = 0xd058c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
    // 0xd058c4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd058c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd058c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0xd058c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0xd058cc: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0xd058ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0xd058d0: 0xc042d06  jal         func_10B418
    ctx->pc = 0xD058D0u;
    SET_GPR_U32(ctx, 31, 0xD058D8u);
    ctx->pc = 0xD058D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD058D0u;
    // 0xd058d4: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B418u, 0xD058D0u, 0xD058D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD058D8u;
label_d058d8:
    // 0xd058d8: 0xc042d0a  jal         func_10B428
    ctx->pc = 0xD058D8u;
    SET_GPR_U32(ctx, 31, 0xD058E0u);
    ctx->pc = 0xD058DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD058D8u;
    // 0xd058dc: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B428u, 0xD058D8u, 0xD058E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD058E0u;
label_d058e0:
    // 0xd058e0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd058e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd058e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0xd058e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd058e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0xd058e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd058ec: 0xc042d24  jal         func_10B490
    ctx->pc = 0xD058ECu;
    SET_GPR_U32(ctx, 31, 0xD058F4u);
    ctx->pc = 0xD058F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD058ECu;
    // 0xd058f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B490u, 0xD058ECu, 0xD058F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD058F4u;
label_d058f4:
    // 0xd058f4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd058f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd058f8: 0xc042d60  jal         func_10B580
    ctx->pc = 0xD058F8u;
    SET_GPR_U32(ctx, 31, 0xD05900u);
    ctx->pc = 0xD058FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD058F8u;
    // 0xd058fc: 0x7ba50000  lq          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B580u, 0xD058F8u, 0xD05900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05900u;
label_d05900:
    // 0xd05900: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05904: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0xd05904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0xd05908: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD05908u;
    SET_GPR_U32(ctx, 31, 0xD05910u);
    ctx->pc = 0xD0590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05908u;
    // 0xd0590c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD05908u, 0xD05910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05910u;
label_d05910:
    // 0xd05910: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05914: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0xd05914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05918: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD05918u;
    SET_GPR_U32(ctx, 31, 0xD05920u);
    ctx->pc = 0xD0591Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05918u;
    // 0xd0591c: 0x24060116  addiu       $a2, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD05918u, 0xD05920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05920u;
label_d05920:
    // 0xd05920: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05924: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0xd05924u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0xd05928: 0x34c60806  ori         $a2, $a2, 0x806
    ctx->pc = 0xd05928u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    // 0xd0592c: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD0592Cu;
    SET_GPR_U32(ctx, 31, 0xD05934u);
    ctx->pc = 0xD05930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD0592Cu;
    // 0xd05930: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD0592Cu, 0xD05934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05934u;
label_d05934:
    // 0xd05934: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05938: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0xd05938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0xd0593c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0xd0593cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0xd05940: 0x34c60044  ori         $a2, $a2, 0x44
    ctx->pc = 0xd05940u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)68);
    // 0xd05944: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD05944u;
    SET_GPR_U32(ctx, 31, 0xD0594Cu);
    ctx->pc = 0xD05948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05944u;
    // 0xd05948: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD05944u, 0xD0594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD0594Cu;
label_d0594c:
    // 0xd0594c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd0594cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05950: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0xd05950u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0xd05954: 0x34c6000e  ori         $a2, $a2, 0xE
    ctx->pc = 0xd05954u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)14);
    // 0xd05958: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0xd05958u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0xd0595c: 0x34c66412  ori         $a2, $a2, 0x6412
    ctx->pc = 0xd0595cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)25618);
    // 0xd05960: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0xd05960u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0xd05964: 0x34c63000  ori         $a2, $a2, 0x3000
    ctx->pc = 0xd05964u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12288);
    // 0xd05968: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD05968u;
    SET_GPR_U32(ctx, 31, 0xD05970u);
    ctx->pc = 0xD0596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05968u;
    // 0xd0596c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD05968u, 0xD05970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05970u;
label_d05970:
    // 0xd05970: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05974: 0x340680ff  ori         $a2, $zero, 0x80FF
    ctx->pc = 0xd05974u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33023);
    // 0xd05978: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0xd05978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0xd0597c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0xd0597cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0xd05980: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD05980u;
    SET_GPR_U32(ctx, 31, 0xD05988u);
    ctx->pc = 0xD05984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05980u;
    // 0xd05984: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD05980u, 0xD05988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05988u;
label_d05988:
    // 0xd05988: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd0598c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0xd0598cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0xd05990: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD05990u;
    SET_GPR_U32(ctx, 31, 0xD05998u);
    ctx->pc = 0xD05994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05990u;
    // 0xd05994: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD05990u, 0xD05998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05998u;
label_d05998:
    // 0xd05998: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd0599c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0xd0599cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0xd059a0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0xd059a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0xd059a4: 0x34c689b0  ori         $a2, $a2, 0x89B0
    ctx->pc = 0xd059a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)35248);
    // 0xd059a8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0xd059a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0xd059ac: 0x34c68580  ori         $a2, $a2, 0x8580
    ctx->pc = 0xd059acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)34176);
    // 0xd059b0: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD059B0u;
    SET_GPR_U32(ctx, 31, 0xD059B8u);
    ctx->pc = 0xD059B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD059B0u;
    // 0xd059b4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD059B0u, 0xD059B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD059B8u;
label_d059b8:
    // 0xd059b8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd059b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd059bc: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0xd059bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0xd059c0: 0x34c60c80  ori         $a2, $a2, 0xC80
    ctx->pc = 0xd059c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3200);
    // 0xd059c4: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD059C4u;
    SET_GPR_U32(ctx, 31, 0xD059CCu);
    ctx->pc = 0xD059C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD059C4u;
    // 0xd059c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD059C4u, 0xD059CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD059CCu;
label_d059cc:
    // 0xd059cc: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd059ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd059d0: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0xd059d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0xd059d4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0xd059d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0xd059d8: 0x34c68cb0  ori         $a2, $a2, 0x8CB0
    ctx->pc = 0xd059d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36016);
    // 0xd059dc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0xd059dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0xd059e0: 0x34c69200  ori         $a2, $a2, 0x9200
    ctx->pc = 0xd059e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)37376);
    // 0xd059e4: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD059E4u;
    SET_GPR_U32(ctx, 31, 0xD059ECu);
    ctx->pc = 0xD059E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD059E4u;
    // 0xd059e8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD059E4u, 0xD059ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD059ECu;
label_d059ec:
    // 0xd059ec: 0xc042d66  jal         func_10B598
    ctx->pc = 0xD059ECu;
    SET_GPR_U32(ctx, 31, 0xD059F4u);
    ctx->pc = 0xD059F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD059ECu;
    // 0xd059f0: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B598u, 0xD059ECu, 0xD059F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD059F4u;
label_d059f4:
    // 0xd059f4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd059f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd059f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0xd059f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd059fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0xd059fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05a00: 0xc042d42  jal         func_10B508
    ctx->pc = 0xD05A00u;
    SET_GPR_U32(ctx, 31, 0xD05A08u);
    ctx->pc = 0xD05A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05A00u;
    // 0xd05a04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B508u, 0xD05A00u, 0xD05A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05A08u;
label_d05a08:
    // 0xd05a08: 0xc042d0e  jal         func_10B438
    ctx->pc = 0xD05A08u;
    SET_GPR_U32(ctx, 31, 0xD05A10u);
    ctx->pc = 0xD05A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05A08u;
    // 0xd05a0c: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B438u, 0xD05A08u, 0xD05A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05A10u;
label_d05a10:
    // 0xd05a10: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0xd05a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0xd05a14: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0xd05a14u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000004u)); // MMIO: 0x70000004
    // 0xd05a18: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0xd05a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0xd05a1c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0xd05a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0xd05a20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0xd05a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0xd05a24: 0x8f84ccf0  lw          $a0, -0x3310($gp)
    ctx->pc = 0xd05a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954224)));
    // 0xd05a28: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0xd05a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0xd05a2c: 0xc04072c  jal         func_101CB0
    ctx->pc = 0xD05A2Cu;
    SET_GPR_U32(ctx, 31, 0xD05A34u);
    ctx->pc = 0xD05A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05A2Cu;
    // 0xd05a30: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101CB0u, 0xD05A2Cu, 0xD05A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05A34u;
label_d05a34:
    // 0xd05a34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0xd05a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05a38: 0xc0409b2  jal         func_1026C8
    ctx->pc = 0xD05A38u;
    SET_GPR_U32(ctx, 31, 0xD05A40u);
    ctx->pc = 0xD05A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05A38u;
    // 0xd05a3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1026C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1026C8u, 0xD05A38u, 0xD05A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05A40u;
label_d05a40:
    // 0xd05a40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0xd05a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0xd05a44: 0x3e00008  jr          $ra
    ctx->pc = 0xD05A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0xD05A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD05A44u;
        // 0xd05a48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0xD05A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0xD05A4Cu;
    // 0xd05a4c: 0x0  nop
    ctx->pc = 0xd05a4cu;
    // NOP
    ctx->pc = 0xd05a50u;
}
