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

// Function: sub_004A6318
// Address: 0x4a6318 - 0x4a6358
void sub_004A6318_0x4a6318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6318_0x4a6318");
#endif

    switch (ctx->pc) {
        case 0x4a632cu: goto label_4a632c;
        default: break;
    }

    ctx->pc = 0x4a6318u;

    // 0x4a6318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a6318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a631c: 0x240400d9  addiu       $a0, $zero, 0xD9
    ctx->pc = 0x4a631cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
    // 0x4a6320: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a6320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a6324: 0xc123412  jal         func_48D048
    ctx->pc = 0x4A6324u;
    SET_GPR_U32(ctx, 31, 0x4A632Cu);
    ctx->pc = 0x4A6328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6324u;
    // 0x4a6328: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D048u, 0x4A6324u, 0x4A632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A632Cu;
label_4a632c:
    // 0x4a632c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A632Cu;
    {
        const bool branch_taken_0x4a632c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A632Cu;
        // 0x4a6330: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a632c) {
            ctx->pc = 0x4A6348u;
            goto label_4a6348;
        }
    }
    ctx->pc = 0x4A6334u;
    // 0x4a6334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a6334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a6338: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x4a6338u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a633c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x4a633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x4a6340: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a6340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6344: 0xa482014a  sh          $v0, 0x14A($a0)
    ctx->pc = 0x4a6344u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 330), (uint16_t)GPR_U32(ctx, 2));
label_4a6348:
    // 0x4a6348: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a6348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a634c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A634Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A634Cu;
        // 0x4a6350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A634Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A6354u;
    // 0x4a6354: 0x0  nop
    ctx->pc = 0x4a6354u;
    // NOP
    ctx->pc = 0x4a6358u;
}
