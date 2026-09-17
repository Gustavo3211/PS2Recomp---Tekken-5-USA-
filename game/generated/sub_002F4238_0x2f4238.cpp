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

// Function: sub_002F4238
// Address: 0x2f4238 - 0x2f42c8
void sub_002F4238_0x2f4238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4238_0x2f4238");
#endif

    switch (ctx->pc) {
        case 0x2f42bcu: goto label_2f42bc;
        default: break;
    }

    ctx->pc = 0x2f4238u;

    // 0x2f4238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f4238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f423c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f423cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f4240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f4244: 0x24460050  addiu       $a2, $v0, 0x50
    ctx->pc = 0x2f4244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2f4248: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f4248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f424c: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x2f424cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2f4250: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2F4250u;
    {
        const bool branch_taken_0x2f4250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4250u;
        // 0x2f4254: 0x24470110  addiu       $a3, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4250) {
            ctx->pc = 0x2F4288u;
            goto label_2f4288;
        }
    }
    ctx->pc = 0x2F4258u;
    // 0x2f4258: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2f4258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f425c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F425Cu;
    {
        const bool branch_taken_0x2f425c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F425Cu;
        // 0x2f4260: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f425c) {
            ctx->pc = 0x2F4274u;
            goto label_2f4274;
        }
    }
    ctx->pc = 0x2F4264u;
    // 0x2f4264: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f4264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f4268: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2f4268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2f426c: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F426Cu;
    {
        const bool branch_taken_0x2f426c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f426c) {
            ctx->pc = 0x2F4270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F426Cu;
            // 0x2f4270: 0x8ca20104  lw          $v0, 0x104($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F42B4u;
            goto label_2f42b4;
        }
    }
    ctx->pc = 0x2F4274u;
label_2f4274:
    // 0x2f4274: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2f4274u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2f4278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f4278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f427c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2f427cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2f4280: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2F4280u;
    {
        const bool branch_taken_0x2f4280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4280u;
        // 0x2f4284: 0x8ca20104  lw          $v0, 0x104($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4280) {
            ctx->pc = 0x2F42B4u;
            goto label_2f42b4;
        }
    }
    ctx->pc = 0x2F4288u;
label_2f4288:
    // 0x2f4288: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f4288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f428c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F428Cu;
    {
        const bool branch_taken_0x2f428c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F428Cu;
        // 0x2f4290: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f428c) {
            ctx->pc = 0x2F42A4u;
            goto label_2f42a4;
        }
    }
    ctx->pc = 0x2F4294u;
    // 0x2f4294: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f4294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f4298: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f4298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f429c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F429Cu;
    {
        const bool branch_taken_0x2f429c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f429c) {
            ctx->pc = 0x2F42A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F429Cu;
            // 0x2f42a0: 0x8cc20100  lw          $v0, 0x100($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F42B4u;
            goto label_2f42b4;
        }
    }
    ctx->pc = 0x2F42A4u;
label_2f42a4:
    // 0x2f42a4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f42a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2f42a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f42a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f42ac: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f42acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2f42b0: 0x8cc20100  lw          $v0, 0x100($a2)
    ctx->pc = 0x2f42b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x100u));
label_2f42b4:
    // 0x2f42b4: 0xc0bbe60  jal         func_2EF980
    ctx->pc = 0x2F42B4u;
    SET_GPR_U32(ctx, 31, 0x2F42BCu);
    ctx->pc = 0x2F42B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F42B4u;
    // 0x2f42b8: 0xace20008  sw          $v0, 0x8($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF980u, 0x2F42B4u, 0x2F42BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F42BCu;
label_2f42bc:
    // 0x2f42bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f42bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f42c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F42C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F42C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42C0u;
        // 0x2f42c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F42C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F42C8u;
}
