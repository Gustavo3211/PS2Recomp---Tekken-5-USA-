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

// Function: sub_004DB738
// Address: 0x4db738 - 0x4db808
void sub_004DB738_0x4db738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB738_0x4db738");
#endif

    switch (ctx->pc) {
        case 0x4db738u: goto label_4db738;
        case 0x4db73cu: goto label_4db73c;
        case 0x4db740u: goto label_4db740;
        case 0x4db744u: goto label_4db744;
        case 0x4db748u: goto label_4db748;
        case 0x4db74cu: goto label_4db74c;
        case 0x4db750u: goto label_4db750;
        case 0x4db754u: goto label_4db754;
        case 0x4db758u: goto label_4db758;
        case 0x4db75cu: goto label_4db75c;
        case 0x4db760u: goto label_4db760;
        case 0x4db764u: goto label_4db764;
        case 0x4db768u: goto label_4db768;
        case 0x4db76cu: goto label_4db76c;
        case 0x4db770u: goto label_4db770;
        case 0x4db774u: goto label_4db774;
        case 0x4db778u: goto label_4db778;
        case 0x4db77cu: goto label_4db77c;
        case 0x4db780u: goto label_4db780;
        case 0x4db784u: goto label_4db784;
        case 0x4db788u: goto label_4db788;
        case 0x4db78cu: goto label_4db78c;
        case 0x4db790u: goto label_4db790;
        case 0x4db794u: goto label_4db794;
        case 0x4db798u: goto label_4db798;
        case 0x4db79cu: goto label_4db79c;
        case 0x4db7a0u: goto label_4db7a0;
        case 0x4db7a4u: goto label_4db7a4;
        case 0x4db7a8u: goto label_4db7a8;
        case 0x4db7acu: goto label_4db7ac;
        case 0x4db7b0u: goto label_4db7b0;
        case 0x4db7b4u: goto label_4db7b4;
        case 0x4db7b8u: goto label_4db7b8;
        case 0x4db7bcu: goto label_4db7bc;
        case 0x4db7c0u: goto label_4db7c0;
        case 0x4db7c4u: goto label_4db7c4;
        case 0x4db7c8u: goto label_4db7c8;
        case 0x4db7ccu: goto label_4db7cc;
        case 0x4db7d0u: goto label_4db7d0;
        case 0x4db7d4u: goto label_4db7d4;
        case 0x4db7d8u: goto label_4db7d8;
        case 0x4db7dcu: goto label_4db7dc;
        case 0x4db7e0u: goto label_4db7e0;
        case 0x4db7e4u: goto label_4db7e4;
        case 0x4db7e8u: goto label_4db7e8;
        case 0x4db7ecu: goto label_4db7ec;
        case 0x4db7f0u: goto label_4db7f0;
        case 0x4db7f4u: goto label_4db7f4;
        case 0x4db7f8u: goto label_4db7f8;
        case 0x4db7fcu: goto label_4db7fc;
        case 0x4db800u: goto label_4db800;
        case 0x4db804u: goto label_4db804;
        default: break;
    }

    ctx->pc = 0x4db738u;

label_4db738:
    // 0x4db738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4db738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4db73c:
    // 0x4db73c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4db73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4db740:
    // 0x4db740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4db740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4db744:
    // 0x4db744: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4db744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4db748:
    // 0x4db748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4db748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4db74c:
    // 0x4db74c: 0xc1232f2  jal         func_48CBC8
label_4db750:
    if (ctx->pc == 0x4DB750u) {
        ctx->pc = 0x4DB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB74Cu;
        // 0x4db750: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DB754u;
        goto label_4db754;
    }
    ctx->pc = 0x4DB74Cu;
    SET_GPR_U32(ctx, 31, 0x4DB754u);
    ctx->pc = 0x4DB750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB74Cu;
    // 0x4db750: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4DB74Cu, 0x4DB754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB754u;
label_4db754:
    // 0x4db754: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4db754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4db758:
    // 0x4db758: 0xac621144  sw          $v0, 0x1144($v1)
    ctx->pc = 0x4db758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4420), GPR_U32(ctx, 2));
label_4db75c:
    // 0x4db75c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4db75cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4db760:
    // 0x4db760: 0x442001d  bltzl       $v0, . + 4 + (0x1D << 2)
label_4db764:
    if (ctx->pc == 0x4DB764u) {
        ctx->pc = 0x4DB764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB760u;
        // 0x4db764: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DB768u;
        goto label_4db768;
    }
    ctx->pc = 0x4DB760u;
    {
        const bool branch_taken_0x4db760 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4db760) {
            ctx->pc = 0x4DB764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DB760u;
            // 0x4db764: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DB7D8u;
            goto label_4db7d8;
        }
    }
    ctx->pc = 0x4DB768u;
label_4db768:
    // 0x4db768: 0xc12b642  jal         func_4AD908
