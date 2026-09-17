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

// Function: sub_002DF000
// Address: 0x2df000 - 0x2df0b0
void sub_002DF000_0x2df000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF000_0x2df000");
#endif

    switch (ctx->pc) {
        case 0x2df040u: goto label_2df040;
        case 0x2df048u: goto label_2df048;
        case 0x2df07cu: goto label_2df07c;
        default: break;
    }

    ctx->pc = 0x2df000u;

    // 0x2df000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2df000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2df004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2df004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2df008: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2df008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df00c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2df00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2df010: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2df010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df014: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2df014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2df018: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2df018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df01c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2df01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2df020: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2df020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2df024: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2df024u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df028: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2df028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2df02c: 0x2416fff7  addiu       $s6, $zero, -0x9
    ctx->pc = 0x2df02cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2df030: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2df030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2df034: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2df034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2df038: 0xc0b7bf4  jal         func_2DEFD0
    ctx->pc = 0x2DF038u;
    SET_GPR_U32(ctx, 31, 0x2DF040u);
    ctx->pc = 0x2DF03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF038u;
    // 0x2df03c: 0x8e350068  lw          $s5, 0x68($s1) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEFD0u, 0x2DF038u, 0x2DF040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF040u;
label_2df040:
    // 0x2df040: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2df040u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df044: 0x0  nop
    ctx->pc = 0x2df044u;
    // NOP
label_2df048:
    // 0x2df048: 0x52500007  beql        $s2, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DF048u;
    {
        const bool branch_taken_0x2df048 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x2df048) {
            ctx->pc = 0x2DF04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF048u;
            // 0x2df04c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF068u;
            goto label_2df068;
        }
    }
    ctx->pc = 0x2DF050u;
    // 0x2df050: 0xae300068  sw          $s0, 0x68($s1)
    ctx->pc = 0x2df050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 16));
    // 0x2df054: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2df054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df058: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2df058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2df05c: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2df05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x2df060: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2df060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2df064: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2df064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2df068:
    // 0x2df068: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x2df068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x2df06c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF06Cu;
    {
        const bool branch_taken_0x2df06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df06c) {
            ctx->pc = 0x2DF070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF06Cu;
            // 0x2df070: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF080u;
            goto label_2df080;
        }
    }
    ctx->pc = 0x2DF074u;
    // 0x2df074: 0xc0b79ba  jal         func_2DE6E8
    ctx->pc = 0x2DF074u;
    SET_GPR_U32(ctx, 31, 0x2DF07Cu);
    ctx->pc = 0x2DF078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF074u;
    // 0x2df078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE6E8u, 0x2DF074u, 0x2DF07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF07Cu;
label_2df07c:
    // 0x2df07c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2df07cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df080:
    // 0x2df080: 0x1614fff1  bne         $s0, $s4, . + 4 + (-0xF << 2)
    ctx->pc = 0x2DF080u;
    {
        const bool branch_taken_0x2df080 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        ctx->pc = 0x2DF084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF080u;
        // 0x2df084: 0xdfbf0038  ld          $ra, 0x38($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df080) {
            ctx->pc = 0x2DF048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df048;
        }
    }
    ctx->pc = 0x2DF088u;
    // 0x2df088: 0xae350068  sw          $s5, 0x68($s1)
    ctx->pc = 0x2df088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 21));
    // 0x2df08c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2df08cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df090: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2df090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2df094: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2df094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df098: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2df098u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df09c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2df09cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df0a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2df0a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df0a4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2df0a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0A8u;
        // 0x2df0ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF0B0u;
}
