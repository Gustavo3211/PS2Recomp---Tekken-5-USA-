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

// Function: sub_00130978
// Address: 0x130978 - 0x1309c8
void sub_00130978_0x130978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130978_0x130978");
#endif

    switch (ctx->pc) {
        case 0x13099cu: goto label_13099c;
        case 0x1309b4u: goto label_1309b4;
        default: break;
    }

    ctx->pc = 0x130978u;

    // 0x130978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13097c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x13097cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x130980: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130984: 0x245000f0  addiu       $s0, $v0, 0xF0
    ctx->pc = 0x130984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x130988: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x130988u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1F00F0u));
    // 0x13098c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13098Cu;
    {
        const bool branch_taken_0x13098c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13098Cu;
        // 0x130990: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13098c) {
            ctx->pc = 0x1309B4u;
            goto label_1309b4;
        }
    }
    ctx->pc = 0x130994u;
    // 0x130994: 0xc04c054  jal         func_130150
    ctx->pc = 0x130994u;
    SET_GPR_U32(ctx, 31, 0x13099Cu);
    ctx->pc = 0x130150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130150u, 0x130994u, 0x13099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13099Cu;
label_13099c:
    // 0x13099c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x13099cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1309a0: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x1309a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x1309a4: 0x24a5f460  addiu       $a1, $a1, -0xBA0
    ctx->pc = 0x1309a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964320));
    // 0x1309a8: 0x24c65568  addiu       $a2, $a2, 0x5568
    ctx->pc = 0x1309a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21864));
    // 0x1309ac: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x1309ACu;
    SET_GPR_U32(ctx, 31, 0x1309B4u);
    ctx->pc = 0x1309B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1309ACu;
    // 0x1309b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x1309ACu, 0x1309B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1309B4u;
label_1309b4:
    // 0x1309b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1309b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1309b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1309bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1309bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1309c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1309C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1309C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309C0u;
        // 0x1309c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1309C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1309C8u;
}
