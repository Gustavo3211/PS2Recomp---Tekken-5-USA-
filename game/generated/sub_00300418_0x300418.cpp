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

// Function: sub_00300418
// Address: 0x300418 - 0x300500
void sub_00300418_0x300418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300418_0x300418");
#endif

    switch (ctx->pc) {
        case 0x300460u: goto label_300460;
        case 0x300488u: goto label_300488;
        case 0x30049cu: goto label_30049c;
        default: break;
    }

    ctx->pc = 0x300418u;

    // 0x300418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x300418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30041c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30041cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300420: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x300420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x300424: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x300424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x300428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30042c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x30042cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300430: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x300430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x300434: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x300434u;
    {
        const bool branch_taken_0x300434 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x300438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300434u;
        // 0x300438: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300434) {
            ctx->pc = 0x3004E4u;
            goto label_3004e4;
        }
    }
    ctx->pc = 0x30043Cu;
    // 0x30043c: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x30043Cu;
    {
        const bool branch_taken_0x30043c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x300440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30043Cu;
        // 0x300440: 0x24a30010  addiu       $v1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30043c) {
            ctx->pc = 0x3004E4u;
            goto label_3004e4;
        }
    }
    ctx->pc = 0x300444u;
    // 0x300444: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x300444u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x300448: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30044c: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x30044cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x300450: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x300450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x300454: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x300454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x300458: 0xc0be9be  jal         func_2FA6F8
    ctx->pc = 0x300458u;
    SET_GPR_U32(ctx, 31, 0x300460u);
    ctx->pc = 0x30045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300458u;
    // 0x30045c: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6F8u, 0x300458u, 0x300460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300460u;
label_300460:
    // 0x300460: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x300460u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300464: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x300464u;
    {
        const bool branch_taken_0x300464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x300468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300464u;
        // 0x300468: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300464) {
            ctx->pc = 0x300478u;
            goto label_300478;
        }
    }
    ctx->pc = 0x30046Cu;
    // 0x30046c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x30046Cu;
    {
        const bool branch_taken_0x30046c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30046Cu;
        // 0x300470: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30046c) {
            ctx->pc = 0x3004E4u;
            goto label_3004e4;
        }
    }
    ctx->pc = 0x300474u;
    // 0x300474: 0x0  nop
    ctx->pc = 0x300474u;
    // NOP
label_300478:
    // 0x300478: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x300478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30047c: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30047Cu;
    {
        const bool branch_taken_0x30047c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x300480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30047Cu;
        // 0x300480: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30047c) {
            ctx->pc = 0x3004E0u;
            goto label_3004e0;
        }
    }
    ctx->pc = 0x300484u;
    // 0x300484: 0x1180c0  sll         $s0, $s1, 3
    ctx->pc = 0x300484u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_300488:
    // 0x300488: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x300488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30048c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x30048cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x300490: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x300490u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x300494: 0xc0c004e  jal         func_300138
    ctx->pc = 0x300494u;
    SET_GPR_U32(ctx, 31, 0x30049Cu);
    ctx->pc = 0x300498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300494u;
    // 0x300498: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300138u, 0x300494u, 0x30049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30049Cu;
label_30049c:
    // 0x30049c: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x30049cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3004a0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3004a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3004a4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3004a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3004a8: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3004A8u;
    {
        const bool branch_taken_0x3004a8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x3004ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004A8u;
        // 0x3004ac: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3004a8) {
            ctx->pc = 0x3004C4u;
            goto label_3004c4;
        }
    }
    ctx->pc = 0x3004B0u;
    // 0x3004b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3004b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3004b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3004b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3004b8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3004b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3004bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3004BCu;
    {
        const bool branch_taken_0x3004bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3004C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004BCu;
        // 0x3004c0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3004bc) {
            ctx->pc = 0x3004C8u;
            goto label_3004c8;
        }
    }
    ctx->pc = 0x3004C4u;
label_3004c4:
    // 0x3004c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3004c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3004c8:
    // 0x3004c8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x3004c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x3004cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3004ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3004d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3004d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3004d4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3004d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3004d8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3004D8u;
    {
        const bool branch_taken_0x3004d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3004DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004D8u;
        // 0x3004dc: 0x1180c0  sll         $s0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3004d8) {
            ctx->pc = 0x300488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300488;
        }
    }
    ctx->pc = 0x3004E0u;
label_3004e0:
    // 0x3004e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3004e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3004e4:
    // 0x3004e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3004e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3004e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3004e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3004ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3004ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3004f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3004f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3004f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3004F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3004F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004F4u;
        // 0x3004f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3004F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3004FCu;
    // 0x3004fc: 0x0  nop
    ctx->pc = 0x3004fcu;
    // NOP
    ctx->pc = 0x300500u;
}
