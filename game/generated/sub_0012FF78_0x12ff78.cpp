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

// Function: sub_0012FF78
// Address: 0x12ff78 - 0x12ffd8
void sub_0012FF78_0x12ff78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FF78_0x12ff78");
#endif

    switch (ctx->pc) {
        case 0x12ffa8u: goto label_12ffa8;
        default: break;
    }

    ctx->pc = 0x12ff78u;

    // 0x12ff78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ff78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ff7c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x12ff80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ff80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ff84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ff84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12ff88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ff8c: 0x24515578  addiu       $s1, $v0, 0x5578
    ctx->pc = 0x12ff8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21880));
    // 0x12ff90: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12ff90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff94: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12ff94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff98: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x12ff98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ff9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12ff9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12ffa0: 0xc043ea6  jal         func_10FA98
    ctx->pc = 0x12FFA0u;
    SET_GPR_U32(ctx, 31, 0x12FFA8u);
    ctx->pc = 0x12FFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FFA0u;
    // 0x12ffa4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA98u, 0x12FFA0u, 0x12FFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FFA8u;
label_12ffa8:
    // 0x12ffa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ffa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12ffb0: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FFB0u;
    {
        const bool branch_taken_0x12ffb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x12ffb0) {
            ctx->pc = 0x12FFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FFB0u;
            // 0x12ffb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FFC8u;
            goto label_12ffc8;
        }
    }
    ctx->pc = 0x12FFB8u;
    // 0x12ffb8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x12ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ffbc: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12FFBCu;
    {
        const bool branch_taken_0x12ffbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ffbc) {
            ctx->pc = 0x12FFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FFBCu;
            // 0x12ffc0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FFC4u;
            goto label_12ffc4;
        }
    }
    ctx->pc = 0x12FFC4u;
label_12ffc4:
    // 0x12ffc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12ffc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12ffc8:
    // 0x12ffc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12ffc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ffcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12ffccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ffd0: 0x3e00008  jr          $ra
    ctx->pc = 0x12FFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FFD0u;
        // 0x12ffd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FFD8u;
}
