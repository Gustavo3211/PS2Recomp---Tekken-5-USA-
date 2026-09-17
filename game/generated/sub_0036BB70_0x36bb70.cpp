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

// Function: sub_0036BB70
// Address: 0x36bb70 - 0x36bbc8
void sub_0036BB70_0x36bb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BB70_0x36bb70");
#endif

    switch (ctx->pc) {
        case 0x36bb84u: goto label_36bb84;
        default: break;
    }

    ctx->pc = 0x36bb70u;

    // 0x36bb70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36bb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36bb74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36bb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36bb78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36bb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36bb7c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x36BB7Cu;
    SET_GPR_U32(ctx, 31, 0x36BB84u);
    ctx->pc = 0x36BB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BB7Cu;
    // 0x36bb80: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x36BB7Cu, 0x36BB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BB84u;
label_36bb84:
    // 0x36bb84: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x36BB84u;
    {
        const bool branch_taken_0x36bb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BB84u;
        // 0x36bb88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bb84) {
            ctx->pc = 0x36BBB4u;
            goto label_36bbb4;
        }
    }
    ctx->pc = 0x36BB8Cu;
    // 0x36bb8c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36bb90: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x36BB90u;
    {
        const bool branch_taken_0x36bb90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bb90) {
            ctx->pc = 0x36BB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36BB90u;
            // 0x36bb94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36BBB8u;
            goto label_36bbb8;
        }
    }
    ctx->pc = 0x36BB98u;
    // 0x36bb98: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36BB98u;
    {
        const bool branch_taken_0x36bb98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BB98u;
        // 0x36bb9c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bb98) {
            ctx->pc = 0x36BBA8u;
            goto label_36bba8;
        }
    }
    ctx->pc = 0x36BBA0u;
    // 0x36bba0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36BBA0u;
    {
        const bool branch_taken_0x36bba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBA0u;
        // 0x36bba4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bba0) {
            ctx->pc = 0x36BBB0u;
            goto label_36bbb0;
        }
    }
    ctx->pc = 0x36BBA8u;
label_36bba8:
    // 0x36bba8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x36bba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x36bbac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x36bbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_36bbb0:
    // 0x36bbb0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x36bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_36bbb4:
    // 0x36bbb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36bbb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36bbb8:
    // 0x36bbb8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x36bbb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bbbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36bbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36bbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x36BBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBC0u;
        // 0x36bbc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BBC8u;
}
