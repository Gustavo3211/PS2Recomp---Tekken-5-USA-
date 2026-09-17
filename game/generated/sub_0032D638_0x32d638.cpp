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

// Function: sub_0032D638
// Address: 0x32d638 - 0x32d758
void sub_0032D638_0x32d638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D638_0x32d638");
#endif

    switch (ctx->pc) {
        case 0x32d65cu: goto label_32d65c;
        case 0x32d6a0u: goto label_32d6a0;
        case 0x32d6d8u: goto label_32d6d8;
        case 0x32d714u: goto label_32d714;
        case 0x32d74cu: goto label_32d74c;
        default: break;
    }

    ctx->pc = 0x32d638u;

    // 0x32d638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d63c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32d63cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d640: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32d640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32d644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d648: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x32d648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    // 0x32d64c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32d64cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d650: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32d650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32d654: 0xc0cb628  jal         func_32D8A0
    ctx->pc = 0x32D654u;
    SET_GPR_U32(ctx, 31, 0x32D65Cu);
    ctx->pc = 0x32D658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D654u;
    // 0x32d658: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8A0u, 0x32D654u, 0x32D65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D65Cu;
label_32d65c:
    // 0x32d65c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32D65Cu;
    {
        const bool branch_taken_0x32d65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d65c) {
            ctx->pc = 0x32D660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D65Cu;
            // 0x32d660: 0xac5000e0  sw          $s0, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D664u;
            goto label_32d664;
        }
    }
    ctx->pc = 0x32D664u;
label_32d664:
    // 0x32d664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d668: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32d668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d66c: 0x3e00008  jr          $ra
    ctx->pc = 0x32D66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D66Cu;
        // 0x32d670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D674u;
    // 0x32d674: 0x0  nop
    ctx->pc = 0x32d674u;
    // NOP
    // 0x32d678: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32d678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d67c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32d67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32d680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d684: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32d684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d688: 0x248408c0  addiu       $a0, $a0, 0x8C0
    ctx->pc = 0x32d688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    // 0x32d68c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32d68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d694: 0xaf80c5dc  sw          $zero, -0x3A24($gp)
    ctx->pc = 0x32d694u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952412), GPR_U32(ctx, 0));
    // 0x32d698: 0xc0c9132  jal         func_3244C8
    ctx->pc = 0x32D698u;
    SET_GPR_U32(ctx, 31, 0x32D6A0u);
    ctx->pc = 0x32D69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D698u;
    // 0x32d69c: 0xaf80c5e0  sw          $zero, -0x3A20($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952416), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3244C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3244C8u, 0x32D698u, 0x32D6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D6A0u;
label_32d6a0:
    // 0x32d6a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x32D6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D6A4u;
        // 0x32d6a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D6ACu;
    // 0x32d6ac: 0x0  nop
    ctx->pc = 0x32d6acu;
    // NOP
    // 0x32d6b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32d6b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d6b4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32d6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32d6b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d6bc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32d6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d6c0: 0x248408c0  addiu       $a0, $a0, 0x8C0
    ctx->pc = 0x32d6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    // 0x32d6c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32d6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d6c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d6cc: 0xaf80c5dc  sw          $zero, -0x3A24($gp)
    ctx->pc = 0x32d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952412), GPR_U32(ctx, 0));
    // 0x32d6d0: 0xc0c916a  jal         func_3245A8
    ctx->pc = 0x32D6D0u;
    SET_GPR_U32(ctx, 31, 0x32D6D8u);
    ctx->pc = 0x32D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D6D0u;
    // 0x32d6d4: 0xaf80c5e0  sw          $zero, -0x3A20($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952416), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245A8u, 0x32D6D0u, 0x32D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D6D8u;
label_32d6d8:
    // 0x32d6d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x32D6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D6DCu;
        // 0x32d6e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D6E4u;
    // 0x32d6e4: 0x0  nop
    ctx->pc = 0x32d6e4u;
    // NOP
    // 0x32d6e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32d6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d6ec: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32d6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32d6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d6f4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x32d6f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d6f8: 0x248408c0  addiu       $a0, $a0, 0x8C0
    ctx->pc = 0x32d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    // 0x32d6fc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32d6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d700: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32d700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d708: 0xaf80c5dc  sw          $zero, -0x3A24($gp)
    ctx->pc = 0x32d708u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952412), GPR_U32(ctx, 0));
    // 0x32d70c: 0xc0c919e  jal         func_324678
    ctx->pc = 0x32D70Cu;
    SET_GPR_U32(ctx, 31, 0x32D714u);
    ctx->pc = 0x32D710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D70Cu;
    // 0x32d710: 0xaf80c5e0  sw          $zero, -0x3A20($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952416), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324678u, 0x32D70Cu, 0x32D714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D714u;
label_32d714:
    // 0x32d714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d718: 0x3e00008  jr          $ra
    ctx->pc = 0x32D718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D718u;
        // 0x32d71c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D720u;
    // 0x32d720: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32d720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d724: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32d724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32d728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d72c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x32d72cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d730: 0x248408c0  addiu       $a0, $a0, 0x8C0
    ctx->pc = 0x32d730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    // 0x32d734: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32d734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d738: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32d738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d73c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d740: 0xaf80c5dc  sw          $zero, -0x3A24($gp)
    ctx->pc = 0x32d740u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952412), GPR_U32(ctx, 0));
    // 0x32d744: 0xc0c91da  jal         func_324768
    ctx->pc = 0x32D744u;
    SET_GPR_U32(ctx, 31, 0x32D74Cu);
    ctx->pc = 0x32D748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D744u;
    // 0x32d748: 0xaf80c5e0  sw          $zero, -0x3A20($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952416), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324768u, 0x32D744u, 0x32D74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D74Cu;
label_32d74c:
    // 0x32d74c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d750: 0x3e00008  jr          $ra
    ctx->pc = 0x32D750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D750u;
        // 0x32d754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D758u;
}
