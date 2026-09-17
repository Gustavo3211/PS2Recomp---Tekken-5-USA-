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

// Function: sub_004C5828
// Address: 0x4c5828 - 0x4c5880
void sub_004C5828_0x4c5828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C5828_0x4c5828");
#endif

    switch (ctx->pc) {
        case 0x4c5828u: goto label_4c5828;
        case 0x4c582cu: goto label_4c582c;
        case 0x4c5830u: goto label_4c5830;
        case 0x4c5834u: goto label_4c5834;
        case 0x4c5838u: goto label_4c5838;
        case 0x4c583cu: goto label_4c583c;
        case 0x4c5840u: goto label_4c5840;
        case 0x4c5844u: goto label_4c5844;
        case 0x4c5848u: goto label_4c5848;
        case 0x4c584cu: goto label_4c584c;
        case 0x4c5850u: goto label_4c5850;
        case 0x4c5854u: goto label_4c5854;
        case 0x4c5858u: goto label_4c5858;
        case 0x4c585cu: goto label_4c585c;
        case 0x4c5860u: goto label_4c5860;
        case 0x4c5864u: goto label_4c5864;
        case 0x4c5868u: goto label_4c5868;
        case 0x4c586cu: goto label_4c586c;
        case 0x4c5870u: goto label_4c5870;
        case 0x4c5874u: goto label_4c5874;
        case 0x4c5878u: goto label_4c5878;
        case 0x4c587cu: goto label_4c587c;
        default: break;
    }

    ctx->pc = 0x4c5828u;

label_4c5828:
    // 0x4c5828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c5828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4c582c:
    // 0x4c582c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c582cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4c5830:
    // 0x4c5830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c5830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4c5834:
    // 0x4c5834: 0x24a50ee0  addiu       $a1, $a1, 0xEE0
    ctx->pc = 0x4c5834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3808));
label_4c5838:
    // 0x4c5838: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4c5838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c583c:
    // 0x4c583c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c583cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4c5840:
    // 0x4c5840: 0x84c4016a  lh          $a0, 0x16A($a2)
    ctx->pc = 0x4c5840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 362)));
label_4c5844:
    // 0x4c5844: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c5844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c5848:
    // 0x4c5848: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4c5848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4c584c:
    // 0x4c584c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c584cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4c5850:
    // 0x4c5850: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c5850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_4c5854:
    // 0x4c5854: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4c5854u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4c5858:
    // 0x4c5858: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4c5858u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c585c:
    // 0x4c585c: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x4c585cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_4c5860:
    // 0x4c5860: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_4c5864:
    if (ctx->pc == 0x4C5864u) {
        ctx->pc = 0x4C5864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5860u;
        // 0x4c5864: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C5868u;
        goto label_4c5868;
    }
    ctx->pc = 0x4C5860u;
    {
        const bool branch_taken_0x4c5860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c5860) {
            ctx->pc = 0x4C5864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5860u;
            // 0x4c5864: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C58D4u;
            return;
        }
    }
    ctx->pc = 0x4C5868u;
label_4c5868:
    // 0x4c5868: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4c5868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c586c:
    // 0x4c586c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4c586cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4c5870:
    // 0x4c5870: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c5870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c5874:
    // 0x4c5874: 0x8c63b520  lw          $v1, -0x4AE0($v1)
    ctx->pc = 0x4c5874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948128)));
label_4c5878:
    // 0x4c5878: 0x600008  jr          $v1
label_4c587c:
    if (ctx->pc == 0x4C587Cu) {
        ctx->pc = 0x4C5880u;
        goto label_fallthrough_0x4c5878;
    }
    ctx->pc = 0x4C5878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C5878u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4c5878:
    ctx->pc = 0x4C5880u;
}
