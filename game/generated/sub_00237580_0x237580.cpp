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

// Function: sub_00237580
// Address: 0x237580 - 0x237a70
void sub_00237580_0x237580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237580_0x237580");
#endif

    switch (ctx->pc) {
        case 0x2375e0u: goto label_2375e0;
        case 0x237620u: goto label_237620;
        case 0x237664u: goto label_237664;
        case 0x237688u: goto label_237688;
        case 0x2376c8u: goto label_2376c8;
        case 0x23770cu: goto label_23770c;
        case 0x237730u: goto label_237730;
        case 0x23777cu: goto label_23777c;
        case 0x2377bcu: goto label_2377bc;
        case 0x237814u: goto label_237814;
        case 0x237854u: goto label_237854;
        case 0x2378a0u: goto label_2378a0;
        case 0x2378e0u: goto label_2378e0;
        case 0x237924u: goto label_237924;
        case 0x237948u: goto label_237948;
        case 0x237988u: goto label_237988;
        case 0x2379c8u: goto label_2379c8;
        case 0x2379e0u: goto label_2379e0;
        case 0x2379f8u: goto label_2379f8;
        case 0x237a14u: goto label_237a14;
        case 0x237a24u: goto label_237a24;
        case 0x237a44u: goto label_237a44;
        case 0x237a54u: goto label_237a54;
        default: break;
    }

    ctx->pc = 0x237580u;

label_237580:
    // 0x237580: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x237580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x237584: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x237584u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x237588: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x237588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x23758c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23758cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x237590: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x237590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x237594: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x237594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237598: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23759c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23759cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2375a0: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2375a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2375a4: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x2375a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2375a8: 0x1040012a  beqz        $v0, . + 4 + (0x12A << 2)
    ctx->pc = 0x2375A8u;
    {
        const bool branch_taken_0x2375a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2375ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375A8u;
        // 0x2375ac: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375a8) {
            ctx->pc = 0x237A54u;
            goto label_237a54;
        }
    }
    ctx->pc = 0x2375B0u;
    // 0x2375b0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2375b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2375b4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2375b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2375b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2375b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2375bc: 0x8c637c00  lw          $v1, 0x7C00($v1)
    ctx->pc = 0x2375bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31744)));
    // 0x2375c0: 0x600008  jr          $v1
    ctx->pc = 0x2375C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2375C8u: goto label_2375c8;
            case 0x237670u: goto label_237670;
            case 0x237738u: goto label_237738;
            case 0x237930u: goto label_237930;
            case 0x2379D0u: goto label_2379d0;
            case 0x2379E8u: goto label_2379e8;
            case 0x237A00u: goto label_237a00;
            case 0x237A30u: goto label_237a30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2375C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2375C8u;
label_2375c8:
    // 0x2375c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2375c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2375cc: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2375CCu;
    {
        const bool branch_taken_0x2375cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2375D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375CCu;
        // 0x2375d0: 0x248601a0  addiu       $a2, $a0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375cc) {
            ctx->pc = 0x237718u;
            goto label_237718;
        }
    }
    ctx->pc = 0x2375D4u;
    // 0x2375d4: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x2375d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x2375d8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2375d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2375dc: 0x248a0280  addiu       $t2, $a0, 0x280
    ctx->pc = 0x2375dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
