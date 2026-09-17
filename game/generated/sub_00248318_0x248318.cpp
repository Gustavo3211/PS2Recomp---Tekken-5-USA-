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

// Function: sub_00248318
// Address: 0x248318 - 0x248370
void sub_00248318_0x248318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248318_0x248318");
#endif

    switch (ctx->pc) {
        case 0x248338u: goto label_248338;
        case 0x248344u: goto label_248344;
        case 0x248350u: goto label_248350;
        default: break;
    }

    ctx->pc = 0x248318u;

    // 0x248318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24831c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24831cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x248320: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248324: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x248324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248328: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x248328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24832c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24832cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248330: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x248330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248334: 0x0  nop
    ctx->pc = 0x248334u;
    // NOP
label_248338:
    // 0x248338: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x248338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x24833c: 0xc0920dc  jal         func_248370
    ctx->pc = 0x24833Cu;
    SET_GPR_U32(ctx, 31, 0x248344u);
    ctx->pc = 0x248340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24833Cu;
    // 0x248340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248370u, 0x24833Cu, 0x248344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248344u;
label_248344:
    // 0x248344: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x248344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248348: 0xc0b7aaa  jal         func_2DEAA8
    ctx->pc = 0x248348u;
    SET_GPR_U32(ctx, 31, 0x248350u);
    ctx->pc = 0x24834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248348u;
    // 0x24834c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEAA8u, 0x248348u, 0x248350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248350u;
label_248350:
    // 0x248350: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x248350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x248354: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x248354u;
    {
        const bool branch_taken_0x248354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248354) {
            ctx->pc = 0x248358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248354u;
            // 0x248358: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248338;
        }
    }
    ctx->pc = 0x24835Cu;
    // 0x24835c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24835cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248360: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x248360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x248364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x248364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248368: 0x3e00008  jr          $ra
    ctx->pc = 0x248368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248368u;
        // 0x24836c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248370u;
}
