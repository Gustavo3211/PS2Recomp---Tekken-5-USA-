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

// Function: sub_002B7DA0
// Address: 0x2b7da0 - 0x2b7e00
void sub_002B7DA0_0x2b7da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7DA0_0x2b7da0");
#endif

    switch (ctx->pc) {
        case 0x2b7df0u: goto label_2b7df0;
        default: break;
    }

    ctx->pc = 0x2b7da0u;

    // 0x2b7da0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2b7da0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7da4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7da4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b7da8: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x2b7da8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b7dac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b7dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b7db0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B7DB0u;
    {
        const bool branch_taken_0x2b7db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7DB0u;
        // 0x2b7db4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7db0) {
            ctx->pc = 0x2B7DF0u;
            goto label_2b7df0;
        }
    }
    ctx->pc = 0x2B7DB8u;
    // 0x2b7db8: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2B7DB8u;
    {
        const bool branch_taken_0x2b7db8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7DB8u;
        // 0x2b7dbc: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7db8) {
            ctx->pc = 0x2B7DF0u;
            goto label_2b7df0;
        }
    }
    ctx->pc = 0x2B7DC0u;
    // 0x2b7dc0: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x2b7dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2b7dc4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2b7dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b7dc8: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x2b7dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b7dcc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b7dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7dd0: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x2b7dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2b7dd4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2b7dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b7dd8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b7dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b7ddc: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x2b7ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x2b7de0: 0x242178c0  addiu       $at, $at, 0x78C0
    ctx->pc = 0x2b7de0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 30912));
    // 0x2b7de4: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x2b7de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x2b7de8: 0xc0ae0b2  jal         func_2B82C8
    ctx->pc = 0x2B7DE8u;
    SET_GPR_U32(ctx, 31, 0x2B7DF0u);
    ctx->pc = 0x2B7DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7DE8u;
    // 0x2b7dec: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B82C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B82C8u, 0x2B7DE8u, 0x2B7DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7DF0u;
label_2b7df0:
    // 0x2b7df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7df4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7DF4u;
        // 0x2b7df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7DFCu;
    // 0x2b7dfc: 0x0  nop
    ctx->pc = 0x2b7dfcu;
    // NOP
    ctx->pc = 0x2b7e00u;
}
