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

// Function: sub_004AF610
// Address: 0x4af610 - 0x4af9c8
void sub_004AF610_0x4af610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF610_0x4af610");
#endif

    switch (ctx->pc) {
        case 0x4af644u: goto label_4af644;
        case 0x4af660u: goto label_4af660;
        case 0x4af6a0u: goto label_4af6a0;
        case 0x4af6dcu: goto label_4af6dc;
        case 0x4af7c8u: goto label_4af7c8;
        case 0x4af7d8u: goto label_4af7d8;
        case 0x4af8b8u: goto label_4af8b8;
        case 0x4af8c0u: goto label_4af8c0;
        case 0x4af8c8u: goto label_4af8c8;
        case 0x4af8d0u: goto label_4af8d0;
        case 0x4af8d8u: goto label_4af8d8;
        case 0x4af8e0u: goto label_4af8e0;
        case 0x4af8e8u: goto label_4af8e8;
        case 0x4af900u: goto label_4af900;
        case 0x4af968u: goto label_4af968;
        case 0x4af978u: goto label_4af978;
        case 0x4af988u: goto label_4af988;
        case 0x4af998u: goto label_4af998;
        default: break;
    }

    ctx->pc = 0x4af610u;

    // 0x4af610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4af610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4af614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4af614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4af618: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4af618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4af61c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4af61cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af620: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4af620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4af624: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4af624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4af628: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4af628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4af62c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4af62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4af630: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4af630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4af634: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4af634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4af638: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4af638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4af63c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4AF63Cu;
    SET_GPR_U32(ctx, 31, 0x4AF644u);
    ctx->pc = 0x4AF640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF63Cu;
    // 0x4af640: 0x267001b4  addiu       $s0, $s3, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4AF63Cu, 0x4AF644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF644u;
label_4af644:
    // 0x4af644: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4af644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4af648: 0xac620d64  sw          $v0, 0xD64($v1)
    ctx->pc = 0x4af648u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0D64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D64u, _value); } while (0);
    // 0x4af64c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4af64cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af650: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x4AF650u;
    {
        const bool branch_taken_0x4af650 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4AF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF650u;
        // 0x4af654: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af650) {
            ctx->pc = 0x4AF72Cu;
            goto label_4af72c;
        }
    }
    ctx->pc = 0x4AF658u;
    // 0x4af658: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4AF658u;
    SET_GPR_U32(ctx, 31, 0x4AF660u);
    ctx->pc = 0x4AF65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF658u;
    // 0x4af65c: 0x24118000  addiu       $s1, $zero, -0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4AF658u, 0x4AF660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF660u;
label_4af660:
    // 0x4af660: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4af660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4af664: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x4af664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4af668: 0xa6620148  sh          $v0, 0x148($s3)
    ctx->pc = 0x4af668u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 328), (uint16_t)GPR_U32(ctx, 2));
    // 0x4af66c: 0xa6630158  sh          $v1, 0x158($s3)
    ctx->pc = 0x4af66cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4af670: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4af670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af674: 0xa660015e  sh          $zero, 0x15E($s3)
    ctx->pc = 0x4af674u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4af678: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x4af678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4af67c: 0xa6600160  sh          $zero, 0x160($s3)
    ctx->pc = 0x4af67cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4af680: 0xa6600164  sh          $zero, 0x164($s3)
    ctx->pc = 0x4af680u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4af684: 0xa6600166  sh          $zero, 0x166($s3)
    ctx->pc = 0x4af684u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 358), (uint16_t)GPR_U32(ctx, 0));
    // 0x4af688: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4af688u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af68c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4af68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4af690: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4af690u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4af694: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4af694u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4af698: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4AF698u;
    SET_GPR_U32(ctx, 31, 0x4AF6A0u);
    ctx->pc = 0x4AF69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF698u;
    // 0x4af69c: 0x26100d5c  addiu       $s0, $s0, 0xD5C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4AF698u, 0x4AF6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF6A0u;
