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

// Function: sub_0035BAC0
// Address: 0x35bac0 - 0x35bb30
void sub_0035BAC0_0x35bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BAC0_0x35bac0");
#endif

    switch (ctx->pc) {
        case 0x35bad4u: goto label_35bad4;
        case 0x35baf4u: goto label_35baf4;
        case 0x35bb18u: goto label_35bb18;
        default: break;
    }

    ctx->pc = 0x35bac0u;

    // 0x35bac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35bac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35bac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35bac8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35bac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35bacc: 0xc045d28  jal         func_1174A0
    ctx->pc = 0x35BACCu;
    SET_GPR_U32(ctx, 31, 0x35BAD4u);
    ctx->pc = 0x35BAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BACCu;
    // 0x35bad0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1174A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1174A0u, 0x35BACCu, 0x35BAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BAD4u;
label_35bad4:
    // 0x35bad4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x35bad4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bad8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35bad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35badc: 0x24845560  addiu       $a0, $a0, 0x5560
    ctx->pc = 0x35badcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21856));
    // 0x35bae0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x35bae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bae4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35BAE4u;
    {
        const bool branch_taken_0x35bae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BAE4u;
        // 0x35bae8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bae4) {
            ctx->pc = 0x35BB00u;
            goto label_35bb00;
        }
    }
    ctx->pc = 0x35BAECu;
    // 0x35baec: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35BAECu;
    SET_GPR_U32(ctx, 31, 0x35BAF4u);
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35BAECu, 0x35BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BAF4u;
label_35baf4:
    // 0x35baf4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x35BAF4u;
    {
        const bool branch_taken_0x35baf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BAF4u;
        // 0x35baf8: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35baf4) {
            ctx->pc = 0x35BB1Cu;
            goto label_35bb1c;
        }
    }
    ctx->pc = 0x35BAFCu;
    // 0x35bafc: 0x0  nop
    ctx->pc = 0x35bafcu;
    // NOP
label_35bb00:
    // 0x35bb00: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35bb04: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35bb08: 0x248455c8  addiu       $a0, $a0, 0x55C8
    ctx->pc = 0x35bb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21960));
    // 0x35bb0c: 0xac431340  sw          $v1, 0x1340($v0)
    ctx->pc = 0x35bb0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1D1340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D1340u, _value); } while (0);
    // 0x35bb10: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35BB10u;
    SET_GPR_U32(ctx, 31, 0x35BB18u);
    ctx->pc = 0x35BB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BB10u;
    // 0x35bb14: 0xaf90c7c4  sw          $s0, -0x383C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952900), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35BB10u, 0x35BB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB18u;
label_35bb18:
    // 0x35bb18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35bb18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35bb1c:
    // 0x35bb1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35bb1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bb20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35bb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bb24: 0x3e00008  jr          $ra
    ctx->pc = 0x35BB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BB24u;
        // 0x35bb28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BB2Cu;
    // 0x35bb2c: 0x0  nop
    ctx->pc = 0x35bb2cu;
    // NOP
    ctx->pc = 0x35bb30u;
}
