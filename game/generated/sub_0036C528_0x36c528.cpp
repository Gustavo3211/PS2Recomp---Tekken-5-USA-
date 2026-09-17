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

// Function: sub_0036C528
// Address: 0x36c528 - 0x36c5a0
void sub_0036C528_0x36c528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C528_0x36c528");
#endif

    switch (ctx->pc) {
        case 0x36c54cu: goto label_36c54c;
        case 0x36c564u: goto label_36c564;
        default: break;
    }

    ctx->pc = 0x36c528u;

    // 0x36c528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c52c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36c530: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c534: 0x24506f08  addiu       $s0, $v0, 0x6F08
    ctx->pc = 0x36c534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28424));
    // 0x36c538: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36c538u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6F08u));
    // 0x36c53c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36C53Cu;
    {
        const bool branch_taken_0x36c53c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C53Cu;
        // 0x36c540: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c53c) {
            ctx->pc = 0x36C564u;
            goto label_36c564;
        }
    }
    ctx->pc = 0x36C544u;
    // 0x36c544: 0xc0dae78  jal         func_36B9E0
    ctx->pc = 0x36C544u;
    SET_GPR_U32(ctx, 31, 0x36C54Cu);
    ctx->pc = 0x36B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B9E0u, 0x36C544u, 0x36C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C54Cu;
label_36c54c:
    // 0x36c54c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36c54cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36c550: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36c550u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36c554: 0x24a5c640  addiu       $a1, $a1, -0x39C0
    ctx->pc = 0x36c554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952512));
    // 0x36c558: 0x24c66ec8  addiu       $a2, $a2, 0x6EC8
    ctx->pc = 0x36c558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28360));
    // 0x36c55c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36C55Cu;
    SET_GPR_U32(ctx, 31, 0x36C564u);
    ctx->pc = 0x36C560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C55Cu;
    // 0x36c560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36C55Cu, 0x36C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C564u;
label_36c564:
    // 0x36c564: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36c564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c56c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c570: 0x3e00008  jr          $ra
    ctx->pc = 0x36C570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C570u;
        // 0x36c574: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C578u;
    // 0x36c578: 0x3e00008  jr          $ra
    ctx->pc = 0x36C578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C578u;
        // 0x36c57c: 0xac850164  sw          $a1, 0x164($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C580u;
    // 0x36c580: 0x3e00008  jr          $ra
    ctx->pc = 0x36C580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C580u;
        // 0x36c584: 0x8c820164  lw          $v0, 0x164($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 356)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C588u;
    // 0x36c588: 0x3e00008  jr          $ra
    ctx->pc = 0x36C588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C588u;
        // 0x36c58c: 0xac85015c  sw          $a1, 0x15C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C590u;
    // 0x36c590: 0x3e00008  jr          $ra
    ctx->pc = 0x36C590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C590u;
        // 0x36c594: 0x8c82015c  lw          $v0, 0x15C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C598u;
    // 0x36c598: 0x3e00008  jr          $ra
    ctx->pc = 0x36C598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C598u;
        // 0x36c59c: 0x8c820150  lw          $v0, 0x150($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C5A0u;
}
