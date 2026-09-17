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

// Function: sub_002EEC30
// Address: 0x2eec30 - 0x2eeca8
void sub_002EEC30_0x2eec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEC30_0x2eec30");
#endif

    ctx->pc = 0x2eec30u;

    // 0x2eec30: 0x248400e8  addiu       $a0, $a0, 0xE8
    ctx->pc = 0x2eec30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x2eec34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2eec34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eec38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEC38u;
    {
        const bool branch_taken_0x2eec38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC38u;
        // 0x2eec3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec38) {
            ctx->pc = 0x2EEC50u;
            goto label_2eec50;
        }
    }
    ctx->pc = 0x2EEC40u;
    // 0x2eec40: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2eec40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2eec44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2eec44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2eec48: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEC48u;
    {
        const bool branch_taken_0x2eec48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eec48) {
            ctx->pc = 0x2EEC5Cu;
            goto label_2eec5c;
        }
    }
    ctx->pc = 0x2EEC50u;
label_2eec50:
    // 0x2eec50: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2eec50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2eec54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eec54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eec58: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2eec58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2eec5c:
    // 0x2eec5c: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EEC5Cu;
    {
        const bool branch_taken_0x2eec5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eec5c) {
            ctx->pc = 0x2EECA0u;
            goto label_2eeca0;
        }
    }
    ctx->pc = 0x2EEC64u;
    // 0x2eec64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2eec64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eec68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEC68u;
    {
        const bool branch_taken_0x2eec68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC68u;
        // 0x2eec6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec68) {
            ctx->pc = 0x2EEC80u;
            goto label_2eec80;
        }
    }
    ctx->pc = 0x2EEC70u;
    // 0x2eec70: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2eec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2eec74: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2eec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2eec78: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEC78u;
    {
        const bool branch_taken_0x2eec78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EEC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC78u;
        // 0x2eec7c: 0x24a30130  addiu       $v1, $a1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec78) {
            ctx->pc = 0x2EEC90u;
            goto label_2eec90;
        }
    }
    ctx->pc = 0x2EEC80u;
label_2eec80:
    // 0x2eec80: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2eec80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2eec84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eec84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eec88: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2eec88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2eec8c: 0x24a30130  addiu       $v1, $a1, 0x130
    ctx->pc = 0x2eec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 304));
label_2eec90:
    // 0x2eec90: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2eec90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eec94: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EEC94u;
    {
        const bool branch_taken_0x2eec94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC94u;
        // 0x2eec98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec94) {
            ctx->pc = 0x2EECA0u;
            goto label_2eeca0;
        }
    }
    ctx->pc = 0x2EEC9Cu;
    // 0x2eec9c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2eec9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2eeca0:
    // 0x2eeca0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EECA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EECA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EECA8u;
}
