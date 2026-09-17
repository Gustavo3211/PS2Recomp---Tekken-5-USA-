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

// Function: sub_004BC6F0
// Address: 0x4bc6f0 - 0x4bc8f8
void sub_004BC6F0_0x4bc6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BC6F0_0x4bc6f0");
#endif

    switch (ctx->pc) {
        case 0x4bc70cu: goto label_4bc70c;
        case 0x4bc728u: goto label_4bc728;
        case 0x4bc730u: goto label_4bc730;
        case 0x4bc848u: goto label_4bc848;
        case 0x4bc870u: goto label_4bc870;
        case 0x4bc8c0u: goto label_4bc8c0;
        case 0x4bc8d0u: goto label_4bc8d0;
        case 0x4bc8e0u: goto label_4bc8e0;
        default: break;
    }

    ctx->pc = 0x4bc6f0u;

    // 0x4bc6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4bc6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4bc6f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bc6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bc6f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bc6f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc6fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bc6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bc700: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4bc700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4bc704: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4BC704u;
    SET_GPR_U32(ctx, 31, 0x4BC70Cu);
    ctx->pc = 0x4BC708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC704u;
    // 0x4bc708: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4BC704u, 0x4BC70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC70Cu;
label_4bc70c:
    // 0x4bc70c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bc70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bc710: 0xac620e30  sw          $v0, 0xE30($v1)
    ctx->pc = 0x4bc710u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0E30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0E30u, _value); } while (0);
    // 0x4bc714: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4bc714u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bc718: 0x4420059  bltzl       $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x4BC718u;
    {
        const bool branch_taken_0x4bc718 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4bc718) {
            ctx->pc = 0x4BC71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BC718u;
            // 0x4bc71c: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BC880u;
            goto label_4bc880;
        }
    }
    ctx->pc = 0x4BC720u;
    // 0x4bc720: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4BC720u;
    SET_GPR_U32(ctx, 31, 0x4BC728u);
    ctx->pc = 0x4BC724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC720u;
    // 0x4bc724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4BC720u, 0x4BC728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC728u;
label_4bc728:
    // 0x4bc728: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4BC728u;
    SET_GPR_U32(ctx, 31, 0x4BC730u);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4BC728u, 0x4BC730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC730u;
