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

// Function: sub_004B3468
// Address: 0x4b3468 - 0x4b3820
void sub_004B3468_0x4b3468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3468_0x4b3468");
#endif

    switch (ctx->pc) {
        case 0x4b349cu: goto label_4b349c;
        case 0x4b34b8u: goto label_4b34b8;
        case 0x4b34f0u: goto label_4b34f0;
        case 0x4b352cu: goto label_4b352c;
        case 0x4b3618u: goto label_4b3618;
        case 0x4b3628u: goto label_4b3628;
        case 0x4b3708u: goto label_4b3708;
        case 0x4b3710u: goto label_4b3710;
        case 0x4b3718u: goto label_4b3718;
        case 0x4b3720u: goto label_4b3720;
        case 0x4b3728u: goto label_4b3728;
        case 0x4b3740u: goto label_4b3740;
        case 0x4b37c0u: goto label_4b37c0;
        case 0x4b37d0u: goto label_4b37d0;
        case 0x4b37e0u: goto label_4b37e0;
        case 0x4b37f0u: goto label_4b37f0;
        default: break;
    }

    ctx->pc = 0x4b3468u;

    // 0x4b3468: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b3468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b346c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b346cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b3470: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b3470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b3474: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4b3474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3478: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b3478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b347c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b347cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b3480: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4b3480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4b3484: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4b3484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4b3488: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4b3488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4b348c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4b348cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4b3490: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b3490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4b3494: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4B3494u;
    SET_GPR_U32(ctx, 31, 0x4B349Cu);
    ctx->pc = 0x4B3498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3494u;
    // 0x4b3498: 0x267001b4  addiu       $s0, $s3, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4B3494u, 0x4B349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B349Cu;
label_4b349c:
    // 0x4b349c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b349cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b34a0: 0xac620d64  sw          $v0, 0xD64($v1)
    ctx->pc = 0x4b34a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0D64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D64u, _value); } while (0);
    // 0x4b34a4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b34a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b34a8: 0x4400034  bltz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x4B34A8u;
    {
        const bool branch_taken_0x4b34a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B34A8u;
        // 0x4b34ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b34a8) {
            ctx->pc = 0x4B357Cu;
            goto label_4b357c;
        }
    }
    ctx->pc = 0x4B34B0u;
    // 0x4b34b0: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4B34B0u;
    SET_GPR_U32(ctx, 31, 0x4B34B8u);
    ctx->pc = 0x4B34B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B34B0u;
    // 0x4b34b4: 0x24118000  addiu       $s1, $zero, -0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4B34B0u, 0x4B34B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B34B8u;
label_4b34b8:
    // 0x4b34b8: 0xa660015e  sh          $zero, 0x15E($s3)
    ctx->pc = 0x4b34b8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b34bc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x4b34bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4b34c0: 0xa6600160  sh          $zero, 0x160($s3)
    ctx->pc = 0x4b34c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b34c4: 0xa6620158  sh          $v0, 0x158($s3)
    ctx->pc = 0x4b34c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 344), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b34c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b34c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b34cc: 0xa6600164  sh          $zero, 0x164($s3)
    ctx->pc = 0x4b34ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b34d0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x4b34d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b34d4: 0xa6600166  sh          $zero, 0x166($s3)
    ctx->pc = 0x4b34d4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 358), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b34d8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b34d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b34dc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b34dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b34e0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4b34e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b34e4: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4b34e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4b34e8: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4B34E8u;
    SET_GPR_U32(ctx, 31, 0x4B34F0u);
    ctx->pc = 0x4B34ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B34E8u;
    // 0x4b34ec: 0x26100d5c  addiu       $s0, $s0, 0xD5C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4B34E8u, 0x4B34F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B34F0u;
