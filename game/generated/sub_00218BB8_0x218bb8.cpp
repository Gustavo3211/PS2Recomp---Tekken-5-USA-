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

// Function: sub_00218BB8
// Address: 0x218bb8 - 0x218c10
void sub_00218BB8_0x218bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218BB8_0x218bb8");
#endif

    switch (ctx->pc) {
        case 0x218bb8u: goto label_218bb8;
        case 0x218bbcu: goto label_218bbc;
        case 0x218bc0u: goto label_218bc0;
        case 0x218bc4u: goto label_218bc4;
        case 0x218bc8u: goto label_218bc8;
        case 0x218bccu: goto label_218bcc;
        case 0x218bd0u: goto label_218bd0;
        case 0x218bd4u: goto label_218bd4;
        case 0x218bd8u: goto label_218bd8;
        case 0x218bdcu: goto label_218bdc;
        case 0x218be0u: goto label_218be0;
        case 0x218be4u: goto label_218be4;
        case 0x218be8u: goto label_218be8;
        case 0x218becu: goto label_218bec;
        case 0x218bf0u: goto label_218bf0;
        case 0x218bf4u: goto label_218bf4;
        case 0x218bf8u: goto label_218bf8;
        case 0x218bfcu: goto label_218bfc;
        case 0x218c00u: goto label_218c00;
        case 0x218c04u: goto label_218c04;
        case 0x218c08u: goto label_218c08;
        case 0x218c0cu: goto label_218c0c;
        default: break;
    }

    ctx->pc = 0x218bb8u;

label_218bb8:
    // 0x218bb8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x218bb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_218bbc:
    // 0x218bbc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218bbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_218bc0:
    // 0x218bc0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x218bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_218bc4:
    // 0x218bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_218bc8:
    // 0x218bc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_218bcc:
    // 0x218bcc: 0x2c420050  sltiu       $v0, $v0, 0x50
    ctx->pc = 0x218bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
label_218bd0:
    // 0x218bd0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_218bd4:
    if (ctx->pc == 0x218BD4u) {
        ctx->pc = 0x218BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BD0u;
        // 0x218bd4: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218BD8u;
        goto label_218bd8;
    }
    ctx->pc = 0x218BD0u;
    {
        const bool branch_taken_0x218bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BD0u;
        // 0x218bd4: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218bd0) {
            ctx->pc = 0x218BE8u;
            goto label_218be8;
        }
    }
    ctx->pc = 0x218BD8u;
label_218bd8:
    // 0x218bd8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x218bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_218bdc:
    // 0x218bdc: 0x10000005  b           . + 4 + (0x5 << 2)
label_218be0:
    if (ctx->pc == 0x218BE0u) {
        ctx->pc = 0x218BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BDCu;
        // 0x218be0: 0x24425b68  addiu       $v0, $v0, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218BE4u;
        goto label_218be4;
    }
    ctx->pc = 0x218BDCu;
    {
        const bool branch_taken_0x218bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BDCu;
        // 0x218be0: 0x24425b68  addiu       $v0, $v0, 0x5B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218bdc) {
            ctx->pc = 0x218BF4u;
            goto label_218bf4;
        }
    }
    ctx->pc = 0x218BE4u;
label_218be4:
    // 0x218be4: 0x0  nop
    ctx->pc = 0x218be4u;
    // NOP
label_218be8:
    // 0x218be8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x218be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_218bec:
    // 0x218bec: 0x24425b68  addiu       $v0, $v0, 0x5B68
    ctx->pc = 0x218becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23400));
label_218bf0:
    // 0x218bf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_218bf4:
    // 0x218bf4: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x218bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_218bf8:
    // 0x218bf8: 0x40f809  jalr        $v0
label_218bfc:
    if (ctx->pc == 0x218BFCu) {
        ctx->pc = 0x218C00u;
        goto label_218c00;
    }
    ctx->pc = 0x218BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218C00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218BF8u, 0x218C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x218C00u;
label_218c00:
    // 0x218c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_218c04:
    // 0x218c04: 0x3e00008  jr          $ra
label_218c08:
    if (ctx->pc == 0x218C08u) {
        ctx->pc = 0x218C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C04u;
        // 0x218c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C0Cu;
        goto label_218c0c;
    }
    ctx->pc = 0x218C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C04u;
        // 0x218c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218C0Cu;
label_218c0c:
    // 0x218c0c: 0x0  nop
    ctx->pc = 0x218c0cu;
    // NOP
    ctx->pc = 0x218c10u;
}
