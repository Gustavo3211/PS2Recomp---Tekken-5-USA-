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

// Function: sub_0032CF18
// Address: 0x32cf18 - 0x32cf90
void sub_0032CF18_0x32cf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CF18_0x32cf18");
#endif

    switch (ctx->pc) {
        case 0x32cf50u: goto label_32cf50;
        case 0x32cf58u: goto label_32cf58;
        case 0x32cf78u: goto label_32cf78;
        default: break;
    }

    ctx->pc = 0x32cf18u;

    // 0x32cf18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32cf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32cf1c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x32cf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x32cf20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32cf20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cf24: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x32cf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x32cf28: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x32cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x32cf2c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32cf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32cf30: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x32cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x32cf34: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x32CF34u;
    {
        const bool branch_taken_0x32cf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cf34) {
            ctx->pc = 0x32CF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CF34u;
            // 0x32cf38: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CF7Cu;
            goto label_32cf7c;
        }
    }
    ctx->pc = 0x32CF3Cu;
    // 0x32cf3c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x32cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x32cf40: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x32cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x32cf44: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x32cf44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32cf48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32CF48u;
    {
        const bool branch_taken_0x32cf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CF48u;
        // 0x32cf4c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cf48) {
            ctx->pc = 0x32CF60u;
            goto label_32cf60;
        }
    }
    ctx->pc = 0x32CF50u;
label_32cf50:
    // 0x32cf50: 0xc0d0f5a  jal         func_343D68
    ctx->pc = 0x32CF50u;
    SET_GPR_U32(ctx, 31, 0x32CF58u);
    ctx->pc = 0x32CF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CF50u;
    // 0x32cf54: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343D68u, 0x32CF50u, 0x32CF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CF58u;
label_32cf58:
    // 0x32cf58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32cf5c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x32cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32cf60:
    // 0x32cf60: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x32cf64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x32cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cf68: 0x5462fff9  bnel        $v1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x32CF68u;
    {
        const bool branch_taken_0x32cf68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32cf68) {
            ctx->pc = 0x32CF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CF68u;
            // 0x32cf6c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32cf50;
        }
    }
    ctx->pc = 0x32CF70u;
    // 0x32cf70: 0xc0cb3f8  jal         func_32CFE0
    ctx->pc = 0x32CF70u;
    SET_GPR_U32(ctx, 31, 0x32CF78u);
    ctx->pc = 0x32CF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CF70u;
    // 0x32cf74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CFE0u, 0x32CF70u, 0x32CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CF78u;
label_32cf78:
    // 0x32cf78: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x32cf78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32cf7c:
    // 0x32cf7c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x32cf7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32cf80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32cf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32cf84: 0x3e00008  jr          $ra
    ctx->pc = 0x32CF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CF84u;
        // 0x32cf88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CF8Cu;
    // 0x32cf8c: 0x0  nop
    ctx->pc = 0x32cf8cu;
    // NOP
    ctx->pc = 0x32cf90u;
}
