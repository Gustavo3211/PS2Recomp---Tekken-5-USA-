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

// Function: sub_0035EF08
// Address: 0x35ef08 - 0x35ef60
void sub_0035EF08_0x35ef08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EF08_0x35ef08");
#endif

    switch (ctx->pc) {
        case 0x35ef38u: goto label_35ef38;
        default: break;
    }

    ctx->pc = 0x35ef08u;

    // 0x35ef08: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35ef08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35ef0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ef0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ef10: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x35ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x35ef14: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35ef14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ef18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35ef1c: 0x2c840040  sltiu       $a0, $a0, 0x40
    ctx->pc = 0x35ef1cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x35ef20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ef20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ef24: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35EF24u;
    {
        const bool branch_taken_0x35ef24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF24u;
        // 0x35ef28: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ef24) {
            ctx->pc = 0x35EF48u;
            goto label_35ef48;
        }
    }
    ctx->pc = 0x35EF2Cu;
    // 0x35ef2c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35ef30: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35EF30u;
    SET_GPR_U32(ctx, 31, 0x35EF38u);
    ctx->pc = 0x35EF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EF30u;
    // 0x35ef34: 0x24846680  addiu       $a0, $a0, 0x6680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35EF30u, 0x35EF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EF38u;
label_35ef38:
    // 0x35ef38: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35ef3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x35EF3Cu;
    {
        const bool branch_taken_0x35ef3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF3Cu;
        // 0x35ef40: 0x3442001f  ori         $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ef3c) {
            ctx->pc = 0x35EF54u;
            goto label_35ef54;
        }
    }
    ctx->pc = 0x35EF44u;
    // 0x35ef44: 0x0  nop
    ctx->pc = 0x35ef44u;
    // NOP
label_35ef48:
    // 0x35ef48: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35ef48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35ef4c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x35ef4cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x35ef50: 0x8c222c68  lw          $v0, 0x2C68($at)
    ctx->pc = 0x35ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11368)));
label_35ef54:
    // 0x35ef54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ef54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ef58: 0x3e00008  jr          $ra
    ctx->pc = 0x35EF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF58u;
        // 0x35ef5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EF60u;
}
