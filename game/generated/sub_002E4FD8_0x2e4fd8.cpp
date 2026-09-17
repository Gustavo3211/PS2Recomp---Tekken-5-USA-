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

// Function: sub_002E4FD8
// Address: 0x2e4fd8 - 0x2e5050
void sub_002E4FD8_0x2e4fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4FD8_0x2e4fd8");
#endif

    switch (ctx->pc) {
        case 0x2e4ff0u: goto label_2e4ff0;
        case 0x2e500cu: goto label_2e500c;
        case 0x2e501cu: goto label_2e501c;
        case 0x2e5020u: goto label_2e5020;
        case 0x2e5028u: goto label_2e5028;
        case 0x2e5030u: goto label_2e5030;
        case 0x2e5038u: goto label_2e5038;
        default: break;
    }

    ctx->pc = 0x2e4fd8u;

    // 0x2e4fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e4fdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4fe0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e4fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4fe4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e4fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e4fe8: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x2E4FE8u;
    SET_GPR_U32(ctx, 31, 0x2E4FF0u);
    ctx->pc = 0x2E4FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4FE8u;
    // 0x2e4fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x2E4FE8u, 0x2E4FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4FF0u;
label_2e4ff0:
    // 0x2e4ff0: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2e4ff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e4ff4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E4FF4u;
    {
        const bool branch_taken_0x2e4ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4FF4u;
        // 0x2e4ff8: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4ff4) {
            ctx->pc = 0x2E5014u;
            goto label_2e5014;
        }
    }
    ctx->pc = 0x2E4FFCu;
    // 0x2e4ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5000: 0x24a54a40  addiu       $a1, $a1, 0x4A40
    ctx->pc = 0x2e5000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19008));
    // 0x2e5004: 0xc04a520  jal         func_129480
    ctx->pc = 0x2E5004u;
    SET_GPR_U32(ctx, 31, 0x2E500Cu);
    ctx->pc = 0x2E5008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5004u;
    // 0x2e5008: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129480u, 0x2E5004u, 0x2E500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E500Cu;
label_2e500c:
    // 0x2e500c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2E500Cu;
    {
        const bool branch_taken_0x2e500c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e500c) {
            ctx->pc = 0x2E5010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E500Cu;
            // 0x2e5010: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5044u;
            goto label_2e5044;
        }
    }
    ctx->pc = 0x2E5014u;
label_2e5014:
    // 0x2e5014: 0xc0449ca  jal         func_112728
    ctx->pc = 0x2E5014u;
    SET_GPR_U32(ctx, 31, 0x2E501Cu);
    ctx->pc = 0x2E5018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5014u;
    // 0x2e5018: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112728u, 0x2E5014u, 0x2E501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E501Cu;
label_2e501c:
    // 0x2e501c: 0x0  nop
    ctx->pc = 0x2e501cu;
    // NOP
label_2e5020:
    // 0x2e5020: 0xc046226  jal         func_118898
    ctx->pc = 0x2E5020u;
    SET_GPR_U32(ctx, 31, 0x2E5028u);
    ctx->pc = 0x2E5024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5020u;
    // 0x2e5024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118898u, 0x2E5020u, 0x2E5028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5028u;
label_2e5028:
    // 0x2e5028: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x2E5028u;
    {
        const bool branch_taken_0x2e5028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5028) {
            ctx->pc = 0x2E5020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5020;
        }
    }
    ctx->pc = 0x2E5030u;
label_2e5030:
    // 0x2e5030: 0xc046212  jal         func_118848
    ctx->pc = 0x2E5030u;
    SET_GPR_U32(ctx, 31, 0x2E5038u);
    ctx->pc = 0x118848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118848u, 0x2E5030u, 0x2E5038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5038u;
label_2e5038:
    // 0x2e5038: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x2E5038u;
    {
        const bool branch_taken_0x2e5038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5038) {
            ctx->pc = 0x2E5030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5030;
        }
    }
    ctx->pc = 0x2E5040u;
    // 0x2e5040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5044:
    // 0x2e5044: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e5044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e5048: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5048u;
        // 0x2e504c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5050u;
}