label_4af6a0:
    // 0x4af6a0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4af6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4af6a4: 0x24840d50  addiu       $a0, $a0, 0xD50
    ctx->pc = 0x4af6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3408));
    // 0x4af6a8: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x4af6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x4af6ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4af6acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0D50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D50u, _value); } while (0);
    // 0x4af6b0: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4af6b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4af6b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4af6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D50u));
    // 0x4af6b8: 0xac530140  sw          $s3, 0x140($v0)
    ctx->pc = 0x4af6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 19));
    // 0x4af6bc: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x4af6bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7F0D52u));
    // 0x4af6c0: 0xa6630168  sh          $v1, 0x168($s3)
    ctx->pc = 0x4af6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 360), (uint16_t)GPR_U32(ctx, 3));
    // 0x4af6c4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4af6c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0D50u));
    // 0x4af6c8: 0xa662016a  sh          $v0, 0x16A($s3)
    ctx->pc = 0x4af6c8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 362), (uint16_t)GPR_U32(ctx, 2));
    // 0x4af6cc: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x4af6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x4af6d0: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x4af6d0u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x7F0D50u));
    // 0x4af6d4: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4AF6D4u;
    SET_GPR_U32(ctx, 31, 0x4AF6DCu);
    ctx->pc = 0x4AF6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF6D4u;
    // 0x4af6d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4AF6D4u, 0x4AF6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF6DCu;
label_4af6dc:
    // 0x4af6dc: 0xa672000e  sh          $s2, 0xE($s3)
    ctx->pc = 0x4af6dcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 18));
    // 0x4af6e0: 0x266301b4  addiu       $v1, $s3, 0x1B4
    ctx->pc = 0x4af6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    // 0x4af6e4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4af6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4af6e8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4af6e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4af6ec: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4af6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4af6f0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4af6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4af6f4: 0xac800d30  sw          $zero, 0xD30($a0)
    ctx->pc = 0x4af6f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0D30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D30u, _value); } while (0);
    // 0x4af6f8: 0xa6600166  sh          $zero, 0x166($s3)
    ctx->pc = 0x4af6f8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 358), (uint16_t)GPR_U32(ctx, 0));
    // 0x4af6fc: 0xa6600118  sh          $zero, 0x118($s3)
    ctx->pc = 0x4af6fcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4af700: 0xa660011c  sh          $zero, 0x11C($s3)
    ctx->pc = 0x4af700u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4af704: 0xa6600120  sh          $zero, 0x120($s3)
    ctx->pc = 0x4af704u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4af708: 0xa660013a  sh          $zero, 0x13A($s3)
    ctx->pc = 0x4af708u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 314), (uint16_t)GPR_U32(ctx, 0));
    // 0x4af70c: 0xa660015e  sh          $zero, 0x15E($s3)
    ctx->pc = 0x4af70cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4af710: 0xa6600160  sh          $zero, 0x160($s3)
    ctx->pc = 0x4af710u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4af714: 0xa6600162  sh          $zero, 0x162($s3)
    ctx->pc = 0x4af714u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 354), (uint16_t)GPR_U32(ctx, 0));
    // 0x4af718: 0xa6600164  sh          $zero, 0x164($s3)
    ctx->pc = 0x4af718u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4af71c: 0xa6600130  sh          $zero, 0x130($s3)
    ctx->pc = 0x4af71cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 304), (uint16_t)GPR_U32(ctx, 0));
    // 0x4af720: 0xa6600132  sh          $zero, 0x132($s3)
    ctx->pc = 0x4af720u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 306), (uint16_t)GPR_U32(ctx, 0));
    // 0x4af724: 0xa6600134  sh          $zero, 0x134($s3)
    ctx->pc = 0x4af724u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 308), (uint16_t)GPR_U32(ctx, 0));
    // 0x4af728: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x4af728u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4af72c:
    // 0x4af72c: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4af72cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4af730: 0x96620168  lhu         $v0, 0x168($s3)
    ctx->pc = 0x4af730u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 360)));
    // 0x4af734: 0x25290d58  addiu       $t1, $t1, 0xD58
    ctx->pc = 0x4af734u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3416));
    // 0x4af738: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4af738u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4af73c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4af73cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D58u));
    // 0x4af740: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4af740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4af744: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4af744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4af748: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4af748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4af74c: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4af74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4af750: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4af750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4af754: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4af754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4af758: 0x24960d3c  addiu       $s6, $a0, 0xD3C
    ctx->pc = 0x4af758u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 3388));
    // 0x4af75c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4af75cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4af760: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4af760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4af764: 0x24b50d40  addiu       $s5, $a1, 0xD40
    ctx->pc = 0x4af764u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 3392));
    // 0x4af768: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4af768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4af76c: 0x8662016a  lh          $v0, 0x16A($s3)
    ctx->pc = 0x4af76cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 362)));
    // 0x4af770: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4af770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4af774: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x4af774u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4af778: 0x34a5046e  ori         $a1, $a1, 0x46E
    ctx->pc = 0x4af778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1134);
    // 0x4af77c: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x4af77cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4af780: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4af780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4af784: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4af784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4af788: 0x34840444  ori         $a0, $a0, 0x444
    ctx->pc = 0x4af788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1092);
    // 0x4af78c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4af78cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4af790: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4af790u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4af794: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4af794u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4af798: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4af798u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4af79c: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x4af79cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x4af7a0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4af7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af7a4: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4af7a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4af7a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4af7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af7ac: 0x24d70d60  addiu       $s7, $a2, 0xD60
    ctx->pc = 0x4af7acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 3424));
    // 0x4af7b0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4af7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af7b4: 0x267001b6  addiu       $s0, $s3, 0x1B6
    ctx->pc = 0x4af7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 438));
    // 0x4af7b8: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4af7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x4af7bc: 0xaec80000  sw          $t0, 0x0($s6)
    ctx->pc = 0x4af7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 8));
    // 0x4af7c0: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4AF7C0u;
    SET_GPR_U32(ctx, 31, 0x4AF7C8u);
    ctx->pc = 0x4AF7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF7C0u;
    // 0x4af7c4: 0xaea70000  sw          $a3, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4AF7C0u, 0x4AF7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF7C8u;
