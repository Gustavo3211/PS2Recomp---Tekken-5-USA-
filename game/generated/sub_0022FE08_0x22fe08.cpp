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

// Function: sub_0022FE08
// Address: 0x22fe08 - 0x22feb0
void sub_0022FE08_0x22fe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FE08_0x22fe08");
#endif

    switch (ctx->pc) {
        case 0x22fe24u: goto label_22fe24;
        case 0x22fe34u: goto label_22fe34;
        case 0x22fe44u: goto label_22fe44;
        case 0x22fe60u: goto label_22fe60;
        case 0x22fe94u: goto label_22fe94;
        default: break;
    }

    ctx->pc = 0x22fe08u;

    // 0x22fe08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22fe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22fe0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22fe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22fe10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22fe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22fe14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22fe14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22fe18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22fe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22fe1c: 0xc08beea  jal         func_22FBA8
    ctx->pc = 0x22FE1Cu;
    SET_GPR_U32(ctx, 31, 0x22FE24u);
    ctx->pc = 0x22FE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE1Cu;
    // 0x22fe20: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FBA8u, 0x22FE1Cu, 0x22FE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE24u;
label_22fe24:
    // 0x22fe24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22fe24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x22fe28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22fe2c: 0xc094ed4  jal         func_253B50
    ctx->pc = 0x22FE2Cu;
    SET_GPR_U32(ctx, 31, 0x22FE34u);
    ctx->pc = 0x22FE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE2Cu;
    // 0x22fe30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B50u, 0x22FE2Cu, 0x22FE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE34u;
label_22fe34:
    // 0x22fe34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22fe34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x22fe38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22fe3c: 0xc094edc  jal         func_253B70
    ctx->pc = 0x22FE3Cu;
    SET_GPR_U32(ctx, 31, 0x22FE44u);
    ctx->pc = 0x22FE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE3Cu;
    // 0x22fe40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B70u, 0x22FE3Cu, 0x22FE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE44u;
label_22fe44:
    // 0x22fe44: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x22fe44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe48: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x22fe48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x22fe4c: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x22fe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x22fe50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22fe50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe54: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x22FE54u;
    {
        const bool branch_taken_0x22fe54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE54u;
        // 0x22fe58: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe54) {
            ctx->pc = 0x22FE8Cu;
            goto label_22fe8c;
        }
    }
    ctx->pc = 0x22FE5Cu;
    // 0x22fe5c: 0x0  nop
    ctx->pc = 0x22fe5cu;
    // NOP
label_22fe60:
    // 0x22fe60: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x22fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x22fe64: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x22fe64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x22fe68: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x22fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22fe6c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22fe6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22fe70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22fe74: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x22fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x22fe78: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x22fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22fe7c: 0xd1282b  sltu        $a1, $a2, $s1
    ctx->pc = 0x22fe7cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x22fe80: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x22fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22fe84: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x22FE84u;
    {
        const bool branch_taken_0x22fe84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE84u;
        // 0x22fe88: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe84) {
            ctx->pc = 0x22FE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fe60;
        }
    }
    ctx->pc = 0x22FE8Cu;
label_22fe8c:
    // 0x22fe8c: 0xc08befa  jal         func_22FBE8
    ctx->pc = 0x22FE8Cu;
    SET_GPR_U32(ctx, 31, 0x22FE94u);
    ctx->pc = 0x22FE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE8Cu;
    // 0x22fe90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FBE8u, 0x22FE8Cu, 0x22FE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE94u;
label_22fe94:
    // 0x22fe94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22fe94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fe98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22fe98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22fe9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22fe9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fea0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22fea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22fea4: 0x3e00008  jr          $ra
    ctx->pc = 0x22FEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FEA4u;
        // 0x22fea8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FEACu;
    // 0x22feac: 0x0  nop
    ctx->pc = 0x22feacu;
    // NOP
    ctx->pc = 0x22feb0u;
}
