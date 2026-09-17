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

// Function: sub_00335110
// Address: 0x335110 - 0x335158
void sub_00335110_0x335110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335110_0x335110");
#endif

    switch (ctx->pc) {
        case 0x335110u: goto label_335110;
        case 0x335114u: goto label_335114;
        case 0x335118u: goto label_335118;
        case 0x33511cu: goto label_33511c;
        case 0x335120u: goto label_335120;
        case 0x335124u: goto label_335124;
        case 0x335128u: goto label_335128;
        case 0x33512cu: goto label_33512c;
        case 0x335130u: goto label_335130;
        case 0x335134u: goto label_335134;
        case 0x335138u: goto label_335138;
        case 0x33513cu: goto label_33513c;
        case 0x335140u: goto label_335140;
        case 0x335144u: goto label_335144;
        case 0x335148u: goto label_335148;
        case 0x33514cu: goto label_33514c;
        case 0x335150u: goto label_335150;
        case 0x335154u: goto label_335154;
        default: break;
    }

    ctx->pc = 0x335110u;

label_335110:
    // 0x335110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_335114:
    // 0x335114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_335118:
    // 0x335118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x335118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33511c:
    // 0x33511c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33511cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_335120:
    // 0x335120: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x335120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_335124:
    // 0x335124: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x335124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_335128:
    // 0x335128: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x335128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33512c:
    // 0x33512c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33512cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_335130:
    // 0x335130: 0x40f809  jalr        $v0
label_335134:
    if (ctx->pc == 0x335134u) {
        ctx->pc = 0x335134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335130u;
        // 0x335134: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335138u;
        goto label_335138;
    }
    ctx->pc = 0x335130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x335138u);
        ctx->pc = 0x335134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335130u;
        // 0x335134: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335130u, 0x335138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x335138u;
label_335138:
    // 0x335138: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x335138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33513c:
    // 0x33513c: 0xc043c34  jal         func_10F0D0
label_335140:
    if (ctx->pc == 0x335140u) {
        ctx->pc = 0x335140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33513Cu;
        // 0x335140: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335144u;
        goto label_335144;
    }
    ctx->pc = 0x33513Cu;
    SET_GPR_U32(ctx, 31, 0x335144u);
    ctx->pc = 0x335140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33513Cu;
    // 0x335140: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F0D0u, 0x33513Cu, 0x335144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335144u;
label_335144:
    // 0x335144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_335148:
    // 0x335148: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x335148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33514c:
    // 0x33514c: 0x3e00008  jr          $ra
label_335150:
    if (ctx->pc == 0x335150u) {
        ctx->pc = 0x335150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33514Cu;
        // 0x335150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335154u;
        goto label_335154;
    }
    ctx->pc = 0x33514Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33514Cu;
        // 0x335150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33514Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335154u;
label_335154:
    // 0x335154: 0x0  nop
    ctx->pc = 0x335154u;
    // NOP
    ctx->pc = 0x335158u;
}
