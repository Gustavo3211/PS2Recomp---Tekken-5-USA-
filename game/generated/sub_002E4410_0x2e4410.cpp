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

// Function: sub_002E4410
// Address: 0x2e4410 - 0x2e4480
void sub_002E4410_0x2e4410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4410_0x2e4410");
#endif

    switch (ctx->pc) {
        case 0x2e4458u: goto label_2e4458;
        default: break;
    }

    ctx->pc = 0x2e4410u;

    // 0x2e4410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e4414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4418: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e4418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e441c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e441cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e4420: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2e4420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2e4424: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E4424u;
    {
        const bool branch_taken_0x2e4424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4424u;
        // 0x2e4428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4424) {
            ctx->pc = 0x2E4470u;
            goto label_2e4470;
        }
    }
    ctx->pc = 0x2E442Cu;
    // 0x2e442c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2e442cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2e4430: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E4430u;
    {
        const bool branch_taken_0x2e4430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4430u;
        // 0x2e4434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4430) {
            ctx->pc = 0x2E4470u;
            goto label_2e4470;
        }
    }
    ctx->pc = 0x2E4438u;
    // 0x2e4438: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2e4438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2e443c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E443Cu;
    {
        const bool branch_taken_0x2e443c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E443Cu;
        // 0x2e4440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e443c) {
            ctx->pc = 0x2E4470u;
            goto label_2e4470;
        }
    }
    ctx->pc = 0x2E4444u;
    // 0x2e4444: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2e4444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2e4448: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E4448u;
    {
        const bool branch_taken_0x2e4448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4448) {
            ctx->pc = 0x2E444Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4448u;
            // 0x2e444c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4470u;
            goto label_2e4470;
        }
    }
    ctx->pc = 0x2E4450u;
    // 0x2e4450: 0xc0b902a  jal         func_2E40A8
    ctx->pc = 0x2E4450u;
    SET_GPR_U32(ctx, 31, 0x2E4458u);
    ctx->pc = 0x2E40A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E40A8u, 0x2E4450u, 0x2E4458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4458u;
label_2e4458:
    // 0x2e4458: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4458u;
    {
        const bool branch_taken_0x2e4458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4458) {
            ctx->pc = 0x2E445Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4458u;
            // 0x2e445c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4468u;
            goto label_2e4468;
        }
    }
    ctx->pc = 0x2E4460u;
    // 0x2e4460: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4460u;
    {
        const bool branch_taken_0x2e4460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4460u;
        // 0x2e4464: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4460) {
            ctx->pc = 0x2E4470u;
            goto label_2e4470;
        }
    }
    ctx->pc = 0x2E4468u;
label_2e4468:
    // 0x2e4468: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2e4468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2e446c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e446cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4470:
    // 0x2e4470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4474: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e4474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4478: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4478u;
        // 0x2e447c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4480u;
}
