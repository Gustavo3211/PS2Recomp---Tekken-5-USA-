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

// Function: sub_00308D18
// Address: 0x308d18 - 0x308d60
void sub_00308D18_0x308d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308D18_0x308d18");
#endif

    switch (ctx->pc) {
        case 0x308d54u: goto label_308d54;
        default: break;
    }

    ctx->pc = 0x308d18u;

    // 0x308d18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x308d1c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x308d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x308d20: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x308D20u;
    {
        const bool branch_taken_0x308d20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x308D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D20u;
        // 0x308d24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d20) {
            ctx->pc = 0x308D54u;
            goto label_308d54;
        }
    }
    ctx->pc = 0x308D28u;
    // 0x308d28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x308d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308d2c: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x308D2Cu;
    {
        const bool branch_taken_0x308d2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x308D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D2Cu;
        // 0x308d30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d2c) {
            ctx->pc = 0x308D58u;
            goto label_308d58;
        }
    }
    ctx->pc = 0x308D34u;
    // 0x308d34: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x308d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x308d38: 0x2442ed2c  addiu       $v0, $v0, -0x12D4
    ctx->pc = 0x308d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962476));
    // 0x308d3c: 0x2443ffb4  addiu       $v1, $v0, -0x4C
    ctx->pc = 0x308d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967220));
    // 0x308d40: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x308d40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1AED2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1AED2Cu, _value); } while (0);
    // 0x308d44: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x308d44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1AED30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1AED30u, _value); } while (0);
    // 0x308d48: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x308d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308d4c: 0xc0c166a  jal         func_3059A8
    ctx->pc = 0x308D4Cu;
    SET_GPR_U32(ctx, 31, 0x308D54u);
    ctx->pc = 0x308D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308D4Cu;
    // 0x308d50: 0xac600048  sw          $zero, 0x48($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059A8u, 0x308D4Cu, 0x308D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308D54u;
label_308d54:
    // 0x308d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308d58:
    // 0x308d58: 0x3e00008  jr          $ra
    ctx->pc = 0x308D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D58u;
        // 0x308d5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308D60u;
}
