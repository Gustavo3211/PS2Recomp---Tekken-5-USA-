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

// Function: sub_0036A960
// Address: 0x36a960 - 0x36a9b0
void sub_0036A960_0x36a960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A960_0x36a960");
#endif

    switch (ctx->pc) {
        case 0x36a984u: goto label_36a984;
        case 0x36a998u: goto label_36a998;
        default: break;
    }

    ctx->pc = 0x36a960u;

    // 0x36a960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a964: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36a964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36a968: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a96c: 0x24506d68  addiu       $s0, $v0, 0x6D68
    ctx->pc = 0x36a96cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28008));
    // 0x36a970: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36a970u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6D68u));
    // 0x36a974: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36A974u;
    {
        const bool branch_taken_0x36a974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A974u;
        // 0x36a978: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a974) {
            ctx->pc = 0x36A998u;
            goto label_36a998;
        }
    }
    ctx->pc = 0x36A97Cu;
    // 0x36a97c: 0xc0daa14  jal         func_36A850
    ctx->pc = 0x36A97Cu;
    SET_GPR_U32(ctx, 31, 0x36A984u);
    ctx->pc = 0x36A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A850u, 0x36A97Cu, 0x36A984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A984u;
label_36a984:
    // 0x36a984: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36a984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36a988: 0x24a59890  addiu       $a1, $a1, -0x6770
    ctx->pc = 0x36a988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940816));
    // 0x36a98c: 0x2786cc78  addiu       $a2, $gp, -0x3388
    ctx->pc = 0x36a98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954104));
    // 0x36a990: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36A990u;
    SET_GPR_U32(ctx, 31, 0x36A998u);
    ctx->pc = 0x36A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A990u;
    // 0x36a994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36A990u, 0x36A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A998u;
label_36a998:
    // 0x36a998: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36a998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a99c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a99cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a9a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x36A9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A9A4u;
        // 0x36a9a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A9ACu;
    // 0x36a9ac: 0x0  nop
    ctx->pc = 0x36a9acu;
    // NOP
    ctx->pc = 0x36a9b0u;
}
