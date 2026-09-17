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

// Function: sub_00294AA8
// Address: 0x294aa8 - 0x294b08
void sub_00294AA8_0x294aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294AA8_0x294aa8");
#endif

    ctx->pc = 0x294aa8u;

    // 0x294aa8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x294aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294aac: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x294aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x294ab0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294AB0u;
    {
        const bool branch_taken_0x294ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294AB0u;
        // 0x294ab4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ab0) {
            ctx->pc = 0x294AC8u;
            goto label_294ac8;
        }
    }
    ctx->pc = 0x294AB8u;
    // 0x294ab8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x294ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x294abc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x294abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x294ac0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x294ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x294ac4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x294ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_294ac8:
    // 0x294ac8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x294ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x294acc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294ACCu;
    {
        const bool branch_taken_0x294acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294ACCu;
        // 0x294ad0: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294acc) {
            ctx->pc = 0x294AE4u;
            goto label_294ae4;
        }
    }
    ctx->pc = 0x294AD4u;
    // 0x294ad4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x294ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x294ad8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x294ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x294adc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x294adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x294ae0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x294ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_294ae4:
    // 0x294ae4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x294ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x294ae8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294AE8u;
    {
        const bool branch_taken_0x294ae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x294AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294AE8u;
        // 0x294aec: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ae8) {
            ctx->pc = 0x294B00u;
            goto label_294b00;
        }
    }
    ctx->pc = 0x294AF0u;
    // 0x294af0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x294af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x294af4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x294af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x294af8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x294af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x294afc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x294afcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_294b00:
    // 0x294b00: 0x3e00008  jr          $ra
    ctx->pc = 0x294B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294B08u;
}
