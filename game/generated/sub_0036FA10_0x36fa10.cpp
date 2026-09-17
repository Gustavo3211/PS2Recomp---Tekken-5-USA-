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

// Function: sub_0036FA10
// Address: 0x36fa10 - 0x36fa88
void sub_0036FA10_0x36fa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FA10_0x36fa10");
#endif

    switch (ctx->pc) {
        case 0x36fa44u: goto label_36fa44;
        default: break;
    }

    ctx->pc = 0x36fa10u;

    // 0x36fa10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36fa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36fa14: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36fa18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36fa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36fa1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36fa1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa20: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x36fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x36fa24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36fa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36fa28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36fa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36fa2c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x36fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x36fa30: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x36fa34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36fa34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36fa38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36fa3c: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x36FA3Cu;
    SET_GPR_U32(ctx, 31, 0x36FA44u);
    ctx->pc = 0x36FA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FA3Cu;
    // 0x36fa40: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x36FA3Cu, 0x36FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FA44u;
label_36fa44:
    // 0x36fa44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36fa44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fa48: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36fa4c: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36fa50: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36FA50u;
    {
        const bool branch_taken_0x36fa50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FA50u;
        // 0x36fa54: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fa50) {
            ctx->pc = 0x36FA70u;
            goto label_36fa70;
        }
    }
    ctx->pc = 0x36FA58u;
    // 0x36fa58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36fa58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fa5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36fa5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fa60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36fa60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36fa64: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36FA64u;
    ctx->pc = 0x36FA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FA64u;
    // 0x36fa68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36FA6Cu;
    // 0x36fa6c: 0x0  nop
    ctx->pc = 0x36fa6cu;
    // NOP
label_36fa70:
    // 0x36fa70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36fa70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fa74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36fa74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fa78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36fa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36fa7c: 0x3e00008  jr          $ra
    ctx->pc = 0x36FA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FA7Cu;
        // 0x36fa80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FA84u;
    // 0x36fa84: 0x0  nop
    ctx->pc = 0x36fa84u;
    // NOP
    ctx->pc = 0x36fa88u;
}
