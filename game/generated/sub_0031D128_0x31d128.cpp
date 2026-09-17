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

// Function: sub_0031D128
// Address: 0x31d128 - 0x31d1b8
void sub_0031D128_0x31d128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D128_0x31d128");
#endif

    switch (ctx->pc) {
        case 0x31d128u: goto label_31d128;
        case 0x31d12cu: goto label_31d12c;
        case 0x31d130u: goto label_31d130;
        case 0x31d134u: goto label_31d134;
        case 0x31d138u: goto label_31d138;
        case 0x31d13cu: goto label_31d13c;
        case 0x31d140u: goto label_31d140;
        case 0x31d144u: goto label_31d144;
        case 0x31d148u: goto label_31d148;
        case 0x31d14cu: goto label_31d14c;
        case 0x31d150u: goto label_31d150;
        case 0x31d154u: goto label_31d154;
        case 0x31d158u: goto label_31d158;
        case 0x31d15cu: goto label_31d15c;
        case 0x31d160u: goto label_31d160;
        case 0x31d164u: goto label_31d164;
        case 0x31d168u: goto label_31d168;
        case 0x31d16cu: goto label_31d16c;
        case 0x31d170u: goto label_31d170;
        case 0x31d174u: goto label_31d174;
        case 0x31d178u: goto label_31d178;
        case 0x31d17cu: goto label_31d17c;
        case 0x31d180u: goto label_31d180;
        case 0x31d184u: goto label_31d184;
        case 0x31d188u: goto label_31d188;
        case 0x31d18cu: goto label_31d18c;
        case 0x31d190u: goto label_31d190;
        case 0x31d194u: goto label_31d194;
        case 0x31d198u: goto label_31d198;
        case 0x31d19cu: goto label_31d19c;
        case 0x31d1a0u: goto label_31d1a0;
        case 0x31d1a4u: goto label_31d1a4;
        case 0x31d1a8u: goto label_31d1a8;
        case 0x31d1acu: goto label_31d1ac;
        case 0x31d1b0u: goto label_31d1b0;
        case 0x31d1b4u: goto label_31d1b4;
        default: break;
    }

    ctx->pc = 0x31d128u;

label_31d128:
    // 0x31d128: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31d128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31d12c:
    // 0x31d12c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31d12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_31d130:
    // 0x31d130: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31d130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_31d134:
    // 0x31d134: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31d134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31d138:
    // 0x31d138: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31d138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_31d13c:
    // 0x31d13c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x31d13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_31d140:
    // 0x31d140: 0xc0c8864  jal         func_322190
label_31d144:
    if (ctx->pc == 0x31D144u) {
        ctx->pc = 0x31D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D140u;
        // 0x31d144: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D148u;
        goto label_31d148;
    }
    ctx->pc = 0x31D140u;
    SET_GPR_U32(ctx, 31, 0x31D148u);
    ctx->pc = 0x31D144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D140u;
    // 0x31d144: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x31D140u, 0x31D148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D148u;
label_31d148:
    // 0x31d148: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31d148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d14c:
    // 0x31d14c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x31d14cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31d150:
    // 0x31d150: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31d150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31d154:
    // 0x31d154: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x31d154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_31d158:
    // 0x31d158: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x31d158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_31d15c:
    // 0x31d15c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31d15cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31d160:
    // 0x31d160: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31d160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31d164:
    // 0x31d164: 0x40f809  jalr        $v0
label_31d168:
    if (ctx->pc == 0x31D168u) {
        ctx->pc = 0x31D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D164u;
        // 0x31d168: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D16Cu;
        goto label_31d16c;
    }
    ctx->pc = 0x31D164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31D16Cu);
        ctx->pc = 0x31D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D164u;
        // 0x31d168: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D164u, 0x31D16Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D16Cu;
label_31d16c:
    // 0x31d16c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31d170:
    // 0x31d170: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x31d170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_31d174:
    // 0x31d174: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x31d174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_31d178:
    // 0x31d178: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x31d178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_31d17c:
    // 0x31d17c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31d17cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31d180:
    // 0x31d180: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31d180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31d184:
    // 0x31d184: 0x40f809  jalr        $v0
label_31d188:
    if (ctx->pc == 0x31D188u) {
        ctx->pc = 0x31D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D184u;
        // 0x31d188: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D18Cu;
        goto label_31d18c;
    }
    ctx->pc = 0x31D184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31D18Cu);
        ctx->pc = 0x31D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D184u;
        // 0x31d188: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D184u, 0x31D18Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D18Cu;
label_31d18c:
    // 0x31d18c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31d18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31d190:
    // 0x31d190: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x31d190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_31d194:
    // 0x31d194: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31d194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31d198:
    // 0x31d198: 0xc0c746e  jal         func_31D1B8
label_31d19c:
    if (ctx->pc == 0x31D19Cu) {
        ctx->pc = 0x31D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D198u;
        // 0x31d19c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D1A0u;
        goto label_31d1a0;
    }
    ctx->pc = 0x31D198u;
    SET_GPR_U32(ctx, 31, 0x31D1A0u);
    ctx->pc = 0x31D19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D198u;
    // 0x31d19c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D1B8u, 0x31D198u, 0x31D1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D1A0u;
label_31d1a0:
    // 0x31d1a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31d1a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31d1a4:
    // 0x31d1a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x31d1a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_31d1a8:
    // 0x31d1a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31d1a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31d1ac:
    // 0x31d1ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x31d1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_31d1b0:
    // 0x31d1b0: 0x3e00008  jr          $ra
label_31d1b4:
    if (ctx->pc == 0x31D1B4u) {
        ctx->pc = 0x31D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1B0u;
        // 0x31d1b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D1B8u;
        goto label_fallthrough_0x31d1b0;
    }
    ctx->pc = 0x31D1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1B0u;
        // 0x31d1b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31d1b0:
    ctx->pc = 0x31D1B8u;
}