label_4bc730:
    // 0x4bc730: 0x2403047f  addiu       $v1, $zero, 0x47F
    ctx->pc = 0x4bc730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1151));
    // 0x4bc734: 0x240400b6  addiu       $a0, $zero, 0xB6
    ctx->pc = 0x4bc734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    // 0x4bc738: 0x24050111  addiu       $a1, $zero, 0x111
    ctx->pc = 0x4bc738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x4bc73c: 0xa602015e  sh          $v0, 0x15E($s0)
    ctx->pc = 0x4bc73cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bc740: 0xa6040136  sh          $a0, 0x136($s0)
    ctx->pc = 0x4bc740u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 310), (uint16_t)GPR_U32(ctx, 4));
    // 0x4bc744: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4bc744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4bc748: 0xa6050138  sh          $a1, 0x138($s0)
    ctx->pc = 0x4bc748u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 312), (uint16_t)GPR_U32(ctx, 5));
    // 0x4bc74c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4bc74cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4bc750: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x4bc750u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bc754: 0x24c60e18  addiu       $a2, $a2, 0xE18
    ctx->pc = 0x4bc754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3608));
    // 0x4bc758: 0x860201be  lh          $v0, 0x1BE($s0)
    ctx->pc = 0x4bc758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4bc75c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4bc75cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4bc760: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4bc760u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E18u));
    // 0x4bc764: 0x24840e34  addiu       $a0, $a0, 0xE34
    ctx->pc = 0x4bc764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3636));
    // 0x4bc768: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4bc768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4bc76c: 0x26090120  addiu       $t1, $s0, 0x120
    ctx->pc = 0x4bc76cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x4bc770: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc774: 0x260a012c  addiu       $t2, $s0, 0x12C
    ctx->pc = 0x4bc774u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x4bc778: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bc778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc77c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4bc77cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4bc780: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc784: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4bc784u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bc788: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4bc788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4bc78c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4bc78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4bc790: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bc790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc794: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4bc794u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4bc798: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4bc798u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bc79c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bc79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bc7a0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4bc7a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4bc7a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4bc7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4bc7a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4bc7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4bc7ac: 0x24216fc8  addiu       $at, $at, 0x6FC8
    ctx->pc = 0x4bc7acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28616));
    // 0x4bc7b0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4bc7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4bc7b4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4bc7b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4bc7b8: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x4bc7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bc7bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4bc7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4bc7c0: 0xa6030118  sh          $v1, 0x118($s0)
    ctx->pc = 0x4bc7c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bc7c4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4bc7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x4bc7c8: 0xa600011c  sh          $zero, 0x11C($s0)
    ctx->pc = 0x4bc7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4bc7cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4bc7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bc7d0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4bc7d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4bc7d4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bc7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bc7d8: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x4bc7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bc7dc: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x4bc7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4bc7e0: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x4bc7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bc7e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4bc7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4bc7e8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4bc7e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4bc7ec: 0xa6030160  sh          $v1, 0x160($s0)
    ctx->pc = 0x4bc7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bc7f0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4bc7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x4bc7f4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4bc7f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bc7f8: 0xa6020162  sh          $v0, 0x162($s0)
    ctx->pc = 0x4bc7f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bc7fc: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x4bc7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x4bc800: 0xa600002e  sh          $zero, 0x2E($s0)
    ctx->pc = 0x4bc800u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x4bc804: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4bc804u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4bc808: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4bc808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bc80c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bc80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bc810: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bc810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bc814: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4bc814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4bc818: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bc818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bc81c: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4bc81cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4bc820: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4bc820u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4bc824: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4bc824u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bc828: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4bc828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4bc82c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4bc82cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bc830: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4bc830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bc834: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bc834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bc838: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4bc838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4bc83c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4bc83cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4bc840: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x4BC840u;
    SET_GPR_U32(ctx, 31, 0x4BC848u);
    ctx->pc = 0x4BC844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC840u;
    // 0x4bc844: 0x84c40000  lh          $a0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4BC840u, 0x4BC848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC848u;
label_4bc848:
    // 0x4bc848: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BC848u;
    {
        const bool branch_taken_0x4bc848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BC84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC848u;
        // 0x4bc84c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc848) {
            ctx->pc = 0x4BC868u;
            goto label_4bc868;
        }
    }
    ctx->pc = 0x4BC850u;
    // 0x4bc850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bc850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bc854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bc854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bc858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bc858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bc85c: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4BC85Cu;
    ctx->pc = 0x4BC860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC85Cu;
    // 0x4bc860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4BC864u;
    // 0x4bc864: 0x0  nop
    ctx->pc = 0x4bc864u;
    // NOP
label_4bc868:
    // 0x4bc868: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4BC868u;
    SET_GPR_U32(ctx, 31, 0x4BC870u);
    ctx->pc = 0x4BC86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC868u;
    // 0x4bc86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4BC868u, 0x4BC870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC870u;
