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

// Function: sub_004D8580
// Address: 0x4d8580 - 0x4d8788
void sub_004D8580_0x4d8580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D8580_0x4d8580");
#endif

    switch (ctx->pc) {
        case 0x4d8580u: goto label_4d8580;
        case 0x4d8584u: goto label_4d8584;
        case 0x4d8588u: goto label_4d8588;
        case 0x4d858cu: goto label_4d858c;
        case 0x4d8590u: goto label_4d8590;
        case 0x4d8594u: goto label_4d8594;
        case 0x4d8598u: goto label_4d8598;
        case 0x4d859cu: goto label_4d859c;
        case 0x4d85a0u: goto label_4d85a0;
        case 0x4d85a4u: goto label_4d85a4;
        case 0x4d85a8u: goto label_4d85a8;
        case 0x4d85acu: goto label_4d85ac;
        case 0x4d85b0u: goto label_4d85b0;
        case 0x4d85b4u: goto label_4d85b4;
        case 0x4d85b8u: goto label_4d85b8;
        case 0x4d85bcu: goto label_4d85bc;
        case 0x4d85c0u: goto label_4d85c0;
        case 0x4d85c4u: goto label_4d85c4;
        case 0x4d85c8u: goto label_4d85c8;
        case 0x4d85ccu: goto label_4d85cc;
        case 0x4d85d0u: goto label_4d85d0;
        case 0x4d85d4u: goto label_4d85d4;
        case 0x4d85d8u: goto label_4d85d8;
        case 0x4d85dcu: goto label_4d85dc;
        case 0x4d85e0u: goto label_4d85e0;
        case 0x4d85e4u: goto label_4d85e4;
        case 0x4d85e8u: goto label_4d85e8;
        case 0x4d85ecu: goto label_4d85ec;
        case 0x4d85f0u: goto label_4d85f0;
        case 0x4d85f4u: goto label_4d85f4;
        case 0x4d85f8u: goto label_4d85f8;
        case 0x4d85fcu: goto label_4d85fc;
        case 0x4d8600u: goto label_4d8600;
        case 0x4d8604u: goto label_4d8604;
        case 0x4d8608u: goto label_4d8608;
        case 0x4d860cu: goto label_4d860c;
        case 0x4d8610u: goto label_4d8610;
        case 0x4d8614u: goto label_4d8614;
        case 0x4d8618u: goto label_4d8618;
        case 0x4d861cu: goto label_4d861c;
        case 0x4d8620u: goto label_4d8620;
        case 0x4d8624u: goto label_4d8624;
        case 0x4d8628u: goto label_4d8628;
        case 0x4d862cu: goto label_4d862c;
        case 0x4d8630u: goto label_4d8630;
        case 0x4d8634u: goto label_4d8634;
        case 0x4d8638u: goto label_4d8638;
        case 0x4d863cu: goto label_4d863c;
        case 0x4d8640u: goto label_4d8640;
        case 0x4d8644u: goto label_4d8644;
        case 0x4d8648u: goto label_4d8648;
        case 0x4d864cu: goto label_4d864c;
        case 0x4d8650u: goto label_4d8650;
        case 0x4d8654u: goto label_4d8654;
        case 0x4d8658u: goto label_4d8658;
        case 0x4d865cu: goto label_4d865c;
        case 0x4d8660u: goto label_4d8660;
        case 0x4d8664u: goto label_4d8664;
        case 0x4d8668u: goto label_4d8668;
        case 0x4d866cu: goto label_4d866c;
        case 0x4d8670u: goto label_4d8670;
        case 0x4d8674u: goto label_4d8674;
        case 0x4d8678u: goto label_4d8678;
        case 0x4d867cu: goto label_4d867c;
        case 0x4d8680u: goto label_4d8680;
        case 0x4d8684u: goto label_4d8684;
        case 0x4d8688u: goto label_4d8688;
        case 0x4d868cu: goto label_4d868c;
        case 0x4d8690u: goto label_4d8690;
        case 0x4d8694u: goto label_4d8694;
        case 0x4d8698u: goto label_4d8698;
        case 0x4d869cu: goto label_4d869c;
        case 0x4d86a0u: goto label_4d86a0;
        case 0x4d86a4u: goto label_4d86a4;
        case 0x4d86a8u: goto label_4d86a8;
        case 0x4d86acu: goto label_4d86ac;
        case 0x4d86b0u: goto label_4d86b0;
        case 0x4d86b4u: goto label_4d86b4;
        case 0x4d86b8u: goto label_4d86b8;
        case 0x4d86bcu: goto label_4d86bc;
        case 0x4d86c0u: goto label_4d86c0;
        case 0x4d86c4u: goto label_4d86c4;
        case 0x4d86c8u: goto label_4d86c8;
        case 0x4d86ccu: goto label_4d86cc;
        case 0x4d86d0u: goto label_4d86d0;
        case 0x4d86d4u: goto label_4d86d4;
        case 0x4d86d8u: goto label_4d86d8;
        case 0x4d86dcu: goto label_4d86dc;
        case 0x4d86e0u: goto label_4d86e0;
        case 0x4d86e4u: goto label_4d86e4;
        case 0x4d86e8u: goto label_4d86e8;
        case 0x4d86ecu: goto label_4d86ec;
        case 0x4d86f0u: goto label_4d86f0;
        case 0x4d86f4u: goto label_4d86f4;
        case 0x4d86f8u: goto label_4d86f8;
        case 0x4d86fcu: goto label_4d86fc;
        case 0x4d8700u: goto label_4d8700;
        case 0x4d8704u: goto label_4d8704;
        case 0x4d8708u: goto label_4d8708;
        case 0x4d870cu: goto label_4d870c;
        case 0x4d8710u: goto label_4d8710;
        case 0x4d8714u: goto label_4d8714;
        case 0x4d8718u: goto label_4d8718;
        case 0x4d871cu: goto label_4d871c;
        case 0x4d8720u: goto label_4d8720;
        case 0x4d8724u: goto label_4d8724;
        case 0x4d8728u: goto label_4d8728;
        case 0x4d872cu: goto label_4d872c;
        case 0x4d8730u: goto label_4d8730;
        case 0x4d8734u: goto label_4d8734;
        case 0x4d8738u: goto label_4d8738;
        case 0x4d873cu: goto label_4d873c;
        case 0x4d8740u: goto label_4d8740;
        case 0x4d8744u: goto label_4d8744;
        case 0x4d8748u: goto label_4d8748;
        case 0x4d874cu: goto label_4d874c;
        case 0x4d8750u: goto label_4d8750;
        case 0x4d8754u: goto label_4d8754;
        case 0x4d8758u: goto label_4d8758;
        case 0x4d875cu: goto label_4d875c;
        case 0x4d8760u: goto label_4d8760;
        case 0x4d8764u: goto label_4d8764;
        case 0x4d8768u: goto label_4d8768;
        case 0x4d876cu: goto label_4d876c;
        case 0x4d8770u: goto label_4d8770;
        case 0x4d8774u: goto label_4d8774;
        case 0x4d8778u: goto label_4d8778;
        case 0x4d877cu: goto label_4d877c;
        case 0x4d8780u: goto label_4d8780;
        case 0x4d8784u: goto label_4d8784;
        default: break;
    }

    ctx->pc = 0x4d8580u;

