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

// Function: sub_002860E8
// Address: 0x2860e8 - 0x2861c0
void sub_002860E8_0x2860e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002860E8_0x2860e8");
#endif

    switch (ctx->pc) {
        case 0x286168u: goto label_286168;
        case 0x286198u: goto label_286198;
        case 0x2861a8u: goto label_2861a8;
        default: break;
    }

    ctx->pc = 0x2860e8u;

    // 0x2860e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2860e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2860ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2860ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2860f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2860f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2860f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2860f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2860f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2860f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2860fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2860fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x286100: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x286100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286104: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x286104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x286108: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x286108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28610c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28610Cu;
    {
        const bool branch_taken_0x28610c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28610Cu;
        // 0x286110: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28610c) {
            ctx->pc = 0x286130u;
            goto label_286130;
        }
    }
    ctx->pc = 0x286114u;
    // 0x286114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x286118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28611c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28611cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286120: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x286120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x286124: 0x80a17f2  j           func_285FC8
    ctx->pc = 0x286124u;
    ctx->pc = 0x286128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286124u;
    // 0x286128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285FC8u, 0x286124u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28612Cu;
    // 0x28612c: 0x0  nop
    ctx->pc = 0x28612cu;
    // NOP
label_286130:
    // 0x286130: 0x1900000b  blez        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x286130u;
    {
        const bool branch_taken_0x286130 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x286130) {
            ctx->pc = 0x286160u;
            goto label_286160;
        }
    }
    ctx->pc = 0x286138u;
    // 0x286138: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x286138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28613c: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x28613cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x286140: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x286140u;
    {
        const bool branch_taken_0x286140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286140u;
        // 0x286144: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286140) {
            ctx->pc = 0x286160u;
            goto label_286160;
        }
    }
    ctx->pc = 0x286148u;
    // 0x286148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28614c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28614cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286150: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x286150u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286154: 0x80a17e2  j           func_285F88
    ctx->pc = 0x286154u;
    ctx->pc = 0x286158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286154u;
    // 0x286158: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    sub_00285F88_0x285f88(rdram, ctx, runtime); return;
    ctx->pc = 0x28615Cu;
    // 0x28615c: 0x0  nop
    ctx->pc = 0x28615cu;
    // NOP
label_286160:
    // 0x286160: 0xc0a17fa  jal         func_285FE8
    ctx->pc = 0x286160u;
    SET_GPR_U32(ctx, 31, 0x286168u);
    ctx->pc = 0x286164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286160u;
    // 0x286164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285FE8u, 0x286160u, 0x286168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286168u;
label_286168:
    // 0x286168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28616c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28616Cu;
    {
        const bool branch_taken_0x28616c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28616Cu;
        // 0x286170: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28616c) {
            ctx->pc = 0x286190u;
            goto label_286190;
        }
    }
    ctx->pc = 0x286174u;
    // 0x286174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286178: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x286178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28617c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28617cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286180: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x286180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x286184: 0x80a17e2  j           func_285F88
    ctx->pc = 0x286184u;
    ctx->pc = 0x286188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286184u;
    // 0x286188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    sub_00285F88_0x285f88(rdram, ctx, runtime); return;
    ctx->pc = 0x28618Cu;
    // 0x28618c: 0x0  nop
    ctx->pc = 0x28618cu;
    // NOP
label_286190:
    // 0x286190: 0xc0a17fe  jal         func_285FF8
    ctx->pc = 0x286190u;
    SET_GPR_U32(ctx, 31, 0x286198u);
    ctx->pc = 0x286194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286190u;
    // 0x286194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285FF8u, 0x286190u, 0x286198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286198u;
label_286198:
    // 0x286198: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x286198u;
    {
        const bool branch_taken_0x286198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286198u;
        // 0x28619c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286198) {
            ctx->pc = 0x2861A8u;
            goto label_2861a8;
        }
    }
    ctx->pc = 0x2861A0u;
    // 0x2861a0: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x2861A0u;
    SET_GPR_U32(ctx, 31, 0x2861A8u);
    ctx->pc = 0x2861A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2861A0u;
    // 0x2861a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x2861A0u, 0x2861A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2861A8u;
label_2861a8:
    // 0x2861a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2861a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2861ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2861acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2861b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2861b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2861b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2861b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2861b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2861B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2861BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2861B8u;
        // 0x2861bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2861B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2861C0u;
}