label_4b34f0:
    // 0x4b34f0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b34f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b34f4: 0x24840d50  addiu       $a0, $a0, 0xD50
    ctx->pc = 0x4b34f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3408));
    // 0x4b34f8: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x4b34f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x4b34fc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b34fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0D50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D50u, _value); } while (0);
    // 0x4b3500: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4b3500u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b3504: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b3504u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D50u));
    // 0x4b3508: 0xac530140  sw          $s3, 0x140($v0)
    ctx->pc = 0x4b3508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 19));
    // 0x4b350c: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x4b350cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7F0D52u));
    // 0x4b3510: 0xa6630168  sh          $v1, 0x168($s3)
    ctx->pc = 0x4b3510u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 360), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b3514: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b3514u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0D50u));
    // 0x4b3518: 0xa662016a  sh          $v0, 0x16A($s3)
    ctx->pc = 0x4b3518u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 362), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b351c: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x4b351cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x4b3520: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x4b3520u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x7F0D50u));
    // 0x4b3524: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4B3524u;
    SET_GPR_U32(ctx, 31, 0x4B352Cu);
    ctx->pc = 0x4B3528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3524u;
    // 0x4b3528: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4B3524u, 0x4B352Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B352Cu;
label_4b352c:
    // 0x4b352c: 0xa672000e  sh          $s2, 0xE($s3)
    ctx->pc = 0x4b352cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 18));
    // 0x4b3530: 0x266301b4  addiu       $v1, $s3, 0x1B4
    ctx->pc = 0x4b3530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    // 0x4b3534: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b3534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b3538: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b3538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b353c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b353cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b3540: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b3540u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b3544: 0xac800d30  sw          $zero, 0xD30($a0)
    ctx->pc = 0x4b3544u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0D30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D30u, _value); } while (0);
    // 0x4b3548: 0xa6600166  sh          $zero, 0x166($s3)
    ctx->pc = 0x4b3548u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 358), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b354c: 0xa6600118  sh          $zero, 0x118($s3)
    ctx->pc = 0x4b354cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b3550: 0xa660011c  sh          $zero, 0x11C($s3)
    ctx->pc = 0x4b3550u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b3554: 0xa6600120  sh          $zero, 0x120($s3)
    ctx->pc = 0x4b3554u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b3558: 0xa660013a  sh          $zero, 0x13A($s3)
    ctx->pc = 0x4b3558u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 314), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b355c: 0xa660015e  sh          $zero, 0x15E($s3)
    ctx->pc = 0x4b355cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b3560: 0xa6600160  sh          $zero, 0x160($s3)
    ctx->pc = 0x4b3560u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b3564: 0xa6600162  sh          $zero, 0x162($s3)
    ctx->pc = 0x4b3564u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 354), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b3568: 0xa6600164  sh          $zero, 0x164($s3)
    ctx->pc = 0x4b3568u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b356c: 0xa6600130  sh          $zero, 0x130($s3)
    ctx->pc = 0x4b356cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 304), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b3570: 0xa6600132  sh          $zero, 0x132($s3)
    ctx->pc = 0x4b3570u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 306), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b3574: 0xa6600134  sh          $zero, 0x134($s3)
    ctx->pc = 0x4b3574u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 308), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b3578: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x4b3578u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b357c:
    // 0x4b357c: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4b357cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4b3580: 0x96620168  lhu         $v0, 0x168($s3)
    ctx->pc = 0x4b3580u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 360)));
    // 0x4b3584: 0x25290d58  addiu       $t1, $t1, 0xD58
    ctx->pc = 0x4b3584u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3416));
    // 0x4b3588: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4b3588u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4b358c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4b358cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D58u));
    // 0x4b3590: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b3590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b3594: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b3594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b3598: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b3598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b359c: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4b359cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4b35a0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b35a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b35a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b35a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b35a8: 0x24960d3c  addiu       $s6, $a0, 0xD3C
    ctx->pc = 0x4b35a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 3388));
    // 0x4b35ac: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4b35acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4b35b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b35b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b35b4: 0x24b50d40  addiu       $s5, $a1, 0xD40
    ctx->pc = 0x4b35b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 3392));
    // 0x4b35b8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4b35b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4b35bc: 0x8662016a  lh          $v0, 0x16A($s3)
    ctx->pc = 0x4b35bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 362)));
    // 0x4b35c0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b35c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b35c4: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x4b35c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b35c8: 0x34a5046f  ori         $a1, $a1, 0x46F
    ctx->pc = 0x4b35c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1135);
    // 0x4b35cc: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x4b35ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b35d0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4b35d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4b35d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b35d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b35d8: 0x34840445  ori         $a0, $a0, 0x445
    ctx->pc = 0x4b35d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1093);
    // 0x4b35dc: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4b35dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4b35e0: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4b35e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4b35e4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b35e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b35e8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b35e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b35ec: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x4b35ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x4b35f0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4b35f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b35f4: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4b35f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4b35f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b35f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b35fc: 0x24d70d60  addiu       $s7, $a2, 0xD60
    ctx->pc = 0x4b35fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 3424));
    // 0x4b3600: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4b3600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3604: 0x267101b6  addiu       $s1, $s3, 0x1B6
    ctx->pc = 0x4b3604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 438));
    // 0x4b3608: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4b3608u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x4b360c: 0xaec80000  sw          $t0, 0x0($s6)
    ctx->pc = 0x4b360cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 8));
    // 0x4b3610: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4B3610u;
    SET_GPR_U32(ctx, 31, 0x4B3618u);
    ctx->pc = 0x4B3614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3610u;
    // 0x4b3614: 0xaea70000  sw          $a3, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4B3610u, 0x4B3618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3618u;
