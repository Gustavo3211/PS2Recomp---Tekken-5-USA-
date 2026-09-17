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

// Function: sub_002EE128
// Address: 0x2ee128 - 0x2ee170
void sub_002EE128_0x2ee128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE128_0x2ee128");
#endif

    switch (ctx->pc) {
        case 0x2ee128u: goto label_2ee128;
        case 0x2ee12cu: goto label_2ee12c;
        case 0x2ee130u: goto label_2ee130;
        case 0x2ee134u: goto label_2ee134;
        case 0x2ee138u: goto label_2ee138;
        case 0x2ee13cu: goto label_2ee13c;
        case 0x2ee140u: goto label_2ee140;
        case 0x2ee144u: goto label_2ee144;
        case 0x2ee148u: goto label_2ee148;
        case 0x2ee14cu: goto label_2ee14c;
        case 0x2ee150u: goto label_2ee150;
        case 0x2ee154u: goto label_2ee154;
        case 0x2ee158u: goto label_2ee158;
        case 0x2ee15cu: goto label_2ee15c;
        case 0x2ee160u: goto label_2ee160;
        case 0x2ee164u: goto label_2ee164;
        case 0x2ee168u: goto label_2ee168;
        case 0x2ee16cu: goto label_2ee16c;
        default: break;
    }

    ctx->pc = 0x2ee128u;

label_2ee128:
    // 0x2ee128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ee128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ee12c:
    // 0x2ee12c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ee12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ee130:
    // 0x2ee130: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ee130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ee134:
    // 0x2ee134: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ee134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2ee138:
    // 0x2ee138: 0xc08b882  jal         func_22E208
label_2ee13c:
    if (ctx->pc == 0x2EE13Cu) {
        ctx->pc = 0x2EE13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE138u;
        // 0x2ee13c: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE140u;
        goto label_2ee140;
    }
    ctx->pc = 0x2EE138u;
    SET_GPR_U32(ctx, 31, 0x2EE140u);
    ctx->pc = 0x2EE13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE138u;
    // 0x2ee13c: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x2EE138u, 0x2EE140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE140u;
label_2ee140:
    // 0x2ee140: 0xc0a5b52  jal         func_296D48
label_2ee144:
    if (ctx->pc == 0x2EE144u) {
        ctx->pc = 0x2EE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE140u;
        // 0x2ee144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE148u;
        goto label_2ee148;
    }
    ctx->pc = 0x2EE140u;
    SET_GPR_U32(ctx, 31, 0x2EE148u);
    ctx->pc = 0x2EE144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE140u;
    // 0x2ee144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D48u, 0x2EE140u, 0x2EE148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE148u;
label_2ee148:
    // 0x2ee148: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ee148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ee14c:
    // 0x2ee14c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2ee14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2ee150:
    // 0x2ee150: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ee150u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ee154:
    // 0x2ee154: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ee154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ee158:
    // 0x2ee158: 0x60f809  jalr        $v1
label_2ee15c:
    if (ctx->pc == 0x2EE15Cu) {
        ctx->pc = 0x2EE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE158u;
        // 0x2ee15c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE160u;
        goto label_2ee160;
    }
    ctx->pc = 0x2EE158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EE160u);
        ctx->pc = 0x2EE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE158u;
        // 0x2ee15c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE158u, 0x2EE160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE160u;
label_2ee160:
    // 0x2ee160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ee160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ee164:
    // 0x2ee164: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ee164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ee168:
    // 0x2ee168: 0x3e00008  jr          $ra
label_2ee16c:
    if (ctx->pc == 0x2EE16Cu) {
        ctx->pc = 0x2EE16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE168u;
        // 0x2ee16c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE170u;
        goto label_fallthrough_0x2ee168;
    }
    ctx->pc = 0x2EE168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE168u;
        // 0x2ee16c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ee168:
    ctx->pc = 0x2EE170u;
}
