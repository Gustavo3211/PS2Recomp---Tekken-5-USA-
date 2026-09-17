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

// Function: sub_001F3110
// Address: 0x1f3110 - 0x1f31c0
void sub_001F3110_0x1f3110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3110_0x1f3110");
#endif

    switch (ctx->pc) {
        case 0x1f3130u: goto label_1f3130;
        case 0x1f3138u: goto label_1f3138;
        case 0x1f3144u: goto label_1f3144;
        case 0x1f3150u: goto label_1f3150;
        case 0x1f3160u: goto label_1f3160;
        case 0x1f3188u: goto label_1f3188;
        default: break;
    }

    ctx->pc = 0x1f3110u;

    // 0x1f3110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f3110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f3114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f3114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f3118: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f3118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f311c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f311cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f3120: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f3120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f3124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f3124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f3128: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1F3128u;
    SET_GPR_U32(ctx, 31, 0x1F3130u);
    ctx->pc = 0x1F312Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3128u;
    // 0x1f312c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1F3128u, 0x1F3130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3130u;
label_1f3130:
    // 0x1f3130: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x1F3130u;
    SET_GPR_U32(ctx, 31, 0x1F3138u);
    ctx->pc = 0x1F3134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3130u;
    // 0x1f3134: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x1F3130u, 0x1F3138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3138u;
label_1f3138:
    // 0x1f3138: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f3138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f313c: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F313Cu;
    SET_GPR_U32(ctx, 31, 0x1F3144u);
    ctx->pc = 0x1F3140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F313Cu;
    // 0x1f3140: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F313Cu, 0x1F3144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3144u;
label_1f3144:
    // 0x1f3144: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f3144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3148: 0xc09d486  jal         func_275218
    ctx->pc = 0x1F3148u;
    SET_GPR_U32(ctx, 31, 0x1F3150u);
    ctx->pc = 0x1F314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3148u;
    // 0x1f314c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x1F3148u, 0x1F3150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3150u;
label_1f3150:
    // 0x1f3150: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f3150u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3154: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3154u;
    {
        const bool branch_taken_0x1f3154 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1F3158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3154u;
        // 0x1f3158: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3154) {
            ctx->pc = 0x1F317Cu;
            goto label_1f317c;
        }
    }
    ctx->pc = 0x1F315Cu;
    // 0x1f315c: 0x0  nop
    ctx->pc = 0x1f315cu;
    // NOP
label_1f3160:
    // 0x1f3160: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f3160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f3164: 0xae1206b0  sw          $s2, 0x6B0($s0)
    ctx->pc = 0x1f3164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1712), GPR_U32(ctx, 18));
    // 0x1f3168: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x1f3168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f316c: 0x0  nop
    ctx->pc = 0x1f316cu;
    // NOP
    // 0x1f3170: 0x0  nop
    ctx->pc = 0x1f3170u;
    // NOP
    // 0x1f3174: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F3174u;
    {
        const bool branch_taken_0x1f3174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3174u;
        // 0x1f3178: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3174) {
            ctx->pc = 0x1F3160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3160;
        }
    }
    ctx->pc = 0x1F317Cu;
label_1f317c:
    // 0x1f317c: 0x1a600009  blez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F317Cu;
    {
        const bool branch_taken_0x1f317c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1F3180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F317Cu;
        // 0x1f3180: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f317c) {
            ctx->pc = 0x1F31A4u;
            goto label_1f31a4;
        }
    }
    ctx->pc = 0x1F3184u;
    // 0x1f3184: 0x0  nop
    ctx->pc = 0x1f3184u;
    // NOP
label_1f3188:
    // 0x1f3188: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f3188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f318c: 0xac7206b0  sw          $s2, 0x6B0($v1)
    ctx->pc = 0x1f318cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1712), GPR_U32(ctx, 18));
    // 0x1f3190: 0x93102a  slt         $v0, $a0, $s3
    ctx->pc = 0x1f3190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1f3194: 0x0  nop
    ctx->pc = 0x1f3194u;
    // NOP
    // 0x1f3198: 0x0  nop
    ctx->pc = 0x1f3198u;
    // NOP
    // 0x1f319c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F319Cu;
    {
        const bool branch_taken_0x1f319c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F319Cu;
        // 0x1f31a0: 0x246308d0  addiu       $v1, $v1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f319c) {
            ctx->pc = 0x1F3188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3188;
        }
    }
    ctx->pc = 0x1F31A4u;
label_1f31a4:
    // 0x1f31a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f31a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f31a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f31a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f31ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f31acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f31b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f31b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f31b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f31b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f31b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F31B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31B8u;
        // 0x1f31bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F31B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F31C0u;
}
