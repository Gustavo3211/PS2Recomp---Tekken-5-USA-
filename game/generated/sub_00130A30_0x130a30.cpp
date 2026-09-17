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

// Function: sub_00130A30
// Address: 0x130a30 - 0x130a80
void sub_00130A30_0x130a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130A30_0x130a30");
#endif

    switch (ctx->pc) {
        case 0x130a54u: goto label_130a54;
        case 0x130a6cu: goto label_130a6c;
        default: break;
    }

    ctx->pc = 0x130a30u;

    // 0x130a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130a34: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x130a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x130a38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130a3c: 0x24500120  addiu       $s0, $v0, 0x120
    ctx->pc = 0x130a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x130a40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x130a40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1F0120u));
    // 0x130a44: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x130A44u;
    {
        const bool branch_taken_0x130a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A44u;
        // 0x130a48: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a44) {
            ctx->pc = 0x130A6Cu;
            goto label_130a6c;
        }
    }
    ctx->pc = 0x130A4Cu;
    // 0x130a4c: 0xc04c054  jal         func_130150
    ctx->pc = 0x130A4Cu;
    SET_GPR_U32(ctx, 31, 0x130A54u);
    ctx->pc = 0x130150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130150u, 0x130A4Cu, 0x130A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A54u;
label_130a54:
    // 0x130a54: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x130a54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x130a58: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x130a58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x130a5c: 0x24a5f478  addiu       $a1, $a1, -0xB88
    ctx->pc = 0x130a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964344));
    // 0x130a60: 0x24c65568  addiu       $a2, $a2, 0x5568
    ctx->pc = 0x130a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21864));
    // 0x130a64: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x130A64u;
    SET_GPR_U32(ctx, 31, 0x130A6Cu);
    ctx->pc = 0x130A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130A64u;
    // 0x130a68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x130A64u, 0x130A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130A6Cu;
label_130a6c:
    // 0x130a6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x130a6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130a70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130a74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x130a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130a78: 0x3e00008  jr          $ra
    ctx->pc = 0x130A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A78u;
        // 0x130a7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130A80u;
}
