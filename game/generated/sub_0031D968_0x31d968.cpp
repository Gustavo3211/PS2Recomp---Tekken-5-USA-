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

// Function: sub_0031D968
// Address: 0x31d968 - 0x31da58
void sub_0031D968_0x31d968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D968_0x31d968");
#endif

    switch (ctx->pc) {
        case 0x31d968u: goto label_31d968;
        case 0x31d96cu: goto label_31d96c;
        case 0x31d970u: goto label_31d970;
        case 0x31d974u: goto label_31d974;
        case 0x31d978u: goto label_31d978;
        case 0x31d97cu: goto label_31d97c;
        case 0x31d980u: goto label_31d980;
        case 0x31d984u: goto label_31d984;
        case 0x31d988u: goto label_31d988;
        case 0x31d98cu: goto label_31d98c;
        case 0x31d990u: goto label_31d990;
        case 0x31d994u: goto label_31d994;
        case 0x31d998u: goto label_31d998;
        case 0x31d99cu: goto label_31d99c;
        case 0x31d9a0u: goto label_31d9a0;
        case 0x31d9a4u: goto label_31d9a4;
        case 0x31d9a8u: goto label_31d9a8;
        case 0x31d9acu: goto label_31d9ac;
        case 0x31d9b0u: goto label_31d9b0;
        case 0x31d9b4u: goto label_31d9b4;
        case 0x31d9b8u: goto label_31d9b8;
        case 0x31d9bcu: goto label_31d9bc;
        case 0x31d9c0u: goto label_31d9c0;
        case 0x31d9c4u: goto label_31d9c4;
        case 0x31d9c8u: goto label_31d9c8;
        case 0x31d9ccu: goto label_31d9cc;
        case 0x31d9d0u: goto label_31d9d0;
        case 0x31d9d4u: goto label_31d9d4;
        case 0x31d9d8u: goto label_31d9d8;
        case 0x31d9dcu: goto label_31d9dc;
        case 0x31d9e0u: goto label_31d9e0;
        case 0x31d9e4u: goto label_31d9e4;
        case 0x31d9e8u: goto label_31d9e8;
        case 0x31d9ecu: goto label_31d9ec;
        case 0x31d9f0u: goto label_31d9f0;
        case 0x31d9f4u: goto label_31d9f4;
        case 0x31d9f8u: goto label_31d9f8;
        case 0x31d9fcu: goto label_31d9fc;
        case 0x31da00u: goto label_31da00;
        case 0x31da04u: goto label_31da04;
        case 0x31da08u: goto label_31da08;
        case 0x31da0cu: goto label_31da0c;
        case 0x31da10u: goto label_31da10;
        case 0x31da14u: goto label_31da14;
        case 0x31da18u: goto label_31da18;
        case 0x31da1cu: goto label_31da1c;
        case 0x31da20u: goto label_31da20;
        case 0x31da24u: goto label_31da24;
        case 0x31da28u: goto label_31da28;
        case 0x31da2cu: goto label_31da2c;
        case 0x31da30u: goto label_31da30;
        case 0x31da34u: goto label_31da34;
        case 0x31da38u: goto label_31da38;
        case 0x31da3cu: goto label_31da3c;
        case 0x31da40u: goto label_31da40;
        case 0x31da44u: goto label_31da44;
        case 0x31da48u: goto label_31da48;
        case 0x31da4cu: goto label_31da4c;
        case 0x31da50u: goto label_31da50;
        case 0x31da54u: goto label_31da54;
        default: break;
    }

    ctx->pc = 0x31d968u;

label_31d968:
    // 0x31d968: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31d968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_31d96c:
    // 0x31d96c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31d96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31d970:
    // 0x31d970: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x31d970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_31d974:
    // 0x31d974: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31d974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31d978:
    // 0x31d978: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x31d978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_31d97c:
    // 0x31d97c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x31d97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_31d980:
    // 0x31d980: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x31d980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_31d984:
    // 0x31d984: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31d984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31d988:
    // 0x31d988: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x31d988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31d98c:
    // 0x31d98c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_31d990:
    // 0x31d990: 0x8e050244  lw          $a1, 0x244($s0)
    ctx->pc = 0x31d990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