label_2375e0:
    // 0x2375e0: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x2375e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2375e4: 0xdc490008  ld          $t1, 0x8($v0)
    ctx->pc = 0x2375e4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2375e8: 0xdc4b0010  ld          $t3, 0x10($v0)
    ctx->pc = 0x2375e8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2375ec: 0xdc4c0018  ld          $t4, 0x18($v0)
    ctx->pc = 0x2375ecu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2375f0: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x2375f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x2375f4: 0xfc690008  sd          $t1, 0x8($v1)
    ctx->pc = 0x2375f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 9));
    // 0x2375f8: 0xfc6b0010  sd          $t3, 0x10($v1)
    ctx->pc = 0x2375f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 11));
    // 0x2375fc: 0xfc6c0018  sd          $t4, 0x18($v1)
    ctx->pc = 0x2375fcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 12));
    // 0x237600: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x237600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x237604: 0x0  nop
    ctx->pc = 0x237604u;
    // NOP
    // 0x237608: 0x0  nop
    ctx->pc = 0x237608u;
    // NOP
    // 0x23760c: 0x144afff4  bne         $v0, $t2, . + 4 + (-0xC << 2)
    ctx->pc = 0x23760Cu;
    {
        const bool branch_taken_0x23760c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x237610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23760Cu;
        // 0x237610: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23760c) {
            ctx->pc = 0x2375E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2375e0;
        }
    }
    ctx->pc = 0x237614u;
    // 0x237614: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x237614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237618: 0x24820360  addiu       $v0, $a0, 0x360
    ctx->pc = 0x237618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 864));
    // 0x23761c: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x23761cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_237620:
    // 0x237620: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x237620u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237624: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x237624u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x237628: 0xdc690010  ld          $t1, 0x10($v1)
    ctx->pc = 0x237628u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x23762c: 0xdc6b0018  ld          $t3, 0x18($v1)
    ctx->pc = 0x23762cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x237630: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x237630u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x237634: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x237634u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x237638: 0xfca90010  sd          $t1, 0x10($a1)
    ctx->pc = 0x237638u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 9));
    // 0x23763c: 0xfcab0018  sd          $t3, 0x18($a1)
    ctx->pc = 0x23763cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 11));
    // 0x237640: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x237640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x237644: 0x0  nop
    ctx->pc = 0x237644u;
    // NOP
    // 0x237648: 0x0  nop
    ctx->pc = 0x237648u;
    // NOP
    // 0x23764c: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x23764Cu;
    {
        const bool branch_taken_0x23764c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x237650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23764Cu;
        // 0x237650: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23764c) {
            ctx->pc = 0x237620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237620;
        }
    }
    ctx->pc = 0x237654u;
    // 0x237654: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x237654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237658: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23765c: 0xc08cc8a  jal         func_233228
    ctx->pc = 0x23765Cu;
    SET_GPR_U32(ctx, 31, 0x237664u);
    ctx->pc = 0x237660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23765Cu;
    // 0x237660: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233228u, 0x23765Cu, 0x237664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237664u;
label_237664:
    // 0x237664: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x237664u;
    {
        const bool branch_taken_0x237664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237664u;
        // 0x237668: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237664) {
            ctx->pc = 0x237A58u;
            goto label_237a58;
        }
    }
    ctx->pc = 0x23766Cu;
    // 0x23766c: 0x0  nop
    ctx->pc = 0x23766cu;
    // NOP
label_237670:
    // 0x237670: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x237670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x237674: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x237674u;
    {
        const bool branch_taken_0x237674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237674u;
        // 0x237678: 0x248601a0  addiu       $a2, $a0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237674) {
            ctx->pc = 0x237718u;
            goto label_237718;
        }
    }
    ctx->pc = 0x23767Cu;
    // 0x23767c: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x23767cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x237680: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x237680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237684: 0x248a0280  addiu       $t2, $a0, 0x280
    ctx->pc = 0x237684u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
