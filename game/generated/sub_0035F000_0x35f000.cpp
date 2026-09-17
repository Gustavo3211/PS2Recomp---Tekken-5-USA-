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

// Function: sub_0035F000
// Address: 0x35f000 - 0x35f070
void sub_0035F000_0x35f000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F000_0x35f000");
#endif

    switch (ctx->pc) {
        case 0x35f020u: goto label_35f020;
        case 0x35f050u: goto label_35f050;
        default: break;
    }

    ctx->pc = 0x35f000u;

    // 0x35f000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35f000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35f004: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35f004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35f008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f00c: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x35f00cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35f010: 0x24472c68  addiu       $a3, $v0, 0x2C68
    ctx->pc = 0x35f010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 11368));
    // 0x35f014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f018: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x35f018u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D2C68u));
    // 0x35f01c: 0x0  nop
    ctx->pc = 0x35f01cu;
    // NOP
label_35f020:
    // 0x35f020: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x35f020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x35f024: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x35f024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f028: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x35f028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x35f02c: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x35F02Cu;
    {
        const bool branch_taken_0x35f02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x35F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F02Cu;
        // 0x35f030: 0x28c40040  slti        $a0, $a2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f02c) {
            ctx->pc = 0x35F058u;
            goto label_35f058;
        }
    }
    ctx->pc = 0x35F034u;
    // 0x35f034: 0x0  nop
    ctx->pc = 0x35f034u;
    // NOP
    // 0x35f038: 0x0  nop
    ctx->pc = 0x35f038u;
    // NOP
    // 0x35f03c: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x35F03Cu;
    {
        const bool branch_taken_0x35f03c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f03c) {
            ctx->pc = 0x35F040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F03Cu;
            // 0x35f040: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f020;
        }
    }
    ctx->pc = 0x35F044u;
    // 0x35f044: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f048: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F048u;
    SET_GPR_U32(ctx, 31, 0x35F050u);
    ctx->pc = 0x35F04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F048u;
    // 0x35f04c: 0x24846740  addiu       $a0, $a0, 0x6740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F048u, 0x35F050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F050u;
label_35f050:
    // 0x35f050: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f054: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x35f054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
label_35f058:
    // 0x35f058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f05c: 0x3e00008  jr          $ra
    ctx->pc = 0x35F05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F05Cu;
        // 0x35f060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F064u;
    // 0x35f064: 0x0  nop
    ctx->pc = 0x35f064u;
    // NOP
    // 0x35f068: 0x3e00008  jr          $ra
    ctx->pc = 0x35F068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F068u;
        // 0x35f06c: 0x9482000a  lhu         $v0, 0xA($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F070u;
}
