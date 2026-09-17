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

// Function: sub_002849F8
// Address: 0x2849f8 - 0x284aa8
void sub_002849F8_0x2849f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002849F8_0x2849f8");
#endif

    switch (ctx->pc) {
        case 0x284a20u: goto label_284a20;
        case 0x284a8cu: goto label_284a8c;
        default: break;
    }

    ctx->pc = 0x2849f8u;

    // 0x2849f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2849f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2849fc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2849fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x284a00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x284a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x284a04: 0x245283c0  addiu       $s2, $v0, -0x7C40
    ctx->pc = 0x284a04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x284a08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x284a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x284a0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x284a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284a10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x284a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x284a14: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x284a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x284a18: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x284A18u;
    SET_GPR_U32(ctx, 31, 0x284A20u);
    ctx->pc = 0x284A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A18u;
    // 0x284a1c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2849B8u, 0x284A18u, 0x284A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A20u;
label_284a20:
    // 0x284a20: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x284a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x284a24: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x284A24u;
    {
        const bool branch_taken_0x284a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284a24) {
            ctx->pc = 0x284A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284A24u;
            // 0x284a28: 0x8e420198  lw          $v0, 0x198($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284A7Cu;
            goto label_284a7c;
        }
    }
    ctx->pc = 0x284A2Cu;
    // 0x284a2c: 0x92430031  lbu         $v1, 0x31($s2)
    ctx->pc = 0x284a2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x284a30: 0x9242002d  lbu         $v0, 0x2D($s2)
    ctx->pc = 0x284a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 45)));
    // 0x284a34: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x284A34u;
    {
        const bool branch_taken_0x284a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x284A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A34u;
        // 0x284a38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a34) {
            ctx->pc = 0x284A74u;
            goto label_284a74;
        }
    }
    ctx->pc = 0x284A3Cu;
    // 0x284a3c: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x284a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x284a40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284A40u;
    {
        const bool branch_taken_0x284a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A40u;
        // 0x284a44: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a40) {
            ctx->pc = 0x284A50u;
            goto label_284a50;
        }
    }
    ctx->pc = 0x284A48u;
    // 0x284a48: 0x922201bc  lbu         $v0, 0x1BC($s1)
    ctx->pc = 0x284a48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 444)));
    // 0x284a4c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x284a4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_284a50:
    // 0x284a50: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x284A50u;
    {
        const bool branch_taken_0x284a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x284a50) {
            ctx->pc = 0x284A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284A50u;
            // 0x284a54: 0x8e420198  lw          $v0, 0x198($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284A7Cu;
            goto label_284a7c;
        }
    }
    ctx->pc = 0x284A58u;
    // 0x284a58: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x284a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x284a5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284A5Cu;
    {
        const bool branch_taken_0x284a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A5Cu;
        // 0x284a60: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a5c) {
            ctx->pc = 0x284A6Cu;
            goto label_284a6c;
        }
    }
    ctx->pc = 0x284A64u;
    // 0x284a64: 0x920201bc  lbu         $v0, 0x1BC($s0)
    ctx->pc = 0x284a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x284a68: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x284a68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_284a6c:
    // 0x284a6c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x284A6Cu;
    {
        const bool branch_taken_0x284a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A6Cu;
        // 0x284a70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a6c) {
            ctx->pc = 0x284A78u;
            goto label_284a78;
        }
    }
    ctx->pc = 0x284A74u;
label_284a74:
    // 0x284a74: 0xae420198  sw          $v0, 0x198($s2)
    ctx->pc = 0x284a74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
label_284a78:
    // 0x284a78: 0x8e420198  lw          $v0, 0x198($s2)
    ctx->pc = 0x284a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_284a7c:
    // 0x284a7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284A7Cu;
    {
        const bool branch_taken_0x284a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A7Cu;
        // 0x284a80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a7c) {
            ctx->pc = 0x284A8Cu;
            goto label_284a8c;
        }
    }
    ctx->pc = 0x284A84u;
    // 0x284a84: 0xc0a1160  jal         func_284580
    ctx->pc = 0x284A84u;
    SET_GPR_U32(ctx, 31, 0x284A8Cu);
    ctx->pc = 0x284A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A84u;
    // 0x284a88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284580u, 0x284A84u, 0x284A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A8Cu;
label_284a8c:
    // 0x284a8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x284a8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284a90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x284a90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x284a94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x284a94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284a98: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x284a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x284a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x284A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A9Cu;
        // 0x284aa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284AA4u;
    // 0x284aa4: 0x0  nop
    ctx->pc = 0x284aa4u;
    // NOP
    ctx->pc = 0x284aa8u;
}
