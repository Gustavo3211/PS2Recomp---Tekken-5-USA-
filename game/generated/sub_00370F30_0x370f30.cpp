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

// Function: sub_00370F30
// Address: 0x370f30 - 0x370f80
void sub_00370F30_0x370f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370F30_0x370f30");
#endif

    switch (ctx->pc) {
        case 0x370f54u: goto label_370f54;
        case 0x370f6cu: goto label_370f6c;
        default: break;
    }

    ctx->pc = 0x370f30u;

    // 0x370f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370f34: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x370f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x370f38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370f3c: 0x245073b0  addiu       $s0, $v0, 0x73B0
    ctx->pc = 0x370f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29616));
    // 0x370f40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x370f40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D73B0u));
    // 0x370f44: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x370F44u;
    {
        const bool branch_taken_0x370f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F44u;
        // 0x370f48: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370f44) {
            ctx->pc = 0x370F6Cu;
            goto label_370f6c;
        }
    }
    ctx->pc = 0x370F4Cu;
    // 0x370f4c: 0xc0dc55e  jal         func_371578
    ctx->pc = 0x370F4Cu;
    SET_GPR_U32(ctx, 31, 0x370F54u);
    ctx->pc = 0x371578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371578u, 0x370F4Cu, 0x370F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370F54u;
label_370f54:
    // 0x370f54: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x370f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x370f58: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x370f58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x370f5c: 0x24a50bf0  addiu       $a1, $a1, 0xBF0
    ctx->pc = 0x370f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3056));
    // 0x370f60: 0x24c67560  addiu       $a2, $a2, 0x7560
    ctx->pc = 0x370f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30048));
    // 0x370f64: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x370F64u;
    SET_GPR_U32(ctx, 31, 0x370F6Cu);
    ctx->pc = 0x370F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370F64u;
    // 0x370f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x370F64u, 0x370F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370F6Cu;
label_370f6c:
    // 0x370f6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x370f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370f70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370f74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x370f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370f78: 0x3e00008  jr          $ra
    ctx->pc = 0x370F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F78u;
        // 0x370f7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370F80u;
}
