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

// Function: sub_004A48C0
// Address: 0x4a48c0 - 0x4a4968
void sub_004A48C0_0x4a48c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A48C0_0x4a48c0");
#endif

    ctx->pc = 0x4a48c0u;

    // 0x4a48c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a48c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a48c4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4a48c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a48c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a48c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a48cc: 0x24670018  addiu       $a3, $v1, 0x18
    ctx->pc = 0x4a48ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x4a48d0: 0x24680010  addiu       $t0, $v1, 0x10
    ctx->pc = 0x4a48d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4a48d4: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4a48d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a48d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4A48D8u;
    {
        const bool branch_taken_0x4a48d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A48DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A48D8u;
        // 0x4a48dc: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a48d8) {
            ctx->pc = 0x4A4910u;
            goto label_4a4910;
        }
    }
    ctx->pc = 0x4A48E0u;
    // 0x4a48e0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4a48e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a48e4: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x4a48e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4a48e8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a48e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a48ec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a48ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4a48f0: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x4a48f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4a48f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a48f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a48f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a48f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a48fc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a48fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a4900: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4a4900u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4a4904: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4904u;
        // 0x4a4908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A490Cu;
    // 0x4a490c: 0x0  nop
    ctx->pc = 0x4a490cu;
    // NOP
label_4a4910:
    // 0x4a4910: 0x84620016  lh          $v0, 0x16($v1)
    ctx->pc = 0x4a4910u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x4a4914: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a4914u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a4918: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4a4918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a491c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a491cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a4920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a4920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4924: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a4924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a4928: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a4928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a492c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4a492cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4a4930: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4a4930u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a4934: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4a4934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a4938: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a4938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a493c: 0xa61824  and         $v1, $a1, $a2
    ctx->pc = 0x4a493cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4a4940: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a4940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a4944: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a4944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a4948: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x4a4948u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4a494c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a494cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a4950: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x4a4950u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x4a4954: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a4954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a4958: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4a4958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4a495c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4a495cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4a4960: 0x81291b2  j           func_4A46C8
    ctx->pc = 0x4A4960u;
    ctx->pc = 0x4A4964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4960u;
    // 0x4a4964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A46C8u, 0x4A4960u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A4968u;
}
