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

// Function: sub_002F63B0
// Address: 0x2f63b0 - 0x2f6430
void sub_002F63B0_0x2f63b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F63B0_0x2f63b0");
#endif

    switch (ctx->pc) {
        case 0x2f63f0u: goto label_2f63f0;
        case 0x2f6404u: goto label_2f6404;
        case 0x2f6410u: goto label_2f6410;
        default: break;
    }

    ctx->pc = 0x2f63b0u;

    // 0x2f63b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f63b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f63b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f63b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f63b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f63b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f63bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f63bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f63c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f63c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f63c4: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x2f63c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x2f63c8: 0x4600012  bltz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F63C8u;
    {
        const bool branch_taken_0x2f63c8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2F63CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63C8u;
        // 0x2f63cc: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63c8) {
            ctx->pc = 0x2F6414u;
            goto label_2f6414;
        }
    }
    ctx->pc = 0x2F63D0u;
    // 0x2f63d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F63D0u;
    {
        const bool branch_taken_0x2f63d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F63D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63D0u;
        // 0x2f63d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63d0) {
            ctx->pc = 0x2F63E8u;
            goto label_2f63e8;
        }
    }
    ctx->pc = 0x2F63D8u;
    // 0x2f63d8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F63D8u;
    {
        const bool branch_taken_0x2f63d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F63DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63D8u;
        // 0x2f63dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63d8) {
            ctx->pc = 0x2F63F8u;
            goto label_2f63f8;
        }
    }
    ctx->pc = 0x2F63E0u;
    // 0x2f63e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F63E0u;
    {
        const bool branch_taken_0x2f63e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F63E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63E0u;
        // 0x2f63e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63e0) {
            ctx->pc = 0x2F641Cu;
            goto label_2f641c;
        }
    }
    ctx->pc = 0x2F63E8u;
label_2f63e8:
    // 0x2f63e8: 0xc0bb8e4  jal         func_2EE390
    ctx->pc = 0x2F63E8u;
    SET_GPR_U32(ctx, 31, 0x2F63F0u);
    ctx->pc = 0x2F63ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F63E8u;
    // 0x2f63ec: 0x24840110  addiu       $a0, $a0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE390u, 0x2F63E8u, 0x2F63F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F63F0u;
label_2f63f0:
    // 0x2f63f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F63F0u;
    {
        const bool branch_taken_0x2f63f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F63F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63F0u;
        // 0x2f63f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63f0) {
            ctx->pc = 0x2F6414u;
            goto label_2f6414;
        }
    }
    ctx->pc = 0x2F63F8u;
label_2f63f8:
    // 0x2f63f8: 0x24900158  addiu       $s0, $a0, 0x158
    ctx->pc = 0x2f63f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 344));
    // 0x2f63fc: 0xc0bb8e4  jal         func_2EE390
    ctx->pc = 0x2F63FCu;
    SET_GPR_U32(ctx, 31, 0x2F6404u);
    ctx->pc = 0x2F6400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F63FCu;
    // 0x2f6400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE390u, 0x2F63FCu, 0x2F6404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6404u;
label_2f6404:
    // 0x2f6404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6408: 0xc0bb914  jal         func_2EE450
    ctx->pc = 0x2F6408u;
    SET_GPR_U32(ctx, 31, 0x2F6410u);
    ctx->pc = 0x2F640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6408u;
    // 0x2f640c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE450u, 0x2F6408u, 0x2F6410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6410u;
label_2f6410:
    // 0x2f6410: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2f6410u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_2f6414:
    // 0x2f6414: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f6414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f6418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f641c:
    // 0x2f641c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f641cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f6420: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f6420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6424: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6424u;
        // 0x2f6428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F642Cu;
    // 0x2f642c: 0x0  nop
    ctx->pc = 0x2f642cu;
    // NOP
    ctx->pc = 0x2f6430u;
}
