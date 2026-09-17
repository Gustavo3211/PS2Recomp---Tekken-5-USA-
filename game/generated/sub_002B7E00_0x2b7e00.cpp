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

// Function: sub_002B7E00
// Address: 0x2b7e00 - 0x2b7e60
void sub_002B7E00_0x2b7e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7E00_0x2b7e00");
#endif

    switch (ctx->pc) {
        case 0x2b7e54u: goto label_2b7e54;
        default: break;
    }

    ctx->pc = 0x2b7e00u;

    // 0x2b7e00: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b7e00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e04: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2b7e04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e08: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x2b7e08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b7e0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7e0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b7e10: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b7e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b7e14: 0x2c430004  sltiu       $v1, $v0, 0x4
    ctx->pc = 0x2b7e14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b7e18: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b7e18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7e1c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2b7e1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e20: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b7e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b7e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b7e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b7e28: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b7e28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7e2c: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2b7e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2b7e30: 0x34a50011  ori         $a1, $a1, 0x11
    ctx->pc = 0x2b7e30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17);
    // 0x2b7e34: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2b7e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b7e38: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x2b7e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x2b7e3c: 0x242178c0  addiu       $at, $at, 0x78C0
    ctx->pc = 0x2b7e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 30912));
    // 0x2b7e40: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x2b7e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x2b7e44: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7E44u;
    {
        const bool branch_taken_0x2b7e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E44u;
        // 0x2b7e48: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e44) {
            ctx->pc = 0x2B7E54u;
            goto label_2b7e54;
        }
    }
    ctx->pc = 0x2B7E4Cu;
    // 0x2b7e4c: 0xc0ae0d0  jal         func_2B8340
    ctx->pc = 0x2B7E4Cu;
    SET_GPR_U32(ctx, 31, 0x2B7E54u);
    ctx->pc = 0x2B8340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8340u, 0x2B7E4Cu, 0x2B7E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7E54u;
label_2b7e54:
    // 0x2b7e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7e58: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E58u;
        // 0x2b7e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7E60u;
}
