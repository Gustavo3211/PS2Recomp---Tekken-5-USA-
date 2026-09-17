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

// Function: sub_0036CE30
// Address: 0x36ce30 - 0x36cea8
void sub_0036CE30_0x36ce30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CE30_0x36ce30");
#endif

    switch (ctx->pc) {
        case 0x36ce64u: goto label_36ce64;
        default: break;
    }

    ctx->pc = 0x36ce30u;

    // 0x36ce30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36ce30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36ce34: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36ce38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36ce38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36ce3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36ce3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ce40: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x36ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x36ce44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36ce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36ce48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36ce48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36ce4c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x36ce4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x36ce50: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x36ce54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36ce54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ce58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36ce58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ce5c: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x36CE5Cu;
    SET_GPR_U32(ctx, 31, 0x36CE64u);
    ctx->pc = 0x36CE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CE5Cu;
    // 0x36ce60: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x36CE5Cu, 0x36CE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CE64u;
label_36ce64:
    // 0x36ce64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ce64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ce68: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36ce6c: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36ce70: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36CE70u;
    {
        const bool branch_taken_0x36ce70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE70u;
        // 0x36ce74: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ce70) {
            ctx->pc = 0x36CE90u;
            goto label_36ce90;
        }
    }
    ctx->pc = 0x36CE78u;
    // 0x36ce78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36ce78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ce7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36ce7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36ce80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36ce80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ce84: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36CE84u;
    ctx->pc = 0x36CE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CE84u;
    // 0x36ce88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36CE8Cu;
    // 0x36ce8c: 0x0  nop
    ctx->pc = 0x36ce8cu;
    // NOP
label_36ce90:
    // 0x36ce90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36ce90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ce94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36ce94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36ce98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36ce98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ce9c: 0x3e00008  jr          $ra
    ctx->pc = 0x36CE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE9Cu;
        // 0x36cea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CEA4u;
    // 0x36cea4: 0x0  nop
    ctx->pc = 0x36cea4u;
    // NOP
    ctx->pc = 0x36cea8u;
}
