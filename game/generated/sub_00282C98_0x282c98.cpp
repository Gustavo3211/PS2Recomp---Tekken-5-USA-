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

// Function: sub_00282C98
// Address: 0x282c98 - 0x282db8
void sub_00282C98_0x282c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282C98_0x282c98");
#endif

    switch (ctx->pc) {
        case 0x282d04u: goto label_282d04;
        case 0x282d20u: goto label_282d20;
        case 0x282d2cu: goto label_282d2c;
        case 0x282d58u: goto label_282d58;
        case 0x282d78u: goto label_282d78;
        case 0x282d84u: goto label_282d84;
        case 0x282d98u: goto label_282d98;
        default: break;
    }

    ctx->pc = 0x282c98u;

    // 0x282c98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x282c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x282c9c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x282c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x282ca0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x282ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x282ca4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x282ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x282ca8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x282ca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282cac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x282cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x282cb0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x282cb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282cb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x282cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x282cb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x282cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x282cbc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x282cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x282cc0: 0xa24001bd  sb          $zero, 0x1BD($s2)
    ctx->pc = 0x282cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 445), (uint8_t)GPR_U32(ctx, 0));
    // 0x282cc4: 0x9653003c  lhu         $s3, 0x3C($s2)
    ctx->pc = 0x282cc4u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x282cc8: 0x8c6588a8  lw          $a1, -0x7758($v1)
    ctx->pc = 0x282cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x282ccc: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x282cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x282cd0: 0x8f86ca8c  lw          $a2, -0x3574($gp)
    ctx->pc = 0x282cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953612)));
    // 0x282cd4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x282cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x282cd8: 0x2741804  sllv        $v1, $s4, $s3
    ctx->pc = 0x282cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 19) & 0x1F));
    // 0x282cdc: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x282cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x282ce0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x282ce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x282ce4: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x282CE4u;
    {
        const bool branch_taken_0x282ce4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x282CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282CE4u;
        // 0x282ce8: 0xc28821  addu        $s1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ce4) {
            ctx->pc = 0x282D50u;
            goto label_282d50;
        }
    }
    ctx->pc = 0x282CECu;
    // 0x282cec: 0x3c020131  lui         $v0, 0x131
    ctx->pc = 0x282cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)305 << 16));
    // 0x282cf0: 0x3442cb47  ori         $v0, $v0, 0xCB47
    ctx->pc = 0x282cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52039);
    // 0x282cf4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x282cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x282cf8: 0x86430040  lh          $v1, 0x40($s2)
    ctx->pc = 0x282cf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x282cfc: 0xc0a10b4  jal         func_2842D0
    ctx->pc = 0x282CFCu;
    SET_GPR_U32(ctx, 31, 0x282D04u);
    ctx->pc = 0x282D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282CFCu;
    // 0x282d00: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2842D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2842D0u, 0x282CFCu, 0x282D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D04u;
label_282d04:
    // 0x282d04: 0xae34005c  sw          $s4, 0x5C($s1)
    ctx->pc = 0x282d04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 20));
    // 0x282d08: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x282d08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x282d0c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x282d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x282d10: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x282d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x282d14: 0x26240068  addiu       $a0, $s1, 0x68
    ctx->pc = 0x282d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x282d18: 0xc04a151  jal         func_128544
    ctx->pc = 0x282D18u;
    SET_GPR_U32(ctx, 31, 0x282D20u);
    ctx->pc = 0x282D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282D18u;
    // 0x282d1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x282D18u, 0x282D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D20u;
label_282d20:
    // 0x282d20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x282d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d24: 0xc0a0ace  jal         func_282B38
    ctx->pc = 0x282D24u;
    SET_GPR_U32(ctx, 31, 0x282D2Cu);
    ctx->pc = 0x282D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282D24u;
    // 0x282d28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282B38u, 0x282D24u, 0x282D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D2Cu;
label_282d2c:
    // 0x282d2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x282d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x282d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282d34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x282d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x282d38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x282d38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282d3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x282d3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282d40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x282d40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282d44: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x282d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x282d48: 0x80b2446  j           func_2C9118
    ctx->pc = 0x282D48u;
    ctx->pc = 0x282D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282D48u;
    // 0x282d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9118u;
    sub_002C9118_0x2c9118(rdram, ctx, runtime); return;
    ctx->pc = 0x282D50u;
label_282d50:
    // 0x282d50: 0xc0a0a80  jal         func_282A00
    ctx->pc = 0x282D50u;
    SET_GPR_U32(ctx, 31, 0x282D58u);
    ctx->pc = 0x282A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282A00u, 0x282D50u, 0x282D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D58u;
label_282d58:
    // 0x282d58: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x282D58u;
    {
        const bool branch_taken_0x282d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282D58u;
        // 0x282d5c: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282d58) {
            ctx->pc = 0x282D90u;
            goto label_282d90;
        }
    }
    ctx->pc = 0x282D60u;
    // 0x282d60: 0x86450042  lh          $a1, 0x42($s2)
    ctx->pc = 0x282d60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    // 0x282d64: 0xae5408bc  sw          $s4, 0x8BC($s2)
    ctx->pc = 0x282d64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2236), GPR_U32(ctx, 20));
    // 0x282d68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x282d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d6c: 0xa25401bd  sb          $s4, 0x1BD($s2)
    ctx->pc = 0x282d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 445), (uint8_t)GPR_U32(ctx, 20));
    // 0x282d70: 0xc0b7050  jal         func_2DC140
    ctx->pc = 0x282D70u;
    SET_GPR_U32(ctx, 31, 0x282D78u);
    ctx->pc = 0x282D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282D70u;
    // 0x282d74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC140u, 0x282D70u, 0x282D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D78u;
label_282d78:
    // 0x282d78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x282d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d7c: 0xc0b2424  jal         func_2C9090
    ctx->pc = 0x282D7Cu;
    SET_GPR_U32(ctx, 31, 0x282D84u);
    ctx->pc = 0x282D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282D7Cu;
    // 0x282d80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9090u, 0x282D7Cu, 0x282D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D84u;
label_282d84:
    // 0x282d84: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x282d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x282d88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x282D88u;
    {
        const bool branch_taken_0x282d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282D88u;
        // 0x282d8c: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282d88) {
            ctx->pc = 0x282D98u;
            goto label_282d98;
        }
    }
    ctx->pc = 0x282D90u;
label_282d90:
    // 0x282d90: 0xc0b2446  jal         func_2C9118
    ctx->pc = 0x282D90u;
    SET_GPR_U32(ctx, 31, 0x282D98u);
    ctx->pc = 0x282D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282D90u;
    // 0x282d94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9118u, 0x282D90u, 0x282D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D98u;
label_282d98:
    // 0x282d98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x282d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282d9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x282d9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x282da0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x282da0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282da4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x282da4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282da8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x282da8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282dac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x282dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x282db0: 0x3e00008  jr          $ra
    ctx->pc = 0x282DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282DB0u;
        // 0x282db4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282DB8u;
}
