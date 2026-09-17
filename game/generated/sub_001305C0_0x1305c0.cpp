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

// Function: sub_001305C0
// Address: 0x1305c0 - 0x130630
void sub_001305C0_0x1305c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001305C0_0x1305c0");
#endif

    switch (ctx->pc) {
        case 0x1305e4u: goto label_1305e4;
        case 0x1305fcu: goto label_1305fc;
        default: break;
    }

    ctx->pc = 0x1305c0u;

    // 0x1305c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1305c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1305c4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1305c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1305c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1305c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1305cc: 0x245000c0  addiu       $s0, $v0, 0xC0
    ctx->pc = 0x1305ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1305d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1305d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1F00C0u));
    // 0x1305d4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1305D4u;
    {
        const bool branch_taken_0x1305d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1305D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305D4u;
        // 0x1305d8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305d4) {
            ctx->pc = 0x1305FCu;
            goto label_1305fc;
        }
    }
    ctx->pc = 0x1305DCu;
    // 0x1305dc: 0xc04c0da  jal         func_130368
    ctx->pc = 0x1305DCu;
    SET_GPR_U32(ctx, 31, 0x1305E4u);
    ctx->pc = 0x130368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130368u, 0x1305DCu, 0x1305E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305E4u;
label_1305e4:
    // 0x1305e4: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1305e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1305e8: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x1305e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x1305ec: 0x24a5f350  addiu       $a1, $a1, -0xCB0
    ctx->pc = 0x1305ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964048));
    // 0x1305f0: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x1305f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x1305f4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x1305F4u;
    SET_GPR_U32(ctx, 31, 0x1305FCu);
    ctx->pc = 0x1305F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305F4u;
    // 0x1305f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x1305F4u, 0x1305FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305FCu;
label_1305fc:
    // 0x1305fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1305fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130600: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130604: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x130604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130608: 0x3e00008  jr          $ra
    ctx->pc = 0x130608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130608u;
        // 0x13060c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130610u;
    // 0x130610: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x130610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x130614: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x130614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x130618: 0x24424b98  addiu       $v0, $v0, 0x4B98
    ctx->pc = 0x130618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19352));
    // 0x13061c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x13061cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x130620: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x130620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x130624: 0x3e00008  jr          $ra
    ctx->pc = 0x130624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130624u;
        // 0x130628: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13062Cu;
    // 0x13062c: 0x0  nop
    ctx->pc = 0x13062cu;
    // NOP
    ctx->pc = 0x130630u;
}
