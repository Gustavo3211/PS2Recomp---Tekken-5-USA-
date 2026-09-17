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

// Function: sub_00321E68
// Address: 0x321e68 - 0x321eb8
void sub_00321E68_0x321e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321E68_0x321e68");
#endif

    switch (ctx->pc) {
        case 0x321e8cu: goto label_321e8c;
        default: break;
    }

    ctx->pc = 0x321e68u;

    // 0x321e68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x321e6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321e70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x321e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321e74: 0x26040a00  addiu       $a0, $s0, 0xA00
    ctx->pc = 0x321e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2560));
    // 0x321e78: 0x26101500  addiu       $s0, $s0, 0x1500
    ctx->pc = 0x321e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5376));
    // 0x321e7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x321e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x321e80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x321e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x321e84: 0xc0cf0ec  jal         func_33C3B0
    ctx->pc = 0x321E84u;
    SET_GPR_U32(ctx, 31, 0x321E8Cu);
    ctx->pc = 0x321E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321E84u;
    // 0x321e88: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C3B0u, 0x321E84u, 0x321E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321E8Cu;
label_321e8c:
    // 0x321e8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x321e8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321e90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321e90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321e94: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x321E94u;
    {
        const bool branch_taken_0x321e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x321E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E94u;
        // 0x321e98: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321e94) {
            ctx->pc = 0x321EA4u;
            goto label_321ea4;
        }
    }
    ctx->pc = 0x321E9Cu;
    // 0x321e9c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x321e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x321ea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321ea4:
    // 0x321ea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321ea8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x321ea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x321eac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x321eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x321EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EB0u;
        // 0x321eb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321EB8u;
}