label_31d994:
    // 0x31d994: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31d994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_31d998:
    // 0x31d998: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x31d998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_31d99c:
    // 0x31d99c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x31d99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_31d9a0:
    // 0x31d9a0: 0x8e110018  lw          $s1, 0x18($s0)
    ctx->pc = 0x31d9a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_31d9a4:
    // 0x31d9a4: 0xc0c6c16  jal         func_31B058
label_31d9a8:
    if (ctx->pc == 0x31D9A8u) {
        ctx->pc = 0x31D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9A4u;
        // 0x31d9a8: 0x8f84c594  lw          $a0, -0x3A6C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D9ACu;
        goto label_31d9ac;
    }
    ctx->pc = 0x31D9A4u;
    SET_GPR_U32(ctx, 31, 0x31D9ACu);
    ctx->pc = 0x31D9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D9A4u;
    // 0x31d9a8: 0x8f84c594  lw          $a0, -0x3A6C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B058u, 0x31D9A4u, 0x31D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D9ACu;
label_31d9ac:
    // 0x31d9ac: 0x8f87c594  lw          $a3, -0x3A6C($gp)
    ctx->pc = 0x31d9acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952340)));
label_31d9b0:
    // 0x31d9b0: 0x8e050244  lw          $a1, 0x244($s0)
    ctx->pc = 0x31d9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
label_31d9b4:
    // 0x31d9b4: 0x8ce30050  lw          $v1, 0x50($a3)
    ctx->pc = 0x31d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_31d9b8:
    // 0x31d9b8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x31d9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31d9bc:
    // 0x31d9bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x31d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_31d9c0:
    // 0x31d9c0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31d9c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31d9c4:
    // 0x31d9c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31d9c8:
    // 0x31d9c8: 0x40f809  jalr        $v0
label_31d9cc:
    if (ctx->pc == 0x31D9CCu) {
        ctx->pc = 0x31D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9C8u;
        // 0x31d9cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D9D0u;
        goto label_31d9d0;
    }
    ctx->pc = 0x31D9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31D9D0u);
        ctx->pc = 0x31D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9C8u;
        // 0x31d9cc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D9C8u, 0x31D9D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D9D0u;
label_31d9d0:
    // 0x31d9d0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_31d9d4:
    if (ctx->pc == 0x31D9D4u) {
        ctx->pc = 0x31D9D8u;
        goto label_31d9d8;
    }
    ctx->pc = 0x31D9D0u;
    {
        const bool branch_taken_0x31d9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d9d0) {
            ctx->pc = 0x31DA04u;
            goto label_31da04;
        }
    }
    ctx->pc = 0x31D9D8u;
label_31d9d8:
    // 0x31d9d8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x31d9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31d9dc:
    // 0x31d9dc: 0xc043d08  jal         func_10F420
label_31d9e0:
    if (ctx->pc == 0x31D9E0u) {
        ctx->pc = 0x31D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9DCu;
        // 0x31d9e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D9E4u;
        goto label_31d9e4;
    }
    ctx->pc = 0x31D9DCu;
    SET_GPR_U32(ctx, 31, 0x31D9E4u);
    ctx->pc = 0x31D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D9DCu;
    // 0x31d9e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F420u, 0x31D9DCu, 0x31D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D9E4u;
label_31d9e4:
    // 0x31d9e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x31d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_31d9e8:
    // 0x31d9e8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_31d9ec:
    if (ctx->pc == 0x31D9ECu) {
        ctx->pc = 0x31D9F0u;
        goto label_31d9f0;
    }
    ctx->pc = 0x31D9E8u;
    {
        const bool branch_taken_0x31d9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d9e8) {
            ctx->pc = 0x31D9F8u;
            goto label_31d9f8;
        }
    }
    ctx->pc = 0x31D9F0u;
label_31d9f0:
    // 0x31d9f0: 0xc043cf4  jal         func_10F3D0
