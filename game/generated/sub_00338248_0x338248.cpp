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

// Function: sub_00338248
// Address: 0x338248 - 0x3382c0
void sub_00338248_0x338248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338248_0x338248");
#endif

    switch (ctx->pc) {
        case 0x338278u: goto label_338278;
        case 0x338290u: goto label_338290;
        default: break;
    }

    ctx->pc = 0x338248u;

    // 0x338248: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x338248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33824c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33824cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x338250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x338250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338254: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x338254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x338258: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x338258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33825c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33825cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x338260: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x338260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338264: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x338264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x338268: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x338268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x33826c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x33826cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x338270: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x338270u;
    SET_GPR_U32(ctx, 31, 0x338278u);
    ctx->pc = 0x338274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338270u;
    // 0x338274: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x338270u, 0x338278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338278u;
label_338278:
    // 0x338278: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x338278u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33827c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33827cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338280: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x338280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338284: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x338284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338288: 0xc0ce054  jal         func_338150
    ctx->pc = 0x338288u;
    SET_GPR_U32(ctx, 31, 0x338290u);
    ctx->pc = 0x33828Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338288u;
    // 0x33828c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338150u, 0x338288u, 0x338290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338290u;
label_338290:
    // 0x338290: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x338290u;
    {
        const bool branch_taken_0x338290 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x338294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338290u;
        // 0x338294: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338290) {
            ctx->pc = 0x3382A4u;
            goto label_3382a4;
        }
    }
    ctx->pc = 0x338298u;
    // 0x338298: 0xf  sync
    ctx->pc = 0x338298u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x33829c: 0x42000038  ei
    ctx->pc = 0x33829cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3382a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3382a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3382a4:
    // 0x3382a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3382a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3382a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3382a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3382ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3382acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3382b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3382b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3382b4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3382b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3382b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3382B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3382BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3382B8u;
        // 0x3382bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3382B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3382C0u;
}
