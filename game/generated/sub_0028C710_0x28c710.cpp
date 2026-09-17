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

// Function: sub_0028C710
// Address: 0x28c710 - 0x28c7e0
void sub_0028C710_0x28c710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C710_0x28c710");
#endif

    switch (ctx->pc) {
        case 0x28c73cu: goto label_28c73c;
        case 0x28c754u: goto label_28c754;
        case 0x28c780u: goto label_28c780;
        default: break;
    }

    ctx->pc = 0x28c710u;

    // 0x28c710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28c710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28c714: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28c714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28c718: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28c718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c71c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28c71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28c720: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28c720u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28c724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28c728: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x28C728u;
    {
        const bool branch_taken_0x28c728 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C728u;
        // 0x28c72c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c728) {
            ctx->pc = 0x28C748u;
            goto label_28c748;
        }
    }
    ctx->pc = 0x28C730u;
    // 0x28c730: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28c734: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C734u;
    SET_GPR_U32(ctx, 31, 0x28C73Cu);
    ctx->pc = 0x28C738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C734u;
    // 0x28c738: 0x24a59b88  addiu       $a1, $a1, -0x6478 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C734u, 0x28C73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C73Cu;
label_28c73c:
    // 0x28c73c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28C73Cu;
    {
        const bool branch_taken_0x28c73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C73Cu;
        // 0x28c740: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c73c) {
            ctx->pc = 0x28C758u;
            goto label_28c758;
        }
    }
    ctx->pc = 0x28C744u;
    // 0x28c744: 0x0  nop
    ctx->pc = 0x28c744u;
    // NOP
label_28c748:
    // 0x28c748: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28c74c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C74Cu;
    SET_GPR_U32(ctx, 31, 0x28C754u);
    ctx->pc = 0x28C750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C74Cu;
    // 0x28c750: 0x24a59b78  addiu       $a1, $a1, -0x6488 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C74Cu, 0x28C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C754u;
label_28c754:
    // 0x28c754: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28c754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c758:
    // 0x28c758: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x28C758u;
    {
        const bool branch_taken_0x28c758 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C758u;
        // 0x28c75c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c758) {
            ctx->pc = 0x28C7B0u;
            goto label_28c7b0;
        }
    }
    ctx->pc = 0x28C760u;
    // 0x28c760: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x28c760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x28c764: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28c764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x28c768: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x28c768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x28c76c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28c770: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28c770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28c774: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28c774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28c778: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28C778u;
    SET_GPR_U32(ctx, 31, 0x28C780u);
    ctx->pc = 0x28C77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C778u;
    // 0x28c77c: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28C778u, 0x28C780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C780u;
label_28c780:
    // 0x28c780: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28c780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c784: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x28c784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28c788: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28C788u;
    {
        const bool branch_taken_0x28c788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C788u;
        // 0x28c78c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c788) {
            ctx->pc = 0x28C7C4u;
            goto label_28c7c4;
        }
    }
    ctx->pc = 0x28C790u;
    // 0x28c790: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x28c790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x28c794: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28c794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c798: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28c798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28c79c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28c79cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c7a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x28c7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28c7a4: 0x80ad7f6  j           func_2B5FD8
    ctx->pc = 0x28C7A4u;
    ctx->pc = 0x28C7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C7A4u;
    // 0x28c7a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    sub_002B5FD8_0x2b5fd8(rdram, ctx, runtime); return;
    ctx->pc = 0x28C7ACu;
    // 0x28c7ac: 0x0  nop
    ctx->pc = 0x28c7acu;
    // NOP
label_28c7b0:
    // 0x28c7b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x28c7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28c7b4: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x28c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28c7b8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c7bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c7c0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c7c4:
    // 0x28c7c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28c7c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c7c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28c7c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28c7cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28c7ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c7d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x28c7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28c7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x28C7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7D4u;
        // 0x28c7d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28C7DCu;
    // 0x28c7dc: 0x0  nop
    ctx->pc = 0x28c7dcu;
    // NOP
    ctx->pc = 0x28c7e0u;
}