label_237688:
    // 0x237688: 0xdc4c0000  ld          $t4, 0x0($v0)
    ctx->pc = 0x237688u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23768c: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x23768cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x237690: 0xdc490010  ld          $t1, 0x10($v0)
    ctx->pc = 0x237690u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x237694: 0xdc4b0018  ld          $t3, 0x18($v0)
    ctx->pc = 0x237694u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x237698: 0xfc6c0000  sd          $t4, 0x0($v1)
    ctx->pc = 0x237698u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 12));
    // 0x23769c: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x23769cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x2376a0: 0xfc690010  sd          $t1, 0x10($v1)
    ctx->pc = 0x2376a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 9));
    // 0x2376a4: 0xfc6b0018  sd          $t3, 0x18($v1)
    ctx->pc = 0x2376a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 11));
    // 0x2376a8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2376a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2376ac: 0x0  nop
    ctx->pc = 0x2376acu;
    // NOP
    // 0x2376b0: 0x0  nop
    ctx->pc = 0x2376b0u;
    // NOP
    // 0x2376b4: 0x144afff4  bne         $v0, $t2, . + 4 + (-0xC << 2)
    ctx->pc = 0x2376B4u;
    {
        const bool branch_taken_0x2376b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x2376B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376B4u;
        // 0x2376b8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376b4) {
            ctx->pc = 0x237688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237688;
        }
    }
    ctx->pc = 0x2376BCu;
    // 0x2376bc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2376bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2376c0: 0x24820360  addiu       $v0, $a0, 0x360
    ctx->pc = 0x2376c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 864));
    // 0x2376c4: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x2376c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2376c8:
    // 0x2376c8: 0xdc6c0000  ld          $t4, 0x0($v1)
    ctx->pc = 0x2376c8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2376cc: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x2376ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2376d0: 0xdc660010  ld          $a2, 0x10($v1)
    ctx->pc = 0x2376d0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2376d4: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x2376d4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2376d8: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x2376d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x2376dc: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x2376dcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x2376e0: 0xfca60010  sd          $a2, 0x10($a1)
    ctx->pc = 0x2376e0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 6));
    // 0x2376e4: 0xfca90018  sd          $t1, 0x18($a1)
    ctx->pc = 0x2376e4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 9));
    // 0x2376e8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2376e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2376ec: 0x0  nop
    ctx->pc = 0x2376ecu;
    // NOP
    // 0x2376f0: 0x0  nop
    ctx->pc = 0x2376f0u;
    // NOP
    // 0x2376f4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2376F4u;
    {
        const bool branch_taken_0x2376f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2376F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376F4u;
        // 0x2376f8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376f4) {
            ctx->pc = 0x2376C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2376c8;
        }
    }
    ctx->pc = 0x2376FCu;
    // 0x2376fc: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2376fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237704: 0xc08cec6  jal         func_233B18
    ctx->pc = 0x237704u;
    SET_GPR_U32(ctx, 31, 0x23770Cu);
    ctx->pc = 0x237708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237704u;
    // 0x237708: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B18u, 0x237704u, 0x23770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23770Cu;
label_23770c:
    // 0x23770c: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x23770Cu;
    {
        const bool branch_taken_0x23770c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23770Cu;
        // 0x237710: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23770c) {
            ctx->pc = 0x237A58u;
            goto label_237a58;
        }
    }
    ctx->pc = 0x237714u;
    // 0x237714: 0x0  nop
    ctx->pc = 0x237714u;
    // NOP
label_237718:
    // 0x237718: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x237718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23771c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23771cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237720: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x237720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x237724: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x237724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237728: 0xc08dd60  jal         func_237580
    ctx->pc = 0x237728u;
    SET_GPR_U32(ctx, 31, 0x237730u);
    ctx->pc = 0x23772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237728u;
    // 0x23772c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237580u;
    goto label_237580;
    ctx->pc = 0x237730u;
label_237730:
    // 0x237730: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x237730u;
    {
        const bool branch_taken_0x237730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237730u;
        // 0x237734: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237730) {
            ctx->pc = 0x237A58u;
            goto label_237a58;
        }
    }
    ctx->pc = 0x237738u;
label_237738:
    // 0x237738: 0x2ce20007  sltiu       $v0, $a3, 0x7
    ctx->pc = 0x237738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x23773c: 0x104000c6  beqz        $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x23773Cu;
    {
        const bool branch_taken_0x23773c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23773Cu;
        // 0x237740: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23773c) {
            ctx->pc = 0x237A58u;
            goto label_237a58;
        }
    }
    ctx->pc = 0x237744u;
    // 0x237744: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x237744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x237748: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x237748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x23774c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23774cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237750: 0x8c637c20  lw          $v1, 0x7C20($v1)
    ctx->pc = 0x237750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31776)));
    // 0x237754: 0x600008  jr          $v1
    ctx->pc = 0x237754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x237760u: goto label_237760;
            case 0x2377F8u: goto label_2377f8;
            case 0x237890u: goto label_237890;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237754u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23775Cu;
    // 0x23775c: 0x0  nop
    ctx->pc = 0x23775cu;
    // NOP