label_4af7c8:
    // 0x4af7c8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4af7c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af7cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4af7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af7d0: 0xc12564a  jal         func_495928
    ctx->pc = 0x4AF7D0u;
    SET_GPR_U32(ctx, 31, 0x4AF7D8u);
    ctx->pc = 0x4AF7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF7D0u;
    // 0x4af7d4: 0xa6620160  sh          $v0, 0x160($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4AF7D0u, 0x4AF7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF7D8u;
label_4af7d8:
    // 0x4af7d8: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x4AF7D8u;
    {
        const bool branch_taken_0x4af7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF7D8u;
        // 0x4af7dc: 0x3c11007f  lui         $s1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af7d8) {
            ctx->pc = 0x4AF998u;
            goto label_4af998;
        }
    }
    ctx->pc = 0x4AF7E0u;
    // 0x4af7e0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4af7e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af7e4: 0x26310d30  addiu       $s1, $s1, 0xD30
    ctx->pc = 0x4af7e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
    // 0x4af7e8: 0x2672015e  addiu       $s2, $s3, 0x15E
    ctx->pc = 0x4af7e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 350));
    // 0x4af7ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4af7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4af7f0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4af7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4af7f4: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4af7f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4af7f8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4af7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4af7fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4af7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4af800: 0x25290d44  addiu       $t1, $t1, 0xD44
    ctx->pc = 0x4af800u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3396));
    // 0x4af804: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4af804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4af808: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x4af808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x4af80c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4af80cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4af810: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4af810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4af814: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4af814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4af818: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4af818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af81c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4af81cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4af820: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x4af820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x4af824: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4af824u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4af828: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x4af828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x4af82c: 0x26100d34  addiu       $s0, $s0, 0xD34
    ctx->pc = 0x4af82cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3380));
    // 0x4af830: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4af830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4af834: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4af834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4af838: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4af838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4af83c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4af83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4af840: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4af840u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4af844: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4af844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4af848: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x4af848u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
    // 0x4af84c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4af84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4af850: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4af850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4af854: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4af854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4af858: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4af858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4af85c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4af85cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4af860: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4af860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4af864: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4af864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4af868: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4af868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4af86c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4af86cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4af870: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4af870u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4af874: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x4af874u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4af878: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4af878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4af87c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4af87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4af880: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x4af880u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4af884: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4af884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4af888: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4af888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4af88c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4af88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4af890: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4af890u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4af894: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4af894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4af898: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4af898u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4af89c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4af89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af8a0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4af8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4af8a4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4af8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af8a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4af8a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af8ac: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4af8acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4af8b0: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4AF8B0u;
    SET_GPR_U32(ctx, 31, 0x4AF8B8u);
    ctx->pc = 0x4AF8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF8B0u;
    // 0x4af8b4: 0xaea80000  sw          $t0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4AF8B0u, 0x4AF8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF8B8u;
