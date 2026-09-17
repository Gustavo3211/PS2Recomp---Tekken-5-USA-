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

// Function: sub_0032FD18
// Address: 0x32fd18 - 0x32fd70
void sub_0032FD18_0x32fd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FD18_0x32fd18");
#endif

    switch (ctx->pc) {
        case 0x32fd44u: goto label_32fd44;
        default: break;
    }

    ctx->pc = 0x32fd18u;

    // 0x32fd18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32fd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32fd1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32fd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32fd20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32fd20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fd24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32fd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32fd28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32fd28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fd2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32fd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32fd30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32fd34: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32FD34u;
    {
        const bool branch_taken_0x32fd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD34u;
        // 0x32fd38: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fd34) {
            ctx->pc = 0x32FD58u;
            goto label_32fd58;
        }
    }
    ctx->pc = 0x32FD3Cu;
    // 0x32fd3c: 0xc049dec  jal         func_1277B0
    ctx->pc = 0x32FD3Cu;
    SET_GPR_U32(ctx, 31, 0x32FD44u);
    ctx->pc = 0x1277B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1277B0u, 0x32FD3Cu, 0x32FD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FD44u;
label_32fd44:
    // 0x32fd44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32fd48: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x32fd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x32fd4c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x32fd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x32fd50: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x32fd50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x32fd54: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32fd54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_32fd58:
    // 0x32fd58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32fd58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fd5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32fd5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32fd60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32fd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32fd64: 0x3e00008  jr          $ra
    ctx->pc = 0x32FD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD64u;
        // 0x32fd68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FD6Cu;
    // 0x32fd6c: 0x0  nop
    ctx->pc = 0x32fd6cu;
    // NOP
    ctx->pc = 0x32fd70u;
}
