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

// Function: sub_0023DAD8
// Address: 0x23dad8 - 0x23db20
void sub_0023DAD8_0x23dad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DAD8_0x23dad8");
#endif

    switch (ctx->pc) {
        case 0x23dae8u: goto label_23dae8;
        default: break;
    }

    ctx->pc = 0x23dad8u;

    // 0x23dad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23dad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23dadc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23dadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23dae0: 0xc08eb10  jal         func_23AC40
    ctx->pc = 0x23DAE0u;
    SET_GPR_U32(ctx, 31, 0x23DAE8u);
    ctx->pc = 0x23AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC40u, 0x23DAE0u, 0x23DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DAE8u;
label_23dae8:
    // 0x23dae8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23dae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23daec: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x23daecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x23daf0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23DAF0u;
    {
        const bool branch_taken_0x23daf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAF0u;
        // 0x23daf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23daf0) {
            ctx->pc = 0x23DB34u;
            return;
        }
    }
    ctx->pc = 0x23DAF8u;
    // 0x23daf8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x23daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23dafc: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x23dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x23db00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23db00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23db04: 0x8c63b530  lw          $v1, -0x4AD0($v1)
    ctx->pc = 0x23db04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948144)));
    // 0x23db08: 0x600008  jr          $v1
    ctx->pc = 0x23DB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DB10u: goto label_23db10;
            case 0x23DB18u: goto label_23db18;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DB08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23DB10u;
label_23db10:
    // 0x23db10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23DB10u;
    {
        const bool branch_taken_0x23db10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB10u;
        // 0x23db14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db10) {
            ctx->pc = 0x23DB34u;
            return;
        }
    }
    ctx->pc = 0x23DB18u;
label_23db18:
    // 0x23db18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23DB18u;
    {
        const bool branch_taken_0x23db18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB18u;
        // 0x23db1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db18) {
            ctx->pc = 0x23DB34u;
            return;
        }
    }
    ctx->pc = 0x23DB20u;
}
