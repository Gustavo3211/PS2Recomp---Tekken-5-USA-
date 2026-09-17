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

// Function: sub_00372B40
// Address: 0x372b40 - 0x372bb8
void sub_00372B40_0x372b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372B40_0x372b40");
#endif

    switch (ctx->pc) {
        case 0x372b74u: goto label_372b74;
        default: break;
    }

    ctx->pc = 0x372b40u;

    // 0x372b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x372b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x372b44: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x372b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x372b48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x372b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x372b4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x372b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b50: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x372b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x372b54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x372b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x372b58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x372b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x372b5c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x372b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x372b60: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x372b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x372b64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x372b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x372b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372b6c: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x372B6Cu;
    SET_GPR_U32(ctx, 31, 0x372B74u);
    ctx->pc = 0x372B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B6Cu;
    // 0x372b70: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x372B6Cu, 0x372B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B74u;
label_372b74:
    // 0x372b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x372b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b78: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x372b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x372b7c: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x372b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x372b80: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x372B80u;
    {
        const bool branch_taken_0x372b80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x372B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372B80u;
        // 0x372b84: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372b80) {
            ctx->pc = 0x372BA0u;
            goto label_372ba0;
        }
    }
    ctx->pc = 0x372B88u;
    // 0x372b88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372b8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x372b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372b90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x372b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372b94: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x372B94u;
    ctx->pc = 0x372B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B94u;
    // 0x372b98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x372B9Cu;
    // 0x372b9c: 0x0  nop
    ctx->pc = 0x372b9cu;
    // NOP
label_372ba0:
    // 0x372ba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372ba4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x372ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372ba8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x372ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372bac: 0x3e00008  jr          $ra
    ctx->pc = 0x372BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372BACu;
        // 0x372bb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372BB4u;
    // 0x372bb4: 0x0  nop
    ctx->pc = 0x372bb4u;
    // NOP
    ctx->pc = 0x372bb8u;
}
