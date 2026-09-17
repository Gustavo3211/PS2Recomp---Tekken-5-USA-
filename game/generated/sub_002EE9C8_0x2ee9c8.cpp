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

// Function: sub_002EE9C8
// Address: 0x2ee9c8 - 0x2eea40
void sub_002EE9C8_0x2ee9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE9C8_0x2ee9c8");
#endif

    switch (ctx->pc) {
        case 0x2eea34u: goto label_2eea34;
        default: break;
    }

    ctx->pc = 0x2ee9c8u;

    // 0x2ee9c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ee9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ee9cc: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x2ee9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x2ee9d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ee9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ee9d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ee9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ee9d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE9D8u;
    {
        const bool branch_taken_0x2ee9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9D8u;
        // 0x2ee9dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9d8) {
            ctx->pc = 0x2EE9F0u;
            goto label_2ee9f0;
        }
    }
    ctx->pc = 0x2EE9E0u;
    // 0x2ee9e0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ee9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ee9e4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ee9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ee9e8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE9E8u;
    {
        const bool branch_taken_0x2ee9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee9e8) {
            ctx->pc = 0x2EE9FCu;
            goto label_2ee9fc;
        }
    }
    ctx->pc = 0x2EE9F0u;
label_2ee9f0:
    // 0x2ee9f0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ee9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ee9f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ee9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee9f8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ee9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ee9fc:
    // 0x2ee9fc: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EE9FCu;
    {
        const bool branch_taken_0x2ee9fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9FCu;
        // 0x2eea00: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9fc) {
            ctx->pc = 0x2EEA38u;
            goto label_2eea38;
        }
    }
    ctx->pc = 0x2EEA04u;
    // 0x2eea04: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eea04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eea08: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EEA08u;
    {
        const bool branch_taken_0x2eea08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eea08) {
            ctx->pc = 0x2EEA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEA08u;
            // 0x2eea0c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEA24u;
            goto label_2eea24;
        }
    }
    ctx->pc = 0x2EEA10u;
    // 0x2eea10: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eea10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eea14: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eea14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eea18: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEA18u;
    {
        const bool branch_taken_0x2eea18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eea18) {
            ctx->pc = 0x2EEA2Cu;
            goto label_2eea2c;
        }
    }
    ctx->pc = 0x2EEA20u;
    // 0x2eea20: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eea20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eea24:
    // 0x2eea24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eea24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eea28: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eea28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2eea2c:
    // 0x2eea2c: 0xc0bbe08  jal         func_2EF820
    ctx->pc = 0x2EEA2Cu;
    SET_GPR_U32(ctx, 31, 0x2EEA34u);
    ctx->pc = 0x2EF820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF820u, 0x2EEA2Cu, 0x2EEA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA34u;
label_2eea34:
    // 0x2eea34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eea34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2eea38:
    // 0x2eea38: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA38u;
        // 0x2eea3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEA40u;
}
