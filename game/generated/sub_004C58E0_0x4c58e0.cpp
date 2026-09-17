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

// Function: sub_004C58E0
// Address: 0x4c58e0 - 0x4c5938
void sub_004C58E0_0x4c58e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C58E0_0x4c58e0");
#endif

    switch (ctx->pc) {
        case 0x4c58e0u: goto label_4c58e0;
        case 0x4c58e4u: goto label_4c58e4;
        case 0x4c58e8u: goto label_4c58e8;
        case 0x4c58ecu: goto label_4c58ec;
        case 0x4c58f0u: goto label_4c58f0;
        case 0x4c58f4u: goto label_4c58f4;
        case 0x4c58f8u: goto label_4c58f8;
        case 0x4c58fcu: goto label_4c58fc;
        case 0x4c5900u: goto label_4c5900;
        case 0x4c5904u: goto label_4c5904;
        case 0x4c5908u: goto label_4c5908;
        case 0x4c590cu: goto label_4c590c;
        case 0x4c5910u: goto label_4c5910;
        case 0x4c5914u: goto label_4c5914;
        case 0x4c5918u: goto label_4c5918;
        case 0x4c591cu: goto label_4c591c;
        case 0x4c5920u: goto label_4c5920;
        case 0x4c5924u: goto label_4c5924;
        case 0x4c5928u: goto label_4c5928;
        case 0x4c592cu: goto label_4c592c;
        case 0x4c5930u: goto label_4c5930;
        case 0x4c5934u: goto label_4c5934;
        default: break;
    }

    ctx->pc = 0x4c58e0u;

label_4c58e0:
    // 0x4c58e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c58e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4c58e4:
    // 0x4c58e4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c58e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4c58e8:
    // 0x4c58e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c58e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4c58ec:
    // 0x4c58ec: 0x24a50ee0  addiu       $a1, $a1, 0xEE0
    ctx->pc = 0x4c58ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3808));
label_4c58f0:
    // 0x4c58f0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4c58f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c58f4:
    // 0x4c58f4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c58f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4c58f8:
    // 0x4c58f8: 0x84c4016a  lh          $a0, 0x16A($a2)
    ctx->pc = 0x4c58f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 362)));
label_4c58fc:
    // 0x4c58fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c58fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c5900:
    // 0x4c5900: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4c5900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4c5904:
    // 0x4c5904: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c5904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4c5908:
    // 0x4c5908: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c5908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_4c590c:
    // 0x4c590c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4c590cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4c5910:
    // 0x4c5910: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4c5910u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c5914:
    // 0x4c5914: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x4c5914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_4c5918:
    // 0x4c5918: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_4c591c:
    if (ctx->pc == 0x4C591Cu) {
        ctx->pc = 0x4C591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C5918u;
        // 0x4c591c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C5920u;
        goto label_4c5920;
    }
    ctx->pc = 0x4C5918u;
    {
        const bool branch_taken_0x4c5918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c5918) {
            ctx->pc = 0x4C591Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C5918u;
            // 0x4c591c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C598Cu;
            return;
        }
    }
    ctx->pc = 0x4C5920u;
label_4c5920:
    // 0x4c5920: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4c5920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c5924:
    // 0x4c5924: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4c5924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4c5928:
    // 0x4c5928: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c5928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c592c:
    // 0x4c592c: 0x8c63b550  lw          $v1, -0x4AB0($v1)
    ctx->pc = 0x4c592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948176)));
label_4c5930:
    // 0x4c5930: 0x600008  jr          $v1
label_4c5934:
    if (ctx->pc == 0x4C5934u) {
        ctx->pc = 0x4C5938u;
        goto label_fallthrough_0x4c5930;
    }
    ctx->pc = 0x4C5930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C5930u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4c5930:
    ctx->pc = 0x4C5938u;
}