label_4b3618:
    // 0x4b3618: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b3618u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b361c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b361cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3620: 0xc12564a  jal         func_495928
    ctx->pc = 0x4B3620u;
    SET_GPR_U32(ctx, 31, 0x4B3628u);
    ctx->pc = 0x4B3624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3620u;
    // 0x4b3624: 0xa6620160  sh          $v0, 0x160($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4B3620u, 0x4B3628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3628u;
label_4b3628:
    // 0x4b3628: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x4B3628u;
    {
        const bool branch_taken_0x4b3628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3628u;
        // 0x4b362c: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3628) {
            ctx->pc = 0x4B37F0u;
            goto label_4b37f0;
        }
    }
    ctx->pc = 0x4B3630u;
    // 0x4b3630: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4b3630u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b3634: 0x26100d30  addiu       $s0, $s0, 0xD30
    ctx->pc = 0x4b3634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x4b3638: 0x2672015e  addiu       $s2, $s3, 0x15E
    ctx->pc = 0x4b3638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 350));
    // 0x4b363c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b363cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b3640: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4b3640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4b3644: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4b3644u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4b3648: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4b3648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4b364c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b364cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3650: 0x25290d44  addiu       $t1, $t1, 0xD44
    ctx->pc = 0x4b3650u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3396));
    // 0x4b3654: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3658: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x4b3658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x4b365c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b365cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b3660: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3664: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b3664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3668: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4b3668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b366c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b366cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b3670: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x4b3670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x4b3674: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4b3674u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4b3678: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x4b3678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x4b367c: 0x26310d34  addiu       $s1, $s1, 0xD34
    ctx->pc = 0x4b367cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3380));
    // 0x4b3680: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4b3680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4b3684: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3688: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b3688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b368c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b368cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3690: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b3690u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b3694: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b3694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b3698: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x4b3698u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
    // 0x4b369c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4b369cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4b36a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b36a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b36a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b36a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b36a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b36a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b36ac: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b36acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b36b0: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4b36b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4b36b4: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4b36b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4b36b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b36b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b36bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b36bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b36c0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b36c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b36c4: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4b36c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b36c8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4b36c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b36cc: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4b36ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b36d0: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x4b36d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b36d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b36d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b36d8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4b36d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4b36dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b36dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b36e0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b36e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b36e4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4b36e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4b36e8: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4b36e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4b36ec: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4b36ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b36f0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4b36f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4b36f4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4b36f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b36f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4b36f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b36fc: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4b36fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4b3700: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4B3700u;
    SET_GPR_U32(ctx, 31, 0x4B3708u);
    ctx->pc = 0x4B3704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3700u;
    // 0x4b3704: 0xaea80000  sw          $t0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4B3700u, 0x4B3708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3708u;
