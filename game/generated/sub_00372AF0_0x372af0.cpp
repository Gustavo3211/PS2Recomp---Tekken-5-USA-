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

// Function: sub_00372AF0
// Address: 0x372af0 - 0x372b40
void sub_00372AF0_0x372af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372AF0_0x372af0");
#endif

    switch (ctx->pc) {
        case 0x372b14u: goto label_372b14;
        case 0x372b2cu: goto label_372b2c;
        default: break;
    }

    ctx->pc = 0x372af0u;

    // 0x372af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372af4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x372af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x372af8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x372af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x372afc: 0x24507680  addiu       $s0, $v0, 0x7680
    ctx->pc = 0x372afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30336));
    // 0x372b00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x372b00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7680u));
    // 0x372b04: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x372B04u;
    {
        const bool branch_taken_0x372b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x372B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372B04u;
        // 0x372b08: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372b04) {
            ctx->pc = 0x372B2Cu;
            goto label_372b2c;
        }
    }
    ctx->pc = 0x372B0Cu;
    // 0x372b0c: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x372B0Cu;
    SET_GPR_U32(ctx, 31, 0x372B14u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x372B0Cu, 0x372B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B14u;
label_372b14:
    // 0x372b14: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x372b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x372b18: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x372b18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x372b1c: 0x24a51810  addiu       $a1, $a1, 0x1810
    ctx->pc = 0x372b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6160));
    // 0x372b20: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x372b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x372b24: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x372B24u;
    SET_GPR_U32(ctx, 31, 0x372B2Cu);
    ctx->pc = 0x372B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B24u;
    // 0x372b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x372B24u, 0x372B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B2Cu;
label_372b2c:
    // 0x372b2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x372b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372b34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x372b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372b38: 0x3e00008  jr          $ra
    ctx->pc = 0x372B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372B38u;
        // 0x372b3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372B40u;
}
