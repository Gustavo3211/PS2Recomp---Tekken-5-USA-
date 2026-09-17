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

// Function: sub_00321B18
// Address: 0x321b18 - 0x321b58
void sub_00321B18_0x321b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321B18_0x321b18");
#endif

    switch (ctx->pc) {
        case 0x321b30u: goto label_321b30;
        default: break;
    }

    ctx->pc = 0x321b18u;

    // 0x321b18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x321b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x321b1c: 0x24841280  addiu       $a0, $a0, 0x1280
    ctx->pc = 0x321b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4736));
    // 0x321b20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321b24: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x321b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x321b28: 0xc0cf142  jal         func_33C508
    ctx->pc = 0x321B28u;
    SET_GPR_U32(ctx, 31, 0x321B30u);
    ctx->pc = 0x321B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321B28u;
    // 0x321b2c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C508u, 0x321B28u, 0x321B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321B30u;
label_321b30:
    // 0x321b30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x321b30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321b34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x321b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x321b38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x321b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x321b3c: 0x34424005  ori         $v0, $v0, 0x4005
    ctx->pc = 0x321b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
    // 0x321b40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321b44: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x321b44u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x321b48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x321b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x321b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x321B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B4Cu;
        // 0x321b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321B54u;
    // 0x321b54: 0x0  nop
    ctx->pc = 0x321b54u;
    // NOP
    ctx->pc = 0x321b58u;
}
