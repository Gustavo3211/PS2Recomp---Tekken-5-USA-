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

// Function: sub_002CA8F0
// Address: 0x2ca8f0 - 0x2ca960
void sub_002CA8F0_0x2ca8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA8F0_0x2ca8f0");
#endif

    switch (ctx->pc) {
        case 0x2ca904u: goto label_2ca904;
        case 0x2ca930u: goto label_2ca930;
        default: break;
    }

    ctx->pc = 0x2ca8f0u;

    // 0x2ca8f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ca8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ca8f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca8f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ca8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ca8fc: 0xc0b4750  jal         func_2D1D40
    ctx->pc = 0x2CA8FCu;
    SET_GPR_U32(ctx, 31, 0x2CA904u);
    ctx->pc = 0x2CA900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA8FCu;
    // 0x2ca900: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D40u, 0x2CA8FCu, 0x2CA904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA904u;
label_2ca904:
    // 0x2ca904: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2ca904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2ca908: 0x8f86bb18  lw          $a2, -0x44E8($gp)
    ctx->pc = 0x2ca908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949656)));
    // 0x2ca90c: 0x8ca383c0  lw          $v1, -0x7C40($a1)
    ctx->pc = 0x2ca90cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x2ca910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca914: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca918: 0x38630009  xori        $v1, $v1, 0x9
    ctx->pc = 0x2ca918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)9);
    // 0x2ca91c: 0xc3800a  movz        $s0, $a2, $v1
    ctx->pc = 0x2ca91cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x2ca920: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2CA920u;
    {
        const bool branch_taken_0x2ca920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca920) {
            ctx->pc = 0x2CA924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA920u;
            // 0x2ca924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA950u;
            goto label_2ca950;
        }
    }
    ctx->pc = 0x2CA928u;
    // 0x2ca928: 0xc0b2a76  jal         func_2CA9D8
    ctx->pc = 0x2CA928u;
    SET_GPR_U32(ctx, 31, 0x2CA930u);
    ctx->pc = 0x2CA9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9D8u, 0x2CA928u, 0x2CA930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA930u;
label_2ca930:
    // 0x2ca930: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ca930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ca934: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ca934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ca938: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2ca938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ca93c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2ca93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2ca940: 0x8c6403c8  lw          $a0, 0x3C8($v1)
    ctx->pc = 0x2ca940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x2ca944: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CA944u;
    {
        const bool branch_taken_0x2ca944 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA944u;
        // 0x2ca948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca944) {
            ctx->pc = 0x2CA950u;
            goto label_2ca950;
        }
    }
    ctx->pc = 0x2CA94Cu;
    // 0x2ca94c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca94cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca950:
    // 0x2ca950: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca954: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ca954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca958: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA958u;
        // 0x2ca95c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA960u;
}
