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

// Function: sub_00241C98
// Address: 0x241c98 - 0x241f30
void sub_00241C98_0x241c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241C98_0x241c98");
#endif

    switch (ctx->pc) {
        case 0x241d2cu: goto label_241d2c;
        case 0x241d48u: goto label_241d48;
        case 0x241d70u: goto label_241d70;
        case 0x241d8cu: goto label_241d8c;
        case 0x241da4u: goto label_241da4;
        case 0x241db8u: goto label_241db8;
        case 0x241de0u: goto label_241de0;
        case 0x241dfcu: goto label_241dfc;
        case 0x241e0cu: goto label_241e0c;
        case 0x241e14u: goto label_241e14;
        case 0x241e30u: goto label_241e30;
        case 0x241e40u: goto label_241e40;
        case 0x241e68u: goto label_241e68;
        case 0x241e84u: goto label_241e84;
        case 0x241e94u: goto label_241e94;
        case 0x241e9cu: goto label_241e9c;
        case 0x241eb8u: goto label_241eb8;
        case 0x241ec8u: goto label_241ec8;
        case 0x241ed4u: goto label_241ed4;
        case 0x241ee8u: goto label_241ee8;
        case 0x241ef4u: goto label_241ef4;
        default: break;
    }

    ctx->pc = 0x241c98u;

    // 0x241c98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x241c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x241c9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x241c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241ca0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x241ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x241ca4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x241ca4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241ca8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x241ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x241cac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241cb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x241cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x241cb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x241cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x241cb8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x241cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x241cbc: 0x8e720050  lw          $s2, 0x50($s3)
    ctx->pc = 0x241cbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x241cc0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x241cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x241cc4: 0x3c140047  lui         $s4, 0x47
    ctx->pc = 0x241cc4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
    // 0x241cc8: 0x26940710  addiu       $s4, $s4, 0x710
    ctx->pc = 0x241cc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1808));
    // 0x241ccc: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x241cccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x241cd0: 0x1243001f  beq         $s2, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x241CD0u;
    {
        const bool branch_taken_0x241cd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x241CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CD0u;
        // 0x241cd4: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x241cd0) {
            ctx->pc = 0x241D50u;
            goto label_241d50;
        }
    }
    ctx->pc = 0x241CD8u;
    // 0x241cd8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x241CD8u;
    {
        const bool branch_taken_0x241cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241cd8) {
            ctx->pc = 0x241CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241CD8u;
            // 0x241cdc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241CF0u;
            goto label_241cf0;
        }
    }
    ctx->pc = 0x241CE0u;
    // 0x241ce0: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x241CE0u;
    {
        const bool branch_taken_0x241ce0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x241CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CE0u;
        // 0x241ce4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ce0) {
            ctx->pc = 0x241D08u;
            goto label_241d08;
        }
    }
    ctx->pc = 0x241CE8u;
    // 0x241ce8: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x241CE8u;
    {
        const bool branch_taken_0x241ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CE8u;
        // 0x241cec: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ce8) {
            ctx->pc = 0x241F14u;
            goto label_241f14;
        }
    }
    ctx->pc = 0x241CF0u;
label_241cf0:
    // 0x241cf0: 0x12420033  beq         $s2, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x241CF0u;
    {
        const bool branch_taken_0x241cf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x241CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CF0u;
        // 0x241cf4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241cf0) {
            ctx->pc = 0x241DC0u;
            goto label_241dc0;
        }
    }
    ctx->pc = 0x241CF8u;
    // 0x241cf8: 0x12420053  beq         $s2, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x241CF8u;
    {
        const bool branch_taken_0x241cf8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x241CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CF8u;
        // 0x241cfc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241cf8) {
            ctx->pc = 0x241E48u;
            goto label_241e48;
        }
    }
    ctx->pc = 0x241D00u;
    // 0x241d00: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x241D00u;
    {
        const bool branch_taken_0x241d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D00u;
        // 0x241d04: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d00) {
            ctx->pc = 0x241F14u;
            goto label_241f14;
        }
    }
    ctx->pc = 0x241D08u;
