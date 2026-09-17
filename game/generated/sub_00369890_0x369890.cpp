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

// Function: sub_00369890
// Address: 0x369890 - 0x369918
void sub_00369890_0x369890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369890_0x369890");
#endif

    switch (ctx->pc) {
        case 0x3698b4u: goto label_3698b4;
        case 0x3698ccu: goto label_3698cc;
        default: break;
    }

    ctx->pc = 0x369890u;

    // 0x369890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x369894: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x369894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x369898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36989c: 0x24506c38  addiu       $s0, $v0, 0x6C38
    ctx->pc = 0x36989cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27704));
    // 0x3698a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3698a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6C38u));
    // 0x3698a4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3698A4u;
    {
        const bool branch_taken_0x3698a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3698A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3698A4u;
        // 0x3698a8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3698a4) {
            ctx->pc = 0x3698CCu;
            goto label_3698cc;
        }
    }
    ctx->pc = 0x3698ACu;
    // 0x3698ac: 0xc0db7d6  jal         func_36DF58
    ctx->pc = 0x3698ACu;
    SET_GPR_U32(ctx, 31, 0x3698B4u);
    ctx->pc = 0x36DF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DF58u, 0x3698ACu, 0x3698B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3698B4u;
label_3698b4:
    // 0x3698b4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3698b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3698b8: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x3698b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x3698bc: 0x24a55a50  addiu       $a1, $a1, 0x5A50
    ctx->pc = 0x3698bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23120));
    // 0x3698c0: 0x24c67180  addiu       $a2, $a2, 0x7180
    ctx->pc = 0x3698c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29056));
    // 0x3698c4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x3698C4u;
    SET_GPR_U32(ctx, 31, 0x3698CCu);
    ctx->pc = 0x3698C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3698C4u;
    // 0x3698c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x3698C4u, 0x3698CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3698CCu;
label_3698cc:
    // 0x3698cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3698ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3698d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3698d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3698d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3698d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3698d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3698D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3698DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3698D8u;
        // 0x3698dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3698D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3698E0u;
    // 0x3698e0: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x3698e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x3698e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3698e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3698e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3698E8u;
    {
        const bool branch_taken_0x3698e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3698ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3698E8u;
        // 0x3698ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3698e8) {
            ctx->pc = 0x369900u;
            goto label_369900;
        }
    }
    ctx->pc = 0x3698F0u;
    // 0x3698f0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3698f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3698f4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3698f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3698f8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3698F8u;
    {
        const bool branch_taken_0x3698f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3698f8) {
            ctx->pc = 0x36990Cu;
            goto label_36990c;
        }
    }
    ctx->pc = 0x369900u;
label_369900:
    // 0x369900: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x369900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x369904: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369908: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x369908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_36990c:
    // 0x36990c: 0x3e00008  jr          $ra
    ctx->pc = 0x36990Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36990Cu;
        // 0x369910: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36990Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369914u;
    // 0x369914: 0x0  nop
    ctx->pc = 0x369914u;
    // NOP
    ctx->pc = 0x369918u;
}
