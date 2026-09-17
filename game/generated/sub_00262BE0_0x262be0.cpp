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

// Function: sub_00262BE0
// Address: 0x262be0 - 0x262c78
void sub_00262BE0_0x262be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262BE0_0x262be0");
#endif

    switch (ctx->pc) {
        case 0x262c10u: goto label_262c10;
        case 0x262c40u: goto label_262c40;
        case 0x262c50u: goto label_262c50;
        default: break;
    }

    ctx->pc = 0x262be0u;

    // 0x262be0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x262be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x262be4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x262be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x262be8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x262be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262bec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x262becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x262bf0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x262bf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262bf4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x262bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x262bf8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x262bf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262bfc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x262bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x262c00: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x262c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x262c04: 0x8e420894  lw          $v0, 0x894($s2)
    ctx->pc = 0x262c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    // 0x262c08: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x262c08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x262c0c: 0x86420012  lh          $v0, 0x12($s2)
    ctx->pc = 0x262c0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_262c10:
    // 0x262c10: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x262c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x262c14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x262c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x262c18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x262c1c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x262c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x262c20: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x262c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x262c24: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x262c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x262c28: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x262c28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x262c2c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x262c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x262c30: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x262c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x262c34: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x262c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x262c38: 0xc098ae0  jal         func_262B80
    ctx->pc = 0x262C38u;
    SET_GPR_U32(ctx, 31, 0x262C40u);
    ctx->pc = 0x262C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262C38u;
    // 0x262c3c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262B80u, 0x262C38u, 0x262C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262C40u;
label_262c40:
    // 0x262c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x262c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c48: 0xc097084  jal         func_25C210
    ctx->pc = 0x262C48u;
    SET_GPR_U32(ctx, 31, 0x262C50u);
    ctx->pc = 0x262C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262C48u;
    // 0x262c4c: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x262C48u, 0x262C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262C50u;
label_262c50:
    // 0x262c50: 0x2a220016  slti        $v0, $s1, 0x16
    ctx->pc = 0x262c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x262c54: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x262C54u;
    {
        const bool branch_taken_0x262c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262c54) {
            ctx->pc = 0x262C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262C54u;
            // 0x262c58: 0x86420012  lh          $v0, 0x12($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262c10;
        }
    }
    ctx->pc = 0x262C5Cu;
    // 0x262c5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x262c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262c60: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x262c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x262c64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x262c64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262c68: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x262c68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x262c6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x262c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262c70: 0x3e00008  jr          $ra
    ctx->pc = 0x262C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C70u;
        // 0x262c74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262C78u;
}
