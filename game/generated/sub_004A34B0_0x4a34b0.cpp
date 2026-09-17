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

// Function: sub_004A34B0
// Address: 0x4a34b0 - 0x4a3640
void sub_004A34B0_0x4a34b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A34B0_0x4a34b0");
#endif

    switch (ctx->pc) {
        case 0x4a34c8u: goto label_4a34c8;
        case 0x4a34d0u: goto label_4a34d0;
        case 0x4a34d8u: goto label_4a34d8;
        case 0x4a34e4u: goto label_4a34e4;
        case 0x4a34f0u: goto label_4a34f0;
        case 0x4a34f8u: goto label_4a34f8;
        case 0x4a3594u: goto label_4a3594;
        default: break;
    }

    ctx->pc = 0x4a34b0u;

    // 0x4a34b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a34b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a34b4: 0x240400d5  addiu       $a0, $zero, 0xD5
    ctx->pc = 0x4a34b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
    // 0x4a34b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a34b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a34bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4a34bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4a34c0: 0xc1233ec  jal         func_48CFB0
    ctx->pc = 0x4A34C0u;
    SET_GPR_U32(ctx, 31, 0x4A34C8u);
    ctx->pc = 0x4A34C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A34C0u;
    // 0x4a34c4: 0x241000d4  addiu       $s0, $zero, 0xD4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CFB0u, 0x4A34C0u, 0x4A34C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A34C8u;
label_4a34c8:
    // 0x4a34c8: 0xc124910  jal         func_492440
    ctx->pc = 0x4A34C8u;
    SET_GPR_U32(ctx, 31, 0x4A34D0u);
    ctx->pc = 0x4A34CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A34C8u;
    // 0x4a34cc: 0x3c04000e  lui         $a0, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4A34C8u, 0x4A34D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A34D0u;
label_4a34d0:
    // 0x4a34d0: 0xc124910  jal         func_492440
    ctx->pc = 0x4A34D0u;
    SET_GPR_U32(ctx, 31, 0x4A34D8u);
    ctx->pc = 0x4A34D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A34D0u;
    // 0x4a34d4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4A34D0u, 0x4A34D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A34D8u;
label_4a34d8:
    // 0x4a34d8: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x4a34d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x4a34dc: 0xc124910  jal         func_492440
    ctx->pc = 0x4A34DCu;
    SET_GPR_U32(ctx, 31, 0x4A34E4u);
    ctx->pc = 0x4A34E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A34DCu;
    // 0x4a34e0: 0x34840006  ori         $a0, $a0, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4A34DCu, 0x4A34E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A34E4u;
label_4a34e4:
    // 0x4a34e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4a34e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a34e8: 0xc123bc8  jal         func_48EF20
    ctx->pc = 0x4A34E8u;
    SET_GPR_U32(ctx, 31, 0x4A34F0u);
    ctx->pc = 0x4A34ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A34E8u;
    // 0x4a34ec: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EF20u, 0x4A34E8u, 0x4A34F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A34F0u;
label_4a34f0:
    // 0x4a34f0: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A34F0u;
    SET_GPR_U32(ctx, 31, 0x4A34F8u);
    ctx->pc = 0x4A34F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A34F0u;
    // 0x4a34f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A34F0u, 0x4A34F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A34F8u;
