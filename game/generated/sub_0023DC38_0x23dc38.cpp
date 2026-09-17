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

// Function: sub_0023DC38
// Address: 0x23dc38 - 0x23dcc0
void sub_0023DC38_0x23dc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DC38_0x23dc38");
#endif

    switch (ctx->pc) {
        case 0x23dc78u: goto label_23dc78;
        case 0x23dc98u: goto label_23dc98;
        default: break;
    }

    ctx->pc = 0x23dc38u;

    // 0x23dc38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23dc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23dc3c: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x23dc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x23dc40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23dc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23dc44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23dc44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dc48: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x23dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x23dc4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23dc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23dc50: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23dc54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23dc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23dc58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23dc5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23dc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23dc60: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23dc64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23dc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23dc68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23dc68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dc6c: 0x29140  sll         $s2, $v0, 5
    ctx->pc = 0x23dc6cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x23dc70: 0x24730af0  addiu       $s3, $v1, 0xAF0
    ctx->pc = 0x23dc70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2800));
    // 0x23dc74: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x23dc74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_23dc78:
    // 0x23dc78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23dc78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dc7c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x23dc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x23dc80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23dc80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23dc84: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x23dc84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x23dc88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23dc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dc8c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x23dc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x23dc90: 0xc08f6d2  jal         func_23DB48
    ctx->pc = 0x23DC90u;
    SET_GPR_U32(ctx, 31, 0x23DC98u);
    ctx->pc = 0x23DC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DC90u;
    // 0x23dc94: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DB48u, 0x23DC90u, 0x23DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DC98u;
label_23dc98:
    // 0x23dc98: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x23dc98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x23dc9c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x23DC9Cu;
    {
        const bool branch_taken_0x23dc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dc9c) {
            ctx->pc = 0x23DCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DC9Cu;
            // 0x23dca0: 0x102040  sll         $a0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23dc78;
        }
    }
    ctx->pc = 0x23DCA4u;
    // 0x23dca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23dca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23dca8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23dca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23dcac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23dcacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23dcb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23dcb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23dcb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23dcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23dcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x23DCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCB8u;
        // 0x23dcbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DCC0u;
}