label_237760:
    // 0x237760: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x237760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x237764: 0x8c43dda0  lw          $v1, -0x2260($v0)
    ctx->pc = 0x237764u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3ADDA0u));
    // 0x237768: 0x106000ba  beqz        $v1, . + 4 + (0xBA << 2)
    ctx->pc = 0x237768u;
    {
        const bool branch_taken_0x237768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237768u;
        // 0x23776c: 0x248300c0  addiu       $v1, $a0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237768) {
            ctx->pc = 0x237A54u;
            goto label_237a54;
        }
    }
    ctx->pc = 0x237770u;
    // 0x237770: 0x248601a0  addiu       $a2, $a0, 0x1A0
    ctx->pc = 0x237770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
    // 0x237774: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x237774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237778: 0x24890280  addiu       $t1, $a0, 0x280
    ctx->pc = 0x237778u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
label_23777c:
    // 0x23777c: 0xdc4a0000  ld          $t2, 0x0($v0)
    ctx->pc = 0x23777cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237780: 0xdc4b0008  ld          $t3, 0x8($v0)
    ctx->pc = 0x237780u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x237784: 0xdc4c0010  ld          $t4, 0x10($v0)
    ctx->pc = 0x237784u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x237788: 0xdc450018  ld          $a1, 0x18($v0)
    ctx->pc = 0x237788u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x23778c: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x23778cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
    // 0x237790: 0xfc6b0008  sd          $t3, 0x8($v1)
    ctx->pc = 0x237790u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 11));
    // 0x237794: 0xfc6c0010  sd          $t4, 0x10($v1)
    ctx->pc = 0x237794u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 12));
    // 0x237798: 0xfc650018  sd          $a1, 0x18($v1)
    ctx->pc = 0x237798u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 5));
    // 0x23779c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x23779cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2377a0: 0x0  nop
    ctx->pc = 0x2377a0u;
    // NOP
    // 0x2377a4: 0x0  nop
    ctx->pc = 0x2377a4u;
    // NOP
    // 0x2377a8: 0x1449fff4  bne         $v0, $t1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2377A8u;
    {
        const bool branch_taken_0x2377a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x2377ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377A8u;
        // 0x2377ac: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377a8) {
            ctx->pc = 0x23777Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23777c;
        }
    }
    ctx->pc = 0x2377B0u;
    // 0x2377b0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2377b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2377b4: 0x24820360  addiu       $v0, $a0, 0x360
    ctx->pc = 0x2377b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 864));
    // 0x2377b8: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x2377b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2377bc:
    // 0x2377bc: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x2377bcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2377c0: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x2377c0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2377c4: 0xdc6a0010  ld          $t2, 0x10($v1)
    ctx->pc = 0x2377c4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2377c8: 0xdc6b0018  ld          $t3, 0x18($v1)
    ctx->pc = 0x2377c8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2377cc: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x2377ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x2377d0: 0xfca80008  sd          $t0, 0x8($a1)
    ctx->pc = 0x2377d0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 8));
    // 0x2377d4: 0xfcaa0010  sd          $t2, 0x10($a1)
    ctx->pc = 0x2377d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 10));
    // 0x2377d8: 0xfcab0018  sd          $t3, 0x18($a1)
    ctx->pc = 0x2377d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 11));
    // 0x2377dc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2377dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2377e0: 0x0  nop
    ctx->pc = 0x2377e0u;
    // NOP
    // 0x2377e4: 0x0  nop
    ctx->pc = 0x2377e4u;
    // NOP
    // 0x2377e8: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2377E8u;
    {
        const bool branch_taken_0x2377e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2377ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377E8u;
        // 0x2377ec: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377e8) {
            ctx->pc = 0x2377BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2377bc;
        }
    }
    ctx->pc = 0x2377F0u;
    // 0x2377f0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2377F0u;
    {
        const bool branch_taken_0x2377f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2377F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377F0u;
        // 0x2377f4: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377f0) {
            ctx->pc = 0x237918u;
            goto label_237918;
        }
    }
    ctx->pc = 0x2377F8u;
