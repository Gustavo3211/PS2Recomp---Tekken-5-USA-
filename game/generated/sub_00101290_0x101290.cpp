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

// Function: sub_00101290
// Address: 0x101290 - 0x1012c8
void sub_00101290_0x101290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101290_0x101290");
#endif

    switch (ctx->pc) {
        case 0x101290u: goto label_101290;
        case 0x101294u: goto label_101294;
        case 0x101298u: goto label_101298;
        case 0x10129cu: goto label_10129c;
        case 0x1012a0u: goto label_1012a0;
        case 0x1012a4u: goto label_1012a4;
        case 0x1012a8u: goto label_1012a8;
        case 0x1012acu: goto label_1012ac;
        case 0x1012b0u: goto label_1012b0;
        case 0x1012b4u: goto label_1012b4;
        case 0x1012b8u: goto label_1012b8;
        case 0x1012bcu: goto label_1012bc;
        case 0x1012c0u: goto label_1012c0;
        case 0x1012c4u: goto label_1012c4;
        default: break;
    }

    ctx->pc = 0x101290u;

label_101290:
    // 0x101290: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x101290u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_101294:
    // 0x101294: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101294u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_101298:
    // 0x101298: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x101298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_10129c:
    // 0x10129c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10129cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1012a0:
    // 0x1012a0: 0x8c42d320  lw          $v0, -0x2CE0($v0)
    ctx->pc = 0x1012a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955808)));
label_1012a4:
    // 0x1012a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1012a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1012a8:
    // 0x1012a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1012ac:
    if (ctx->pc == 0x1012ACu) {
        ctx->pc = 0x1012ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012A8u;
        // 0x1012ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012B0u;
        goto label_1012b0;
    }
    ctx->pc = 0x1012A8u;
    {
        const bool branch_taken_0x1012a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1012ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012A8u;
        // 0x1012ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012a8) {
            ctx->pc = 0x1012B8u;
            goto label_1012b8;
        }
    }
    ctx->pc = 0x1012B0u;
label_1012b0:
    // 0x1012b0: 0x40f809  jalr        $v0
label_1012b4:
    if (ctx->pc == 0x1012B4u) {
        ctx->pc = 0x1012B8u;
        goto label_1012b8;
    }
    ctx->pc = 0x1012B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1012B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1012B0u, 0x1012B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1012B8u;
label_1012b8:
    // 0x1012b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1012b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1012bc:
    // 0x1012bc: 0x3e00008  jr          $ra
label_1012c0:
    if (ctx->pc == 0x1012C0u) {
        ctx->pc = 0x1012C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012BCu;
        // 0x1012c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012C4u;
        goto label_1012c4;
    }
    ctx->pc = 0x1012BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1012C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012BCu;
        // 0x1012c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1012BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1012C4u;
label_1012c4:
    // 0x1012c4: 0x0  nop
    ctx->pc = 0x1012c4u;
    // NOP
    ctx->pc = 0x1012c8u;
}
