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

// Function: sub_002F1CF8
// Address: 0x2f1cf8 - 0x2f1d48
void sub_002F1CF8_0x2f1cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1CF8_0x2f1cf8");
#endif

    switch (ctx->pc) {
        case 0x2f1d20u: goto label_2f1d20;
        case 0x2f1d2cu: goto label_2f1d2c;
        default: break;
    }

    ctx->pc = 0x2f1cf8u;

    // 0x2f1cf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f1cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f1cfc: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2f1cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x2f1d00: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f1d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f1d04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f1d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d08: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2f1d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2f1d0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f1d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d10: 0x24454b10  addiu       $a1, $v0, 0x4B10
    ctx->pc = 0x2f1d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19216));
    // 0x2f1d14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f1d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f1d18: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2F1D18u;
    SET_GPR_U32(ctx, 31, 0x2F1D20u);
    ctx->pc = 0x2F1D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1D18u;
    // 0x2f1d1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2F1D18u, 0x2F1D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1D20u;
label_2f1d20:
    // 0x2f1d20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f1d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d24: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F1D24u;
    SET_GPR_U32(ctx, 31, 0x2F1D2Cu);
    ctx->pc = 0x2F1D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1D24u;
    // 0x2f1d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F1D24u, 0x2F1D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1D2Cu;
label_2f1d2c:
    // 0x2f1d2c: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x2f1d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
    // 0x2f1d30: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f1d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1d34: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2f1d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f1d38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f1d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D3Cu;
        // 0x2f1d40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1D44u;
    // 0x2f1d44: 0x0  nop
    ctx->pc = 0x2f1d44u;
    // NOP
    ctx->pc = 0x2f1d48u;
}