label_2377f8:
    // 0x2377f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2377f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2377fc: 0x248601a0  addiu       $a2, $a0, 0x1A0
    ctx->pc = 0x2377fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
    // 0x237800: 0x8c43dda0  lw          $v1, -0x2260($v0)
    ctx->pc = 0x237800u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3ADDA0u));
    // 0x237804: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x237804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237808: 0x248500c0  addiu       $a1, $a0, 0xC0
    ctx->pc = 0x237808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x23780c: 0x24890280  addiu       $t1, $a0, 0x280
    ctx->pc = 0x23780cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
    // 0x237810: 0x3380a  movz        $a3, $zero, $v1
    ctx->pc = 0x237810u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_237814:
    // 0x237814: 0xdc4c0000  ld          $t4, 0x0($v0)
    ctx->pc = 0x237814u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237818: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x237818u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23781c: 0xdc480010  ld          $t0, 0x10($v0)
    ctx->pc = 0x23781cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x237820: 0xdc4a0018  ld          $t2, 0x18($v0)
    ctx->pc = 0x237820u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x237824: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x237824u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x237828: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x237828u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x23782c: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x23782cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x237830: 0xfcaa0018  sd          $t2, 0x18($a1)
    ctx->pc = 0x237830u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 10));
    // 0x237834: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x237834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x237838: 0x0  nop
    ctx->pc = 0x237838u;
    // NOP
    // 0x23783c: 0x0  nop
    ctx->pc = 0x23783cu;
    // NOP
    // 0x237840: 0x1449fff4  bne         $v0, $t1, . + 4 + (-0xC << 2)
    ctx->pc = 0x237840u;
    {
        const bool branch_taken_0x237840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x237844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237840u;
        // 0x237844: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237840) {
            ctx->pc = 0x237814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237814;
        }
    }
    ctx->pc = 0x237848u;
    // 0x237848: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x237848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23784c: 0x24820360  addiu       $v0, $a0, 0x360
    ctx->pc = 0x23784cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 864));
    // 0x237850: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x237850u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_237854:
    // 0x237854: 0xdc6b0000  ld          $t3, 0x0($v1)
    ctx->pc = 0x237854u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x237858: 0xdc6c0008  ld          $t4, 0x8($v1)
    ctx->pc = 0x237858u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x23785c: 0xdc640010  ld          $a0, 0x10($v1)
    ctx->pc = 0x23785cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x237860: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x237860u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x237864: 0xfcab0000  sd          $t3, 0x0($a1)
    ctx->pc = 0x237864u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 11));
    // 0x237868: 0xfcac0008  sd          $t4, 0x8($a1)
    ctx->pc = 0x237868u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 12));
    // 0x23786c: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x23786cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x237870: 0xfca60018  sd          $a2, 0x18($a1)
    ctx->pc = 0x237870u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 6));
    // 0x237874: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x237874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x237878: 0x0  nop
    ctx->pc = 0x237878u;
    // NOP
    // 0x23787c: 0x0  nop
    ctx->pc = 0x23787cu;
    // NOP
    // 0x237880: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x237880u;
    {
        const bool branch_taken_0x237880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x237884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237880u;
        // 0x237884: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237880) {
            ctx->pc = 0x237854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237854;
        }
    }
    ctx->pc = 0x237888u;
    // 0x237888: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x237888u;
    {
        const bool branch_taken_0x237888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237888u;
        // 0x23788c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237888) {
            ctx->pc = 0x237918u;
            goto label_237918;
        }
    }
    ctx->pc = 0x237890u;
