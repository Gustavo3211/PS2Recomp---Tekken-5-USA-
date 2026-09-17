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

// Function: sub_00130488
// Address: 0x130488 - 0x1304f0
void sub_00130488_0x130488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130488_0x130488");
#endif

    switch (ctx->pc) {
        case 0x1304b8u: goto label_1304b8;
        default: break;
    }

    ctx->pc = 0x130488u;

    // 0x130488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13048c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x13048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x130490: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130494: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x130494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130498: 0x24424bf8  addiu       $v0, $v0, 0x4BF8
    ctx->pc = 0x130498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19448));
    // 0x13049c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13049cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1304a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1304a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1304a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1304a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304a8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1304a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1304ac: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1304acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1304b0: 0xc0493a2  jal         func_124E88
    ctx->pc = 0x1304B0u;
    SET_GPR_U32(ctx, 31, 0x1304B8u);
    ctx->pc = 0x1304B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304B0u;
    // 0x1304b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E88u, 0x1304B0u, 0x1304B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304B8u;
label_1304b8:
    // 0x1304b8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1304B8u;
    {
        const bool branch_taken_0x1304b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1304BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1304B8u;
        // 0x1304bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1304b8) {
            ctx->pc = 0x1304D8u;
            goto label_1304d8;
        }
    }
    ctx->pc = 0x1304C0u;
    // 0x1304c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1304c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1304c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1304c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1304c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1304c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1304cc: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x1304CCu;
    ctx->pc = 0x1304D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304CCu;
    // 0x1304d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x1304D4u;
    // 0x1304d4: 0x0  nop
    ctx->pc = 0x1304d4u;
    // NOP
label_1304d8:
    // 0x1304d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1304d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1304dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1304dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1304e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1304e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1304e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1304E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1304E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1304E4u;
        // 0x1304e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1304E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1304ECu;
    // 0x1304ec: 0x0  nop
    ctx->pc = 0x1304ecu;
    // NOP
    ctx->pc = 0x1304f0u;
}
