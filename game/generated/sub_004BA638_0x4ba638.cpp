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

// Function: sub_004BA638
// Address: 0x4ba638 - 0x4ba6d0
void sub_004BA638_0x4ba638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BA638_0x4ba638");
#endif

    switch (ctx->pc) {
        case 0x4ba638u: goto label_4ba638;
        case 0x4ba63cu: goto label_4ba63c;
        case 0x4ba640u: goto label_4ba640;
        case 0x4ba644u: goto label_4ba644;
        case 0x4ba648u: goto label_4ba648;
        case 0x4ba64cu: goto label_4ba64c;
        case 0x4ba650u: goto label_4ba650;
        case 0x4ba654u: goto label_4ba654;
        case 0x4ba658u: goto label_4ba658;
        case 0x4ba65cu: goto label_4ba65c;
        case 0x4ba660u: goto label_4ba660;
        case 0x4ba664u: goto label_4ba664;
        case 0x4ba668u: goto label_4ba668;
        case 0x4ba66cu: goto label_4ba66c;
        case 0x4ba670u: goto label_4ba670;
        case 0x4ba674u: goto label_4ba674;
        case 0x4ba678u: goto label_4ba678;
        case 0x4ba67cu: goto label_4ba67c;
        case 0x4ba680u: goto label_4ba680;
        case 0x4ba684u: goto label_4ba684;
        case 0x4ba688u: goto label_4ba688;
        case 0x4ba68cu: goto label_4ba68c;
        case 0x4ba690u: goto label_4ba690;
        case 0x4ba694u: goto label_4ba694;
        case 0x4ba698u: goto label_4ba698;
        case 0x4ba69cu: goto label_4ba69c;
        case 0x4ba6a0u: goto label_4ba6a0;
        case 0x4ba6a4u: goto label_4ba6a4;
        case 0x4ba6a8u: goto label_4ba6a8;
        case 0x4ba6acu: goto label_4ba6ac;
        case 0x4ba6b0u: goto label_4ba6b0;
        case 0x4ba6b4u: goto label_4ba6b4;
        case 0x4ba6b8u: goto label_4ba6b8;
        case 0x4ba6bcu: goto label_4ba6bc;
        case 0x4ba6c0u: goto label_4ba6c0;
        case 0x4ba6c4u: goto label_4ba6c4;
        case 0x4ba6c8u: goto label_4ba6c8;
        case 0x4ba6ccu: goto label_4ba6cc;
        default: break;
    }

    ctx->pc = 0x4ba638u;

label_4ba638:
    // 0x4ba638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ba638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ba63c:
    // 0x4ba63c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ba63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4ba640:
    // 0x4ba640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ba640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ba644:
    // 0x4ba644: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ba644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4ba648:
    // 0x4ba648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ba648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4ba64c:
    // 0x4ba64c: 0xc1232f2  jal         func_48CBC8
label_4ba650:
    if (ctx->pc == 0x4BA650u) {
        ctx->pc = 0x4BA650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA64Cu;
        // 0x4ba650: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BA654u;
        goto label_4ba654;
    }
    ctx->pc = 0x4BA64Cu;
    SET_GPR_U32(ctx, 31, 0x4BA654u);
    ctx->pc = 0x4BA650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA64Cu;
    // 0x4ba650: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4BA64Cu, 0x4BA654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA654u;
label_4ba654:
    // 0x4ba654: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ba654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4ba658:
    // 0x4ba658: 0xac620df0  sw          $v0, 0xDF0($v1)
    ctx->pc = 0x4ba658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3568), GPR_U32(ctx, 2));
label_4ba65c:
    // 0x4ba65c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ba65cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4ba660:
    // 0x4ba660: 0x4420012  bltzl       $v0, . + 4 + (0x12 << 2)
label_4ba664:
    if (ctx->pc == 0x4BA664u) {
        ctx->pc = 0x4BA664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA660u;
        // 0x4ba664: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BA668u;
        goto label_4ba668;
    }
    ctx->pc = 0x4BA660u;
    {
        const bool branch_taken_0x4ba660 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4ba660) {
            ctx->pc = 0x4BA664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BA660u;
            // 0x4ba664: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BA6ACu;
            goto label_4ba6ac;
        }
    }
    ctx->pc = 0x4BA668u;
label_4ba668:
    // 0x4ba668: 0xc12b642  jal         func_4AD908
label_4ba66c:
    if (ctx->pc == 0x4BA66Cu) {
        ctx->pc = 0x4BA66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA668u;
        // 0x4ba66c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BA670u;
        goto label_4ba670;
    }
    ctx->pc = 0x4BA668u;
    SET_GPR_U32(ctx, 31, 0x4BA670u);
    ctx->pc = 0x4BA66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA668u;
    // 0x4ba66c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4BA668u, 0x4BA670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA670u;
label_4ba670:
    // 0x4ba670: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x4ba670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_4ba674:
    // 0x4ba674: 0x2403042c  addiu       $v1, $zero, 0x42C
    ctx->pc = 0x4ba674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1068));
label_4ba678:
    // 0x4ba678: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4ba678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ba67c:
    // 0x4ba67c: 0xa602015e  sh          $v0, 0x15E($s0)
    ctx->pc = 0x4ba67cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 2));
label_4ba680:
    // 0x4ba680: 0x260501b6  addiu       $a1, $s0, 0x1B6
    ctx->pc = 0x4ba680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 438));
label_4ba684:
    // 0x4ba684: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x4ba684u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_4ba688:
    // 0x4ba688: 0xa60401c2  sh          $a0, 0x1C2($s0)
    ctx->pc = 0x4ba688u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 450), (uint16_t)GPR_U32(ctx, 4));
label_4ba68c:
    // 0x4ba68c: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4ba68cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
label_4ba690:
    // 0x4ba690: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ba690u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4ba694:
    // 0x4ba694: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4ba694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_4ba698:
    // 0x4ba698: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4ba698u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_4ba69c:
    // 0x4ba69c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4ba69cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4ba6a0:
    // 0x4ba6a0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x4ba6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_4ba6a4:
    // 0x4ba6a4: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x4ba6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
label_4ba6a8:
    // 0x4ba6a8: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4ba6a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4ba6ac:
    // 0x4ba6ac: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x4ba6acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_4ba6b0:
    // 0x4ba6b0: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_4ba6b4:
    if (ctx->pc == 0x4BA6B4u) {
        ctx->pc = 0x4BA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA6B0u;
        // 0x4ba6b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BA6B8u;
        goto label_4ba6b8;
    }
    ctx->pc = 0x4BA6B0u;
    {
        const bool branch_taken_0x4ba6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ba6b0) {
            ctx->pc = 0x4BA6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BA6B0u;
            // 0x4ba6b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BA74Cu;
            return;
        }
    }
    ctx->pc = 0x4BA6B8u;
label_4ba6b8:
    // 0x4ba6b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4ba6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4ba6bc:
    // 0x4ba6bc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4ba6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4ba6c0:
    // 0x4ba6c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ba6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4ba6c4:
    // 0x4ba6c4: 0x8c63b360  lw          $v1, -0x4CA0($v1)
    ctx->pc = 0x4ba6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947680)));
label_4ba6c8:
    // 0x4ba6c8: 0x600008  jr          $v1
label_4ba6cc:
    if (ctx->pc == 0x4BA6CCu) {
        ctx->pc = 0x4BA6D0u;
        goto label_fallthrough_0x4ba6c8;
    }
    ctx->pc = 0x4BA6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BA6C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4ba6c8:
    ctx->pc = 0x4BA6D0u;
}