label_4af8b8:
    // 0x4af8b8: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4AF8B8u;
    SET_GPR_U32(ctx, 31, 0x4AF8C0u);
    ctx->pc = 0x4AF8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF8B8u;
    // 0x4af8bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4AF8B8u, 0x4AF8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF8C0u;
label_4af8c0:
    // 0x4af8c0: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4AF8C0u;
    SET_GPR_U32(ctx, 31, 0x4AF8C8u);
    ctx->pc = 0x4AF8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF8C0u;
    // 0x4af8c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4AF8C0u, 0x4AF8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF8C8u;
label_4af8c8:
    // 0x4af8c8: 0xc12c03a  jal         func_4B00E8
    ctx->pc = 0x4AF8C8u;
    SET_GPR_U32(ctx, 31, 0x4AF8D0u);
    ctx->pc = 0x4AF8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF8C8u;
    // 0x4af8cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B00E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B00E8u, 0x4AF8C8u, 0x4AF8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF8D0u;
label_4af8d0:
    // 0x4af8d0: 0xc12c188  jal         func_4B0620
    ctx->pc = 0x4AF8D0u;
    SET_GPR_U32(ctx, 31, 0x4AF8D8u);
    ctx->pc = 0x4AF8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF8D0u;
    // 0x4af8d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0620u, 0x4AF8D0u, 0x4AF8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF8D8u;
label_4af8d8:
    // 0x4af8d8: 0xc12c27c  jal         func_4B09F0
    ctx->pc = 0x4AF8D8u;
    SET_GPR_U32(ctx, 31, 0x4AF8E0u);
    ctx->pc = 0x4AF8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF8D8u;
    // 0x4af8dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B09F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B09F0u, 0x4AF8D8u, 0x4AF8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF8E0u;
label_4af8e0:
    // 0x4af8e0: 0xc12c478  jal         func_4B11E0
    ctx->pc = 0x4AF8E0u;
    SET_GPR_U32(ctx, 31, 0x4AF8E8u);
    ctx->pc = 0x4AF8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF8E0u;
    // 0x4af8e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B11E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B11E0u, 0x4AF8E0u, 0x4AF8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF8E8u;
label_4af8e8:
    // 0x4af8e8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x4af8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4af8ec: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4af8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4af8f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4af8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af8f4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4af8f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af8f8: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4AF8F8u;
    SET_GPR_U32(ctx, 31, 0x4AF900u);
    ctx->pc = 0x4AF8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF8F8u;
    // 0x4af8fc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4AF8F8u, 0x4AF900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF900u;
label_4af900:
    // 0x4af900: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4af900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4af904: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4af904u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4af908: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4af908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4af90c: 0xa4620136  sh          $v0, 0x136($v1)
    ctx->pc = 0x4af90cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 310), (uint16_t)GPR_U32(ctx, 2));
    // 0x4af910: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4af910u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af914: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x4af914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4af918: 0xa4830138  sh          $v1, 0x138($a0)
    ctx->pc = 0x4af918u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 312), (uint16_t)GPR_U32(ctx, 3));
    // 0x4af91c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4af91cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4af920: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4af920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4af924: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4af924u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4af928: 0x10650011  beq         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4AF928u;
    {
        const bool branch_taken_0x4af928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4AF92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF928u;
        // 0x4af92c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af928) {
            ctx->pc = 0x4AF970u;
            goto label_4af970;
        }
    }
    ctx->pc = 0x4AF930u;
    // 0x4af930: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AF930u;
    {
        const bool branch_taken_0x4af930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4af930) {
            ctx->pc = 0x4AF934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AF930u;
            // 0x4af934: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AF948u;
            goto label_4af948;
        }
    }
    ctx->pc = 0x4AF938u;
    // 0x4af938: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AF938u;
    {
        const bool branch_taken_0x4af938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF938u;
        // 0x4af93c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af938) {
            ctx->pc = 0x4AF960u;
            goto label_4af960;
        }
    }
    ctx->pc = 0x4AF940u;
    // 0x4af940: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4AF940u;
    {
        const bool branch_taken_0x4af940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF940u;
        // 0x4af944: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af940) {
            ctx->pc = 0x4AF9A0u;
            goto label_4af9a0;
        }
    }
    ctx->pc = 0x4AF948u;