label_237890:
    // 0x237890: 0x248601a0  addiu       $a2, $a0, 0x1A0
    ctx->pc = 0x237890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
    // 0x237894: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x237894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x237898: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x237898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23789c: 0x24890280  addiu       $t1, $a0, 0x280
    ctx->pc = 0x23789cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
label_2378a0:
    // 0x2378a0: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x2378a0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2378a4: 0xdc4a0008  ld          $t2, 0x8($v0)
    ctx->pc = 0x2378a4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2378a8: 0xdc4b0010  ld          $t3, 0x10($v0)
    ctx->pc = 0x2378a8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2378ac: 0xdc4c0018  ld          $t4, 0x18($v0)
    ctx->pc = 0x2378acu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2378b0: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x2378b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x2378b4: 0xfc6a0008  sd          $t2, 0x8($v1)
    ctx->pc = 0x2378b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 10));
    // 0x2378b8: 0xfc6b0010  sd          $t3, 0x10($v1)
    ctx->pc = 0x2378b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 11));
    // 0x2378bc: 0xfc6c0018  sd          $t4, 0x18($v1)
    ctx->pc = 0x2378bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 12));
    // 0x2378c0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2378c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2378c4: 0x0  nop
    ctx->pc = 0x2378c4u;
    // NOP
    // 0x2378c8: 0x0  nop
    ctx->pc = 0x2378c8u;
    // NOP
    // 0x2378cc: 0x1449fff4  bne         $v0, $t1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2378CCu;
    {
        const bool branch_taken_0x2378cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x2378D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378CCu;
        // 0x2378d0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378cc) {
            ctx->pc = 0x2378A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2378a0;
        }
    }
    ctx->pc = 0x2378D4u;
    // 0x2378d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2378d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2378d8: 0x24820360  addiu       $v0, $a0, 0x360
    ctx->pc = 0x2378d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 864));
    // 0x2378dc: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x2378dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2378e0:
    // 0x2378e0: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2378e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2378e4: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x2378e4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2378e8: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x2378e8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2378ec: 0xdc6a0018  ld          $t2, 0x18($v1)
    ctx->pc = 0x2378ecu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2378f0: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x2378f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x2378f4: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x2378f4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x2378f8: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x2378f8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x2378fc: 0xfcaa0018  sd          $t2, 0x18($a1)
    ctx->pc = 0x2378fcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 10));
    // 0x237900: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x237900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x237904: 0x0  nop
    ctx->pc = 0x237904u;
    // NOP
    // 0x237908: 0x0  nop
    ctx->pc = 0x237908u;
    // NOP
    // 0x23790c: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x23790Cu;
    {
        const bool branch_taken_0x23790c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x237910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23790Cu;
        // 0x237910: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23790c) {
            ctx->pc = 0x2378E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2378e0;
        }
    }
    ctx->pc = 0x237914u;
    // 0x237914: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x237914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_237918:
    // 0x237918: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23791c: 0xc08d234  jal         func_2348D0
    ctx->pc = 0x23791Cu;
    SET_GPR_U32(ctx, 31, 0x237924u);
    ctx->pc = 0x237920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23791Cu;
    // 0x237920: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2348D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2348D0u, 0x23791Cu, 0x237924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237924u;
label_237924:
    // 0x237924: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x237924u;
    {
        const bool branch_taken_0x237924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237924u;
        // 0x237928: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237924) {
            ctx->pc = 0x237A58u;
            goto label_237a58;
        }
    }
    ctx->pc = 0x23792Cu;
    // 0x23792c: 0x0  nop
    ctx->pc = 0x23792cu;
    // NOP
label_237930:
    // 0x237930: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x237930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x237934: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x237934u;
    {
        const bool branch_taken_0x237934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237934u;
        // 0x237938: 0x248300c0  addiu       $v1, $a0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237934) {
            ctx->pc = 0x237A54u;
            goto label_237a54;
        }
    }
    ctx->pc = 0x23793Cu;
    // 0x23793c: 0x248601a0  addiu       $a2, $a0, 0x1A0
    ctx->pc = 0x23793cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
    // 0x237940: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x237940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237944: 0x24890280  addiu       $t1, $a0, 0x280
    ctx->pc = 0x237944u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
