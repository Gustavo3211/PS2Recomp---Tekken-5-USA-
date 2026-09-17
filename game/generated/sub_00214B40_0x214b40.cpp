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

// Function: sub_00214B40
// Address: 0x214b40 - 0x214b98
void sub_00214B40_0x214b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214B40_0x214b40");
#endif

    switch (ctx->pc) {
        case 0x214b68u: goto label_214b68;
        default: break;
    }

    ctx->pc = 0x214b40u;

    // 0x214b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214b44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x214b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214b48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214b4c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x214b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214b50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x214b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x214b54: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x214b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x214b58: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x214B58u;
    {
        const bool branch_taken_0x214b58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x214B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B58u;
        // 0x214b5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b58) {
            ctx->pc = 0x214B88u;
            goto label_214b88;
        }
    }
    ctx->pc = 0x214B60u;
    // 0x214b60: 0xc085238  jal         func_2148E0
    ctx->pc = 0x214B60u;
    SET_GPR_U32(ctx, 31, 0x214B68u);
    ctx->pc = 0x214B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214B60u;
    // 0x214b64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148E0u, 0x214B60u, 0x214B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214B68u;
label_214b68:
    // 0x214b68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x214b68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b6c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x214b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x214b70: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214B70u;
    {
        const bool branch_taken_0x214b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x214B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B70u;
        // 0x214b74: 0x2404006f  addiu       $a0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b70) {
            ctx->pc = 0x214B80u;
            goto label_214b80;
        }
    }
    ctx->pc = 0x214B78u;
    // 0x214b78: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214B78u;
    {
        const bool branch_taken_0x214b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x214B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B78u;
        // 0x214b7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b78) {
            ctx->pc = 0x214B88u;
            goto label_214b88;
        }
    }
    ctx->pc = 0x214B80u;
label_214b80:
    // 0x214b80: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x214b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214b84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x214b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_214b88:
    // 0x214b88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214b8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x214b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214b90: 0x3e00008  jr          $ra
    ctx->pc = 0x214B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B90u;
        // 0x214b94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214B98u;
}
