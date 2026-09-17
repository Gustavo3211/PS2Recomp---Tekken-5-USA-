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

// Function: sub_0036B0E8
// Address: 0x36b0e8 - 0x36b138
void sub_0036B0E8_0x36b0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B0E8_0x36b0e8");
#endif

    switch (ctx->pc) {
        case 0x36b10cu: goto label_36b10c;
        case 0x36b124u: goto label_36b124;
        default: break;
    }

    ctx->pc = 0x36b0e8u;

    // 0x36b0e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36b0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36b0ec: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36b0f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36b0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36b0f4: 0x24506e08  addiu       $s0, $v0, 0x6E08
    ctx->pc = 0x36b0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28168));
    // 0x36b0f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6E08u));
    // 0x36b0fc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36B0FCu;
    {
        const bool branch_taken_0x36b0fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B0FCu;
        // 0x36b100: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b0fc) {
            ctx->pc = 0x36B124u;
            goto label_36b124;
        }
    }
    ctx->pc = 0x36B104u;
    // 0x36b104: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36B104u;
    SET_GPR_U32(ctx, 31, 0x36B10Cu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36B104u, 0x36B10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B10Cu;
label_36b10c:
    // 0x36b10c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36b110: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36b110u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36b114: 0x24a5aea0  addiu       $a1, $a1, -0x5160
    ctx->pc = 0x36b114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946464));
    // 0x36b118: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36b118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36b11c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36B11Cu;
    SET_GPR_U32(ctx, 31, 0x36B124u);
    ctx->pc = 0x36B120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B11Cu;
    // 0x36b120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36B11Cu, 0x36B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B124u;
label_36b124:
    // 0x36b124: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36b124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36b128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b12c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36b12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36b130: 0x3e00008  jr          $ra
    ctx->pc = 0x36B130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B130u;
        // 0x36b134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B138u;
}