label_4b3708:
    // 0x4b3708: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4B3708u;
    SET_GPR_U32(ctx, 31, 0x4B3710u);
    ctx->pc = 0x4B370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3708u;
    // 0x4b370c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4B3708u, 0x4B3710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3710u;
label_4b3710:
    // 0x4b3710: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4B3710u;
    SET_GPR_U32(ctx, 31, 0x4B3718u);
    ctx->pc = 0x4B3714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3710u;
    // 0x4b3714: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4B3710u, 0x4B3718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3718u;
label_4b3718:
    // 0x4b3718: 0xc12c188  jal         func_4B0620
    ctx->pc = 0x4B3718u;
    SET_GPR_U32(ctx, 31, 0x4B3720u);
    ctx->pc = 0x4B371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3718u;
    // 0x4b371c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0620u, 0x4B3718u, 0x4B3720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3720u;
label_4b3720:
    // 0x4b3720: 0xc12c62a  jal         func_4B18A8
    ctx->pc = 0x4B3720u;
    SET_GPR_U32(ctx, 31, 0x4B3728u);
    ctx->pc = 0x4B3724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3720u;
    // 0x4b3724: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B18A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B18A8u, 0x4B3720u, 0x4B3728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3728u;
label_4b3728:
    // 0x4b3728: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x4b3728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b372c: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4b372cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b3730: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4b3730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3734: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4b3734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3738: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4B3738u;
    SET_GPR_U32(ctx, 31, 0x4B3740u);
    ctx->pc = 0x4B373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3738u;
    // 0x4b373c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4B3738u, 0x4B3740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3740u;
label_4b3740:
    // 0x4b3740: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x4b3740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b3744: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b3744u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b3748: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b3748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b374c: 0xa4820136  sh          $v0, 0x136($a0)
    ctx->pc = 0x4b374cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 310), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b3750: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4b3750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b3754: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b3754u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b3758: 0xa4620138  sh          $v0, 0x138($v1)
    ctx->pc = 0x4b3758u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 312), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b375c: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x4b375cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b3760: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b3760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b3764: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x4b3764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x4b3768: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b376c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4b376cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4b3770: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b3770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b3774: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b3774u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b3778: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b3778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b377c: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4b377cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b3780: 0x10650011  beq         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B3780u;
    {
        const bool branch_taken_0x4b3780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4B3784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3780u;
        // 0x4b3784: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3780) {
            ctx->pc = 0x4B37C8u;
            goto label_4b37c8;
        }
    }
    ctx->pc = 0x4B3788u;
    // 0x4b3788: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B3788u;
    {
        const bool branch_taken_0x4b3788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3788) {
            ctx->pc = 0x4B378Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B3788u;
            // 0x4b378c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B37A0u;
            goto label_4b37a0;
        }
    }
    ctx->pc = 0x4B3790u;
    // 0x4b3790: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B3790u;
    {
        const bool branch_taken_0x4b3790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3790u;
        // 0x4b3794: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3790) {
            ctx->pc = 0x4B37B8u;
            goto label_4b37b8;
        }
    }
    ctx->pc = 0x4B3798u;
    // 0x4b3798: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4B3798u;
    {
        const bool branch_taken_0x4b3798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3798u;
        // 0x4b379c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3798) {
            ctx->pc = 0x4B37F8u;
            goto label_4b37f8;
        }
    }
    ctx->pc = 0x4B37A0u;
