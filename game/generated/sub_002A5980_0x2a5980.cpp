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

// Function: sub_002A5980
// Address: 0x2a5980 - 0x2a59c0
void sub_002A5980_0x2a5980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5980_0x2a5980");
#endif

    ctx->pc = 0x2a5980u;

    // 0x2a5980: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2a5980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a5984: 0x2ca50004  sltiu       $a1, $a1, 0x4
    ctx->pc = 0x2a5984u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a5988: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2A5988u;
    {
        const bool branch_taken_0x2a5988 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5988u;
        // 0x2a598c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5988) {
            ctx->pc = 0x2A59B8u;
            goto label_2a59b8;
        }
    }
    ctx->pc = 0x2A5990u;
    // 0x2a5990: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A5990u;
    {
        const bool branch_taken_0x2a5990 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5990u;
        // 0x2a5994: 0x8c440154  lw          $a0, 0x154($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5990) {
            ctx->pc = 0x2A59A8u;
            goto label_2a59a8;
        }
    }
    ctx->pc = 0x2A5998u;
    // 0x2a5998: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a5998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a599c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a599cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a59a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A59A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A59A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A59A0u;
        // 0x2a59a4: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A59A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A59A8u;
label_2a59a8:
    // 0x2a59a8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a59a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a59ac: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2a59acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a59b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a59b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a59b4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a59b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a59b8:
    // 0x2a59b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A59B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A59B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A59C0u;
}
