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

// Function: sub_0035ACB0
// Address: 0x35acb0 - 0x35ad38
void sub_0035ACB0_0x35acb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035ACB0_0x35acb0");
#endif

    switch (ctx->pc) {
        case 0x35acd0u: goto label_35acd0;
        case 0x35ace4u: goto label_35ace4;
        case 0x35ad14u: goto label_35ad14;
        case 0x35ad1cu: goto label_35ad1c;
        case 0x35ad24u: goto label_35ad24;
        default: break;
    }

    ctx->pc = 0x35acb0u;

    // 0x35acb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35acb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35acb4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35acb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35acb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35acbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35acbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35acc0: 0x2450cf80  addiu       $s0, $v0, -0x3080
    ctx->pc = 0x35acc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954880));
    // 0x35acc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35acc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35acc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35acc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35accc: 0x0  nop
    ctx->pc = 0x35acccu;
    // NOP
label_35acd0:
    // 0x35acd0: 0x3c050006  lui         $a1, 0x6
    ctx->pc = 0x35acd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6 << 16));
    // 0x35acd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35acd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35acd8: 0x34a595dd  ori         $a1, $a1, 0x95DD
    ctx->pc = 0x35acd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)38365);
    // 0x35acdc: 0xc044bb4  jal         func_112ED0
    ctx->pc = 0x35ACDCu;
    SET_GPR_U32(ctx, 31, 0x35ACE4u);
    ctx->pc = 0x35ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ACDCu;
    // 0x35ace0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112ED0u, 0x35ACDCu, 0x35ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ACE4u;
label_35ace4:
    // 0x35ace4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x35ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x35ace8: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x35ACE8u;
    {
        const bool branch_taken_0x35ace8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ACE8u;
        // 0x35acec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ace8) {
            ctx->pc = 0x35ACD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35acd0;
        }
    }
    ctx->pc = 0x35ACF0u;
    // 0x35acf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35acf4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35acf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35acf8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x35acf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35acfc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x35acfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35ad00: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x35ad00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35ad04: 0xaf82c7b4  sw          $v0, -0x384C($gp)
    ctx->pc = 0x35ad04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952884), GPR_U32(ctx, 2));
    // 0x35ad08: 0xaf91cbfc  sw          $s1, -0x3404($gp)
    ctx->pc = 0x35ad08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953980), GPR_U32(ctx, 17));
    // 0x35ad0c: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x35AD0Cu;
    SET_GPR_U32(ctx, 31, 0x35AD14u);
    ctx->pc = 0x35AD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AD0Cu;
    // 0x35ad10: 0xaf80c7b8  sw          $zero, -0x3848($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952888), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x35AD0Cu, 0x35AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AD14u;
label_35ad14:
    // 0x35ad14: 0xc0d6b4e  jal         func_35AD38
    ctx->pc = 0x35AD14u;
    SET_GPR_U32(ctx, 31, 0x35AD1Cu);
    ctx->pc = 0x35AD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AD38u, 0x35AD14u, 0x35AD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AD1Cu;
label_35ad1c:
    // 0x35ad1c: 0xc0d6a96  jal         func_35AA58
    ctx->pc = 0x35AD1Cu;
    SET_GPR_U32(ctx, 31, 0x35AD24u);
    ctx->pc = 0x35AA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA58u, 0x35AD1Cu, 0x35AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AD24u;
label_35ad24:
    // 0x35ad24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ad24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ad28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ad28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ad2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35ad2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ad30: 0x80d6b4e  j           func_35AD38
    ctx->pc = 0x35AD30u;
    ctx->pc = 0x35AD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AD30u;
    // 0x35ad34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AD38u;
    sub_0035AD38_0x35ad38(rdram, ctx, runtime); return;
    ctx->pc = 0x35AD38u;
}
