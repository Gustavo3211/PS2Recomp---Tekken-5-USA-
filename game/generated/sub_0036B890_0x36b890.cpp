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

// Function: sub_0036B890
// Address: 0x36b890 - 0x36b908
void sub_0036B890_0x36b890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B890_0x36b890");
#endif

    switch (ctx->pc) {
        case 0x36b8c4u: goto label_36b8c4;
        default: break;
    }

    ctx->pc = 0x36b890u;

    // 0x36b890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36b890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36b894: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36b894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36b898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36b898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36b89c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36b89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b8a0: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x36b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x36b8a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36b8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36b8a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36b8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36b8ac: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x36b8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x36b8b0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x36b8b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36b8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b8b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36b8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b8bc: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x36B8BCu;
    SET_GPR_U32(ctx, 31, 0x36B8C4u);
    ctx->pc = 0x36B8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B8BCu;
    // 0x36b8c0: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x36B8BCu, 0x36B8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B8C4u;
label_36b8c4:
    // 0x36b8c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b8c8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36b8cc: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36b8d0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36B8D0u;
    {
        const bool branch_taken_0x36b8d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B8D0u;
        // 0x36b8d4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b8d0) {
            ctx->pc = 0x36B8F0u;
            goto label_36b8f0;
        }
    }
    ctx->pc = 0x36B8D8u;
    // 0x36b8d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36b8d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b8dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36b8dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36b8e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36b8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b8e4: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36B8E4u;
    ctx->pc = 0x36B8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B8E4u;
    // 0x36b8e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36B8ECu;
    // 0x36b8ec: 0x0  nop
    ctx->pc = 0x36b8ecu;
    // NOP
label_36b8f0:
    // 0x36b8f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36b8f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b8f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36b8f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36b8f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36b8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x36B8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B8FCu;
        // 0x36b900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B904u;
    // 0x36b904: 0x0  nop
    ctx->pc = 0x36b904u;
    // NOP
    ctx->pc = 0x36b908u;
}