label_241d08:
    // 0x241d08: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x241d08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    // 0x241d0c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x241d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x241d10: 0x26103208  addiu       $s0, $s0, 0x3208
    ctx->pc = 0x241d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12808));
    // 0x241d14: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x241d14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    // 0x241d18: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x241d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x241d1c: 0x34a52d60  ori         $a1, $a1, 0x2D60
    ctx->pc = 0x241d1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11616);
    // 0x241d20: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x241d20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x241d24: 0xc089248  jal         func_224920
    ctx->pc = 0x241D24u;
    SET_GPR_U32(ctx, 31, 0x241D2Cu);
    ctx->pc = 0x241D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241D24u;
    // 0x241d28: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x241D24u, 0x241D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D2Cu;
label_241d2c:
    // 0x241d2c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x241d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x241d30: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x241d30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    // 0x241d34: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x241d34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241d38: 0x24050f10  addiu       $a1, $zero, 0xF10
    ctx->pc = 0x241d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3856));
    // 0x241d3c: 0x34c60005  ori         $a2, $a2, 0x5
    ctx->pc = 0x241d3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)5);
    // 0x241d40: 0xc089248  jal         func_224920
    ctx->pc = 0x241D40u;
    SET_GPR_U32(ctx, 31, 0x241D48u);
    ctx->pc = 0x241D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241D40u;
    // 0x241d44: 0xaf82c9a8  sw          $v0, -0x3658($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953384), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x241D40u, 0x241D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D48u;
label_241d48:
    // 0x241d48: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x241D48u;
    {
        const bool branch_taken_0x241d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D48u;
        // 0x241d4c: 0xaf82c9bc  sw          $v0, -0x3644($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d48) {
            ctx->pc = 0x241EC8u;
            goto label_241ec8;
        }
    }
    ctx->pc = 0x241D50u;
label_241d50:
    // 0x241d50: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x241d50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    // 0x241d54: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x241d54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    // 0x241d58: 0x26103208  addiu       $s0, $s0, 0x3208
    ctx->pc = 0x241d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12808));
    // 0x241d5c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x241d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x241d60: 0x24055320  addiu       $a1, $zero, 0x5320
    ctx->pc = 0x241d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21280));
    // 0x241d64: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x241d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x241d68: 0xc089248  jal         func_224920
    ctx->pc = 0x241D68u;
    SET_GPR_U32(ctx, 31, 0x241D70u);
    ctx->pc = 0x241D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241D68u;
    // 0x241d6c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x241D68u, 0x241D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D70u;
label_241d70:
    // 0x241d70: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x241d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x241d74: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x241d74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    // 0x241d78: 0x240505f0  addiu       $a1, $zero, 0x5F0
    ctx->pc = 0x241d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
    // 0x241d7c: 0x34c60005  ori         $a2, $a2, 0x5
    ctx->pc = 0x241d7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)5);
    // 0x241d80: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x241d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241d84: 0xc089248  jal         func_224920
    ctx->pc = 0x241D84u;
    SET_GPR_U32(ctx, 31, 0x241D8Cu);
    ctx->pc = 0x241D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241D84u;
    // 0x241d88: 0xaf82c9ac  sw          $v0, -0x3654($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953388), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x241D84u, 0x241D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D8Cu;
label_241d8c:
    // 0x241d8c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x241d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x241d90: 0x24054290  addiu       $a1, $zero, 0x4290
    ctx->pc = 0x241d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17040));
    // 0x241d94: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x241d94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    // 0x241d98: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x241d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241d9c: 0xc089248  jal         func_224920
    ctx->pc = 0x241D9Cu;
    SET_GPR_U32(ctx, 31, 0x241DA4u);
    ctx->pc = 0x241DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241D9Cu;
    // 0x241da0: 0xaf82c9c0  sw          $v0, -0x3640($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953408), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x241D9Cu, 0x241DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241DA4u;
label_241da4:
    // 0x241da4: 0xaf82c9b8  sw          $v0, -0x3648($gp)
    ctx->pc = 0x241da4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953400), GPR_U32(ctx, 2));
    // 0x241da8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241dac: 0x24064290  addiu       $a2, $zero, 0x4290
    ctx->pc = 0x241dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17040));
    // 0x241db0: 0xc0be9ac  jal         func_2FA6B0
    ctx->pc = 0x241DB0u;
    SET_GPR_U32(ctx, 31, 0x241DB8u);
    ctx->pc = 0x241DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241DB0u;
    // 0x241db4: 0x8e640070  lw          $a0, 0x70($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6B0u, 0x241DB0u, 0x241DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241DB8u;
label_241db8:
    // 0x241db8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x241DB8u;
    {
        const bool branch_taken_0x241db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DB8u;
        // 0x241dbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241db8) {
            ctx->pc = 0x241ECCu;
            goto label_241ecc;
        }
    }
    ctx->pc = 0x241DC0u;
