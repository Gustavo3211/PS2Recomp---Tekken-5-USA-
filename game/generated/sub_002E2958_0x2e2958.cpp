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

// Function: sub_002E2958
// Address: 0x2e2958 - 0x2e29d0
void sub_002E2958_0x2e2958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2958_0x2e2958");
#endif

    switch (ctx->pc) {
        case 0x2e29c4u: goto label_2e29c4;
        default: break;
    }

    ctx->pc = 0x2e2958u;

    // 0x2e2958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e2958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e295c: 0x24850074  addiu       $a1, $a0, 0x74
    ctx->pc = 0x2e295cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x2e2960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e2964: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e2964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e2968: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2968u;
    {
        const bool branch_taken_0x2e2968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2968u;
        // 0x2e296c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2968) {
            ctx->pc = 0x2E2980u;
            goto label_2e2980;
        }
    }
    ctx->pc = 0x2E2970u;
    // 0x2e2970: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2974: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e2974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e2978: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2978u;
    {
        const bool branch_taken_0x2e2978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2978) {
            ctx->pc = 0x2E298Cu;
            goto label_2e298c;
        }
    }
    ctx->pc = 0x2E2980u;
label_2e2980:
    // 0x2e2980: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e2980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2e2984: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e2984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2988: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e2988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e298c:
    // 0x2e298c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E298Cu;
    {
        const bool branch_taken_0x2e298c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E298Cu;
        // 0x2e2990: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e298c) {
            ctx->pc = 0x2E29C8u;
            goto label_2e29c8;
        }
    }
    ctx->pc = 0x2E2994u;
    // 0x2e2994: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e2994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e2998: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2998u;
    {
        const bool branch_taken_0x2e2998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2998) {
            ctx->pc = 0x2E299Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2998u;
            // 0x2e299c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E29B4u;
            goto label_2e29b4;
        }
    }
    ctx->pc = 0x2E29A0u;
    // 0x2e29a0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e29a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e29a4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e29a8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E29A8u;
    {
        const bool branch_taken_0x2e29a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e29a8) {
            ctx->pc = 0x2E29BCu;
            goto label_2e29bc;
        }
    }
    ctx->pc = 0x2E29B0u;
    // 0x2e29b0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e29b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e29b4:
    // 0x2e29b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e29b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e29b8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e29b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e29bc:
    // 0x2e29bc: 0xc0b8c40  jal         func_2E3100
    ctx->pc = 0x2E29BCu;
    SET_GPR_U32(ctx, 31, 0x2E29C4u);
    ctx->pc = 0x2E3100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3100u, 0x2E29BCu, 0x2E29C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E29C4u;
label_2e29c4:
    // 0x2e29c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e29c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e29c8:
    // 0x2e29c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E29C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E29CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E29C8u;
        // 0x2e29cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E29C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E29D0u;
}
