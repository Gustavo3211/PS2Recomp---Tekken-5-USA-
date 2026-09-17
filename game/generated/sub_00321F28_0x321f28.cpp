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

// Function: sub_00321F28
// Address: 0x321f28 - 0x321f78
void sub_00321F28_0x321f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321F28_0x321f28");
#endif

    switch (ctx->pc) {
        case 0x321f4cu: goto label_321f4c;
        default: break;
    }

    ctx->pc = 0x321f28u;

    // 0x321f28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x321f2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321f30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x321f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321f34: 0x260412c0  addiu       $a0, $s0, 0x12C0
    ctx->pc = 0x321f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4800));
    // 0x321f38: 0x26101580  addiu       $s0, $s0, 0x1580
    ctx->pc = 0x321f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5504));
    // 0x321f3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x321f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x321f40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x321f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x321f44: 0xc0cf1c2  jal         func_33C708
    ctx->pc = 0x321F44u;
    SET_GPR_U32(ctx, 31, 0x321F4Cu);
    ctx->pc = 0x321F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321F44u;
    // 0x321f48: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C708u, 0x321F44u, 0x321F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321F4Cu;
label_321f4c:
    // 0x321f4c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x321f4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321f50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321f54: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x321F54u;
    {
        const bool branch_taken_0x321f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x321F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F54u;
        // 0x321f58: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f54) {
            ctx->pc = 0x321F64u;
            goto label_321f64;
        }
    }
    ctx->pc = 0x321F5Cu;
    // 0x321f5c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x321f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x321f60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321f64:
    // 0x321f64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321f68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x321f68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x321f6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x321f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321f70: 0x3e00008  jr          $ra
    ctx->pc = 0x321F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F70u;
        // 0x321f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321F78u;
}