label_4d8580:
    // 0x4d8580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d8580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d8584:
    // 0x4d8584: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d8584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d8588:
    // 0x4d8588: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d8588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d858c:
    // 0x4d858c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d858cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d8590:
    // 0x4d8590: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d8590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d8594:
    // 0x4d8594: 0xc1232f2  jal         func_48CBC8
label_4d8598:
    if (ctx->pc == 0x4D8598u) {
        ctx->pc = 0x4D8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8594u;
        // 0x4d8598: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D859Cu;
        goto label_4d859c;
    }
    ctx->pc = 0x4D8594u;
    SET_GPR_U32(ctx, 31, 0x4D859Cu);
    ctx->pc = 0x4D8598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8594u;
    // 0x4d8598: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4D8594u, 0x4D859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D859Cu;
label_4d859c:
    // 0x4d859c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4d859cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4d85a0:
    // 0x4d85a0: 0xac6210ec  sw          $v0, 0x10EC($v1)
    ctx->pc = 0x4d85a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4332), GPR_U32(ctx, 2));
label_4d85a4:
    // 0x4d85a4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d85a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d85a8:
    // 0x4d85a8: 0x442006c  bltzl       $v0, . + 4 + (0x6C << 2)
label_4d85ac:
    if (ctx->pc == 0x4D85ACu) {
        ctx->pc = 0x4D85ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D85A8u;
        // 0x4d85ac: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D85B0u;
        goto label_4d85b0;
    }
    ctx->pc = 0x4D85A8u;
    {
        const bool branch_taken_0x4d85a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4d85a8) {
            ctx->pc = 0x4D85ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D85A8u;
            // 0x4d85ac: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D875Cu;
            goto label_4d875c;
        }
    }
    ctx->pc = 0x4D85B0u;
label_4d85b0:
    // 0x4d85b0: 0xc12b642  jal         func_4AD908
