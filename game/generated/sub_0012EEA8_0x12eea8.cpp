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

// Function: sub_0012EEA8
// Address: 0x12eea8 - 0x12ef28
void sub_0012EEA8_0x12eea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EEA8_0x12eea8");
#endif

    ctx->pc = 0x12eea8u;

    // 0x12eea8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12eeac: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12eeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12eeb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EEB0u;
    {
        const bool branch_taken_0x12eeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEB0u;
        // 0x12eeb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eeb0) {
            ctx->pc = 0x12EEC0u;
            goto label_12eec0;
        }
    }
    ctx->pc = 0x12EEB8u;
    // 0x12eeb8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x12eeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12eebc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x12eebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_12eec0:
    // 0x12eec0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x12eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x12eec4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12eec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12eec8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EEC8u;
    {
        const bool branch_taken_0x12eec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEC8u;
        // 0x12eecc: 0x3c02f000  lui         $v0, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eec8) {
            ctx->pc = 0x12EED8u;
            goto label_12eed8;
        }
    }
    ctx->pc = 0x12EED0u;
    // 0x12eed0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x12eed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x12eed4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x12eed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_12eed8:
    // 0x12eed8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12eed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12eedc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EEDCu;
    {
        const bool branch_taken_0x12eedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEDCu;
        // 0x12eee0: 0x3c02c000  lui         $v0, 0xC000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eedc) {
            ctx->pc = 0x12EEECu;
            goto label_12eeec;
        }
    }
    ctx->pc = 0x12EEE4u;
    // 0x12eee4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x12eee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12eee8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x12eee8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_12eeec:
    // 0x12eeec: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12eeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12eef0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EEF0u;
    {
        const bool branch_taken_0x12eef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12eef0) {
            ctx->pc = 0x12EF00u;
            goto label_12ef00;
        }
    }
    ctx->pc = 0x12EEF8u;
    // 0x12eef8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x12eef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x12eefc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x12eefcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_12ef00:
    // 0x12ef00: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12EF00u;
    {
        const bool branch_taken_0x12ef00 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x12EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF00u;
        // 0x12ef04: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef00) {
            ctx->pc = 0x12EF20u;
            goto label_12ef20;
        }
    }
    ctx->pc = 0x12EF08u;
    // 0x12ef08: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x12ef08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x12ef0c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12ef0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12ef10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12ef10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12ef14: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12EF14u;
    {
        const bool branch_taken_0x12ef14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF14u;
        // 0x12ef18: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef14) {
            ctx->pc = 0x12EF20u;
            goto label_12ef20;
        }
    }
    ctx->pc = 0x12EF1Cu;
    // 0x12ef1c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x12ef1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12ef20:
    // 0x12ef20: 0x3e00008  jr          $ra
    ctx->pc = 0x12EF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EF28u;
}
