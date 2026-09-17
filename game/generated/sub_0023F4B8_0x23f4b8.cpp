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

// Function: sub_0023F4B8
// Address: 0x23f4b8 - 0x23f510
void sub_0023F4B8_0x23f4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F4B8_0x23f4b8");
#endif

    switch (ctx->pc) {
        case 0x23f4d0u: goto label_23f4d0;
        case 0x23f4f0u: goto label_23f4f0;
        default: break;
    }

    ctx->pc = 0x23f4b8u;

    // 0x23f4b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23f4bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f4c0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F4C0u;
    {
        const bool branch_taken_0x23f4c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4C0u;
        // 0x23f4c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4c0) {
            ctx->pc = 0x23F4D0u;
            goto label_23f4d0;
        }
    }
    ctx->pc = 0x23F4C8u;
    // 0x23f4c8: 0xc0d2fcf  jal         func_34BF3C
    ctx->pc = 0x23F4C8u;
    SET_GPR_U32(ctx, 31, 0x23F4D0u);
    ctx->pc = 0x23F4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F4C8u;
    // 0x23f4cc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x23F4C8u, 0x23F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4D0u;
label_23f4d0:
    // 0x23f4d0: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x23f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x23f4d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f4d8: 0x24633580  addiu       $v1, $v1, 0x3580
    ctx->pc = 0x23f4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13696));
    // 0x23f4dc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x23f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x16358Cu));
    // 0x23f4e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23f4e4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x23f4e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x16358Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x16358Cu, _value); } while (0);
    // 0x23f4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x23F4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4E8u;
        // 0x23f4ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F4F0u;
label_23f4f0:
    // 0x23f4f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F4F0u;
    {
        const bool branch_taken_0x23f4f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f4f0) {
            ctx->pc = 0x23F508u;
            goto label_23f508;
        }
    }
    ctx->pc = 0x23F4F8u;
    // 0x23f4f8: 0x2783a988  addiu       $v1, $gp, -0x5678
    ctx->pc = 0x23f4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945160));
    // 0x23f4fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f500: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23f500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23f504: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23f504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_23f508:
    // 0x23f508: 0x3e00008  jr          $ra
    ctx->pc = 0x23F508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F510u;
}