label_237948:
    // 0x237948: 0xdc4b0000  ld          $t3, 0x0($v0)
    ctx->pc = 0x237948u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23794c: 0xdc4c0008  ld          $t4, 0x8($v0)
    ctx->pc = 0x23794cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x237950: 0xdc450010  ld          $a1, 0x10($v0)
    ctx->pc = 0x237950u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x237954: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x237954u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x237958: 0xfc6b0000  sd          $t3, 0x0($v1)
    ctx->pc = 0x237958u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 11));
    // 0x23795c: 0xfc6c0008  sd          $t4, 0x8($v1)
    ctx->pc = 0x23795cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 12));
    // 0x237960: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x237960u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x237964: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x237964u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x237968: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x237968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x23796c: 0x0  nop
    ctx->pc = 0x23796cu;
    // NOP
    // 0x237970: 0x0  nop
    ctx->pc = 0x237970u;
    // NOP
    // 0x237974: 0x1449fff4  bne         $v0, $t1, . + 4 + (-0xC << 2)
    ctx->pc = 0x237974u;
    {
        const bool branch_taken_0x237974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x237978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237974u;
        // 0x237978: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237974) {
            ctx->pc = 0x237948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237948;
        }
    }
    ctx->pc = 0x23797Cu;
    // 0x23797c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x23797cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237980: 0x24820360  addiu       $v0, $a0, 0x360
    ctx->pc = 0x237980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 864));
    // 0x237984: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x237984u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_237988:
    // 0x237988: 0xdc6a0000  ld          $t2, 0x0($v1)
    ctx->pc = 0x237988u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23798c: 0xdc6b0008  ld          $t3, 0x8($v1)
    ctx->pc = 0x23798cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x237990: 0xdc6c0010  ld          $t4, 0x10($v1)
    ctx->pc = 0x237990u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x237994: 0xdc640018  ld          $a0, 0x18($v1)
    ctx->pc = 0x237994u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x237998: 0xfcaa0000  sd          $t2, 0x0($a1)
    ctx->pc = 0x237998u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 10));
    // 0x23799c: 0xfcab0008  sd          $t3, 0x8($a1)
    ctx->pc = 0x23799cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 11));
    // 0x2379a0: 0xfcac0010  sd          $t4, 0x10($a1)
    ctx->pc = 0x2379a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 12));
    // 0x2379a4: 0xfca40018  sd          $a0, 0x18($a1)
    ctx->pc = 0x2379a4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 4));
    // 0x2379a8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2379a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2379ac: 0x0  nop
    ctx->pc = 0x2379acu;
    // NOP
    // 0x2379b0: 0x0  nop
    ctx->pc = 0x2379b0u;
    // NOP
    // 0x2379b4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2379B4u;
    {
        const bool branch_taken_0x2379b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2379B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379B4u;
        // 0x2379b8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379b4) {
            ctx->pc = 0x237988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237988;
        }
    }
    ctx->pc = 0x2379BCu;
    // 0x2379bc: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2379bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2379c0: 0xc08d500  jal         func_235400
    ctx->pc = 0x2379C0u;
    SET_GPR_U32(ctx, 31, 0x2379C8u);
    ctx->pc = 0x2379C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2379C0u;
    // 0x2379c4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235400u, 0x2379C0u, 0x2379C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2379C8u;
label_2379c8:
    // 0x2379c8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2379C8u;
    {
        const bool branch_taken_0x2379c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2379CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379C8u;
        // 0x2379cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379c8) {
            ctx->pc = 0x237A58u;
            goto label_237a58;
        }
    }
    ctx->pc = 0x2379D0u;