label_31d9f4:
    if (ctx->pc == 0x31D9F4u) {
        ctx->pc = 0x31D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9F0u;
        // 0x31d9f4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D9F8u;
        goto label_31d9f8;
    }
    ctx->pc = 0x31D9F0u;
    SET_GPR_U32(ctx, 31, 0x31D9F8u);
    ctx->pc = 0x31D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D9F0u;
    // 0x31d9f4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3D0u, 0x31D9F0u, 0x31D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D9F8u;
label_31d9f8:
    // 0x31d9f8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_31d9fc:
    if (ctx->pc == 0x31D9FCu) {
        ctx->pc = 0x31D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9F8u;
        // 0x31d9fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA00u;
        goto label_31da00;
    }
    ctx->pc = 0x31D9F8u;
    {
        const bool branch_taken_0x31d9f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9F8u;
        // 0x31d9fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9f8) {
            ctx->pc = 0x31DA04u;
            goto label_31da04;
        }
    }
    ctx->pc = 0x31DA00u;
label_31da00:
    // 0x31da00: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x31da00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_31da04:
    // 0x31da04: 0xc0cd2d6  jal         func_334B58
label_31da08:
    if (ctx->pc == 0x31DA08u) {
        ctx->pc = 0x31DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA04u;
        // 0x31da08: 0x261101ac  addiu       $s1, $s0, 0x1AC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 428));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA0Cu;
        goto label_31da0c;
    }
    ctx->pc = 0x31DA04u;
    SET_GPR_U32(ctx, 31, 0x31DA0Cu);
    ctx->pc = 0x31DA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DA04u;
    // 0x31da08: 0x261101ac  addiu       $s1, $s0, 0x1AC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334B58u, 0x31DA04u, 0x31DA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DA0Cu;
label_31da0c:
    // 0x31da0c: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x31da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_31da10:
    // 0x31da10: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x31da10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31da14:
    // 0x31da14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_31da18:
    if (ctx->pc == 0x31DA18u) {
        ctx->pc = 0x31DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA14u;
        // 0x31da18: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA1Cu;
        goto label_31da1c;
    }
    ctx->pc = 0x31DA14u;
    {
        const bool branch_taken_0x31da14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA14u;
        // 0x31da18: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da14) {
            ctx->pc = 0x31DA40u;
            goto label_31da40;
        }
    }
    ctx->pc = 0x31DA1Cu;
label_31da1c:
    // 0x31da1c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31da1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31da20:
    // 0x31da20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31da20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31da24:
    // 0x31da24: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31da24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31da28:
    // 0x31da28: 0x60f809  jalr        $v1
label_31da2c:
    if (ctx->pc == 0x31DA2Cu) {
        ctx->pc = 0x31DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA28u;
        // 0x31da2c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA30u;
        goto label_31da30;
    }
    ctx->pc = 0x31DA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31DA30u);
        ctx->pc = 0x31DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA28u;
        // 0x31da2c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DA28u, 0x31DA30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31DA30u;
label_31da30:
    // 0x31da30: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x31da30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_31da34:
    // 0x31da34: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x31da34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31da38:
    // 0x31da38: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_31da3c:
    if (ctx->pc == 0x31DA3Cu) {
        ctx->pc = 0x31DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA38u;
        // 0x31da3c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA40u;
        goto label_31da40;
    }
    ctx->pc = 0x31DA38u;
    {
        const bool branch_taken_0x31da38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31da38) {
            ctx->pc = 0x31DA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DA38u;
            // 0x31da3c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31da20;
        }
    }
    ctx->pc = 0x31DA40u;
label_31da40:
    // 0x31da40: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x31da40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31da44:
    // 0x31da44: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x31da44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_31da48:
    // 0x31da48: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x31da48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_31da4c:
    // 0x31da4c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x31da4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_31da50:
    // 0x31da50: 0x3e00008  jr          $ra
label_31da54:
    if (ctx->pc == 0x31DA54u) {
        ctx->pc = 0x31DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA50u;
        // 0x31da54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA58u;
        goto label_fallthrough_0x31da50;
    }
    ctx->pc = 0x31DA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA50u;
        // 0x31da54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31da50:
    ctx->pc = 0x31DA58u;
}
