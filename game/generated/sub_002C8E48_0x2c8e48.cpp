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

// Function: sub_002C8E48
// Address: 0x2c8e48 - 0x2c8ea0
void sub_002C8E48_0x2c8e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8E48_0x2c8e48");
#endif

    switch (ctx->pc) {
        case 0x2c8e64u: goto label_2c8e64;
        default: break;
    }

    ctx->pc = 0x2c8e48u;

    // 0x2c8e48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c8e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c8e4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c8e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c8e50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c8e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8e54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c8e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c8e58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c8e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c8e5c: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C8E5Cu;
    SET_GPR_U32(ctx, 31, 0x2C8E64u);
    ctx->pc = 0x2C8E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8E5Cu;
    // 0x2c8e60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C8E5Cu, 0x2C8E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8E64u;
label_2c8e64:
    // 0x2c8e64: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2c8e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2c8e68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C8E68u;
    {
        const bool branch_taken_0x2c8e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E68u;
        // 0x2c8e6c: 0x701821  addu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e68) {
            ctx->pc = 0x2C8E88u;
            goto label_2c8e88;
        }
    }
    ctx->pc = 0x2C8E70u;
    // 0x2c8e70: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2c8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c8e74: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2c8e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c8e78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c8e7c: 0x3c010018  lui         $at, 0x18
    ctx->pc = 0x2c8e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)24 << 16));
    // 0x2c8e80: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2c8e80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2c8e84: 0xac318d44  sw          $s1, -0x72BC($at)
    ctx->pc = 0x2c8e84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937924), GPR_U32(ctx, 17));
label_2c8e88:
    // 0x2c8e88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c8e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8e8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c8e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c8e90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c8e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8e94: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E94u;
        // 0x2c8e98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8E9Cu;
    // 0x2c8e9c: 0x0  nop
    ctx->pc = 0x2c8e9cu;
    // NOP
    ctx->pc = 0x2c8ea0u;
}