label_4bc870:
    // 0x4bc870: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x4bc870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x4bc874: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4bc874u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bc878: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4bc878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4bc87c: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4bc87cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4bc880:
    // 0x4bc880: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4bc880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4bc884: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4BC884u;
    {
        const bool branch_taken_0x4bc884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4BC888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC884u;
        // 0x4bc888: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc884) {
            ctx->pc = 0x4BC8C8u;
            goto label_4bc8c8;
        }
    }
    ctx->pc = 0x4BC88Cu;
    // 0x4bc88c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BC88Cu;
    {
        const bool branch_taken_0x4bc88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bc88c) {
            ctx->pc = 0x4BC890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BC88Cu;
            // 0x4bc890: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BC8A8u;
            goto label_4bc8a8;
        }
    }
    ctx->pc = 0x4BC894u;
    // 0x4bc894: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BC894u;
    {
        const bool branch_taken_0x4bc894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bc894) {
            ctx->pc = 0x4BC8B8u;
            goto label_4bc8b8;
        }
    }
    ctx->pc = 0x4BC89Cu;
    // 0x4bc89c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4BC89Cu;
    {
        const bool branch_taken_0x4bc89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC89Cu;
        // 0x4bc8a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc89c) {
            ctx->pc = 0x4BC8E4u;
            goto label_4bc8e4;
        }
    }
    ctx->pc = 0x4BC8A4u;
    // 0x4bc8a4: 0x0  nop
    ctx->pc = 0x4bc8a4u;
    // NOP
label_4bc8a8:
    // 0x4bc8a8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4BC8A8u;
    {
        const bool branch_taken_0x4bc8a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4bc8a8) {
            ctx->pc = 0x4BC8D8u;
            goto label_4bc8d8;
        }
    }
    ctx->pc = 0x4BC8B0u;
    // 0x4bc8b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4BC8B0u;
    {
        const bool branch_taken_0x4bc8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC8B0u;
        // 0x4bc8b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc8b0) {
            ctx->pc = 0x4BC8E4u;
            goto label_4bc8e4;
        }
    }
    ctx->pc = 0x4BC8B8u;
label_4bc8b8:
    // 0x4bc8b8: 0xc12f23e  jal         func_4BC8F8
    ctx->pc = 0x4BC8B8u;
    SET_GPR_U32(ctx, 31, 0x4BC8C0u);
    ctx->pc = 0x4BC8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC8B8u;
    // 0x4bc8bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BC8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BC8F8u, 0x4BC8B8u, 0x4BC8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC8C0u;
label_4bc8c0:
    // 0x4bc8c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4BC8C0u;
    {
        const bool branch_taken_0x4bc8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC8C0u;
        // 0x4bc8c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc8c0) {
            ctx->pc = 0x4BC8E4u;
            goto label_4bc8e4;
        }
    }
    ctx->pc = 0x4BC8C8u;
label_4bc8c8:
    // 0x4bc8c8: 0xc12f4fa  jal         func_4BD3E8
    ctx->pc = 0x4BC8C8u;
    SET_GPR_U32(ctx, 31, 0x4BC8D0u);
    ctx->pc = 0x4BC8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC8C8u;
    // 0x4bc8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BD3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BD3E8u, 0x4BC8C8u, 0x4BC8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC8D0u;
label_4bc8d0:
    // 0x4bc8d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4BC8D0u;
    {
        const bool branch_taken_0x4bc8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BC8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC8D0u;
        // 0x4bc8d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bc8d0) {
            ctx->pc = 0x4BC8E4u;
            goto label_4bc8e4;
        }
    }
    ctx->pc = 0x4BC8D8u;
label_4bc8d8:
    // 0x4bc8d8: 0xc12f526  jal         func_4BD498
    ctx->pc = 0x4BC8D8u;
    SET_GPR_U32(ctx, 31, 0x4BC8E0u);
    ctx->pc = 0x4BC8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BC8D8u;
    // 0x4bc8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BD498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BD498u, 0x4BC8D8u, 0x4BC8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BC8E0u;
label_4bc8e0:
    // 0x4bc8e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bc8e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4bc8e4:
    // 0x4bc8e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bc8e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bc8e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bc8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bc8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4BC8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BC8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BC8ECu;
        // 0x4bc8f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BC8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BC8F4u;
    // 0x4bc8f4: 0x0  nop
    ctx->pc = 0x4bc8f4u;
    // NOP
    ctx->pc = 0x4bc8f8u;
}
