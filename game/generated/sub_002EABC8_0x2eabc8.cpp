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

// Function: sub_002EABC8
// Address: 0x2eabc8 - 0x2eac38
void sub_002EABC8_0x2eabc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EABC8_0x2eabc8");
#endif

    switch (ctx->pc) {
        case 0x2eac20u: goto label_2eac20;
        default: break;
    }

    ctx->pc = 0x2eabc8u;

    // 0x2eabc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eabc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eabcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eabccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eabd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eabd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eabd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eabd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eabd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2eabd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2eabdc: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2eabdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2eabe0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EABE0u;
    {
        const bool branch_taken_0x2eabe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABE0u;
        // 0x2eabe4: 0x28650002  slti        $a1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eabe0) {
            ctx->pc = 0x2EAC08u;
            goto label_2eac08;
        }
    }
    ctx->pc = 0x2EABE8u;
    // 0x2eabe8: 0x54a0000f  bnel        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2EABE8u;
    {
        const bool branch_taken_0x2eabe8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eabe8) {
            ctx->pc = 0x2EABECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EABE8u;
            // 0x2eabec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAC28u;
            goto label_2eac28;
        }
    }
    ctx->pc = 0x2EABF0u;
    // 0x2eabf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2eabf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eabf4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EABF4u;
    {
        const bool branch_taken_0x2eabf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eabf4) {
            ctx->pc = 0x2EAC18u;
            goto label_2eac18;
        }
    }
    ctx->pc = 0x2EABFCu;
    // 0x2eabfc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EABFCu;
    {
        const bool branch_taken_0x2eabfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABFCu;
        // 0x2eac00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eabfc) {
            ctx->pc = 0x2EAC28u;
            goto label_2eac28;
        }
    }
    ctx->pc = 0x2EAC04u;
    // 0x2eac04: 0x0  nop
    ctx->pc = 0x2eac04u;
    // NOP
label_2eac08:
    // 0x2eac08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2eac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eac0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAC0Cu;
    {
        const bool branch_taken_0x2eac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC0Cu;
        // 0x2eac10: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac0c) {
            ctx->pc = 0x2EAC24u;
            goto label_2eac24;
        }
    }
    ctx->pc = 0x2EAC14u;
    // 0x2eac14: 0x0  nop
    ctx->pc = 0x2eac14u;
    // NOP
label_2eac18:
    // 0x2eac18: 0xc0bbaae  jal         func_2EEAB8
    ctx->pc = 0x2EAC18u;
    SET_GPR_U32(ctx, 31, 0x2EAC20u);
    ctx->pc = 0x2EEAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEAB8u, 0x2EAC18u, 0x2EAC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC20u;
label_2eac20:
    // 0x2eac20: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2eac20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_2eac24:
    // 0x2eac24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eac24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eac28:
    // 0x2eac28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eac28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eac2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2eac2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eac30: 0x80bbb84  j           func_2EEE10
    ctx->pc = 0x2EAC30u;
    ctx->pc = 0x2EAC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC30u;
    // 0x2eac34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEE10u;
    sub_002EEE10_0x2eee10(rdram, ctx, runtime); return;
    ctx->pc = 0x2EAC38u;
}