label_4af948:
    // 0x4af948: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4AF948u;
    {
        const bool branch_taken_0x4af948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AF94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF948u;
        // 0x4af94c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af948) {
            ctx->pc = 0x4AF980u;
            goto label_4af980;
        }
    }
    ctx->pc = 0x4AF950u;
    // 0x4af950: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4AF950u;
    {
        const bool branch_taken_0x4af950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF950u;
        // 0x4af954: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af950) {
            ctx->pc = 0x4AF990u;
            goto label_4af990;
        }
    }
    ctx->pc = 0x4AF958u;
    // 0x4af958: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4AF958u;
    {
        const bool branch_taken_0x4af958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF958u;
        // 0x4af95c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af958) {
            ctx->pc = 0x4AF9A0u;
            goto label_4af9a0;
        }
    }
    ctx->pc = 0x4AF960u;
label_4af960:
    // 0x4af960: 0xc12be72  jal         func_4AF9C8
    ctx->pc = 0x4AF960u;
    SET_GPR_U32(ctx, 31, 0x4AF968u);
    ctx->pc = 0x4AF964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF960u;
    // 0x4af964: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AF9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF9C8u, 0x4AF960u, 0x4AF968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF968u;
label_4af968:
    // 0x4af968: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4AF968u;
    {
        const bool branch_taken_0x4af968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF968u;
        // 0x4af96c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af968) {
            ctx->pc = 0x4AF99Cu;
            goto label_4af99c;
        }
    }
    ctx->pc = 0x4AF970u;
label_4af970:
    // 0x4af970: 0xc12be8a  jal         func_4AFA28
    ctx->pc = 0x4AF970u;
    SET_GPR_U32(ctx, 31, 0x4AF978u);
    ctx->pc = 0x4AF974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF970u;
    // 0x4af974: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFA28u, 0x4AF970u, 0x4AF978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF978u;
label_4af978:
    // 0x4af978: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4AF978u;
    {
        const bool branch_taken_0x4af978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF978u;
        // 0x4af97c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af978) {
            ctx->pc = 0x4AF99Cu;
            goto label_4af99c;
        }
    }
    ctx->pc = 0x4AF980u;
label_4af980:
    // 0x4af980: 0xc12beae  jal         func_4AFAB8
    ctx->pc = 0x4AF980u;
    SET_GPR_U32(ctx, 31, 0x4AF988u);
    ctx->pc = 0x4AF984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF980u;
    // 0x4af984: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFAB8u, 0x4AF980u, 0x4AF988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF988u;
label_4af988:
    // 0x4af988: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AF988u;
    {
        const bool branch_taken_0x4af988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF988u;
        // 0x4af98c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af988) {
            ctx->pc = 0x4AF99Cu;
            goto label_4af99c;
        }
    }
    ctx->pc = 0x4AF990u;
label_4af990:
    // 0x4af990: 0xc12bec6  jal         func_4AFB18
    ctx->pc = 0x4AF990u;
    SET_GPR_U32(ctx, 31, 0x4AF998u);
    ctx->pc = 0x4AF994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF990u;
    // 0x4af994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFB18u, 0x4AF990u, 0x4AF998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF998u;
label_4af998:
    // 0x4af998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4af998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4af99c:
    // 0x4af99c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4af99cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4af9a0:
    // 0x4af9a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4af9a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4af9a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4af9a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4af9a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4af9a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4af9ac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4af9acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4af9b0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4af9b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4af9b4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4af9b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4af9b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4af9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4af9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF9BCu;
        // 0x4af9c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF9C4u;
    // 0x4af9c4: 0x0  nop
    ctx->pc = 0x4af9c4u;
    // NOP
    ctx->pc = 0x4af9c8u;
}
