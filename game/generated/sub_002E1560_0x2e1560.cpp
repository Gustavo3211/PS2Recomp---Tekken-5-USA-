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

// Function: sub_002E1560
// Address: 0x2e1560 - 0x2e15a0
void sub_002E1560_0x2e1560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1560_0x2e1560");
#endif

    switch (ctx->pc) {
        case 0x2e157cu: goto label_2e157c;
        case 0x2e1590u: goto label_2e1590;
        default: break;
    }

    ctx->pc = 0x2e1560u;

    // 0x2e1560: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x2e1560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x2e1564: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1564u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e1568: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2e1568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2e156c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E156Cu;
    {
        const bool branch_taken_0x2e156c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E156Cu;
        // 0x2e1570: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e156c) {
            ctx->pc = 0x2E1588u;
            goto label_2e1588;
        }
    }
    ctx->pc = 0x2E1574u;
    // 0x2e1574: 0xc0b8418  jal         func_2E1060
    ctx->pc = 0x2E1574u;
    SET_GPR_U32(ctx, 31, 0x2E157Cu);
    ctx->pc = 0x2E1060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1060u, 0x2E1574u, 0x2E157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E157Cu;
label_2e157c:
    // 0x2e157c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E157Cu;
    {
        const bool branch_taken_0x2e157c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E157Cu;
        // 0x2e1580: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e157c) {
            ctx->pc = 0x2E1594u;
            goto label_2e1594;
        }
    }
    ctx->pc = 0x2E1584u;
    // 0x2e1584: 0x0  nop
    ctx->pc = 0x2e1584u;
    // NOP
label_2e1588:
    // 0x2e1588: 0xc0b84d8  jal         func_2E1360
    ctx->pc = 0x2E1588u;
    SET_GPR_U32(ctx, 31, 0x2E1590u);
    ctx->pc = 0x2E1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1360u, 0x2E1588u, 0x2E1590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1590u;
label_2e1590:
    // 0x2e1590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1594:
    // 0x2e1594: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e1594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1598: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1598u;
        // 0x2e159c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E15A0u;
}