label_241dc0:
    // 0x241dc0: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x241dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    // 0x241dc4: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x241dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    // 0x241dc8: 0x26103208  addiu       $s0, $s0, 0x3208
    ctx->pc = 0x241dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12808));
    // 0x241dcc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x241dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241dd0: 0x24052760  addiu       $a1, $zero, 0x2760
    ctx->pc = 0x241dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10080));
    // 0x241dd4: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x241dd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x241dd8: 0xc089248  jal         func_224920
    ctx->pc = 0x241DD8u;
    SET_GPR_U32(ctx, 31, 0x241DE0u);
    ctx->pc = 0x241DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241DD8u;
    // 0x241ddc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x241DD8u, 0x241DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241DE0u;
label_241de0:
    // 0x241de0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x241de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241de4: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x241de4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    // 0x241de8: 0x240503f0  addiu       $a1, $zero, 0x3F0
    ctx->pc = 0x241de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    // 0x241dec: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x241decu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x241df0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x241df0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241df4: 0xc089248  jal         func_224920
    ctx->pc = 0x241DF4u;
    SET_GPR_U32(ctx, 31, 0x241DFCu);
    ctx->pc = 0x241DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241DF4u;
    // 0x241df8: 0xaf82c9b0  sw          $v0, -0x3650($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953392), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x241DF4u, 0x241DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241DFCu;
label_241dfc:
    // 0x241dfc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x241dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x241e00: 0xaf82c9c4  sw          $v0, -0x363C($gp)
    ctx->pc = 0x241e00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953412), GPR_U32(ctx, 2));
    // 0x241e04: 0xc086338  jal         func_218CE0
    ctx->pc = 0x241E04u;
    SET_GPR_U32(ctx, 31, 0x241E0Cu);
    ctx->pc = 0x241E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241E04u;
    // 0x241e08: 0x8c6488d0  lw          $a0, -0x7730($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218CE0u, 0x241E04u, 0x241E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E0Cu;
label_241e0c:
    // 0x241e0c: 0xc0905a2  jal         func_241688
    ctx->pc = 0x241E0Cu;
    SET_GPR_U32(ctx, 31, 0x241E14u);
    ctx->pc = 0x241E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241E0Cu;
    // 0x241e10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241688u, 0x241E0Cu, 0x241E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E14u;
label_241e14:
    // 0x241e14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x241e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241e18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x241e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241e1c: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x241e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    // 0x241e20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x241e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241e24: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x241e24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x241e28: 0xc089248  jal         func_224920
    ctx->pc = 0x241E28u;
    SET_GPR_U32(ctx, 31, 0x241E30u);
    ctx->pc = 0x241E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241E28u;
    // 0x241e2c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x241E28u, 0x241E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E30u;
label_241e30:
    // 0x241e30: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x241e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x241e34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241e38: 0xc0be9ac  jal         func_2FA6B0
    ctx->pc = 0x241E38u;
    SET_GPR_U32(ctx, 31, 0x241E40u);
    ctx->pc = 0x241E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241E38u;
    // 0x241e3c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6B0u, 0x241E38u, 0x241E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E40u;
label_241e40:
    // 0x241e40: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x241E40u;
    {
        const bool branch_taken_0x241e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E40u;
        // 0x241e44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e40) {
            ctx->pc = 0x241ECCu;
            goto label_241ecc;
        }
    }
    ctx->pc = 0x241E48u;
label_241e48:
    // 0x241e48: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x241e48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    // 0x241e4c: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x241e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    // 0x241e50: 0x26103208  addiu       $s0, $s0, 0x3208
    ctx->pc = 0x241e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12808));
    // 0x241e54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x241e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241e58: 0x24052760  addiu       $a1, $zero, 0x2760
    ctx->pc = 0x241e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10080));
    // 0x241e5c: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x241e5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x241e60: 0xc089248  jal         func_224920
    ctx->pc = 0x241E60u;
    SET_GPR_U32(ctx, 31, 0x241E68u);
    ctx->pc = 0x241E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241E60u;
    // 0x241e64: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x241E60u, 0x241E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E68u;
