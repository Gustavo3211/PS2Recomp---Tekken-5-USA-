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

// Function: sub_0029BDC8
// Address: 0x29bdc8 - 0x29be68
void sub_0029BDC8_0x29bdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BDC8_0x29bdc8");
#endif

    switch (ctx->pc) {
        case 0x29be00u: goto label_29be00;
        case 0x29be14u: goto label_29be14;
        case 0x29be20u: goto label_29be20;
        default: break;
    }

    ctx->pc = 0x29bdc8u;

    // 0x29bdc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29bdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29bdcc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x29bdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x29bdd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29bdd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bdd4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29bdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29bdd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29bdd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bddc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x29bddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x29bde0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29bde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29bde4: 0x2414efff  addiu       $s4, $zero, -0x1001
    ctx->pc = 0x29bde4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29bde8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x29bde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x29bdec: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x29bdecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x29bdf0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29bdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29bdf4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29bdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29bdf8: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x29bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x29bdfc: 0x24530070  addiu       $s3, $v0, 0x70
    ctx->pc = 0x29bdfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_29be00:
    // 0x29be00: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x29be00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29be04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29be04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29be08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be0c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29BE0Cu;
    SET_GPR_U32(ctx, 31, 0x29BE14u);
    ctx->pc = 0x29BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE0Cu;
    // 0x29be10: 0x26a5c2d8  addiu       $a1, $s5, -0x3D28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29BE0Cu, 0x29BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE14u;
label_29be14:
    // 0x29be14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29be14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be18: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29BE18u;
    SET_GPR_U32(ctx, 31, 0x29BE20u);
    ctx->pc = 0x29BE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE18u;
    // 0x29be1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29BE18u, 0x29BE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE20u;
label_29be20:
    // 0x29be20: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x29be20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x29be24: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x29be24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x29be28: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x29be28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be2c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29be2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x29be30: 0x2a240004  slti        $a0, $s1, 0x4
    ctx->pc = 0x29be30u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x29be34: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x29be34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x29be38: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x29be38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x29be3c: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x29BE3Cu;
    {
        const bool branch_taken_0x29be3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE3Cu;
        // 0x29be40: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29be3c) {
            ctx->pc = 0x29BE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29be00;
        }
    }
    ctx->pc = 0x29BE44u;
    // 0x29be44: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x29be44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29be48: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x29be48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29be4c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29be4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29be50: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x29be50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29be54: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29be54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29be58: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x29be58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29be5c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29be5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29be60: 0x3e00008  jr          $ra
    ctx->pc = 0x29BE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE60u;
        // 0x29be64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BE68u;
}
