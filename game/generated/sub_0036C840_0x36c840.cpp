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

// Function: sub_0036C840
// Address: 0x36c840 - 0x36c8b8
void sub_0036C840_0x36c840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C840_0x36c840");
#endif

    switch (ctx->pc) {
        case 0x36c874u: goto label_36c874;
        default: break;
    }

    ctx->pc = 0x36c840u;

    // 0x36c840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c844: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36c844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36c848: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c84c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36c84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c850: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x36c850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x36c854: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36c854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36c858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36c858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36c85c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x36c85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x36c860: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36c860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x36c864: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36c864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c868: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36c868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c86c: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x36C86Cu;
    SET_GPR_U32(ctx, 31, 0x36C874u);
    ctx->pc = 0x36C870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C86Cu;
    // 0x36c870: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x36C86Cu, 0x36C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C874u;
label_36c874:
    // 0x36c874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c878: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36c878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36c87c: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36c880: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36C880u;
    {
        const bool branch_taken_0x36c880 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C880u;
        // 0x36c884: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c880) {
            ctx->pc = 0x36C8A0u;
            goto label_36c8a0;
        }
    }
    ctx->pc = 0x36C888u;
    // 0x36c888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c88c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36c88cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c890: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c894: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36C894u;
    ctx->pc = 0x36C898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C894u;
    // 0x36c898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36C89Cu;
    // 0x36c89c: 0x0  nop
    ctx->pc = 0x36c89cu;
    // NOP
label_36c8a0:
    // 0x36c8a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c8a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c8a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36c8a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c8a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x36C8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C8ACu;
        // 0x36c8b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C8B4u;
    // 0x36c8b4: 0x0  nop
    ctx->pc = 0x36c8b4u;
    // NOP
    ctx->pc = 0x36c8b8u;
}
