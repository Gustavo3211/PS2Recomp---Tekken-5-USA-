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

// Function: sub_002E92F0
// Address: 0x2e92f0 - 0x2e9350
void sub_002E92F0_0x2e92f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E92F0_0x2e92f0");
#endif

    switch (ctx->pc) {
        case 0x2e930cu: goto label_2e930c;
        case 0x2e9324u: goto label_2e9324;
        case 0x2e9330u: goto label_2e9330;
        case 0x2e9338u: goto label_2e9338;
        default: break;
    }

    ctx->pc = 0x2e92f0u;

    // 0x2e92f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e92f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e92f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e92f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e92f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e92f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e92fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e92fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e9300: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e9300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e9304: 0xc0bb914  jal         func_2EE450
    ctx->pc = 0x2E9304u;
    SET_GPR_U32(ctx, 31, 0x2E930Cu);
    ctx->pc = 0x2E9308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9304u;
    // 0x2e9308: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE450u, 0x2E9304u, 0x2E930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E930Cu;
label_2e930c:
    // 0x2e930c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2e930cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2e9310: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E9310u;
    {
        const bool branch_taken_0x2e9310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9310u;
        // 0x2e9314: 0x2471f670  addiu       $s1, $v1, -0x990 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9310) {
            ctx->pc = 0x2E9338u;
            goto label_2e9338;
        }
    }
    ctx->pc = 0x2E9318u;
    // 0x2e9318: 0x82050140  lb          $a1, 0x140($s0)
    ctx->pc = 0x2e9318u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2e931c: 0xc0da5fc  jal         func_3697F0
    ctx->pc = 0x2E931Cu;
    SET_GPR_U32(ctx, 31, 0x2E9324u);
    ctx->pc = 0x2E9320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E931Cu;
    // 0x2e9320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3697F0u, 0x2E931Cu, 0x2E9324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9324u;
label_2e9324:
    // 0x2e9324: 0x82050141  lb          $a1, 0x141($s0)
    ctx->pc = 0x2e9324u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 321)));
    // 0x2e9328: 0xc0da5fc  jal         func_3697F0
    ctx->pc = 0x2E9328u;
    SET_GPR_U32(ctx, 31, 0x2E9330u);
    ctx->pc = 0x2E932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9328u;
    // 0x2e932c: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3697F0u, 0x2E9328u, 0x2E9330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9330u;
label_2e9330:
    // 0x2e9330: 0xc0bbe60  jal         func_2EF980
    ctx->pc = 0x2E9330u;
    SET_GPR_U32(ctx, 31, 0x2E9338u);
    ctx->pc = 0x2E9334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9330u;
    // 0x2e9334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF980u, 0x2E9330u, 0x2E9338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9338u;
label_2e9338:
    // 0x2e9338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e9338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e933c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e933cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e9340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e9340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9344: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9344u;
        // 0x2e9348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E934Cu;
    // 0x2e934c: 0x0  nop
    ctx->pc = 0x2e934cu;
    // NOP
    ctx->pc = 0x2e9350u;
}
