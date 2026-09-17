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

// Function: sub_0036C8B8
// Address: 0x36c8b8 - 0x36c948
void sub_0036C8B8_0x36c8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C8B8_0x36c8b8");
#endif

    switch (ctx->pc) {
        case 0x36c8dcu: goto label_36c8dc;
        case 0x36c8f4u: goto label_36c8f4;
        default: break;
    }

    ctx->pc = 0x36c8b8u;

    // 0x36c8b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c8bc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36c8c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c8c4: 0x24506fc8  addiu       $s0, $v0, 0x6FC8
    ctx->pc = 0x36c8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28616));
    // 0x36c8c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6FC8u));
    // 0x36c8cc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36C8CCu;
    {
        const bool branch_taken_0x36c8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C8CCu;
        // 0x36c8d0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c8cc) {
            ctx->pc = 0x36C8F4u;
            goto label_36c8f4;
        }
    }
    ctx->pc = 0x36C8D4u;
    // 0x36c8d4: 0xc0dae78  jal         func_36B9E0
    ctx->pc = 0x36C8D4u;
    SET_GPR_U32(ctx, 31, 0x36C8DCu);
    ctx->pc = 0x36B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B9E0u, 0x36C8D4u, 0x36C8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C8DCu;
label_36c8dc:
    // 0x36c8dc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36c8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36c8e0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36c8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36c8e4: 0x24a5d540  addiu       $a1, $a1, -0x2AC0
    ctx->pc = 0x36c8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956352));
    // 0x36c8e8: 0x24c66ec8  addiu       $a2, $a2, 0x6EC8
    ctx->pc = 0x36c8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28360));
    // 0x36c8ec: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36C8ECu;
    SET_GPR_U32(ctx, 31, 0x36C8F4u);
    ctx->pc = 0x36C8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C8ECu;
    // 0x36c8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36C8ECu, 0x36C8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C8F4u;
label_36c8f4:
    // 0x36c8f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36c8f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c8f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c8f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c8fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c900: 0x3e00008  jr          $ra
    ctx->pc = 0x36C900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C900u;
        // 0x36c904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C908u;
    // 0x36c908: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x36c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x36c90c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36c90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36c910: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36c910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36c914: 0xac850048  sw          $a1, 0x48($a0)
    ctx->pc = 0x36c914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
    // 0x36c918: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x36c918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x36c91c: 0xac820158  sw          $v0, 0x158($a0)
    ctx->pc = 0x36c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 2));
    // 0x36c920: 0x3e00008  jr          $ra
    ctx->pc = 0x36C920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C920u;
        // 0x36c924: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C928u;
    // 0x36c928: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x36c928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x36c92c: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x36c92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x36c930: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36c930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c934: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x36c934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x36c938: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x36c938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x36c93c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C93Cu;
        // 0x36c940: 0xac820040  sw          $v0, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C944u;
    // 0x36c944: 0x0  nop
    ctx->pc = 0x36c944u;
    // NOP
    ctx->pc = 0x36c948u;
}
