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

// Function: sub_00294EC8
// Address: 0x294ec8 - 0x294f18
void sub_00294EC8_0x294ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294EC8_0x294ec8");
#endif

    switch (ctx->pc) {
        case 0x294ee8u: goto label_294ee8;
        case 0x294ef4u: goto label_294ef4;
        default: break;
    }

    ctx->pc = 0x294ec8u;

    // 0x294ec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294ecc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x294ed0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294ed4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x294ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ed8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x294ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x294edc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x294edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ee0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x294ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ee4: 0x0  nop
    ctx->pc = 0x294ee4u;
    // NOP
label_294ee8:
    // 0x294ee8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x294ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x294eec: 0xc0a53a4  jal         func_294E90
    ctx->pc = 0x294EECu;
    SET_GPR_U32(ctx, 31, 0x294EF4u);
    ctx->pc = 0x294EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294EECu;
    // 0x294ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294E90u, 0x294EECu, 0x294EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294EF4u;
label_294ef4:
    // 0x294ef4: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x294ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x294ef8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x294EF8u;
    {
        const bool branch_taken_0x294ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294EF8u;
        // 0x294efc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ef8) {
            ctx->pc = 0x294EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294ee8;
        }
    }
    ctx->pc = 0x294F00u;
    // 0x294f00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294f04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x294f04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x294f08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x294F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F0Cu;
        // 0x294f10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294F14u;
    // 0x294f14: 0x0  nop
    ctx->pc = 0x294f14u;
    // NOP
    ctx->pc = 0x294f18u;
}
