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

// Function: sub_00299E80
// Address: 0x299e80 - 0x299f20
void sub_00299E80_0x299e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299E80_0x299e80");
#endif

    switch (ctx->pc) {
        case 0x299eb8u: goto label_299eb8;
        case 0x299eccu: goto label_299ecc;
        case 0x299ed8u: goto label_299ed8;
        default: break;
    }

    ctx->pc = 0x299e80u;

    // 0x299e80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x299e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x299e84: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x299e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x299e88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x299e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299e8c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x299e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x299e90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x299e90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299e94: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x299e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x299e98: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x299e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x299e9c: 0x2414efff  addiu       $s4, $zero, -0x1001
    ctx->pc = 0x299e9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x299ea0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x299ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x299ea4: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x299ea4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x299ea8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x299ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x299eac: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x299eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x299eb0: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x299eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x299eb4: 0x245300b8  addiu       $s3, $v0, 0xB8
    ctx->pc = 0x299eb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
label_299eb8:
    // 0x299eb8: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x299eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x299ebc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x299ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ec0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x299ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ec4: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x299EC4u;
    SET_GPR_U32(ctx, 31, 0x299ECCu);
    ctx->pc = 0x299EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299EC4u;
    // 0x299ec8: 0x26a5c0e0  addiu       $a1, $s5, -0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x299EC4u, 0x299ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299ECCu;
label_299ecc:
    // 0x299ecc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x299eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ed0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x299ED0u;
    SET_GPR_U32(ctx, 31, 0x299ED8u);
    ctx->pc = 0x299ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299ED0u;
    // 0x299ed4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x299ED0u, 0x299ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299ED8u;
label_299ed8:
    // 0x299ed8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x299ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x299edc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x299edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x299ee0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x299ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ee4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x299ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x299ee8: 0x2a240004  slti        $a0, $s1, 0x4
    ctx->pc = 0x299ee8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x299eec: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x299eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x299ef0: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x299ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x299ef4: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x299EF4u;
    {
        const bool branch_taken_0x299ef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x299EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299EF4u;
        // 0x299ef8: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ef4) {
            ctx->pc = 0x299EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299eb8;
        }
    }
    ctx->pc = 0x299EFCu;
    // 0x299efc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x299efcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299f00: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x299f00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x299f04: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x299f04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299f08: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x299f08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x299f0c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x299f0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299f10: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x299f10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x299f14: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x299f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299f18: 0x3e00008  jr          $ra
    ctx->pc = 0x299F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F18u;
        // 0x299f1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299F20u;
}