label_241e68:
    // 0x241e68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x241e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241e6c: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x241e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    // 0x241e70: 0x240503f0  addiu       $a1, $zero, 0x3F0
    ctx->pc = 0x241e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    // 0x241e74: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x241e74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x241e78: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x241e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241e7c: 0xc089248  jal         func_224920
    ctx->pc = 0x241E7Cu;
    SET_GPR_U32(ctx, 31, 0x241E84u);
    ctx->pc = 0x241E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241E7Cu;
    // 0x241e80: 0xaf82c9b4  sw          $v0, -0x364C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953396), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x241E7Cu, 0x241E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E84u;
label_241e84:
    // 0x241e84: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x241e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x241e88: 0xaf82c9c8  sw          $v0, -0x3638($gp)
    ctx->pc = 0x241e88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953416), GPR_U32(ctx, 2));
    // 0x241e8c: 0xc086338  jal         func_218CE0
    ctx->pc = 0x241E8Cu;
    SET_GPR_U32(ctx, 31, 0x241E94u);
    ctx->pc = 0x241E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241E8Cu;
    // 0x241e90: 0x8c6488d4  lw          $a0, -0x772C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218CE0u, 0x241E8Cu, 0x241E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E94u;
label_241e94:
    // 0x241e94: 0xc0905a2  jal         func_241688
    ctx->pc = 0x241E94u;
    SET_GPR_U32(ctx, 31, 0x241E9Cu);
    ctx->pc = 0x241E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241E94u;
    // 0x241e98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241688u, 0x241E94u, 0x241E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E9Cu;
label_241e9c:
    // 0x241e9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x241e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241ea0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x241ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241ea4: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x241ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    // 0x241ea8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x241ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241eac: 0x34c60003  ori         $a2, $a2, 0x3
    ctx->pc = 0x241eacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3);
    // 0x241eb0: 0xc089248  jal         func_224920
    ctx->pc = 0x241EB0u;
    SET_GPR_U32(ctx, 31, 0x241EB8u);
    ctx->pc = 0x241EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241EB0u;
    // 0x241eb4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x241EB0u, 0x241EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241EB8u;
label_241eb8:
    // 0x241eb8: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x241eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x241ebc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241ec0: 0xc0be9ac  jal         func_2FA6B0
    ctx->pc = 0x241EC0u;
    SET_GPR_U32(ctx, 31, 0x241EC8u);
    ctx->pc = 0x241EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241EC0u;
    // 0x241ec4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6B0u, 0x241EC0u, 0x241EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241EC8u;
label_241ec8:
    // 0x241ec8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x241ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_241ecc:
    // 0x241ecc: 0xc090678  jal         func_2419E0
    ctx->pc = 0x241ECCu;
    SET_GPR_U32(ctx, 31, 0x241ED4u);
    ctx->pc = 0x241ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241ECCu;
    // 0x241ed0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2419E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2419E0u, 0x241ECCu, 0x241ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241ED4u;
label_241ed4:
    // 0x241ed4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x241ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x241ed8: 0x5840000d  blezl       $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x241ED8u;
    {
        const bool branch_taken_0x241ed8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x241ed8) {
            ctx->pc = 0x241EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241ED8u;
            // 0x241edc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241F10u;
            goto label_241f10;
        }
    }
    ctx->pc = 0x241EE0u;
    // 0x241ee0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x241ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241ee4: 0x0  nop
    ctx->pc = 0x241ee4u;
    // NOP
label_241ee8:
    // 0x241ee8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x241ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x241eec: 0xc0905ae  jal         func_2416B8
    ctx->pc = 0x241EECu;
    SET_GPR_U32(ctx, 31, 0x241EF4u);
    ctx->pc = 0x241EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241EECu;
    // 0x241ef0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416B8u, 0x241EECu, 0x241EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241EF4u;
label_241ef4:
    // 0x241ef4: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x241ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x241ef8: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x241ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x241efc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x241efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x241f00: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x241f00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241f04: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x241F04u;
    {
        const bool branch_taken_0x241f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F04u;
        // 0x241f08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f04) {
            ctx->pc = 0x241EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241F0Cu;
    // 0x241f0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241f0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_241f10:
    // 0x241f10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x241f10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_241f14:
    // 0x241f14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x241f14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241f18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x241f18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x241f1c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x241f1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241f20: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x241f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x241f24: 0x3e00008  jr          $ra
    ctx->pc = 0x241F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F24u;
        // 0x241f28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241F2Cu;
    // 0x241f2c: 0x0  nop
    ctx->pc = 0x241f2cu;
    // NOP
    ctx->pc = 0x241f30u;
}