label_4a34f8:
    // 0x4a34f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4a34f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a34fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a34fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3500: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x4a3500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4a3504: 0x2409040f  addiu       $t1, $zero, 0x40F
    ctx->pc = 0x4a3504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x4a3508: 0x3c0a0600  lui         $t2, 0x600
    ctx->pc = 0x4a3508u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1536 << 16));
    // 0x4a350c: 0xa4500008  sh          $s0, 0x8($v0)
    ctx->pc = 0x4a350cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 16));
    // 0x4a3510: 0x3c0b0400  lui         $t3, 0x400
    ctx->pc = 0x4a3510u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)1024 << 16));
    // 0x4a3514: 0x3c0c1c00  lui         $t4, 0x1C00
    ctx->pc = 0x4a3514u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)7168 << 16));
    // 0x4a3518: 0x240d0028  addiu       $t5, $zero, 0x28
    ctx->pc = 0x4a3518u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4a351c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3520: 0x3c06ffd9  lui         $a2, 0xFFD9
    ctx->pc = 0x4a3520u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65497 << 16));
    // 0x4a3524: 0x34c6999a  ori         $a2, $a2, 0x999A
    ctx->pc = 0x4a3524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39322);
    // 0x4a3528: 0x3c07ffe6  lui         $a3, 0xFFE6
    ctx->pc = 0x4a3528u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65510 << 16));
    // 0x4a352c: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x4a352cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a3530: 0x34e76667  ori         $a3, $a3, 0x6667
    ctx->pc = 0x4a3530u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)26215);
    // 0x4a3534: 0x3c05ffcc  lui         $a1, 0xFFCC
    ctx->pc = 0x4a3534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65484 << 16));
    // 0x4a3538: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a3538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a353c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a353cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3540: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x4a3540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x4a3544: 0xa4680148  sh          $t0, 0x148($v1)
    ctx->pc = 0x4a3544u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 328), (uint16_t)GPR_U32(ctx, 8));
    // 0x4a3548: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a354c: 0xa4400030  sh          $zero, 0x30($v0)
    ctx->pc = 0x4a354cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a3550: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3554: 0xa469000c  sh          $t1, 0xC($v1)
    ctx->pc = 0x4a3554u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 9));
    // 0x4a3558: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a355c: 0xac4a0010  sw          $t2, 0x10($v0)
    ctx->pc = 0x4a355cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 10));
    // 0x4a3560: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3564: 0xac6b0014  sw          $t3, 0x14($v1)
    ctx->pc = 0x4a3564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 11));
    // 0x4a3568: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a356c: 0xac4c0018  sw          $t4, 0x18($v0)
    ctx->pc = 0x4a356cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 12));
    // 0x4a3570: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3574: 0xa46d014a  sh          $t5, 0x14A($v1)
    ctx->pc = 0x4a3574u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 330), (uint16_t)GPR_U32(ctx, 13));
    // 0x4a3578: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a357c: 0xac460124  sw          $a2, 0x124($v0)
    ctx->pc = 0x4a357cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 6));
    // 0x4a3580: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a3580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3584: 0xac670128  sw          $a3, 0x128($v1)
    ctx->pc = 0x4a3584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 7));
    // 0x4a3588: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a358c: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A358Cu;
    SET_GPR_U32(ctx, 31, 0x4A3594u);
    ctx->pc = 0x4A3590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A358Cu;
    // 0x4a3590: 0xac45012c  sw          $a1, 0x12C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A358Cu, 0x4A3594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3594u;
label_4a3594:
    // 0x4a3594: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4a3594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4a3598: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a3598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a359c: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x4a359cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4a35a0: 0x2409040e  addiu       $t1, $zero, 0x40E
    ctx->pc = 0x4a35a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1038));
    // 0x4a35a4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a35a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4a35a8: 0xa4500008  sh          $s0, 0x8($v0)
    ctx->pc = 0x4a35a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 16));
    // 0x4a35ac: 0x3c04fa00  lui         $a0, 0xFA00
    ctx->pc = 0x4a35acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64000 << 16));
    // 0x4a35b0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a35b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a35b4: 0x3c05fc00  lui         $a1, 0xFC00
    ctx->pc = 0x4a35b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64512 << 16));
    // 0x4a35b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a35bc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a35bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a35c0: 0x3c061c00  lui         $a2, 0x1C00
    ctx->pc = 0x4a35c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7168 << 16));
    // 0x4a35c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a35c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a35c8: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x4a35c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a35cc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4a35ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4a35d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4a35d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a35d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a35d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a35d8: 0xa4480148  sh          $t0, 0x148($v0)
    ctx->pc = 0x4a35d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 328), (uint16_t)GPR_U32(ctx, 8));
    // 0x4a35dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a35dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a35e0: 0xa4600030  sh          $zero, 0x30($v1)
    ctx->pc = 0x4a35e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a35e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a35e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a35e8: 0xa449000c  sh          $t1, 0xC($v0)
    ctx->pc = 0x4a35e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 9));
    // 0x4a35ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a35ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a35f0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4a35f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4a35f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a35f8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a35f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a35fc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4a35fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4a3600: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a3600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a3604: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a3604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3608: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x4a3608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4a360c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a360cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a3610: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a3610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a3614: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4a3614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4a3618: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a3618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a361c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a361cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3620: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x4a3620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x4a3624: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a3624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a3628: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a3628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a362c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4a362cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4a3630: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a3630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a3634: 0x3e00008  jr          $ra
    ctx->pc = 0x4A3634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A3638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3634u;
        // 0x4a3638: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A3634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A363Cu;
    // 0x4a363c: 0x0  nop
    ctx->pc = 0x4a363cu;
    // NOP
    ctx->pc = 0x4a3640u;
}
