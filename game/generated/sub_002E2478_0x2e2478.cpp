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

// Function: sub_002E2478
// Address: 0x2e2478 - 0x2e24f0
void sub_002E2478_0x2e2478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2478_0x2e2478");
#endif

    switch (ctx->pc) {
        case 0x2e24e4u: goto label_2e24e4;
        default: break;
    }

    ctx->pc = 0x2e2478u;

    // 0x2e2478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e2478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e247c: 0x24860074  addiu       $a2, $a0, 0x74
    ctx->pc = 0x2e247cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x2e2480: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e2484: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e2484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e2488: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2488u;
    {
        const bool branch_taken_0x2e2488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2488u;
        // 0x2e248c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2488) {
            ctx->pc = 0x2E24A0u;
            goto label_2e24a0;
        }
    }
    ctx->pc = 0x2E2490u;
    // 0x2e2490: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2494: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2e2494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e2498: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2498u;
    {
        const bool branch_taken_0x2e2498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2498) {
            ctx->pc = 0x2E24ACu;
            goto label_2e24ac;
        }
    }
    ctx->pc = 0x2E24A0u;
label_2e24a0:
    // 0x2e24a0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2e24a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2e24a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e24a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e24a8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2e24a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2e24ac:
    // 0x2e24ac: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E24ACu;
    {
        const bool branch_taken_0x2e24ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E24B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E24ACu;
        // 0x2e24b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e24ac) {
            ctx->pc = 0x2E24E8u;
            goto label_2e24e8;
        }
    }
    ctx->pc = 0x2E24B4u;
    // 0x2e24b4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2e24b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e24b8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E24B8u;
    {
        const bool branch_taken_0x2e24b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e24b8) {
            ctx->pc = 0x2E24BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E24B8u;
            // 0x2e24bc: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E24D4u;
            goto label_2e24d4;
        }
    }
    ctx->pc = 0x2E24C0u;
    // 0x2e24c0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e24c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e24c4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2e24c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2e24c8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E24C8u;
    {
        const bool branch_taken_0x2e24c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e24c8) {
            ctx->pc = 0x2E24DCu;
            goto label_2e24dc;
        }
    }
    ctx->pc = 0x2E24D0u;
    // 0x2e24d0: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2e24d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2e24d4:
    // 0x2e24d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e24d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e24d8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2e24d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2e24dc:
    // 0x2e24dc: 0xc0b8c6e  jal         func_2E31B8
    ctx->pc = 0x2E24DCu;
    SET_GPR_U32(ctx, 31, 0x2E24E4u);
    ctx->pc = 0x2E31B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31B8u, 0x2E24DCu, 0x2E24E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E24E4u;
label_2e24e4:
    // 0x2e24e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e24e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e24e8:
    // 0x2e24e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E24E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E24E8u;
        // 0x2e24ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E24E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E24F0u;
}