label_4db76c:
    if (ctx->pc == 0x4DB76Cu) {
        ctx->pc = 0x4DB76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB768u;
        // 0x4db76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DB770u;
        goto label_4db770;
    }
    ctx->pc = 0x4DB768u;
    SET_GPR_U32(ctx, 31, 0x4DB770u);
    ctx->pc = 0x4DB76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB768u;
    // 0x4db76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4DB768u, 0x4DB770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB770u;
label_4db770:
    // 0x4db770: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4db770u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
label_4db774:
    // 0x4db774: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x4db774u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
label_4db778:
    // 0x4db778: 0x26060128  addiu       $a2, $s0, 0x128
    ctx->pc = 0x4db778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
label_4db77c:
    // 0x4db77c: 0x96040012  lhu         $a0, 0x12($s0)
    ctx->pc = 0x4db77cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_4db780:
    // 0x4db780: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4db780u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_4db784:
    // 0x4db784: 0x96050016  lhu         $a1, 0x16($s0)
    ctx->pc = 0x4db784u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_4db788:
    // 0x4db788: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x4db788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_4db78c:
    // 0x4db78c: 0xa604011a  sh          $a0, 0x11A($s0)
    ctx->pc = 0x4db78cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 282), (uint16_t)GPR_U32(ctx, 4));
label_4db790:
    // 0x4db790: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4db790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4db794:
    // 0x4db794: 0xa605011e  sh          $a1, 0x11E($s0)
    ctx->pc = 0x4db794u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 286), (uint16_t)GPR_U32(ctx, 5));
label_4db798:
    // 0x4db798: 0xa6020122  sh          $v0, 0x122($s0)
    ctx->pc = 0x4db798u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 290), (uint16_t)GPR_U32(ctx, 2));
label_4db79c:
    // 0x4db79c: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4db79cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
label_4db7a0:
    // 0x4db7a0: 0xa600016a  sh          $zero, 0x16A($s0)
    ctx->pc = 0x4db7a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 362), (uint16_t)GPR_U32(ctx, 0));
label_4db7a4:
    // 0x4db7a4: 0xa60001be  sh          $zero, 0x1BE($s0)
    ctx->pc = 0x4db7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 446), (uint16_t)GPR_U32(ctx, 0));
label_4db7a8:
    // 0x4db7a8: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4db7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
label_4db7ac:
    // 0x4db7ac: 0xa600011c  sh          $zero, 0x11C($s0)
    ctx->pc = 0x4db7acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 0));
label_4db7b0:
    // 0x4db7b0: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4db7b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
label_4db7b4:
    // 0x4db7b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4db7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4db7b8:
    // 0x4db7b8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4db7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_4db7bc:
    // 0x4db7bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4db7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4db7c0:
    // 0x4db7c0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4db7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_4db7c4:
    // 0x4db7c4: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4db7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
label_4db7c8:
    // 0x4db7c8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4db7c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4db7cc:
    // 0x4db7cc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4db7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4db7d0:
    // 0x4db7d0: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4db7d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4db7d4:
    // 0x4db7d4: 0x960201bc  lhu         $v0, 0x1BC($s0)
    ctx->pc = 0x4db7d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4db7d8:
    // 0x4db7d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4db7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4db7dc:
    // 0x4db7dc: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4db7dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4db7e0:
    // 0x4db7e0: 0x2c430011  sltiu       $v1, $v0, 0x11
    ctx->pc = 0x4db7e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_4db7e4:
    // 0x4db7e4: 0x5060006e  beql        $v1, $zero, . + 4 + (0x6E << 2)
label_4db7e8:
    if (ctx->pc == 0x4DB7E8u) {
        ctx->pc = 0x4DB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB7E4u;
        // 0x4db7e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DB7ECu;
        goto label_4db7ec;
    }
    ctx->pc = 0x4DB7E4u;
    {
        const bool branch_taken_0x4db7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4db7e4) {
            ctx->pc = 0x4DB7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DB7E4u;
            // 0x4db7e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DB9A0u;
            return;
        }
    }
    ctx->pc = 0x4DB7ECu;
label_4db7ec:
    // 0x4db7ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4db7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4db7f0:
    // 0x4db7f0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4db7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4db7f4:
    // 0x4db7f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4db7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4db7f8:
    // 0x4db7f8: 0x8c63b8f0  lw          $v1, -0x4710($v1)
    ctx->pc = 0x4db7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949104)));
label_4db7fc:
    // 0x4db7fc: 0x600008  jr          $v1
label_4db800:
    if (ctx->pc == 0x4DB800u) {
        ctx->pc = 0x4DB804u;
        goto label_4db804;
    }
    ctx->pc = 0x4DB7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB7FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4DB804u;
label_4db804:
    // 0x4db804: 0x0  nop
    ctx->pc = 0x4db804u;
    // NOP
    ctx->pc = 0x4db808u;
}