label_4d85b4:
    if (ctx->pc == 0x4D85B4u) {
        ctx->pc = 0x4D85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D85B0u;
        // 0x4d85b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D85B8u;
        goto label_4d85b8;
    }
    ctx->pc = 0x4D85B0u;
    SET_GPR_U32(ctx, 31, 0x4D85B8u);
    ctx->pc = 0x4D85B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D85B0u;
    // 0x4d85b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4D85B0u, 0x4D85B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D85B8u;
label_4d85b8:
    // 0x4d85b8: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4d85b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
label_4d85bc:
    // 0x4d85bc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d85bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4d85c0:
    // 0x4d85c0: 0x860201be  lh          $v0, 0x1BE($s0)
    ctx->pc = 0x4d85c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
label_4d85c4:
    // 0x4d85c4: 0x24a510d0  addiu       $a1, $a1, 0x10D0
    ctx->pc = 0x4d85c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4304));
label_4d85c8:
    // 0x4d85c8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4d85c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_4d85cc:
    // 0x4d85cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d85ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d85d0:
    // 0x4d85d0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d85d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4d85d4:
    // 0x4d85d4: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4d85d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
label_4d85d8:
    // 0x4d85d8: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4d85d8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
label_4d85dc:
    // 0x4d85dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d85dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d85e0:
    // 0x4d85e0: 0x252910dc  addiu       $t1, $t1, 0x10DC
    ctx->pc = 0x4d85e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4316));
label_4d85e4:
    // 0x4d85e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d85e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d85e8:
    // 0x4d85e8: 0x254a10e4  addiu       $t2, $t2, 0x10E4
    ctx->pc = 0x4d85e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4324));
label_4d85ec:
    // 0x4d85ec: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d85ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d85f0:
    // 0x4d85f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d85f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d85f4:
    // 0x4d85f4: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x4d85f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_4d85f8:
    // 0x4d85f8: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4d85f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
label_4d85fc:
    // 0x4d85fc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d85fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d8600:
    // 0x4d8600: 0x250810d4  addiu       $t0, $t0, 0x10D4
    ctx->pc = 0x4d8600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4308));
label_4d8604:
    // 0x4d8604: 0x240c0481  addiu       $t4, $zero, 0x481
    ctx->pc = 0x4d8604u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1153));
label_4d8608:
    // 0x4d8608: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x4d8608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_4d860c:
    // 0x4d860c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d860cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4d8610:
    // 0x4d8610: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d8610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d8614:
    // 0x4d8614: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d8614u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d8618:
    // 0x4d8618: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d8618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d861c:
    // 0x4d861c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d861cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d8620:
    // 0x4d8620: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d8620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d8624:
    // 0x4d8624: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x4d8624u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
label_4d8628:
    // 0x4d8628: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d8628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4d862c:
    // 0x4d862c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d862cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d8630:
    // 0x4d8630: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d8630u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d8634:
    // 0x4d8634: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d8634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d8638:
    // 0x4d8638: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d8638u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d863c:
    // 0x4d863c: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x4d863cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_4d8640:
    // 0x4d8640: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d8640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4d8644:
    // 0x4d8644: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d8644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d8648:
    // 0x4d8648: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d8648u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d864c:
    // 0x4d864c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4d864cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d8650:
    // 0x4d8650: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4d8650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4d8654:
    // 0x4d8654: 0xa6000162  sh          $zero, 0x162($s0)
    ctx->pc = 0x4d8654u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 0));
label_4d8658:
    // 0x4d8658: 0xa6040160  sh          $a0, 0x160($s0)
    ctx->pc = 0x4d8658u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 4));
label_4d865c:
    // 0x4d865c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4d865cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_4d8660:
    // 0x4d8660: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d8660u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d8664:
    // 0x4d8664: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4d8664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4d8668:
    // 0x4d8668: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d8668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4d866c:
    // 0x4d866c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4d866cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d8670:
    // 0x4d8670: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d8670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d8674:
    // 0x4d8674: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x4d8674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4d8678:
    // 0x4d8678: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d8678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d867c:
    // 0x4d867c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d867cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d8680:
    // 0x4d8680: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4d8680u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_4d8684:
    // 0x4d8684: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4d8684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
label_4d8688:
    // 0x4d8688: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d8688u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4d868c:
    // 0x4d868c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4d868cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4d8690:
    // 0x4d8690: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4d8690u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4d8694:
    // 0x4d8694: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4d8694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_4d8698:
    // 0x4d8698: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d8698u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4d869c:
    // 0x4d869c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4d869cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d86a0:
    // 0x4d86a0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d86a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4d86a4:
    // 0x4d86a4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d86a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_4d86a8:
    // 0x4d86a8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d86a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4d86ac:
    // 0x4d86ac: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x4d86acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
