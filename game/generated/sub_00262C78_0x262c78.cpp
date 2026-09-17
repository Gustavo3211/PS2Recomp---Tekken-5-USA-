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

// Function: sub_00262C78
// Address: 0x262c78 - 0x262d10
void sub_00262C78_0x262c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262C78_0x262c78");
#endif

    switch (ctx->pc) {
        case 0x262ca8u: goto label_262ca8;
        case 0x262cb0u: goto label_262cb0;
        case 0x262ce8u: goto label_262ce8;
        default: break;
    }

    ctx->pc = 0x262c78u;

    // 0x262c78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x262c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x262c7c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x262c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x262c80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x262c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x262c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x262c88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x262c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c8c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x262c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x262c90: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x262c90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x262c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x262c98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x262c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x262c9c: 0x8e420894  lw          $v0, 0x894($s2)
    ctx->pc = 0x262c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    // 0x262ca0: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x262ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x262ca4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x262ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_262ca8:
    // 0x262ca8: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x262CA8u;
    SET_GPR_U32(ctx, 31, 0x262CB0u);
    ctx->pc = 0x262CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262CA8u;
    // 0x262cac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x262CA8u, 0x262CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262CB0u;
label_262cb0:
    // 0x262cb0: 0x86420012  lh          $v0, 0x12($s2)
    ctx->pc = 0x262cb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x262cb4: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x262cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x262cb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x262cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x262cbc: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x262cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x262cc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x262cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262cc4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x262cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x262cc8: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x262cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x262ccc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x262cccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x262cd0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x262cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x262cd4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x262cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x262cd8: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x262cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x262cdc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x262cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x262ce0: 0xc098ac6  jal         func_262B18
    ctx->pc = 0x262CE0u;
    SET_GPR_U32(ctx, 31, 0x262CE8u);
    ctx->pc = 0x262CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262CE0u;
    // 0x262ce4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262B18u, 0x262CE0u, 0x262CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262CE8u;
label_262ce8:
    // 0x262ce8: 0x2a220016  slti        $v0, $s1, 0x16
    ctx->pc = 0x262ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x262cec: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x262CECu;
    {
        const bool branch_taken_0x262cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262cec) {
            ctx->pc = 0x262CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262CECu;
            // 0x262cf0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262ca8;
        }
    }
    ctx->pc = 0x262CF4u;
    // 0x262cf4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x262cf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262cf8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x262cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x262cfc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x262cfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262d00: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x262d00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x262d04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x262d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262d08: 0x3e00008  jr          $ra
    ctx->pc = 0x262D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D08u;
        // 0x262d0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262D10u;
}
