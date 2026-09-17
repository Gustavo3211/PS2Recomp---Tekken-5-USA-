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

// Function: sub_0033E918
// Address: 0x33e918 - 0x33e9a0
void sub_0033E918_0x33e918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E918_0x33e918");
#endif

    switch (ctx->pc) {
        case 0x33e948u: goto label_33e948;
        case 0x33e958u: goto label_33e958;
        case 0x33e970u: goto label_33e970;
        default: break;
    }

    ctx->pc = 0x33e918u;

    // 0x33e918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33e918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33e91c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33e920: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33e920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33e924: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33e924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33e928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e92c: 0x24441140  addiu       $a0, $v0, 0x1140
    ctx->pc = 0x33e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4416));
    // 0x33e930: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33e930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33e934: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33e934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33e938: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33e938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33e93c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33e93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33e940: 0xc0cb170  jal         func_32C5C0
    ctx->pc = 0x33E940u;
    SET_GPR_U32(ctx, 31, 0x33E948u);
    ctx->pc = 0x33E944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E940u;
    // 0x33e944: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C5C0u, 0x33E940u, 0x33E948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E948u;
label_33e948:
    // 0x33e948: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x33e948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e94c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x33e94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33e950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e954: 0x0  nop
    ctx->pc = 0x33e954u;
    // NOP
label_33e958:
    // 0x33e958: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x33e958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33e95c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x33e95cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e960: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33e960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33e964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33e964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e968: 0xc0cf22a  jal         func_33C8A8
    ctx->pc = 0x33E968u;
    SET_GPR_U32(ctx, 31, 0x33E970u);
    ctx->pc = 0x33E96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E968u;
    // 0x33e96c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C8A8u, 0x33E968u, 0x33E970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E970u;
label_33e970:
    // 0x33e970: 0x2e230007  sltiu       $v1, $s1, 0x7
    ctx->pc = 0x33e970u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x33e974: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x33E974u;
    {
        const bool branch_taken_0x33e974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E974u;
        // 0x33e978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e974) {
            ctx->pc = 0x33E958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e958;
        }
    }
    ctx->pc = 0x33E97Cu;
    // 0x33e97c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x33e97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33e980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33e984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33e988: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33e988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33e98c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33e98cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33e990: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33e990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33e994: 0x3e00008  jr          $ra
    ctx->pc = 0x33E994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E994u;
        // 0x33e998: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E99Cu;
    // 0x33e99c: 0x0  nop
    ctx->pc = 0x33e99cu;
    // NOP
    ctx->pc = 0x33e9a0u;
}