label_4d86b0:
    // 0x4d86b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d86b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d86b4:
    // 0x4d86b4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4d86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4d86b8:
    // 0x4d86b8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d86b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4d86bc:
    // 0x4d86bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d86bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4d86c0:
    // 0x4d86c0: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4d86c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_4d86c4:
    // 0x4d86c4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4d86c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4d86c8:
    // 0x4d86c8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d86c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d86cc:
    // 0x4d86cc: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4d86ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_4d86d0:
    // 0x4d86d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d86d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4d86d4:
    // 0x4d86d4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4d86d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_4d86d8:
    // 0x4d86d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d86d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d86dc:
    // 0x4d86dc: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4d86dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4d86e0:
    // 0x4d86e0: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x4d86e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
label_4d86e4:
    // 0x4d86e4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d86e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4d86e8:
    // 0x4d86e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d86e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d86ec:
    // 0x4d86ec: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4d86ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_4d86f0:
    // 0x4d86f0: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4d86f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4d86f4:
    // 0x4d86f4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4d86f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4d86f8:
    // 0x4d86f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d86f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d86fc:
    // 0x4d86fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d86fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d8700:
    // 0x4d8700: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4d8700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_4d8704:
    // 0x4d8704: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d8704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d8708:
    // 0x4d8708: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4d8708u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
label_4d870c:
    // 0x4d870c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4d870cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d8710:
    // 0x4d8710: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d8710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d8714:
    // 0x4d8714: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x4d8714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
label_4d8718:
    // 0x4d8718: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4d8718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4d871c:
    // 0x4d871c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d871cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d8720:
    // 0x4d8720: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d8720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d8724:
    // 0x4d8724: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d8724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d8728:
    // 0x4d8728: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d8728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d872c:
    // 0x4d872c: 0xa60c000c  sh          $t4, 0xC($s0)
    ctx->pc = 0x4d872cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 12));
label_4d8730:
    // 0x4d8730: 0xa6020164  sh          $v0, 0x164($s0)
    ctx->pc = 0x4d8730u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 2));
label_4d8734:
    // 0x4d8734: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4d8734u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
label_4d8738:
    // 0x4d8738: 0xa600011c  sh          $zero, 0x11C($s0)
    ctx->pc = 0x4d8738u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 0));
label_4d873c:
    // 0x4d873c: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4d873cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
label_4d8740:
    // 0x4d8740: 0xa6000168  sh          $zero, 0x168($s0)
    ctx->pc = 0x4d8740u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 0));
label_4d8744:
    // 0x4d8744: 0xa600013a  sh          $zero, 0x13A($s0)
    ctx->pc = 0x4d8744u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 314), (uint16_t)GPR_U32(ctx, 0));
label_4d8748:
    // 0x4d8748: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4d8748u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
label_4d874c:
    // 0x4d874c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d874cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d8750:
    // 0x4d8750: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d8750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4d8754:
    // 0x4d8754: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4d8754u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d8758:
    // 0x4d8758: 0x960201bc  lhu         $v0, 0x1BC($s0)
    ctx->pc = 0x4d8758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4d875c:
    // 0x4d875c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d875cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d8760:
    // 0x4d8760: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d8760u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4d8764:
    // 0x4d8764: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x4d8764u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4d8768:
    // 0x4d8768: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
label_4d876c:
    if (ctx->pc == 0x4D876Cu) {
        ctx->pc = 0x4D876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8768u;
        // 0x4d876c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D8770u;
        goto label_4d8770;
    }
    ctx->pc = 0x4D8768u;
    {
        const bool branch_taken_0x4d8768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d8768) {
            ctx->pc = 0x4D876Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8768u;
            // 0x4d876c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8800u;
            return;
        }
    }
    ctx->pc = 0x4D8770u;
label_4d8770:
    // 0x4d8770: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d8770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4d8774:
    // 0x4d8774: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4d8774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4d8778:
    // 0x4d8778: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d8778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4d877c:
    // 0x4d877c: 0x8c63b860  lw          $v1, -0x47A0($v1)
    ctx->pc = 0x4d877cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948960)));
label_4d8780:
    // 0x4d8780: 0x600008  jr          $v1
label_4d8784:
    if (ctx->pc == 0x4D8784u) {
        ctx->pc = 0x4D8788u;
        goto label_fallthrough_0x4d8780;
    }
    ctx->pc = 0x4D8780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D8780u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4d8780:
    ctx->pc = 0x4D8788u;
}