label_2379d0:
    // 0x2379d0: 0x24840280  addiu       $a0, $a0, 0x280
    ctx->pc = 0x2379d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
    // 0x2379d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2379d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2379d8: 0xc08d5e4  jal         func_235790
    ctx->pc = 0x2379D8u;
    SET_GPR_U32(ctx, 31, 0x2379E0u);
    ctx->pc = 0x2379DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2379D8u;
    // 0x2379dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235790u, 0x2379D8u, 0x2379E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2379E0u;
label_2379e0:
    // 0x2379e0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2379E0u;
    {
        const bool branch_taken_0x2379e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2379E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379E0u;
        // 0x2379e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379e0) {
            ctx->pc = 0x237A58u;
            goto label_237a58;
        }
    }
    ctx->pc = 0x2379E8u;
label_2379e8:
    // 0x2379e8: 0x24840280  addiu       $a0, $a0, 0x280
    ctx->pc = 0x2379e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
    // 0x2379ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2379ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2379f0: 0xc08e090  jal         func_238240
    ctx->pc = 0x2379F0u;
    SET_GPR_U32(ctx, 31, 0x2379F8u);
    ctx->pc = 0x2379F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2379F0u;
    // 0x2379f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238240u, 0x2379F0u, 0x2379F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2379F8u;
label_2379f8:
    // 0x2379f8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2379F8u;
    {
        const bool branch_taken_0x2379f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2379FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379F8u;
        // 0x2379fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379f8) {
            ctx->pc = 0x237A58u;
            goto label_237a58;
        }
    }
    ctx->pc = 0x237A00u;
label_237a00:
    // 0x237a00: 0x24900280  addiu       $s0, $a0, 0x280
    ctx->pc = 0x237a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
    // 0x237a04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a0c: 0xc08d74c  jal         func_235D30
    ctx->pc = 0x237A0Cu;
    SET_GPR_U32(ctx, 31, 0x237A14u);
    ctx->pc = 0x237A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A0Cu;
    // 0x237a10: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235D30u, 0x237A0Cu, 0x237A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A14u;
label_237a14:
    // 0x237a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a1c: 0xc08d7b0  jal         func_235EC0
    ctx->pc = 0x237A1Cu;
    SET_GPR_U32(ctx, 31, 0x237A24u);
    ctx->pc = 0x237A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A1Cu;
    // 0x237a20: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235EC0u, 0x237A1Cu, 0x237A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A24u;
label_237a24:
    // 0x237a24: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x237A24u;
    {
        const bool branch_taken_0x237a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A24u;
        // 0x237a28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a24) {
            ctx->pc = 0x237A58u;
            goto label_237a58;
        }
    }
    ctx->pc = 0x237A2Cu;
    // 0x237a2c: 0x0  nop
    ctx->pc = 0x237a2cu;
    // NOP
label_237a30:
    // 0x237a30: 0x24900280  addiu       $s0, $a0, 0x280
    ctx->pc = 0x237a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
    // 0x237a34: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x237a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a38: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x237a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a3c: 0xc08d9ee  jal         func_2367B8
    ctx->pc = 0x237A3Cu;
    SET_GPR_U32(ctx, 31, 0x237A44u);
    ctx->pc = 0x237A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A3Cu;
    // 0x237a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2367B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2367B8u, 0x237A3Cu, 0x237A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A44u;
label_237a44:
    // 0x237a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a4c: 0xc08d7b0  jal         func_235EC0
    ctx->pc = 0x237A4Cu;
    SET_GPR_U32(ctx, 31, 0x237A54u);
    ctx->pc = 0x237A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A4Cu;
    // 0x237a50: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235EC0u, 0x237A4Cu, 0x237A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A54u;
label_237a54:
    // 0x237a54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_237a58:
    // 0x237a58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x237a58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237a5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x237a5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237a60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x237a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x237a64: 0x3e00008  jr          $ra
    ctx->pc = 0x237A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A64u;
        // 0x237a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237A6Cu;
    // 0x237a6c: 0x0  nop
    ctx->pc = 0x237a6cu;
    // NOP
    ctx->pc = 0x237a70u;
}
