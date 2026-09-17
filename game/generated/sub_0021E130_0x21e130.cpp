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

// Function: sub_0021E130
// Address: 0x21e130 - 0x21e170
void sub_0021E130_0x21e130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E130_0x21e130");
#endif

    switch (ctx->pc) {
        case 0x21e130u: goto label_21e130;
        case 0x21e134u: goto label_21e134;
        case 0x21e138u: goto label_21e138;
        case 0x21e13cu: goto label_21e13c;
        case 0x21e140u: goto label_21e140;
        case 0x21e144u: goto label_21e144;
        case 0x21e148u: goto label_21e148;
        case 0x21e14cu: goto label_21e14c;
        case 0x21e150u: goto label_21e150;
        case 0x21e154u: goto label_21e154;
        case 0x21e158u: goto label_21e158;
        case 0x21e15cu: goto label_21e15c;
        case 0x21e160u: goto label_21e160;
        case 0x21e164u: goto label_21e164;
        case 0x21e168u: goto label_21e168;
        case 0x21e16cu: goto label_21e16c;
        default: break;
    }

    ctx->pc = 0x21e130u;

label_21e130:
    // 0x21e130: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x21e130u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21e134:
    // 0x21e134: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x21e134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_21e138:
    // 0x21e138: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21e13c:
    // 0x21e13c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x21e13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21e140:
    // 0x21e140: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x21e140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21e144:
    // 0x21e144: 0x2cc2000e  sltiu       $v0, $a2, 0xE
    ctx->pc = 0x21e144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_21e148:
    // 0x21e148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21e14c:
    // 0x21e14c: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
label_21e150:
    if (ctx->pc == 0x21E150u) {
        ctx->pc = 0x21E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E14Cu;
        // 0x21e150: 0x69400b  movn        $t0, $v1, $t1 (Delay Slot)
        if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E154u;
        goto label_21e154;
    }
    ctx->pc = 0x21E14Cu;
    {
        const bool branch_taken_0x21e14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E14Cu;
        // 0x21e150: 0x69400b  movn        $t0, $v1, $t1 (Delay Slot)
        if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e14c) {
            ctx->pc = 0x21E348u;
            return;
        }
    }
    ctx->pc = 0x21E154u;
label_21e154:
    // 0x21e154: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x21e154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21e158:
    // 0x21e158: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x21e158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_21e15c:
    // 0x21e15c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21e160:
    // 0x21e160: 0x8c636de0  lw          $v1, 0x6DE0($v1)
    ctx->pc = 0x21e160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28128)));
label_21e164:
    // 0x21e164: 0x600008  jr          $v1
label_21e168:
    if (ctx->pc == 0x21E168u) {
        ctx->pc = 0x21E16Cu;
        goto label_21e16c;
    }
    ctx->pc = 0x21E164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E164u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21E16Cu;
label_21e16c:
    // 0x21e16c: 0x0  nop
    ctx->pc = 0x21e16cu;
    // NOP
    ctx->pc = 0x21e170u;
}