label_4b37a0:
    // 0x4b37a0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B37A0u;
    {
        const bool branch_taken_0x4b37a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B37A0u;
        // 0x4b37a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b37a0) {
            ctx->pc = 0x4B37D8u;
            goto label_4b37d8;
        }
    }
    ctx->pc = 0x4B37A8u;
    // 0x4b37a8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4B37A8u;
    {
        const bool branch_taken_0x4b37a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B37ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B37A8u;
        // 0x4b37ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b37a8) {
            ctx->pc = 0x4B37E8u;
            goto label_4b37e8;
        }
    }
    ctx->pc = 0x4B37B0u;
    // 0x4b37b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4B37B0u;
    {
        const bool branch_taken_0x4b37b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B37B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B37B0u;
        // 0x4b37b4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b37b0) {
            ctx->pc = 0x4B37F8u;
            goto label_4b37f8;
        }
    }
    ctx->pc = 0x4B37B8u;
label_4b37b8:
    // 0x4b37b8: 0xc12ce08  jal         func_4B3820
    ctx->pc = 0x4B37B8u;
    SET_GPR_U32(ctx, 31, 0x4B37C0u);
    ctx->pc = 0x4B37BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B37B8u;
    // 0x4b37bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3820u, 0x4B37B8u, 0x4B37C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B37C0u;
label_4b37c0:
    // 0x4b37c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4B37C0u;
    {
        const bool branch_taken_0x4b37c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B37C0u;
        // 0x4b37c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b37c0) {
            ctx->pc = 0x4B37F4u;
            goto label_4b37f4;
        }
    }
    ctx->pc = 0x4B37C8u;
label_4b37c8:
    // 0x4b37c8: 0xc12ce20  jal         func_4B3880
    ctx->pc = 0x4B37C8u;
    SET_GPR_U32(ctx, 31, 0x4B37D0u);
    ctx->pc = 0x4B37CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B37C8u;
    // 0x4b37cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3880u, 0x4B37C8u, 0x4B37D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B37D0u;
label_4b37d0:
    // 0x4b37d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B37D0u;
    {
        const bool branch_taken_0x4b37d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B37D0u;
        // 0x4b37d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b37d0) {
            ctx->pc = 0x4B37F4u;
            goto label_4b37f4;
        }
    }
    ctx->pc = 0x4B37D8u;
label_4b37d8:
    // 0x4b37d8: 0xc12ce44  jal         func_4B3910
    ctx->pc = 0x4B37D8u;
    SET_GPR_U32(ctx, 31, 0x4B37E0u);
    ctx->pc = 0x4B37DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B37D8u;
    // 0x4b37dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3910u, 0x4B37D8u, 0x4B37E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B37E0u;
label_4b37e0:
    // 0x4b37e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B37E0u;
    {
        const bool branch_taken_0x4b37e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B37E0u;
        // 0x4b37e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b37e0) {
            ctx->pc = 0x4B37F4u;
            goto label_4b37f4;
        }
    }
    ctx->pc = 0x4B37E8u;
label_4b37e8:
    // 0x4b37e8: 0xc12ce5c  jal         func_4B3970
    ctx->pc = 0x4B37E8u;
    SET_GPR_U32(ctx, 31, 0x4B37F0u);
    ctx->pc = 0x4B37ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B37E8u;
    // 0x4b37ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3970u, 0x4B37E8u, 0x4B37F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B37F0u;
label_4b37f0:
    // 0x4b37f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b37f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b37f4:
    // 0x4b37f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b37f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4b37f8:
    // 0x4b37f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b37f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b37fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b37fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b3800: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b3800u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b3804: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b3804u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b3808: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b3808u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b380c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b380cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b3810: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b3810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b3814: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3814u;
        // 0x4b3818: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B381Cu;
    // 0x4b381c: 0x0  nop
    ctx->pc = 0x4b381cu;
    // NOP
    ctx->pc = 0x4b3820u;
}
