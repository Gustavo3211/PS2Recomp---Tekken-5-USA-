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

// Function: sub_002260C8
// Address: 0x2260c8 - 0x226190
void sub_002260C8_0x2260c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002260C8_0x2260c8");
#endif

    switch (ctx->pc) {
        case 0x226134u: goto label_226134;
        case 0x226154u: goto label_226154;
        default: break;
    }

    ctx->pc = 0x2260c8u;

    // 0x2260c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2260c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2260cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2260ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2260d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2260d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2260d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2260d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2260d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2260d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2260dc: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x2260dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2260e0: 0x12020023  beq         $s0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2260E0u;
    {
        const bool branch_taken_0x2260e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2260E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260E0u;
        // 0x2260e4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260e0) {
            ctx->pc = 0x226170u;
            goto label_226170;
        }
    }
    ctx->pc = 0x2260E8u;
    // 0x2260e8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2260e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2260ec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2260ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2260f0: 0x8c43885c  lw          $v1, -0x77A4($v0)
    ctx->pc = 0x2260f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x2260f4: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2260F4u;
    {
        const bool branch_taken_0x2260f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2260F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260F4u;
        // 0x2260f8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260f4) {
            ctx->pc = 0x226120u;
            goto label_226120;
        }
    }
    ctx->pc = 0x2260FCu;
    // 0x2260fc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2260fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x226100: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x226100u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x226104: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x226104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x226108: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x226108u;
    {
        const bool branch_taken_0x226108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226108u;
        // 0x22610c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226108) {
            ctx->pc = 0x226120u;
            goto label_226120;
        }
    }
    ctx->pc = 0x226110u;
    // 0x226110: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x226110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x226114: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x226114u;
    {
        const bool branch_taken_0x226114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226114u;
        // 0x226118: 0x24447358  addiu       $a0, $v0, 0x7358 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226114) {
            ctx->pc = 0x226124u;
            goto label_226124;
        }
    }
    ctx->pc = 0x22611Cu;
    // 0x22611c: 0x0  nop
    ctx->pc = 0x22611cu;
    // NOP
label_226120:
    // 0x226120: 0x24447348  addiu       $a0, $v0, 0x7348
    ctx->pc = 0x226120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 29512));
label_226124:
    // 0x226124: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x226124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x226128: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x226128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22612c: 0xc08973a  jal         func_225CE8
    ctx->pc = 0x22612Cu;
    SET_GPR_U32(ctx, 31, 0x226134u);
    ctx->pc = 0x226130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22612Cu;
    // 0x226130: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225CE8u, 0x22612Cu, 0x226134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226134u;
label_226134:
    // 0x226134: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x226134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x226138: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x226138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22613c: 0x24847378  addiu       $a0, $a0, 0x7378
    ctx->pc = 0x22613cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29560));
    // 0x226140: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x226140u;
    {
        const bool branch_taken_0x226140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226140u;
        // 0x226144: 0x701821  addu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226140) {
            ctx->pc = 0x226158u;
            goto label_226158;
        }
    }
    ctx->pc = 0x226148u;
    // 0x226148: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x226148u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22614c: 0xc08973a  jal         func_225CE8
    ctx->pc = 0x22614Cu;
    SET_GPR_U32(ctx, 31, 0x226154u);
    ctx->pc = 0x226150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22614Cu;
    // 0x226150: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225CE8u, 0x22614Cu, 0x226154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226154u;
label_226154:
    // 0x226154: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x226154u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_226158:
    // 0x226158: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x226158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22615c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22615cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x226160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226164: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x226164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226168: 0x3e00008  jr          $ra
    ctx->pc = 0x226168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226168u;
        // 0x22616c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226170u;
label_226170:
    // 0x226170: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x226170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x226174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226178: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x226178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22617c: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x22617cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x226180: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x226180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226184: 0x24847378  addiu       $a0, $a0, 0x7378
    ctx->pc = 0x226184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29560));
    // 0x226188: 0x808973a  j           func_225CE8
    ctx->pc = 0x226188u;
    ctx->pc = 0x22618Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226188u;
    // 0x22618c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CE8u;
    sub_00225CE8_0x225ce8(rdram, ctx, runtime); return;
    ctx->pc = 0x226190u;
}
