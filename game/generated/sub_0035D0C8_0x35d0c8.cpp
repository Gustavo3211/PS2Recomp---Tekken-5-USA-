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

// Function: sub_0035D0C8
// Address: 0x35d0c8 - 0x35d1a0
void sub_0035D0C8_0x35d0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D0C8_0x35d0c8");
#endif

    switch (ctx->pc) {
        case 0x35d110u: goto label_35d110;
        case 0x35d12cu: goto label_35d12c;
        case 0x35d13cu: goto label_35d13c;
        case 0x35d158u: goto label_35d158;
        case 0x35d164u: goto label_35d164;
        default: break;
    }

    ctx->pc = 0x35d0c8u;

    // 0x35d0c8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x35d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35d0cc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35d0d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35d0d4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35d0d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35d0dc: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35d0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35d0e0: 0x24211378  addiu       $at, $at, 0x1378
    ctx->pc = 0x35d0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4984));
    // 0x35d0e4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x35d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x35d0e8: 0x90430026  lbu         $v1, 0x26($v0)
    ctx->pc = 0x35d0e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x35d0ec: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35D0ECu;
    {
        const bool branch_taken_0x35d0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d0ec) {
            ctx->pc = 0x35D0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35D0ECu;
            // 0x35d0f0: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35D104u;
            goto label_35d104;
        }
    }
    ctx->pc = 0x35D0F4u;
    // 0x35d0f4: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x35d0f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x35d0f8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x35D0F8u;
    {
        const bool branch_taken_0x35d0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D0F8u;
        // 0x35d0fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d0f8) {
            ctx->pc = 0x35D104u;
            goto label_35d104;
        }
    }
    ctx->pc = 0x35D100u;
    // 0x35d100: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35d100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_35d104:
    // 0x35d104: 0x3e00008  jr          $ra
    ctx->pc = 0x35D104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D10Cu;
    // 0x35d10c: 0x0  nop
    ctx->pc = 0x35d10cu;
    // NOP
label_35d110:
    // 0x35d110: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x35d110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x35d114: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35d114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35d118: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x35d118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x35d11c: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x35d11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x35d120: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x35d120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x35d124: 0xc0d7c00  jal         func_35F000
    ctx->pc = 0x35D124u;
    SET_GPR_U32(ctx, 31, 0x35D12Cu);
    ctx->pc = 0x35D128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D124u;
    // 0x35d128: 0x30b0ffff  andi        $s0, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F000u, 0x35D124u, 0x35D12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D12Cu;
label_35d12c:
    // 0x35d12c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x35d12cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35d130: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x35d130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x35d134: 0xc0d7c20  jal         func_35F080
    ctx->pc = 0x35D134u;
    SET_GPR_U32(ctx, 31, 0x35D13Cu);
    ctx->pc = 0x35D138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D134u;
    // 0x35d138: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F080u, 0x35D134u, 0x35D13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D13Cu;
label_35d13c:
    // 0x35d13c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x35D13Cu;
    {
        const bool branch_taken_0x35d13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D13Cu;
        // 0x35d140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d13c) {
            ctx->pc = 0x35D188u;
            goto label_35d188;
        }
    }
    ctx->pc = 0x35D144u;
    // 0x35d144: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x35d144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35d148: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35d148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d14c: 0x8c510034  lw          $s1, 0x34($v0)
    ctx->pc = 0x35d14cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x35d150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d154: 0x0  nop
    ctx->pc = 0x35d154u;
    // NOP
label_35d158:
    // 0x35d158: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35d158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35d15c: 0xc0d73d6  jal         func_35CF58
    ctx->pc = 0x35D15Cu;
    SET_GPR_U32(ctx, 31, 0x35D164u);
    ctx->pc = 0x35D160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D15Cu;
    // 0x35d160: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF58u, 0x35D15Cu, 0x35D164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D164u;
label_35d164:
    // 0x35d164: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x35d164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d168: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35D168u;
    {
        const bool branch_taken_0x35d168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D168u;
        // 0x35d16c: 0x2a030030  slti        $v1, $s0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d168) {
            ctx->pc = 0x35D17Cu;
            goto label_35d17c;
        }
    }
    ctx->pc = 0x35D170u;
    // 0x35d170: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x35d170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x35d174: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35D174u;
    {
        const bool branch_taken_0x35d174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x35D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D174u;
        // 0x35d178: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d174) {
            ctx->pc = 0x35D188u;
            goto label_35d188;
        }
    }
    ctx->pc = 0x35D17Cu;
label_35d17c:
    // 0x35d17c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x35D17Cu;
    {
        const bool branch_taken_0x35d17c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D17Cu;
        // 0x35d180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d17c) {
            ctx->pc = 0x35D158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d158;
        }
    }
    ctx->pc = 0x35D184u;
    // 0x35d184: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35d188:
    // 0x35d188: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x35d188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35d18c: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x35d18cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35d190: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x35d190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35d194: 0x3e00008  jr          $ra
    ctx->pc = 0x35D194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D194u;
        // 0x35d198: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D19Cu;
    // 0x35d19c: 0x0  nop
    ctx->pc = 0x35d19cu;
    // NOP
    ctx->pc = 0x35d1a0u;
}
