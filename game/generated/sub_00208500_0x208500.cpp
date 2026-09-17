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

// Function: sub_00208500
// Address: 0x208500 - 0x208560
void sub_00208500_0x208500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208500_0x208500");
#endif

    switch (ctx->pc) {
        case 0x208510u: goto label_208510;
        case 0x208524u: goto label_208524;
        case 0x208538u: goto label_208538;
        case 0x20854cu: goto label_20854c;
        default: break;
    }

    ctx->pc = 0x208500u;

    // 0x208500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208508: 0xc08215c  jal         func_208570
    ctx->pc = 0x208508u;
    SET_GPR_U32(ctx, 31, 0x208510u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x208508u, 0x208510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208510u;
label_208510:
    // 0x208510: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x208510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x208514: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x208514u;
    {
        const bool branch_taken_0x208514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x208518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208514u;
        // 0x208518: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208514) {
            ctx->pc = 0x208550u;
            goto label_208550;
        }
    }
    ctx->pc = 0x20851Cu;
    // 0x20851c: 0xc08215c  jal         func_208570
    ctx->pc = 0x20851Cu;
    SET_GPR_U32(ctx, 31, 0x208524u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x20851Cu, 0x208524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208524u;
label_208524:
    // 0x208524: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x208524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x208528: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x208528u;
    {
        const bool branch_taken_0x208528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208528u;
        // 0x20852c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208528) {
            ctx->pc = 0x208550u;
            goto label_208550;
        }
    }
    ctx->pc = 0x208530u;
    // 0x208530: 0xc08215c  jal         func_208570
    ctx->pc = 0x208530u;
    SET_GPR_U32(ctx, 31, 0x208538u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x208530u, 0x208538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208538u;
label_208538:
    // 0x208538: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x208538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20853c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20853Cu;
    {
        const bool branch_taken_0x20853c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x208540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20853Cu;
        // 0x208540: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20853c) {
            ctx->pc = 0x208550u;
            goto label_208550;
        }
    }
    ctx->pc = 0x208544u;
    // 0x208544: 0xc08215c  jal         func_208570
    ctx->pc = 0x208544u;
    SET_GPR_U32(ctx, 31, 0x20854Cu);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x208544u, 0x20854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20854Cu;
label_20854c:
    // 0x20854c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20854cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208550:
    // 0x208550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208554: 0x3e00008  jr          $ra
    ctx->pc = 0x208554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208554u;
        // 0x208558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20855Cu;
    // 0x20855c: 0x0  nop
    ctx->pc = 0x20855cu;
    // NOP
    ctx->pc = 0x208560u;
}
